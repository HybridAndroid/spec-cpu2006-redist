/* config.h - Mostly generated from config.h.in by configure on MinGW/MSYS.
 *            Hacked by hand a little bit after that for building w/o MSYS
 * $Id: config.h 6361 2011-03-03 22:29:36Z cloyce $
 */

/* Define if rmt support should not be available (as on Windows).
 * This symbol is defined only in SPEC-supplied patches.
 */
#define NO_RMT 1

/* Define if the compiler is building for multiple architectures of Apple
   platforms at once. */
/* #undef AA_APPLE_UNIVERSAL_BUILD */

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Define to the program name of bzip2 compressor program */
#define BZIP2_PROGRAM "bzip2"

/* Define to 1 if chown fails to change ctime when at least one argument was
   not -1. */
/* #undef CHOWN_CHANGE_TIME_BUG */

/* Define if chown is not POSIX compliant regarding IDs of -1. */
/* #undef CHOWN_FAILS_TO_HONOR_ID_OF_NEGATIVE_ONE */

/* Define if chown modifies symlinks. */
#define CHOWN_MODIFIES_SYMLINK 1

/* Define to 1 if chown mishandles trailing slash. */
/* #undef CHOWN_TRAILING_SLASH_BUG */

/* Define to the program name of compress compressor program */
#define COMPRESS_PROGRAM "compress"

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define to a string giving the full name of the default archive file. */
#define DEFAULT_ARCHIVE "-"

/* By default produce archives of this format */
#define DEFAULT_ARCHIVE_FORMAT GNU_FORMAT

/* Define to a number giving the default blocking size for archives. */
#define DEFAULT_BLOCKING 20

/* Define to a default quoting style (see lib/quoteargs.c for the list) */
#define DEFAULT_QUOTING_STYLE escape_quoting_style

/* Define full file name of rmt program. */
/* #undef DEFAULT_RMT_COMMAND */

/* Define to 1 if density may be indicated by [lmh] at end of device. */
/* #undef DENSITY_LETTER */

/* Define to a string giving the prefix of the default device, without the
   part specifying the unit and density. */
/* #undef DEVICE_PREFIX */

/* the name of the file descriptor member of DIR */
/* #undef DIR_FD_MEMBER_NAME */

#ifdef DIR_FD_MEMBER_NAME
# define DIR_TO_FD(Dir_p) ((Dir_p)->DIR_FD_MEMBER_NAME)
#else
# define DIR_TO_FD(Dir_p) -1
#endif


/* Define to 1 if // is a file system root distinct from /. */
#define DOUBLE_SLASH_IS_DISTINCT_ROOT 1

/* Define if struct dirent has a member d_ino that actually works. */
#define D_INO_IN_DIRENT 1

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Define to 1 if your platform has fchownat, but it cannot perform lchown
   tasks. */
/* #undef FCHOWNAT_NOFOLLOW_BUG */

/* Define this to 1 if F_DUPFD behavior does not match POSIX */
/* #undef FCNTL_DUPFD_BUGGY */

/* Define on systems for which file names may have a so-called `drive letter'
   prefix, define this to compute the length of that prefix, including the
   colon. */
#define FILE_SYSTEM_ACCEPTS_DRIVE_LETTER_PREFIX 1

/* Define if the backslash character may also serve as a file name component
   separator. */
#define FILE_SYSTEM_BACKSLASH_IS_FILE_NAME_SEPARATOR 1

/* Define if a drive letter prefix denotes a relative path if it is not
   followed by a file name component separator. */
#define FILE_SYSTEM_DRIVE_PREFIX_CAN_BE_RELATIVE 1

/* Define to 1 if mkdir mistakenly creates a directory given with a trailing
   dot component. */
#define FUNC_MKDIR_DOT_BUG 1

/* Define to 1 if realpath() can malloc memory, always gives an absolute path,
   and handles trailing slash correctly. */
/* #undef FUNC_REALPATH_WORKS */

/* Define to 1 if futimesat mishandles a NULL file name. */
/* #undef FUTIMESAT_NULL_BUG */

/* Define if gettimeofday clobbers the localtime buffer. */
/* #undef GETTIMEOFDAY_CLOBBERS_LOCALTIME */

/* Define this to 'void' or 'struct timezone' to match the system's
   declaration of the second argument to gettimeofday. */
#define GETTIMEOFDAY_TIMEZONE void

/* Define to make the limit macros in <stdint.h> visible. */
#define GL_TRIGGER_STDC_LIMIT_MACROS 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module areadlinkat shall be considered present. */
#define GNULIB_AREADLINKAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module canonicalize-lgpl shall be considered present. */
#define GNULIB_CANONICALIZE_LGPL 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module close-stream shall be considered present. */
#define GNULIB_CLOSE_STREAM 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module dirent-safer shall be considered present. */
#define GNULIB_DIRENT_SAFER 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module dirname shall be considered present. */
#define GNULIB_DIRNAME 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fdopendir shall be considered present. */
#define GNULIB_FDOPENDIR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fdutimensat shall be considered present. */
#define GNULIB_FDUTIMENSAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module malloc-gnu shall be considered present. */
#define GNULIB_MALLOC_GNU 1

/* Define to 1 to add extern declaration of program_invocation_name to argp.h
   */
#define GNULIB_PROGRAM_INVOCATION_NAME 1

/* Define to 1 to add extern declaration of program_invocation_short_name to
   argp.h */
#define GNULIB_PROGRAM_INVOCATION_SHORT_NAME 1

/* Define to 1 when the gnulib module btowc should be tested. */
#define GNULIB_TEST_BTOWC 1

/* Define to 1 when the gnulib module canonicalize_file_name should be tested.
   */
#define GNULIB_TEST_CANONICALIZE_FILE_NAME 1

/* Define to 1 when the gnulib module chown should be tested. */
#define GNULIB_TEST_CHOWN 1

/* Define to 1 when the gnulib module cloexec should be tested. */
#define GNULIB_TEST_CLOEXEC 1

/* Define to 1 when the gnulib module close should be tested. */
#define GNULIB_TEST_CLOSE 1

/* Define to 1 when the gnulib module dirfd should be tested. */
#define GNULIB_TEST_DIRFD 1

