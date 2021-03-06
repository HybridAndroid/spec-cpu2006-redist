/*
 * $Id: g_sas.c,v 1.29 2002/02/28 11:00:27 spoel Exp $
 * 
 *                This source code is part of
 * 
 *                 G   R   O   M   A   C   S
 * 
 *          GROningen MAchine for Chemical Simulations
 * 
 *                        VERSION 3.1
 * Copyright (c) 1991-2001, University of Groningen, The Netherlands
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * If you want to redistribute modifications, please consider that
 * scientific software is very special. Version control is crucial -
 * bugs must be traceable. We will be happy to consider code for
 * inclusion in the official distribution, but derived work must not
 * be called official GROMACS. Details are found in the README & COPYING
 * files - if they are missing, get the official version at www.gromacs.org.
 * 
 * To help us fund GROMACS development, we humbly ask that you cite
 * the papers on the package - you can find them in the top README file.
 * 
 * For more info, check our website at http://www.gromacs.org
 * 
 * And Hey:
 * GROtesk MACabre and Sinister
 */
static char *SRCID_g_sas_c = "$Id: g_sas.c,v 1.29 2002/02/28 11:00:27 spoel Exp $";
#include <math.h>
#include <stdlib.h>
#include "sysstuff.h"
#include "string.h"
#include "typedefs.h"
#include "smalloc.h"
#include "macros.h"
#include "vec.h"
#include "xvgr.h"
#include "pbc.h"
#include "copyrite.h"
#include "futil.h"
#include "statutil.h"
#include "rdgroup.h"
#include "nsc.h"
#include "pdbio.h"
#include "confio.h"
#include "rmpbc.h"
#include "names.h"
#include "atomprop.h"

typedef struct {
  atom_id  aa,ab;
  real     d2a,d2b;
} t_conect;

void add_rec(t_conect c[],atom_id i,atom_id j,real d2)
{
  if (c[i].aa == NO_ATID) {
    c[i].aa  = j;
    c[i].d2a = d2;
  }
  else if (c[i].ab == NO_ATID) {
    c[i].ab  = j;
    c[i].d2b = d2;
  }
  else if (d2 < c[i].d2a) {
    c[i].aa  = j;
    c[i].d2a = d2;
  }
  else if (d2 < c[i].d2b) {
    c[i].ab  = j;
    c[i].d2b = d2;
  }
  /* Swap them if necessary: a must be larger than b */
  if (c[i].d2a < c[i].d2b) {
    j        = c[i].ab;
    c[i].ab  = c[i].aa;
    c[i].aa  = j;
    d2       = c[i].d2b;
    c[i].d2b = c[i].d2a;
    c[i].d2a = d2;
  }
}

void do_conect(char *fn,int n,rvec x[])
{
  FILE     *fp;
  int      i,j;
  t_conect *c;
  rvec     dx;
  real     d2;
  
  fprintf(stderr,"Building CONECT records\n");
  snew(c,n);
  for(i=0; (i<n); i++) 
    c[i].aa = c[i].ab = NO_ATID;
  
  for(i=0; (i<n); i++) {
    for(j=i+1; (j<n); j++) {
      rvec_sub(x[i],x[j],dx);
      d2 = iprod(dx,dx);
      add_rec(c,i,j,d2);
      add_rec(c,j,i,d2);
    }
  }
  fp = ffopen(fn,"a");
  for(i=0; (i<n); i++) {
    if ((c[i].aa == NO_ATID) || (c[i].ab == NO_ATID))
      fprintf(stderr,"Warning dot %d has no conections\n",i+1);
    fprintf(fp,"CONECT%5d%5d%5d\n",i+1,c[i].aa+1,c[i].ab+1);
  }
  ffclose(fp);
  sfree(c);
}

