# wctype_h.m4 serial 10

dnl A placeholder for ISO C99 <wctype.h>, for platforms that lack it.

dnl Copyright (C) 2006-2011 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Written by Paul Eggert.

AC_DEFUN([gl_WCTYPE_H],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_CHECK_FUNCS_ONCE([iswcntrl])
  if test $ac_cv_func_iswcntrl = yes; then
    HAVE_ISWCNTRL=1
  else
    HAVE_ISWCNTRL=0
  fi
  AC_SUBST([HAVE_ISWCNTRL])
  AC_CHECK_FUNCS_ONCE([iswblank])
  AC_CHECK_DECLS_ONCE([iswblank])
  if test $ac_cv_func_iswblank = yes; then
    HAVE_ISWBLANK=1
    REPLACE_ISWBLANK=0
  else
    HAVE_ISWBLANK=0
    if test $ac_cv_have_decl_iswblank = yes; then
      REPLACE_ISWBLANK=1
    else
      REPLACE_ISWBLANK=0
    fi
  fi
  AC_SUBST([HAVE_ISWBLANK])
  AC_SUBST([REPLACE_ISWBLANK])

  AC_CHECK_HEADERS_ONCE([wctype.h])
  AC_REQUIRE([AC_C_INLINE])

  AC_REQUIRE([gt_TYPE_WINT_T])
  if test $gt_cv_c_wint_t = yes; then
    HAVE_WINT_T=1
  else
    HAVE_WINT_T=0
  fi
  AC_SUBST([HAVE_WINT_T])

  if test $ac_cv_header_wctype_h = yes; then
    if test $ac_cv_func_iswcntrl = yes; then
      dnl Linux libc5 has an iswprint function that returns 0 for all arguments.
      dnl The other functions are likely broken in the same way.
      AC_CACHE_CHECK([whether iswcntrl works], [gl_cv_func_iswcntrl_works],
        [
          AC_RUN_IFELSE(
            [AC_LANG_SOURCE([[
               /* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be
                  included before <wchar.h>.
                  BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h>
                  must be included before <wchar.h>.  */
               #include <stddef.h>
               #include <stdio.h>
               #include <time.h>
               #include <wchar.h>
               #include <wctype.h>
               int main () { return iswprint ('x') == 0; }
            ]])],
            [gl_cv_func_iswcntrl_works=yes], [gl_cv_func_iswcntrl_works=no],
            [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <stdlib.h>
                          #if __GNU_LIBRARY__ == 1
                          Linux libc5 i18n is broken.
                          #endif]], [])],
              [gl_cv_func_iswcntrl_works=yes], [gl_cv_func_iswcntrl_works=no])
            ])
        ])
    fi
    gl_CHECK_NEXT_HEADERS([wctype.h])
    HAVE_WCTYPE_H=1
  else
    HAVE_WCTYPE_H=0
  fi
  AC_SUBST([HAVE_WCTYPE_H])

  if test "$gl_cv_func_iswcntrl_works" = no; then
    REPLACE_ISWCNTRL=1
  else
    REPLACE_ISWCNTRL=0
  fi
  AC_SUBST([REPLACE_ISWCNTRL])

  if test $HAVE_ISWCNTRL = 0 || test $REPLACE_ISWCNTRL = 1; then
    dnl Redefine all of iswcntrl, ..., towupper in <wctype.h>.
    :
  else
    if test $HAVE_ISWBLANK = 0 || test $REPLACE_ISWBLANK = 1; then
      dnl Redefine only iswblank.
      AC_LIBOBJ([iswblank])
    fi
  fi
])