/* Define to 1 when the gnulib module dup2 should be tested. */
#define GNULIB_TEST_DUP2 1

/* Define to 1 when the gnulib module environ should be tested. */
#define GNULIB_TEST_ENVIRON 1

/* Define to 1 when the gnulib module fchdir should be tested. */
#define GNULIB_TEST_FCHDIR 1

/* Define to 1 when the gnulib module fclose should be tested. */
#define GNULIB_TEST_FCLOSE 1

/* Define to 1 when the gnulib module fcntl should be tested. */
#define GNULIB_TEST_FCNTL 1

/* Define to 1 when the gnulib module fdopendir should be tested. */
#define GNULIB_TEST_FDOPENDIR 1

/* Define to 1 when the gnulib module fseeko should be tested. */
#define GNULIB_TEST_FSEEKO 1

/* Define to 1 when the gnulib module futimens should be tested. */
#define GNULIB_TEST_FUTIMENS 1

/* Define to 1 when the gnulib module getcwd should be tested. */
#define GNULIB_TEST_GETCWD 1

/* Define to 1 when the gnulib module getdelim should be tested. */
#define GNULIB_TEST_GETDELIM 1

/* Define to 1 when the gnulib module getdtablesize should be tested. */
#define GNULIB_TEST_GETDTABLESIZE 1

/* Define to 1 when the gnulib module getline should be tested. */
#define GNULIB_TEST_GETLINE 1

/* Define to 1 when the gnulib module getopt-gnu should be tested. */
#define GNULIB_TEST_GETOPT_GNU 1

/* Define to 1 when the gnulib module getpagesize should be tested. */
#define GNULIB_TEST_GETPAGESIZE 1

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#define GNULIB_TEST_GETTIMEOFDAY 1

/* Define to 1 when the gnulib module lchown should be tested. */
#define GNULIB_TEST_LCHOWN 1

/* Define to 1 when the gnulib module link should be tested. */
#define GNULIB_TEST_LINK 1

/* Define to 1 when the gnulib module linkat should be tested. */
#define GNULIB_TEST_LINKAT 1

/* Define to 1 when the gnulib module lseek should be tested. */
#define GNULIB_TEST_LSEEK 1

/* Define to 1 when the gnulib module lstat should be tested. */
#define GNULIB_TEST_LSTAT 1

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#define GNULIB_TEST_MALLOC_POSIX 1

/* Define to 1 when the gnulib module mbrtowc should be tested. */
#define GNULIB_TEST_MBRTOWC 1

/* Define to 1 when the gnulib module mbscasecmp should be tested. */
#define GNULIB_TEST_MBSCASECMP 1

/* Define to 1 when the gnulib module mbsinit should be tested. */
#define GNULIB_TEST_MBSINIT 1

/* Define to 1 when the gnulib module mbsrtowcs should be tested. */
#define GNULIB_TEST_MBSRTOWCS 1

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module mempcpy should be tested. */
#define GNULIB_TEST_MEMPCPY 1

/* Define to 1 when the gnulib module memrchr should be tested. */
#define GNULIB_TEST_MEMRCHR 1

/* Define to 1 when the gnulib module mkdtemp should be tested. */
#define GNULIB_TEST_MKDTEMP 1

/* Define to 1 when the gnulib module mkfifo should be tested. */
#define GNULIB_TEST_MKFIFO 1

/* Define to 1 when the gnulib module mkfifoat should be tested. */
#define GNULIB_TEST_MKFIFOAT 1

/* Define to 1 when the gnulib module mknod should be tested. */
#define GNULIB_TEST_MKNOD 1

/* Define to 1 when the gnulib module mknodat should be tested. */
#define GNULIB_TEST_MKNODAT 1

/* Define to 1 when the gnulib module mktime should be tested. */
#define GNULIB_TEST_MKTIME 1

/* Define to 1 when the gnulib module nl_langinfo should be tested. */
#define GNULIB_TEST_NL_LANGINFO 1

/* Define to 1 when the gnulib module open should be tested. */
#define GNULIB_TEST_OPEN 1

/* Define to 1 when the gnulib module rawmemchr should be tested. */
#define GNULIB_TEST_RAWMEMCHR 1

/* Define to 1 when the gnulib module readlink should be tested. */
#define GNULIB_TEST_READLINK 1

/* Define to 1 when the gnulib module readlinkat should be tested. */
#define GNULIB_TEST_READLINKAT 1

/* Define to 1 when the gnulib module realloc-posix should be tested. */
#define GNULIB_TEST_REALLOC_POSIX 1

/* Define to 1 when the gnulib module realpath should be tested. */
#define GNULIB_TEST_REALPATH 1

/* Define to 1 when the gnulib module rename should be tested. */
#define GNULIB_TEST_RENAME 1

/* Define to 1 when the gnulib module renameat should be tested. */
#define GNULIB_TEST_RENAMEAT 1

/* Define to 1 when the gnulib module rmdir should be tested. */
#define GNULIB_TEST_RMDIR 1

/* Define to 1 when the gnulib module rpmatch should be tested. */
#define GNULIB_TEST_RPMATCH 1

/* Define to 1 when the gnulib module setenv should be tested. */
#define GNULIB_TEST_SETENV 1

/* Define to 1 when the gnulib module sleep should be tested. */
#define GNULIB_TEST_SLEEP 1

/* Define to 1 when the gnulib module snprintf should be tested. */
#define GNULIB_TEST_SNPRINTF 1

/* Define to 1 when the gnulib module stat should be tested. */
#define GNULIB_TEST_STAT 1

/* Define to 1 when the gnulib module stpcpy should be tested. */
#define GNULIB_TEST_STPCPY 1

/* Define to 1 when the gnulib module strchrnul should be tested. */
#define GNULIB_TEST_STRCHRNUL 1

/* Define to 1 when the gnulib module strdup should be tested. */
#define GNULIB_TEST_STRDUP 1

/* Define to 1 when the gnulib module strerror should be tested. */
#define GNULIB_TEST_STRERROR 1

/* Define to 1 when the gnulib module strndup should be tested. */
#define GNULIB_TEST_STRNDUP 1