void connelly_plot(char *fn,int ndots,real dots[],rvec x[],t_atoms *atoms,
		   t_symtab *symtab,matrix box,bool bSave)
{
  static char *atomnm="DOT";
  static char *resnm ="DOT";
  static char *title ="Connely Dot Surface Generated by g_sas";

  int  i,i0,ii0,k;
  rvec *xnew;
  t_atoms aaa;

  if (bSave) {  
    i0 = atoms->nr;
    srenew(atoms->atom,atoms->nr+ndots);
    srenew(atoms->atomname,atoms->nr+ndots);
    srenew(atoms->resname,atoms->nr+ndots);
    srenew(atoms->pdbinfo,atoms->nr+ndots);
    snew(xnew,atoms->nr+ndots);
    for(i=0; (i<atoms->nr); i++)
      copy_rvec(x[i],xnew[i]);
    for(i=k=0; (i<ndots); i++) {
      ii0 = i0+i;
      atoms->resname[ii0]  = put_symtab(symtab,resnm);
      atoms->atomname[ii0] = put_symtab(symtab,atomnm);
      strcpy(atoms->pdbinfo[ii0].pdbresnr,"1");
      atoms->pdbinfo[ii0].type = epdbATOM;
      atoms->atom[ii0].chain = ' ';
      atoms->pdbinfo[ii0].atomnr= ii0;
      atoms->atom[ii0].resnr = 1;
      xnew[ii0][XX] = dots[k++];
      xnew[ii0][YY] = dots[k++];
      xnew[ii0][ZZ] = dots[k++];
      atoms->pdbinfo[ii0].bfac  = 0.0;
      atoms->pdbinfo[ii0].occup = 0.0;
    }
    atoms->nr = i0+ndots;
    write_sto_conf(fn,title,atoms,xnew,NULL,box);
    atoms->nr = i0;
  }
  else {
    init_t_atoms(&aaa,ndots,TRUE);
    snew(xnew,ndots);
    for(i=k=0; (i<ndots); i++) {
      ii0 = i;
      aaa.resname[ii0]  = put_symtab(symtab,resnm);
      aaa.atomname[ii0] = put_symtab(symtab,atomnm);
      strcpy(aaa.pdbinfo[ii0].pdbresnr,"1");
      aaa.pdbinfo[ii0].type = epdbATOM;
      aaa.atom[ii0].chain = ' ';
      aaa.pdbinfo[ii0].atomnr= ii0;
      aaa.atom[ii0].resnr = 0;
      xnew[ii0][XX] = dots[k++];
      xnew[ii0][YY] = dots[k++];
      xnew[ii0][ZZ] = dots[k++];
      aaa.pdbinfo[ii0].bfac  = 0.0;
      aaa.pdbinfo[ii0].occup = 0.0;
    }
    aaa.nr = ndots;
    write_sto_conf(fn,title,&aaa,xnew,NULL,box);
    do_conect(fn,ndots,xnew);
    free_t_atoms(&aaa);
  }
  sfree(xnew);
}

real calc_radius(char *atom)
{
  real r;
  
  switch (atom[0]) {
  case 'C':
    r = 0.16;
    break;
  case 'O':
    r = 0.13;
    break;
  case 'N':
    r = 0.14;
    break;
  case 'S':
    r = 0.2;
    break;
  case 'H':
    r = 0.1;
    break;
  default:
    r = 1e-3;
  }
  return r;
}