/* Define to 1 when the gnulib module strnlen should be tested. */
#define GNULIB_TEST_STRNLEN 1

/* Define to 1 when the gnulib module strtoll should be tested. */
#define GNULIB_TEST_STRTOLL 1

/* Define to 1 when the gnulib module strtoull should be tested. */
#define GNULIB_TEST_STRTOULL 1

/* Define to 1 when the gnulib module symlink should be tested. */
#define GNULIB_TEST_SYMLINK 1

/* Define to 1 when the gnulib module symlinkat should be tested. */
#define GNULIB_TEST_SYMLINKAT 1

/* Define to 1 when the gnulib module time_r should be tested. */
#define GNULIB_TEST_TIME_R 1

/* Define to 1 when the gnulib module unlink should be tested. */
#define GNULIB_TEST_UNLINK 1

/* Define to 1 when the gnulib module unsetenv should be tested. */
#define GNULIB_TEST_UNSETENV 1

/* Define to 1 when the gnulib module utimensat should be tested. */
#define GNULIB_TEST_UTIMENSAT 1

/* Define to 1 when the gnulib module vasprintf should be tested. */
#define GNULIB_TEST_VASPRINTF 1

/* Define to 1 when the gnulib module vsnprintf should be tested. */
#define GNULIB_TEST_VSNPRINTF 1

/* Define to 1 when the gnulib module wcrtomb should be tested. */
#define GNULIB_TEST_WCRTOMB 1

/* Define to 1 when the gnulib module wcwidth should be tested. */
#define GNULIB_TEST_WCWIDTH 1

/* Define to 1 when the gnulib module write should be tested. */
#define GNULIB_TEST_WRITE 1

/* Define to the program name of gzip compressor program */
#define GZIP_PROGRAM "gzip"

/* Define to 1 if you have the `alarm' function. */
/* #undef HAVE_ALARM */

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define to 1 if you have the `btowc' function. */
#define HAVE_BTOWC 1

/* Define to 1 if you have the `canonicalize_file_name' function. */
/* #undef HAVE_CANONICALIZE_FILE_NAME */

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `chown' function. */
/* #undef HAVE_CHOWN */

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the `clock_settime' function. */
/* #undef HAVE_CLOCK_SETTIME */

/* Define if you have compound literals. */
#define HAVE_COMPOUND_LITERALS 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the declaration of `clearerr_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_CLEARERR_UNLOCKED 0

/* Define to 1 if you have the declaration of `dirfd', and to 0 if you don't.
   */
#define HAVE_DECL_DIRFD 0

/* Define to 1 if you have the declaration of `fdopendir', and to 0 if you
   don't. */
#define HAVE_DECL_FDOPENDIR 0

/* Define to 1 if you have the declaration of `feof_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_FEOF_UNLOCKED 0

/* Define to 1 if you have the declaration of `ferror_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FERROR_UNLOCKED 0

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FFLUSH_UNLOCKED 0

/* Define to 1 if you have the declaration of `fgets_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FGETS_UNLOCKED 0

/* Define to 1 if you have the declaration of `fputc_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTC_UNLOCKED 0

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTS_UNLOCKED 0

/* Define to 1 if you have the declaration of `fread_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FREAD_UNLOCKED 0

/* Define to 1 if you have the declaration of `fwrite_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FWRITE_UNLOCKED 0

/* Define to 1 if you have the declaration of `getchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_GETCHAR_UNLOCKED 0

/* Define to 1 if you have the declaration of `getcwd', and to 0 if you don't.
   */
#define HAVE_DECL_GETCWD 1

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_GETC_UNLOCKED 0

/* Define to 1 if you have the declaration of `getdelim', and to 0 if you
   don't. */
#define HAVE_DECL_GETDELIM 0

/* Define to 1 if you have the declaration of `getenv', and to 0 if you don't.
   */
#define HAVE_DECL_GETENV 1

/* Define to 1 if you have the declaration of `getgrgid', and to 0 if you
   don't. */
#define HAVE_DECL_GETGRGID 0

/* Define to 1 if you have the declaration of `getline', and to 0 if you
   don't. */
#define HAVE_DECL_GETLINE 0

/* Define to 1 if you have the declaration of `getopt_clip', and to 0 if you
   don't. */
#define HAVE_DECL_GETOPT_CLIP 0

/* Define to 1 if you have the declaration of `getpwuid', and to 0 if you
   don't. */
#define HAVE_DECL_GETPWUID 0

/* Define to 1 if you have the declaration of `imaxabs', and to 0 if you
   don't. */
#define HAVE_DECL_IMAXABS 1

/* Define to 1 if you have the declaration of `imaxdiv', and to 0 if you
   don't. */
#define HAVE_DECL_IMAXDIV 1

/* Define to 1 if you have the declaration of `isblank', and to 0 if you
   don't. */
#define HAVE_DECL_ISBLANK 1

/* Define to 1 if you have the declaration of `iswblank', and to 0 if you
   don't. */
#define HAVE_DECL_ISWBLANK 0

/* Define to 1 if you have the declaration of `memrchr', and to 0 if you
   don't. */
#define HAVE_DECL_MEMRCHR 0

/* Define to 1 if you have the declaration of `optreset', and to 0 if you
   don't. */
#define HAVE_DECL_OPTRESET 0

/* Define to 1 if you have the declaration of `program_invocation_name', and
   to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_NAME 0

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME 0

/* Define to 1 if you have the declaration of `putchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_PUTCHAR_UNLOCKED 0

/* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_PUTC_UNLOCKED 0

/* Define to 1 if you have the declaration of `sleep', and to 0 if you don't.
   */
#define HAVE_DECL_SLEEP 0

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `strdup', and to 0 if you don't.
   */
#define HAVE_DECL_STRDUP 1

/* Define to 1 if you have the declaration of `strerror', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 0

/* Define to 1 if you have the declaration of `strncasecmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRNCASECMP 1

/* Define to 1 if you have the declaration of `strndup', and to 0 if you
   don't. */
#define HAVE_DECL_STRNDUP 0

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 0

/* Define to 1 if you have the declaration of `strtoimax', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOIMAX 1

/* Define to 1 if you have the declaration of `strtoll', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRTOLL */

/* Define to 1 if you have the declaration of `strtoull', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRTOULL */

/* Define to 1 if you have the declaration of `strtoumax', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOUMAX 1

/* Define to 1 if you have the declaration of `time', and to 0 if you don't.
   */
#define HAVE_DECL_TIME 1

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
#define HAVE_DECL_TZNAME 1

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VSNPRINTF 1

/* Define to 1 if you have the declaration of `wcwidth', and to 0 if you
   don't. */
#define HAVE_DECL_WCWIDTH 0

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#define HAVE_DECL__SNPRINTF 1

/* Define to 1 if you have the declaration of `__fpending', and to 0 if you
   don't. */
#define HAVE_DECL___FPENDING 0

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function. */
/* #undef HAVE_DIRFD */

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define if you have the declaration of environ. */
/* #undef HAVE_ENVIRON_DECL */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the `fchdir' function. */
/* #undef HAVE_FCHDIR */

/* Define to 1 if you have the `fchmod' function. */
/* #undef HAVE_FCHMOD */

/* Define to 1 if you have the `fchmodat' function. */
/* #undef HAVE_FCHMODAT */

/* Define to 1 if you have the `fchown' function. */
/* #undef HAVE_FCHOWN */

/* Define to 1 if you have the `fcntl' function. */
/* #undef HAVE_FCNTL */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdopendir' function. */
/* #undef HAVE_FDOPENDIR */

/* Define to 1 if you have the <features.h> header file. */
/* #undef HAVE_FEATURES_H */

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `flockfile' function. */
/* #undef HAVE_FLOCKFILE */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
/* #undef HAVE_FSEEKO */

/* Define to 1 if you have the `fstatat' function. */
/* #undef HAVE_FSTATAT */

/* Define to 1 if you have the `fsync' function. */
/* #undef HAVE_FSYNC */

/* Define to 1 if you have the `funlockfile' function. */
/* #undef HAVE_FUNLOCKFILE */

/* Define to 1 if you have the `futimens' function. */
/* #undef HAVE_FUTIMENS */

/* Define to 1 if you have the `futimes' function. */
/* #undef HAVE_FUTIMES */

/* Define to 1 if you have the `futimesat' function. */
/* #undef HAVE_FUTIMESAT */

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getdelim' function. */
/* #undef HAVE_GETDELIM */

/* Define to 1 if you have the `getdtablesize' function. */
/* #undef HAVE_GETDTABLESIZE */

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long_only' function. */
#define HAVE_GETOPT_LONG_ONLY 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getppriv' function. */
/* #undef HAVE_GETPPRIV */

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <grp.h> header file. */
/* #undef HAVE_GRP_H */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <iconv.h> header file. */
/* #undef HAVE_ICONV_H */

/* Define to 1 if the compiler supports one of the keywords 'inline',
   '__inline__', '__inline' and effectively inlines functions marked as such.
   */
#define HAVE_INLINE 1

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the `iswblank' function. */
#define HAVE_ISWBLANK 1

/* Define to 1 if you have the `iswcntrl' function. */
#define HAVE_ISWCNTRL 1

/* Define to 1 if you have the `iswctype' function. */
#define HAVE_ISWCTYPE 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
/* #undef HAVE_LANGINFO_CODESET */

/* Define to 1 if you have the <langinfo.h> header file. */
/* #undef HAVE_LANGINFO_H */

/* Define if you have <langinfo.h> and nl_langinfo(YESEXPR). */
/* #undef HAVE_LANGINFO_YESEXPR */

/* Define to 1 if you have the `lchmod' function. */
/* #undef HAVE_LCHMOD */

/* Define to 1 if you have the `lchown' function. */
/* #undef HAVE_LCHOWN */

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the <linewrap.h> header file. */
/* #undef HAVE_LINEWRAP_H */

/* Define to 1 if you have the `link' function. */
/* #undef HAVE_LINK */

/* Define to 1 if you have the `linkat' function. */
/* #undef HAVE_LINKAT */

/* Define to 1 if you have the <linux/fd.h> header file. */
/* #undef HAVE_LINUX_FD_H */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define to 1 if you support file names longer than 14 characters. */
#define HAVE_LONG_FILE_NAMES 1

/* Define to 1 if the system has the type `long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the `lstat' function. */
/* #undef HAVE_LSTAT */

/* Define to 1 if you have the `lutimes' function. */
/* #undef HAVE_LUTIMES */

/* Define to 1 if your system has a GNU libc compatible 'malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC_GNU 1

/* Define if the 'malloc' function is POSIX compliant. */
/* #undef HAVE_MALLOC_POSIX */

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
/* #undef HAVE_MAP_ANONYMOUS */

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the `mbsinit' function. */
#define HAVE_MBSINIT 1

/* Define to 1 if you have the `mbsrtowcs' function. */
#define HAVE_MBSRTOWCS 1

/* Define to 1 if <wchar.h> declares mbstate_t. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the `memchr' function. */
#define HAVE_MEMCHR 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mempcpy' function. */
/* #undef HAVE_MEMPCPY */

/* Define to 1 if you have the `memrchr' function. */
/* #undef HAVE_MEMRCHR */

/* Define to 1 if you have the `mkdirat' function. */
/* #undef HAVE_MKDIRAT */

/* Define to 1 if you have the `mkdtemp' function. */
/* #undef HAVE_MKDTEMP */

/* Define to 1 if you have the `mkfifo' function. */
/* #undef HAVE_MKFIFO */

/* Define to 1 if you have the `mkfifoat' function. */
/* #undef HAVE_MKFIFOAT */

/* Define to 1 if you have the `mknod' function. */
/* #undef HAVE_MKNOD */

/* Define to 1 if you have the `mknodat' function. */
/* #undef HAVE_MKNODAT */

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 if you have the `nanotime' function. */
/* #undef HAVE_NANOTIME */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
/* #undef HAVE_NETDB_H */

/* Define to 1 if you have the <net/errno.h> header file. */
/* #undef HAVE_NET_ERRNO_H */

/* Define to 1 if you have the `nl_langinfo' function. */
/* #undef HAVE_NL_LANGINFO */