void sas_plot(int nfile,t_filenm fnm[],real solsize,int ndots,
	      real qcut,int nskip,bool bSave,real minarea,bool bPBC,
	      real dgs_default)
{
  FILE         *fp,*fp2,*fp3=NULL;
  char         *legend[] = { "Hydrophobic", "Hydrophilic", 
			     "Total", "D Gsolv" };
  real         t;
  int          status;
  int          i,ii,j,natoms,flag,nsurfacedots;
  rvec         *x;
  matrix       box;
  t_topology   *top;
  bool         *bPhobic;
  bool         bConnelly;
  bool         bAtom,bITP,bDGsol;
  real         *radius,*dgs_factor,*area=NULL,*surfacedots=NULL;
  real         *atom_area,*atom_area2;
  real         totarea,totvolume,harea,tarea,resarea;
  atom_id      *index;
  int          nx,ires,nphobic;
  char         *grpname;
  real         stddev,dgsolv;

  bAtom  = opt2bSet("-ao",nfile,fnm);
  bITP   = opt2bSet("-i",nfile,fnm);
  if (bITP && !bAtom)
    fprintf(stderr,"WARNING: "
	    "Can not generate position restraints from surface atoms\n"
	    "without -ao option\n");
  if ((natoms=read_first_x(&status,ftp2fn(efTRX,nfile,fnm),
			   &t,&x,box))==0)
    fatal_error(0,"Could not read coordinates from statusfile\n");

  top     = read_top(ftp2fn(efTPX,nfile,fnm));
  bDGsol  = strcmp(*top->atoms.atomtype[0],"?") != 0;
  if (!bDGsol) 
    fprintf(stderr,"Warning: your tpr file is too old, will not compute "
	    "Delta G of solvation\n");
    
  fprintf(stderr,"Select group for calculation of surface and for output:\n");
  get_index(&(top->atoms),ftp2fn(efNDX,nfile,fnm),1,&nx,&index,&grpname);

  /* Now compute atomic readii including solvent probe size */
  snew(radius,natoms);
  snew(bPhobic,natoms);
  snew(atom_area,natoms); 
  snew(atom_area2,natoms);
  snew(dgs_factor,natoms);
  
  nphobic = 0;
  for(i=0; (i<natoms); i++) {
    radius[i]     = calc_radius(*(top->atoms.atomname[i])) + solsize;
    if (bDGsol)
      dgs_factor[i] = get_dgsolv(*(top->atoms.resname[top->atoms.atom[i].resnr]),
				 *(top->atoms.atomtype[i]),dgs_default);
    bPhobic[i]    = fabs(top->atoms.atom[i].q) <= qcut;
    if (bPhobic[i])
      nphobic++;
    if (debug)
      fprintf(debug,"Atom %5d %5s-%5s: q= %6.3f, r= %6.3f, dgsol= %6.3f, hydrophobic= %s\n",
	      i+1,*(top->atoms.resname[top->atoms.atom[i].resnr]),*(top->atoms.atomname[i]),
	      top->atoms.atom[i].q,radius[i]-solsize,dgs_factor[i],BOOL(bPhobic[i]));
  }
  fprintf(stderr,"%d out of %d atoms were classified as hydrophobic\n",
	  nphobic,natoms);
  
  fp=xvgropen(opt2fn("-o",nfile,fnm),"Solvent Accessible Surface","Time (ps)",
	      "Area (nm\\S2\\N)");
  xvgr_legend(fp,asize(legend) - (bDGsol ? 0 : 1),legend);
  
  j=0;
  do {
    if ((j++ % 10) == 0)
      fprintf(stderr,"\rframe: %5d",j-1);
      
    if ((nskip > 0) && (((j-1) % nskip) == 0)) {
      rm_pbc(&top->idef,natoms,box,x,x);
      
      bConnelly = ((j == 1) && (opt2bSet("-q",nfile,fnm)));
      if (bConnelly)
	flag = FLAG_ATOM_AREA | FLAG_DOTS;
      else
	flag = FLAG_ATOM_AREA;
      
      if (nsc_dclm2(x,radius,nx,index,ndots,flag,&totarea,
		    &area,&totvolume,&surfacedots,&nsurfacedots,
		    bPBC ? box : NULL))
	fatal_error(0,"Something wrong in nsc_dclm2");
      
      if (bConnelly)
	connelly_plot(ftp2fn(efPDB,nfile,fnm),
		      nsurfacedots,surfacedots,x,&(top->atoms),
		      &(top->symtab),box,bSave);
      
      harea  = 0; 
      tarea  = 0;
      dgsolv = 0;
      for(i=0; (i<nx); i++) {
	ii=index[i];
	atom_area[i] += area[ii];
	atom_area2[i] += area[ii]*area[ii];
	tarea += area[ii];
	dgsolv += area[ii]*dgs_factor[ii];
	if (bPhobic[ii])
	  harea += area[ii];
      }
      fprintf(fp,"%10g  %10g  %10g  %10g",t,harea,tarea-harea,tarea);
      if (bDGsol)
	fprintf(fp,"  %10g\n",dgsolv);
      else
	fprintf(fp,"\n");
      
      if (area) 
	sfree(area);
      if (surfacedots)
	sfree(surfacedots);
    }
  } while (read_next_x(status,&t,natoms,x,box));
  
  fprintf(stderr,"\n");
  close_trj(status);
  fclose(fp);
  
  /* if necessary, print areas per atom to file too: */
  if (bAtom) {
    fprintf(stderr,"Printing out areas per atom\n");
    fp2=xvgropen(opt2fn("-ao",nfile,fnm),"Area per atom","Atom #",
		 "Area (nm\\S2\\N)");
    for (i=0; (i<nx); i++) 
      fprintf(fp2,"%d %g %g\n",i+1,atom_area[index[i]]/j,
	      atom_area2[index[i]]/j);
    fclose(fp2);

    fp = xvgropen(opt2fn("-r",nfile,fnm),"Area per residue","Residue",
		  "Area (nm\\S2\\N)");
    if (bITP) {
      fp3 = ftp2FILE(efITP,nfile,fnm,"w");
      fprintf(fp3,"[ position_restraints ]\n"
	      "#define FCX 1000\n"
	      "#define FCY 1000\n"
	      "#define FCZ 1000\n"
	      "; Atom  Type  fx   fy   fz\n");
    }
    ires    = top->atoms.atom[0].resnr-1;
    resarea = 0;
    for (i=0;i<natoms;i++) {
      if (top->atoms.atom[i].resnr != ires) {
	if (i > 0)
	  fprintf(fp,"%10d  %10g\n",ires,resarea);
	resarea = 0;
	ires    = top->atoms.atom[i].resnr;
      }
      else
	resarea += atom_area[i]/j;
	stddev = atom_area2[i]/j; 
	if (bITP && (atom_area2[i]/j > minarea))
	  fprintf(fp3,"%5d   1     FCX  FCX  FCZ\n",i+1);
	if (stddev > 0) 
	  stddev = sqrt(stddev);
	fprintf(fp2,"%d %g %g\n",i+1,atom_area[i]/j,stddev);
    }
    fprintf(fp,"%10d  %10g\n",ires,resarea);
    if (bITP)
      fclose(fp3);
    fclose(fp);
  }

  sfree(x);
}