/* Define to 1 if libc includes obstacks. */
/* #undef HAVE_OBSTACK */

/* Define to 1 if you have the `openat' function. */
/* #undef HAVE_OPENAT */

/* Define to 1 if you have the <OS.h> header file. */
/* #undef HAVE_OS_H */

/* Define to 1 if getcwd works, except it sometimes fails when it shouldn't,
   setting errno to ERANGE, ENAMETOOLONG, or ENOENT. */
/* #undef HAVE_PARTLY_WORKING_GETCWD */

/* Define to 1 if you have the `pathconf' function. */
/* #undef HAVE_PATHCONF */

/* Define to 1 if you have the `pipe' function. */
/* #undef HAVE_PIPE */

/* Define to 1 if you have the <priv.h> header file. */
/* #undef HAVE_PRIV_H */

/* Define if program_invocation_name is defined */
/* #undef HAVE_PROGRAM_INVOCATION_NAME */

/* Define if program_invocation_short_name is defined */
/* #undef HAVE_PROGRAM_INVOCATION_SHORT_NAME */

/* Define to 1 if you have the <pwd.h> header file. */
/* #undef HAVE_PWD_H */

/* Define to 1 if you have the <random.h> header file. */
/* #undef HAVE_RANDOM_H */

/* Define to 1 if you have the `rawmemchr' function. */
/* #undef HAVE_RAWMEMCHR */

/* Define to 1 if alphasort is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ALPHASORT */

/* Define to 1 if atoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_ATOLL 1

/* Define to 1 if btowc is declared even after undefining macros. */
#define HAVE_RAW_DECL_BTOWC 1

/* Define to 1 if canonicalize_file_name is declared even after undefining
   macros. */
/* #undef HAVE_RAW_DECL_CANONICALIZE_FILE_NAME */

/* Define to 1 if chown is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_CHOWN */

/* Define to 1 if dirfd is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_DIRFD */

/* Define to 1 if dprintf is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_DPRINTF */

/* Define to 1 if dup2 is declared even after undefining macros. */
#define HAVE_RAW_DECL_DUP2 1

/* Define to 1 if dup3 is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_DUP3 */

/* Define to 1 if endusershell is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ENDUSERSHELL */

/* Define to 1 if environ is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ENVIRON */

/* Define to 1 if euidaccess is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_EUIDACCESS */

/* Define to 1 if faccessat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FACCESSAT */

/* Define to 1 if fchdir is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCHDIR */

/* Define to 1 if fchmodat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCHMODAT */

/* Define to 1 if fchownat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCHOWNAT */

/* Define to 1 if fcntl is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCNTL */

/* Define to 1 if fdopendir is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FDOPENDIR */

/* Define to 1 if fpurge is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FPURGE */

/* Define to 1 if fseeko is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FSEEKO */

/* Define to 1 if fstatat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FSTATAT */

/* Define to 1 if fsync is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FSYNC */

/* Define to 1 if ftello is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FTELLO */

/* Define to 1 if ftruncate is declared even after undefining macros. */
#define HAVE_RAW_DECL_FTRUNCATE 1

/* Define to 1 if futimens is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FUTIMENS */

/* Define to 1 if getcwd is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETCWD 1

/* Define to 1 if getdelim is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETDELIM */

/* Define to 1 if getdomainname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETDOMAINNAME */

/* Define to 1 if getdtablesize is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETDTABLESIZE */

/* Define to 1 if getgroups is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETGROUPS */

/* Define to 1 if gethostname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETHOSTNAME */

/* Define to 1 if getline is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLINE */

/* Define to 1 if getloadavg is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLOADAVG */

/* Define to 1 if getlogin is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLOGIN */

/* Define to 1 if getlogin_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLOGIN_R */

/* Define to 1 if getpagesize is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETPAGESIZE */

/* Define to 1 if getsubopt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETSUBOPT */

/* Define to 1 if gettimeofday is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETTIMEOFDAY 1

/* Define to 1 if getusershell is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETUSERSHELL */

/* Define to 1 if grantpt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GRANTPT */

/* Define to 1 if imaxabs is declared even after undefining macros. */
#define HAVE_RAW_DECL_IMAXABS 1

/* Define to 1 if imaxdiv is declared even after undefining macros. */
#define HAVE_RAW_DECL_IMAXDIV 1

/* Define to 1 if initstat_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_INITSTAT_R */

/* Define to 1 if lchmod is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LCHMOD */

/* Define to 1 if lchown is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LCHOWN */

/* Define to 1 if link is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LINK */

/* Define to 1 if linkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LINKAT */

/* Define to 1 if lseek is declared even after undefining macros. */
#define HAVE_RAW_DECL_LSEEK 1

/* Define to 1 if lstat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LSTAT */

/* Define to 1 if mbrlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBRLEN 1

/* Define to 1 if mbrtowc is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBRTOWC 1

/* Define to 1 if mbsinit is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBSINIT 1

/* Define to 1 if mbsnrtowcs is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MBSNRTOWCS */

/* Define to 1 if mbsrtowcs is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBSRTOWCS 1

/* Define to 1 if memmem is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MEMMEM */

/* Define to 1 if mempcpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MEMPCPY */

/* Define to 1 if memrchr is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MEMRCHR */

/* Define to 1 if mkdirat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKDIRAT */

/* Define to 1 if mkdtemp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKDTEMP */

/* Define to 1 if mkfifo is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKFIFO */

/* Define to 1 if mkfifoat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKFIFOAT */

/* Define to 1 if mknod is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKNOD */

/* Define to 1 if mknodat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKNODAT */

/* Define to 1 if mkostemp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKOSTEMP */

/* Define to 1 if mkostemps is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKOSTEMPS */

/* Define to 1 if mkstemp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKSTEMP */

/* Define to 1 if mkstemps is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKSTEMPS */

/* Define to 1 if nl_langinfo is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_NL_LANGINFO */

/* Define to 1 if openat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_OPENAT */

/* Define to 1 if pipe2 is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PIPE2 */

/* Define to 1 if popen is declared even after undefining macros. */
#define HAVE_RAW_DECL_POPEN 1

/* Define to 1 if pread is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PREAD */

/* Define to 1 if ptsname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PTSNAME */

/* Define to 1 if pwrite is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PWRITE */

/* Define to 1 if random_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RANDOM_R */

/* Define to 1 if rawmemchr is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RAWMEMCHR */

/* Define to 1 if readlink is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_READLINK */

/* Define to 1 if readlinkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_READLINKAT */

/* Define to 1 if realpath is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_REALPATH */

/* Define to 1 if renameat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RENAMEAT */

/* Define to 1 if rmdir is declared even after undefining macros. */
#define HAVE_RAW_DECL_RMDIR 1

/* Define to 1 if rpmatch is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RPMATCH */

/* Define to 1 if scandir is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SCANDIR */

/* Define to 1 if setenv is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETENV */

/* Define to 1 if setstate_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETSTATE_R */

/* Define to 1 if setusershell is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETUSERSHELL */

/* Define to 1 if sleep is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SLEEP */

/* Define to 1 if snprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_SNPRINTF 1

/* Define to 1 if srandom_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SRANDOM_R */

/* Define to 1 if stat is declared even after undefining macros. */
#define HAVE_RAW_DECL_STAT 1

/* Define to 1 if stpcpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STPCPY */

/* Define to 1 if stpncpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STPNCPY */

/* Define to 1 if strcasecmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRCASECMP 1

/* Define to 1 if strcasestr is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRCASESTR */

/* Define to 1 if strchrnul is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRCHRNUL */

/* Define to 1 if strdup is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRDUP 1

/* Define to 1 if strncasecmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNCASECMP 1

/* Define to 1 if strncat is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNCAT 1

/* Define to 1 if strndup is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRNDUP */

/* Define to 1 if strnlen is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRNLEN */

/* Define to 1 if strpbrk is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRPBRK 1

/* Define to 1 if strsep is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRSEP */

/* Define to 1 if strsignal is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRSIGNAL */

/* Define to 1 if strtod is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOD 1

/* Define to 1 if strtoimax is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOIMAX 1

/* Define to 1 if strtok_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRTOK_R */

/* Define to 1 if strtoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOLL 1

/* Define to 1 if strtoull is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOULL 1

/* Define to 1 if strtoumax is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOUMAX 1

/* Define to 1 if strverscmp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRVERSCMP */

/* Define to 1 if symlink is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SYMLINK */

/* Define to 1 if symlinkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SYMLINKAT */

/* Define to 1 if tmpfile is declared even after undefining macros. */
#define HAVE_RAW_DECL_TMPFILE 1

/* Define to 1 if ttyname_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_TTYNAME_R */

/* Define to 1 if unlink is declared even after undefining macros. */
#define HAVE_RAW_DECL_UNLINK 1

/* Define to 1 if unlinkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNLINKAT */

/* Define to 1 if unlockpt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNLOCKPT */

/* Define to 1 if unsetenv is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNSETENV */

/* Define to 1 if usleep is declared even after undefining macros. */
#define HAVE_RAW_DECL_USLEEP 1

/* Define to 1 if utimensat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UTIMENSAT */

/* Define to 1 if vdprintf is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_VDPRINTF */

/* Define to 1 if vsnprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_VSNPRINTF 1

/* Define to 1 if wcrtomb is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCRTOMB 1

/* Define to 1 if wcsnrtombs is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCSNRTOMBS */

/* Define to 1 if wcsrtombs is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSRTOMBS 1

/* Define to 1 if wctob is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCTOB 1

/* Define to 1 if wcwidth is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCWIDTH */

/* Define to 1 if _Exit is declared even after undefining macros. */
#define HAVE_RAW_DECL__EXIT 1

/* Define to 1 if you have the `readlink' function. */
/* #undef HAVE_READLINK */

/* Define to 1 if you have the `readlinkat' function. */
/* #undef HAVE_READLINKAT */

/* Define if the 'realloc' function is POSIX compliant. */
/* #undef HAVE_REALLOC_POSIX */

/* Define to 1 if you have the `realpath' function. */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the `renameat' function. */
/* #undef HAVE_RENAMEAT */

/* Define to 1 if you have the `rpmatch' function. */
/* #undef HAVE_RPMATCH */

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the `setenv' function. */
/* #undef HAVE_SETENV */

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <sgtty.h> header file. */
/* #undef HAVE_SGTTY_H */

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if you have the `sleep' function. */
/* #undef HAVE_SLEEP */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#define HAVE_SNPRINTF_RETVAL_C99 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdio_ext.h> header file. */
/* #undef HAVE_STDIO_EXT_H */

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
/* #undef HAVE_STPCPY */

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchrnul' function. */
/* #undef HAVE_STRCHRNUL */

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strndup' function. */
/* #undef HAVE_STRNDUP */

/* Define to 1 if you have the `strnlen' function. */
/* #undef HAVE_STRNLEN */

/* Define to 1 if you have the `strtoimax' function. */
#define HAVE_STRTOIMAX 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 1

/* Define to 1 if you have the `strtoumax' function. */
#define HAVE_STRTOUMAX 1

/* Define to 1 if the system has the type `struct random_data'. */
/* #undef HAVE_STRUCT_RANDOM_DATA */

/* Define to 1 if `st_atimensec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */

/* Define to 1 if `st_atimespec.tv_nsec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMESPEC_TV_NSEC */

/* Define to 1 if `st_atim.st__tim.tv_nsec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_ST__TIM_TV_NSEC */

/* Define to 1 if `st_atim.tv_nsec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC */

/* Define to 1 if `st_birthtimensec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMENSEC */

/* Define to 1 if `st_birthtimespec.tv_nsec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC */

/* Define to 1 if `st_birthtim.tv_nsec' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIM_TV_NSEC */

/* Define to 1 if `st_blksize' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BLKSIZE */

/* Define to 1 if `st_blocks' is member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BLOCKS */

/* Define to 1 if `tm_zone' is member of `struct tm'. */
/* #undef HAVE_STRUCT_TM_TM_ZONE */

/* Define if struct utimbuf is declared -- usually in <utime.h>. Some systems
   have utime.h but don't declare the struct anywhere. */
#define HAVE_STRUCT_UTIMBUF 1