int main(int argc,char *argv[])
{
  static char *desc[] = {
    "g_sas computes hydrophobic, hydrophilic and total solvent accessible surface area.",
    "As a side effect the Connolly surface can be generated as well in",
    "a pdb file where the nodes are represented as atoms and the vertices",
    "connecting the nearest nodes as CONECT records. The area can be plotted",
    "per atom and per residue as well (option -ao). In combination with",
    "the latter option an [TT]itp[tt] file can be generated (option -i)",
    "which can be used to restrain surface atoms.[PAR]",
    "By default, periodic boundary conditions are taken into account,",
    "this can be turned off using the -pbc option."
  };

  static real solsize = 0.14;
  static int  ndots   = 24,nskip=1;
  static real qcut    = 0.2;
  static real minarea = 0.5, dgs_default=0;
  static bool bSave   = TRUE,bPBC=TRUE;
  t_pargs pa[] = {
    { "-solsize", FALSE, etREAL, {&solsize},
	"Radius of the solvent probe (nm)" },
    { "-ndots",   FALSE, etINT,  {&ndots},
	"Number of dots per sphere, more dots means more accuracy" },
    { "-qmax",    FALSE, etREAL, {&qcut},
	"The maximum charge (e, absolute value) of a hydrophobic atom" },
    { "-minarea", FALSE, etREAL, {&minarea},
      "The minimum area (nm^2) to count an atom as a surface atom when writing a position restraint file  (see help)" },
    { "-skip",    FALSE, etINT,  {&nskip},
      "Do only every nth frame" },
    { "-pbc",     FALSE, etBOOL, {&bPBC},
      "Take periodicity into account" },
    { "-prot",    FALSE, etBOOL, {&bSave},
      "Output the protein to the connelly pdb file too" },
    { "-dgs",     FALSE, etREAL, {&dgs_default},
      "default value for solvation free energy per area (kJ/mol/nm^2)" }
  };
  t_filenm  fnm[] = {
    { efTRX, "-f",   NULL,       ffREAD },
    { efTPX, "-s",   NULL,       ffREAD },
    { efXVG, "-o",   "area",     ffWRITE },
    { efXVG, "-r",   "resarea",  ffWRITE },
    { efPDB, "-q",   "connelly", ffOPTWR },
    { efXVG, "-ao",  "atomarea", ffOPTWR },
    { efNDX, "-n",   "index",    ffOPTRD },
    { efITP, "-i",   "surfat",   ffOPTWR }
  };
#define NFILE asize(fnm)

  CopyRight(stderr,argv[0]);
  parse_common_args(&argc,argv,PCA_CAN_VIEW | PCA_CAN_TIME | PCA_BE_NICE,
		    NFILE,fnm,asize(pa),pa,asize(desc),desc,0,NULL);
  if (solsize <= 0) {
    solsize=1e-3;
    fprintf(stderr,"Solsize too small, setting it to %g\n",solsize);
  }
  if (ndots < 20) {
    ndots = 20;
    fprintf(stderr,"Ndots too small, setting it to %d\n",ndots);
  }
  
  sas_plot(NFILE,fnm,solsize,ndots,qcut,nskip,bSave,minarea,bPBC,dgs_default);
  
  do_view(opt2fn("-o",NFILE,fnm),"-nxy");
  do_view(opt2fn("-ao",NFILE,fnm),"-xydy");

  thanx(stderr);
  
  return 0;
}