/* Define to 1 if your `struct stat' has `st_blksize'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLKSIZE' instead. */
/* #undef HAVE_ST_BLKSIZE */

/* Define to 1 if your `struct stat' has `st_blocks'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLOCKS' instead. */
/* #undef HAVE_ST_BLOCKS */

/* Define if struct stat has a char st_fstype[] member. */
/* #undef HAVE_ST_FSTYPE_STRING */

/* Define to 1 if you have the `symlink' function. */
/* #undef HAVE_SYMLINK */

/* Define to 1 if you have the `symlinkat' function. */
/* #undef HAVE_SYMLINKAT */

/* Define to 1 if you have the <sysexits.h> header file. */
/* #undef HAVE_SYSEXITS_H */

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/buf.h> header file. */
/* #undef HAVE_SYS_BUF_H */

/* Define to 1 if you have the <sys/device.h> header file. */
/* #undef HAVE_SYS_DEVICE_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/gentape.h> header file. */
/* #undef HAVE_SYS_GENTAPE_H */

/* Define to 1 if you have the <sys/inet.h> header file. */
/* #undef HAVE_SYS_INET_H */

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/io/trioctl.h> header file. */
/* #undef HAVE_SYS_IO_TRIOCTL_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/mtio.h> header file. */
/* #undef HAVE_SYS_MTIO_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/tape.h> header file. */
/* #undef HAVE_SYS_TAPE_H */

/* Define to 1 if you have the <sys/timeb.h> header file. */
/* #undef HAVE_SYS_TIMEB_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/tprintf.h> header file. */
/* #undef HAVE_SYS_TPRINTF_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define if struct tm has the tm_gmtoff member. */
/* #undef HAVE_TM_GMTOFF */

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
/* #undef HAVE_TM_ZONE */

/* Define to 1 if you have the `tsearch' function. */
#define HAVE_TSEARCH 1

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
#define HAVE_TZNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlinkat' function. */
/* #undef HAVE_UNLINKAT */

/* Define to 1 if you have the `unsetenv' function. */
/* #undef HAVE_UNSETENV */

/* Define to 1 if the system has the type `unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the `utimensat' function. */
/* #undef HAVE_UTIMENSAT */

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the `vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Define to 1 if you have the `vasprintf' function. */
/* #undef HAVE_VASPRINTF */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `waitpid' function. */
/* #undef HAVE_WAITPID */

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcscoll' function. */
#define HAVE_WCSCOLL 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsnlen' function. */
/* #undef HAVE_WCSNLEN */

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the `wcwidth' function. */
/* #undef HAVE_WCWIDTH */

/* Define to 1 if you have the <winsock2.h> header file. */
#define HAVE_WINSOCK2_H 1

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if you have the `wmemchr' function. */
#define HAVE_WMEMCHR 1

/* Define to 1 if you have the `wmemcpy' function. */
#define HAVE_WMEMCPY 1

/* Define to 1 if you have the `wmempcpy' function. */
/* #undef HAVE_WMEMPCPY */

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 0

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 0

/* Define if utimes works properly. */
/* #undef HAVE_WORKING_UTIMES */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_ftime' function. */
/* #undef HAVE__FTIME */

/* Define to 1 if you have the `__fpending' function. */
/* #undef HAVE___FPENDING */

/* Define as const if the declaration of iconv() needs const. */
/* #undef ICONV_CONST */

#if FILE_SYSTEM_BACKSLASH_IS_FILE_NAME_SEPARATOR
# define ISSLASH(C) ((C) == '/' || (C) == '\\')
#else
# define ISSLASH(C) ((C) == '/')
#endif

/* Define to 1 if linkat fails to recognize a trailing slash. */
/* #undef LINKAT_TRAILING_SLASH_BUG */

/* Define to 1 if `link(2)' dereferences symbolic links, 0 if it creates hard
   links to symlinks, and -1 if unknown. */
#define LINK_FOLLOWS_SYMLINKS 0

/* Define to 1 if lseek does not detect pipes. */
#define LSEEK_PIPE_BROKEN 1

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
/* #undef LSTAT_FOLLOWS_SLASHED_SYMLINK */

/* Define to the program name of lzip compressor program */
#define LZIP_PROGRAM "lzip"

/* Define to the program name of lzma compressor program */
#define LZMA_PROGRAM "lzma"

/* Define to the program name of lzop compressor program */
#define LZOP_PROGRAM "lzop"

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
/* #undef MAJOR_IN_MKDEV */

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
/* #undef MAJOR_IN_SYSMACROS */

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#define MALLOC_0_IS_NONNULL 1

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Define if the mbrtowc function has the NULL string argument bug. */
/* #undef MBRTOWC_NULL_ARG_BUG */

/* Define if the mbrtowc function does not return 0 for a NUL character. */
/* #undef MBRTOWC_NUL_RETVAL_BUG */

/* Define if the mbrtowc function returns a wrong return value. */
/* #undef MBRTOWC_RETVAL_BUG */

/* Define to 1 if mkfifo does not reject trailing slash */
/* #undef MKFIFO_TRAILING_SLASH_BUG */

/* Define to 1 if mknod cannot create a fifo without super-user privileges */
/* #undef MKNOD_FIFO_BUG */

/* Define to mt_model (v.g., for DG/UX), else to mt_type. */
#define MTIO_CHECK_FIELD mt_type

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to 1 if open() fails to recognize a trailing slash. */
/* #undef OPEN_TRAILING_SLASH_BUG */

/* Name of package */
#define PACKAGE "spectar"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "support@spec.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "spectar (GNU tar)"

/* String identifying the packager of this software */
/* #undef PACKAGE_PACKAGER */

/* Packager info for bug reports (URL/e-mail/...) */
/* #undef PACKAGE_PACKAGER_BUG_REPORTS */

/* Packager-specific version information */
/* #undef PACKAGE_PACKAGER_VERSION */

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "spectar (GNU tar 1.25)"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "spectar"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.25"

/* the number of pending output bytes on stream `fp' */
#define PENDING_OUTPUT_N_BYTES fp->_ptr - fp->_base

/* Define if <inttypes.h> exists and defines unusable PRI* macros. */
/* #undef PRI_MACROS_BROKEN */

/* Define to the type that is the result of default argument promotions of
   type mode_t. */
#define PROMOTED_MODE_T int

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Define to 1 if readlink fails to recognize a trailing slash. */
/* #undef READLINK_TRAILING_SLASH_BUG */

/* Define to the full path of your rsh, if any. */
#define REMOTE_SHELL "/usr/bin/rsh"

/* Define if rename does not work when the destination file exists, as on
   Cygwin 1.5 or Windows. */
#define RENAME_DEST_EXISTS_BUG 1

/* Define if rename fails to leave hard links alone, as on NetBSD 1.6 or
   Cygwin 1.5. */
#define RENAME_HARD_LINK_BUG 1

/* Define if rename does not correctly handle slashes on the destination
   argument, such as on Solaris 10 or NetBSD 1.6. */
#define RENAME_TRAILING_SLASH_DEST_BUG 1

/* Define if rename does not correctly handle slashes on the source argument,
   such as on Solaris 9 or cygwin 1.5. */
/* #undef RENAME_TRAILING_SLASH_SOURCE_BUG */

/* Define to 1 if gnulib's fchdir() replacement is used. */
#define REPLACE_FCHDIR 1

/* Define to 1 if stat needs help when passed a directory name with a trailing
   slash */
#define REPLACE_FUNC_STAT_DIR 1

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_FILE */

/* Define if nl_langinfo exists but is overridden by gnulib. */
/* #undef REPLACE_NL_LANGINFO */

/* Define to 1 if open() should work around the inability to open a directory.
   */
#define REPLACE_OPEN_DIRECTORY 1

/* Define this to 1 if strerror is broken. */
#define REPLACE_STRERROR 1

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
/* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Define to 1 if all 'time_t' values fit in a 'long int'. */
#define TIME_T_FITS_IN_LONG_INT 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define to 1 if the type of the st_atim member of a struct stat is struct
   timespec. */
/* #undef TYPEOF_STRUCT_STAT_ST_ATIM_IS_STRUCT_TIMESPEC */

/* Define to 1 if unlink (dir) cannot possibly succeed. */
#define UNLINK_CANNOT_UNLINK_DIR 1

/* Define to 1 if unlink() on a parent directory may succeed */
/* #undef UNLINK_PARENT_BUG */

/* Define to the prefix of C symbols at the assembler and linker level, either
   an underscore or empty. */
#define USER_LABEL_PREFIX _

/* Define to 1 if you want getc etc. to use unlocked I/O if available.
   Unlocked I/O can improve performance in unithreaded apps, but it is not
   safe for multithreaded apps. */
#define USE_UNLOCKED_IO 1

/* Version number of package */
#define VERSION "1.25"

/* Define to 1 if unsetenv returns void instead of int. */
/* #undef VOID_UNSETENV */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* Define to the program name of xz compressor program */
#define XZ_PROGRAM "xz"

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define if you want regoff_t to be at least as wide POSIX requires. */
#define _REGEX_LARGE_OFFSETS 1

/* Define to 500 only on HP-UX. */
/* #undef _XOPEN_SOURCE */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
#define __GETOPT_PREFIX rpl_

/* Ensure that <stdint.h> defines the limit macros, since gnulib's
   <inttypes.h> relies on them.  */
#if defined __cplusplus && !defined __STDC_LIMIT_MACROS && GL_TRIGGER_STDC_LIMIT_MACROS
# define __STDC_LIMIT_MACROS 1
#endif


/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef dev_t */

/* Define to a replacement function name for fnmatch(). */
#define fnmatch gnu_fnmatch

/* Define to `int' if <sys/types.h> doesn't define. */
#define gid_t int

/* A replacement for va_copy, if needed.  */
#define gl_va_copy(a,b) ((a) = (b))

/* Define to rpl_gmtime if the replacement function should be used. */
/* #undef gmtime */

/* Conversion descriptor type */
/* #undef iconv_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef ino_t */

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for MacOS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to rpl_localtime if the replacement function should be used. */
/* #undef localtime */

/* Type of major device numbers. */
#define major_t int

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Type of minor device numbers. */
#define minor_t int

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to the type of st_nlink in struct stat, or a supertype. */
#define nlink_t int

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to rpl_re_comp if the replacement should be used. */
#define re_comp rpl_re_comp

/* Define to rpl_re_compile_fastmap if the replacement should be used. */
#define re_compile_fastmap rpl_re_compile_fastmap

/* Define to rpl_re_compile_pattern if the replacement should be used. */
#define re_compile_pattern rpl_re_compile_pattern

/* Define to rpl_re_exec if the replacement should be used. */
#define re_exec rpl_re_exec

/* Define to rpl_re_match if the replacement should be used. */
#define re_match rpl_re_match

/* Define to rpl_re_match_2 if the replacement should be used. */
#define re_match_2 rpl_re_match_2

/* Define to rpl_re_search if the replacement should be used. */
#define re_search rpl_re_search

/* Define to rpl_re_search_2 if the replacement should be used. */
#define re_search_2 rpl_re_search_2

/* Define to rpl_re_set_registers if the replacement should be used. */
#define re_set_registers rpl_re_set_registers

/* Define to rpl_re_set_syntax if the replacement should be used. */
#define re_set_syntax rpl_re_set_syntax

/* Define to rpl_re_syntax_options if the replacement should be used. */
#define re_syntax_options rpl_re_syntax_options

/* Define to rpl_regcomp if the replacement should be used. */
#define regcomp rpl_regcomp

/* Define to rpl_regerror if the replacement should be used. */
#define regerror rpl_regerror

/* Define to rpl_regexec if the replacement should be used. */
#define regexec rpl_regexec

/* Define to rpl_regfree if the replacement should be used. */
#define regfree rpl_regfree

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict, even
   though the corresponding Sun C compiler does, which causes
   "#define restrict _Restrict" in the previous line.  Perhaps some future
   version of Sun C++ will work with _Restrict; if so, it'll probably
   define __RESTRICT, just as Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define as a signed type of the same size as size_t. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
#define uid_t int

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED


/* Define as a macro for copying va_list variables. */
/* #undef va_copy */
