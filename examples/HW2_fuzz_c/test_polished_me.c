
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef float float_t;
typedef double double_t;
int __fpclassify (double __value) 
     ;
int __signbit (double __value) 
     ;
int __isinf (double __value) 
  ;
int __finite (double __value) 
  ;
int __isnan (double __value) 
  ;
int __iseqsig (double __x, double __y) ;
int __issignaling (double __value) 
     ;
 double acos (double __x) ;
 double asin (double __x) ;
 double atan (double __x) ;
 double atan2 (double __y, double __x) ;
 double cos (double __x) ;
 double sin (double __x) ;
 double tan (double __x) ;
 double cosh (double __x) ;
 double sinh (double __x) ;
 double tanh (double __x) ;
 double acosh (double __x) ;
 double asinh (double __x) ;
 double atanh (double __x) ;
 double exp (double __x) ;
double frexp (double __x, int *__exponent) ;
double ldexp (double __x, int __exponent) ;
 double log (double __x) ;
 double log10 (double __x) ;
double modf (double __x, double *__iptr) ;
 double expm1 (double __x) ;
 double log1p (double __x) ;
double logb (double __x) ;
 double exp2 (double __x) ;
 double log2 (double __x) ;
 double pow (double __x, double __y) ;
double sqrt (double __x) ;
 double hypot (double __x, double __y) ;
 double cbrt (double __x) ;
double ceil (double __x) ;
double fabs (double __x) ;
double floor (double __x) ;
double fmod (double __x, double __y) ;
int isinf (double __value) 
  ;
int finite (double __value) 
  ;
double drem (double __x, double __y) ;
double significand (double __x) ;
double copysign (double __x, double __y) ;
double nan (const char *__tagb) ;
int isnan (double __value) 
  ;
double j0 (double) ;
double j1 (double) ;
double jn (int, double) ;
double y0 (double) ;
double y1 (double) ;
double yn (int, double) ;
 double erf (double) ;
 double erfc (double) ;
double lgamma (double) ;
double tgamma (double) ;
double gamma (double) ;
double lgamma_r (double, int *__signgamp) ;
double rint (double __x) ;
double nextafter (double __x, double __y) ;
double nexttoward (double __x, double __y) ;
double remainder (double __x, double __y) ;
double scalbn (double __x, int __n) ;
int ilogb (double __x) ;
double scalbln (double __x, long int __n) ;
double nearbyint (double __x) ;
double round (double __x) ;
double trunc (double __x) ;
double remquo (double __x, double __y, int *__quo) ;
long int lrint (double __x) ;
__extension__
long long int llrint (double __x) ;
long int lround (double __x) ;
__extension__
long long int llround (double __x) ;
double fdim (double __x, double __y) ;
double fmax (double __x, double __y) ;
double fmin (double __x, double __y) ;
double fma (double __x, double __y, double __z) ;
double scalb (double __x, double __n) ;
int __fpclassifyf (float __value) 
     ;
int __signbitf (float __value) 
     ;
int __isinff (float __value) 
  ;
int __finitef (float __value) 
  ;
int __isnanf (float __value) 
  ;
int __iseqsigf (float __x, float __y) ;
int __issignalingf (float __value) 
     ;
 float acosf (float __x) ;
 float asinf (float __x) ;
 float atanf (float __x) ;
 float atan2f (float __y, float __x) ;
 float cosf (float __x) ;
 float sinf (float __x) ;
 float tanf (float __x) ;
 float coshf (float __x) ;
 float sinhf (float __x) ;
 float tanhf (float __x) ;
 float acoshf (float __x) ;
 float asinhf (float __x) ;
 float atanhf (float __x) ;
 float expf (float __x) ;
float frexpf (float __x, int *__exponent) ;
float ldexpf (float __x, int __exponent) ;
 float logf (float __x) ;
 float log10f (float __x) ;
float modff (float __x, float *__iptr) ;
 float expm1f (float __x) ;
 float log1pf (float __x) ;
float logbf (float __x) ;
 float exp2f (float __x) ;
 float log2f (float __x) ;
 float powf (float __x, float __y) ;
float sqrtf (float __x) ;
 float hypotf (float __x, float __y) ;
 float cbrtf (float __x) ;
float ceilf (float __x) ;
float fabsf (float __x) ;
float floorf (float __x) ;
float fmodf (float __x, float __y) ;
int isinff (float __value) 
  ;
int finitef (float __value) 
  ;
float dremf (float __x, float __y) ;
float significandf (float __x) ;
float copysignf (float __x, float __y) ;
float nanf (const char *__tagb) ;
int isnanf (float __value) 
  ;
float j0f (float) ;
float j1f (float) ;
float jnf (int, float) ;
float y0f (float) ;
float y1f (float) ;
float ynf (int, float) ;
 float erff (float) ;
 float erfcf (float) ;
float lgammaf (float) ;
float tgammaf (float) ;
float gammaf (float) ;
float lgammaf_r (float, int *__signgamp) ;
float rintf (float __x) ;
float nextafterf (float __x, float __y) ;
float nexttowardf (float __x, double __y) ;
float remainderf (float __x, float __y) ;
float scalbnf (float __x, int __n) ;
int ilogbf (float __x) ;
float scalblnf (float __x, long int __n) ;
float nearbyintf (float __x) ;
float roundf (float __x) ;
float truncf (float __x) ;
float remquof (float __x, float __y, int *__quo) ;
long int lrintf (float __x) ;
__extension__
long long int llrintf (float __x) ;
long int lroundf (float __x) ;
__extension__
long long int llroundf (float __x) ;
float fdimf (float __x, float __y) ;
float fmaxf (float __x, float __y) ;
float fminf (float __x, float __y) ;
float fmaf (float __x, float __y, float __z) ;
float scalbf (float __x, float __n) ;
int __fpclassifyl (double __value) 
     ;
int __signbitl (double __value) 
     ;
int __isinfl (double __value) 
  ;
int __finitel (double __value) 
  ;
int __isnanl (double __value) 
  ;
int __iseqsigl (double __x, double __y) ;
int __issignalingl (double __value) 
     ;
 double acosl (double __x) ;
 double asinl (double __x) ;
 double atanl (double __x) ;
 double atan2l (double __y, double __x) ;
 double cosl (double __x) ;
 double sinl (double __x) ;
 double tanl (double __x) ;
 double coshl (double __x) ;
 double sinhl (double __x) ;
 double tanhl (double __x) ;
 double acoshl (double __x) ;
 double asinhl (double __x) ;
 double atanhl (double __x) ;
 double expl (double __x) ;
double frexpl (double __x, int *__exponent) ;
double ldexpl (double __x, int __exponent) ;
 double logl (double __x) ;
 double log10l (double __x) ;
double modfl (double __x, double *__iptr) ;
 double expm1l (double __x) ;
 double log1pl (double __x) ;
double logbl (double __x) ;
 double exp2l (double __x) ;
 double log2l (double __x) ;
 double powl (double __x, double __y) ;
double sqrtl (double __x) ;
 double hypotl (double __x, double __y) ;
 double cbrtl (double __x) ;
double ceill (double __x) ;
double fabsl (double __x) ;
double floorl (double __x) ;
double fmodl (double __x, double __y) ;
int isinfl (double __value) 
  ;
int finitel (double __value) 
  ;
double dreml (double __x, double __y) ;
double significandl (double __x) ;
double copysignl (double __x, double __y) ;
double nanl (const char *__tagb) ;
int isnanl (double __value) 
  ;
double j0l (double) ;
double j1l (double) ;
double jnl (int, double) ;
double y0l (double) ;
double y1l (double) ;
double ynl (int, double) ;
 double erfl (double) ;
 double erfcl (double) ;
double lgammal (double) ;
double tgammal (double) ;
double gammal (double) ;
double lgammal_r (double, int *__signgamp) ;
double rintl (double __x) ;
double nextafterl (double __x, double __y) ;
double nexttowardl (double __x, double __y) ;
double remainderl (double __x, double __y) ;
double scalbnl (double __x, int __n) ;
int ilogbl (double __x) ;
double scalblnl (double __x, long int __n) ;
double nearbyintl (double __x) ;
double roundl (double __x) ;
double truncl (double __x) ;
double remquol (double __x, double __y, int *__quo) ;
long int lrintl (double __x) ;
__extension__
long long int llrintl (double __x) ;
long int lroundl (double __x) ;
__extension__
long long int llroundl (double __x) ;
double fdiml (double __x, double __y) ;
double fmaxl (double __x, double __y) ;
double fminl (double __x, double __y) ;
double fmal (double __x, double __y, double __z) ;
double scalbl (double __x, double __n) ;
int __fpclassifyf128 (double __value) 
     ;
int __signbitf128 (double __value) 
     ;
int __isinff128 (double __value) 
  ;
int __finitef128 (double __value) 
  ;
int __isnanf128 (double __value) 
  ;
int __iseqsigf128 (double __x, double __y) ;
int __issignalingf128 (double __value) 
     ;
int signgam;



typedef long unsigned int size_t;
void *memcpy (void * __dest, const void * __src,
       size_t __n) ;
void *memmove (void *__dest, const void *__src, size_t __n)
     ;
void *memccpy (void * __dest, const void * __src,
        int __c, size_t __n)
    ;
void *memset (void *__s, int __c, size_t __n) ;
int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;
int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     ;
void *memchr (const void *__s, int __c, size_t __n)
      ;
char *strcpy (char * __dest, const char * __src)
     ;
char *strncpy (char * __dest,
        const char * __src, size_t __n)
     ;
char *strcat (char * __dest, const char * __src)
     ;
char *strncat (char * __dest, const char * __src,
        size_t __n) ;
int strcmp (const char *__s1, const char *__s2)
     ;
int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;
int strcoll (const char *__s1, const char *__s2)
     ;
size_t strxfrm (char * __dest,
         const char * __src, size_t __n)
    ;
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     ;
size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) 
     ;
char *strdup (const char *__s)
     ;
char *strndup (const char *__string, size_t __n)
     ;
char *strchr (const char *__s, int __c)
     ;
char *strrchr (const char *__s, int __c)
     ;
char *strchrnul (const char *__s, int __c)
     ;
size_t strcspn (const char *__s, const char *__reject)
     ;
size_t strspn (const char *__s, const char *__accept)
     ;
char *strpbrk (const char *__s, const char *__accept)
     ;
char *strstr (const char *__haystack, const char *__needle)
     ;
char *strtok (char * __s, const char * __delim)
     ;
char *__strtok_r (char * __s,
    const char * __delim,
    char ** __save_ptr)
     ;
char *strtok_r (char * __s, const char * __delim,
         char ** __save_ptr)
     ;
char *strcasestr (const char *__haystack, const char *__needle)
     ;
void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     
    
    ;
void *__mempcpy (void * __dest,
   const void * __src, size_t __n)
     ;
void *mempcpy (void * __dest,
        const void * __src, size_t __n)
     ;
size_t strlen (const char *__s)
     ;
size_t strnlen (const char *__string, size_t __maxlen)
     ;
char *strerror (int __errnum) ;
int strerror_r (int __errnum, char *__buf, size_t __buflen)  
    ;
char *strerror_l (int __errnum, locale_t __l) ;

int bcmp (const void *__s1, const void *__s2, size_t __n)
     ;
void bcopy (const void *__src, void *__dest, size_t __n)
  ;
void bzero (void *__s, size_t __n) ;
char *index (const char *__s, int __c)
     ;
char *rindex (const char *__s, int __c)
     ;
int ffs (int __i) ;
int ffsl (long int __l) ;
__extension__ int ffsll (long long int __ll)
     ;
int strcasecmp (const char *__s1, const char *__s2)
     ;
int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     ;
int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     ;
int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     ;

void explicit_bzero (void *__s, size_t __n) 
    ;
char *strsep (char ** __stringp,
       const char * __delim)
     ;
char *strsignal (int __sig) ;
char *__stpcpy (char * __dest, const char * __src)
     ;
char *stpcpy (char * __dest, const char * __src)
     ;
char *__stpncpy (char * __dest,
   const char * __src, size_t __n)
     ;
char *stpncpy (char * __dest,
        const char * __src, size_t __n)
     ;
size_t strlcpy (char * __dest,
         const char * __src, size_t __n)
  ;
size_t strlcat (char * __dest,
         const char * __src, size_t __n)
  ;

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;

void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;
void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;
void __assert (const char *__assertion, const char *__file, int __line)
     ;



typedef struct
{
  int __count;
  struct
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[10];
};
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);
typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);
typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);
typedef int cookie_close_function_t (void *__cookie);
typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;

typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef __fpos_t fpos_t;
FILE *stdin;
FILE *stdout;
FILE *stderr;
int remove (const char *__filename) ;
int rename (const char *__old, const char *__new) ;
int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) ;
int fclose (FILE *__stream) ;
FILE *tmpfile (void)
   ;
char *tmpnam (char[20])  ;
char *tmpnam_r (char __s[20])  ;
char *tempnam (const char *__dir, const char *__pfx)
   ;
int fflush (FILE *__stream);
int fflush_unlocked (FILE *__stream);
FILE *fopen (const char * __filename,
      const char * __modes)
   ;
FILE *freopen (const char * __filename,
        const char * __modes,
        FILE * __stream) ;
FILE *fdopen (int __fd, const char *__modes) 
   ;
FILE *fopencookie (void * __magic_cookie,
     const char * __modes,
     cookie_io_functions_t __io_funcs) 
   ;
FILE *fmemopen (void *__s, size_t __len, const char *__modes)
   ;
FILE *open_memstream (char **__bufloc, size_t *__sizeloc) 
   ;
void setbuf (FILE * __stream, char * __buf) 
  ;
int setvbuf (FILE * __stream, char * __buf,
      int __modes, size_t __n) ;
void setbuffer (FILE * __stream, char * __buf,
         size_t __size) ;
void setlinebuf (FILE *__stream) ;

























int fgetc (FILE *__stream) ;
int getc (FILE *__stream) ;
int getchar (void);
int getc_unlocked (FILE *__stream) ;
int getchar_unlocked (void);
int fgetc_unlocked (FILE *__stream) ;
int fputc (int __c, FILE *__stream) ;
int putc (int __c, FILE *__stream) ;
int putchar (int __c);
int fputc_unlocked (int __c, FILE *__stream) ;
int putc_unlocked (int __c, FILE *__stream) ;
int putchar_unlocked (int __c);
int getw (FILE *__stream) ;
int putw (int __w, FILE *__stream) ;
char *fgets (char * __s, int __n, FILE * __stream)
     ;
__ssize_t __getdelim (char ** __lineptr,
                             size_t * __n, int __delimiter,
                             FILE * __stream) ;
__ssize_t getdelim (char ** __lineptr,
                           size_t * __n, int __delimiter,
                           FILE * __stream) ;
__ssize_t getline (char ** __lineptr,
                          size_t * __n,
                          FILE * __stream) ;
int fputs (const char * __s, FILE * __stream)
  ;
int puts (const char *__s);
int ungetc (int __c, FILE *__stream) ;
size_t fread (void * __ptr, size_t __size,
       size_t __n, FILE * __stream)
  ;
size_t fwrite (const void * __ptr, size_t __size,
        size_t __n, FILE * __s) ;
size_t fread_unlocked (void * __ptr, size_t __size,
         size_t __n, FILE * __stream)
  ;
size_t fwrite_unlocked (const void * __ptr, size_t __size,
          size_t __n, FILE * __stream)
  ;
int fseek (FILE *__stream, long int __off, int __whence)
  ;
long int ftell (FILE *__stream) ;
void rewind (FILE *__stream) ;
int fseeko (FILE *__stream, __off_t __off, int __whence)
  ;
__off_t ftello (FILE *__stream) ;
int fgetpos (FILE * __stream, fpos_t * __pos)
  ;
int fsetpos (FILE *__stream, const fpos_t *__pos) ;
void clearerr (FILE *__stream) ;
int feof (FILE *__stream) ;
int ferror (FILE *__stream) ;
void clearerr_unlocked (FILE *__stream) ;
int feof_unlocked (FILE *__stream) ;
int ferror_unlocked (FILE *__stream) ;
void perror (const char *__s) ;
int fileno (FILE *__stream) ;
int fileno_unlocked (FILE *__stream) ;
int pclose (FILE *__stream) ;
FILE *popen (const char *__command, const char *__modes)
   ;
char *ctermid (char *__s) 
  ;
void flockfile (FILE *__stream) ;
int ftrylockfile (FILE *__stream) ;
void funlockfile (FILE *__stream) ;
int __uflow (FILE *);
int __overflow (FILE *, int);

void
platform_main_begin(void)
{
}
void
platform_main_end(uint32_t crc, int flag)
{

}
int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
 
  return
    -si;
}
int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
 
  return
    -si;
}
int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
 
  return -ui;
}
uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
 
  return -ui;
}
uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
 
  return -ui;
}
uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{
 
  return -ui;
}
uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
float fabsf(float);
double fabs(double);
float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{
 
  return
    (((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282346638528859811704183484516925e+38F)) ?
    (sf1) :
    (sf1 + sf2);
}
float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{
 
  return
    (((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282346638528859811704183484516925e+38F)) ?
    (sf1) :
    (sf1 - sf2);
}
float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{
 
  return
    (((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282346638528859811704183484516925e+38F))) ?
    (sf1) :
    (sf1 * sf2);
}
float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{
 
  return
    (((sf2) < 1.0f) && (((sf2 == 0.0f) || (((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282346638528859811704183484516925e+38F))))) ?
    (sf1) :
    (sf1 / sf2);
}
double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * ((double)1.79769313486231570814527423731704357e+308))) ?
    (sf1) :
    (sf1 + sf2);
}
double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * ((double)1.79769313486231570814527423731704357e+308))) ?
    (sf1) :
    (sf1 - sf2);
}
double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * ((double)1.79769313486231570814527423731704357e+308)))) ?
    (sf1) :
    (sf1 * sf2);
}
double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * ((double)1.79769313486231570814527423731704357e+308)))))) ?
    (sf1) :
    (sf1 / sf2);
}
int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}
uint32_t crc32_tab[256];
uint32_t crc32_context = 0xFFFFFFFFUL;
void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}
void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}
void
transparent_crc (uint64_t val, int flag)
{
 crc32_8bytes(val);
 if (flag) {

 }
}
void
transparent_crc_bytes (char *ptr, int nbytes, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {

 }
}

float g_11 = 0x4.59EEDAp+41;
uint16_t g_22 = 65529UL;
uint8_t g_37 = 250UL;
uint32_t g_74 = 1UL;
float g_82 = 0x0.2F1192p+42;
int32_t g_89 = 0x3F4D6778L;
uint32_t g_106 = 0xAC7944C9L;
int32_t g_123 = (-1L);
int32_t g_125 = 0x49C3B7D0L;
int32_t g_127 = 0xCB7C8A08L;
int8_t g_128 = 1L;
uint8_t g_129 = 0x55L;
int32_t g_142 = 8L;
int32_t g_211 = (-10L);
uint32_t g_212 = 0x15590E78L;
uint16_t g_213 = 0xF4FDL;
uint32_t g_214 = 0xFB25B8D4L;
uint64_t g_215 = 2UL;
uint8_t g_216 = 0UL;
int32_t g_217 = 0x9C1A4918L;
int32_t g_218 = (-1L);
uint64_t g_223 = 0UL;
int8_t g_225 = (-1L);
uint32_t g_229 = 1UL;
int32_t g_231 = 0x3AA2F07EL;
int8_t g_234 = (-9L);
int16_t g_235 = 0L;
uint32_t g_236 = 0xE08CE7ABL;
uint16_t g_237 = 0x37DBL;
int16_t g_242 = 0L;
uint8_t g_243 = 1UL;
uint32_t g_245 = 0x3C57D315L;
int16_t g_248 = (-2L);
uint32_t g_251 = 0x4DF9D165L;
uint8_t g_252 = 0xB7L;
uint8_t g_253 = 0UL;
float g_254 = 0x0.D2B45Cp+21;
uint32_t g_304 = 0x54101DEBL;
const uint16_t g_476 = 0xABABL;
uint32_t g_518 = 18446744073709551609UL;
uint32_t g_713 = 0x51B0F071L;
uint64_t func_1(void);
int8_t func_16(int16_t p_17, uint32_t p_18, int32_t p_19, uint16_t p_20, uint8_t p_21);
uint16_t func_23(int16_t p_24, uint8_t p_25, uint8_t p_26, uint32_t p_27, int16_t p_28);
int32_t func_31(uint64_t p_32, float p_33, uint64_t p_34, int16_t p_35);
int32_t func_44(uint32_t p_45);
int16_t func_46(int8_t p_47, int8_t p_48, int32_t p_49);
uint8_t func_53(int32_t p_54, int32_t p_55, int8_t p_56);
uint8_t func_59(uint8_t p_60, uint16_t p_61, uint16_t p_62, uint16_t p_63, uint32_t p_64);
float func_97(uint16_t p_98, int32_t p_99, uint64_t p_100, float p_101);
int32_t func_109(uint32_t p_110, int32_t p_111, int32_t p_112, int16_t p_113);
uint64_t func_1(void)
{
    float l_7 = (-0x10.9p-1);
    uint64_t l_8 = 0xFA20BD035C5735E4LL;
    int16_t l_542 = 0xB4F8L;
    uint16_t l_714 = 1UL;
    int32_t l_715 = 0x5BAB0DD1L;
    int32_t l_716 = (-1L);
    int32_t l_747 = 0x72551F95L;
    uint32_t l_749 = 0x6E8457FDL;
    if (((safe_div_func_uint16_t_u_u((((~0x2AL) && (safe_sub_func_uint64_t_u_u(((l_8 , ((l_8 , ((safe_rshift_func_int8_t_s_u(l_8, (l_715 = (((safe_sub_func_int8_t_s_s(1L, (l_714 = ((safe_mod_func_int8_t_s_s(0x76L, func_16(g_22, (func_23(l_8, (safe_mul_func_uint64_t_u_u(g_22, 7L)), l_8, g_22, g_22) <= l_542), g_235, l_8, g_22))) != g_22)))) != l_8) > 65535UL)))) <= l_716)) , l_715)) & 4294967293UL), l_716))) , 0xF6E3L), 0xC95DL)) , g_234))
    {
        int8_t l_720 = 0x95L;
        int32_t l_743 = 1L;
        g_11 = (+(((safe_add_func_float_f_f(g_217, (l_720 >= l_720))) <= ((safe_mul_func_float_f_f((g_128 = ((((safe_rshift_func_uint64_t_u_s(g_231, 21)) && (((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint64_t_u_u(((safe_mul_func_int32_t_s_s(g_243, ((safe_lshift_func_uint32_t_u_u((l_743 = ((safe_add_func_int8_t_s_s((safe_lshift_func_uint32_t_u_s(((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(g_223, (((1L >= (l_715 ^= g_234)) & g_253) && 1L))) & 0x0B8C24812E441C06LL), l_720)), 0x6AE0L)) ^ l_716), g_713)), g_106)) || g_236)), g_304)) <= l_542))) , 0xF003E1BEECA14CBFLL), l_720)), (-1L))) <= l_8) <= g_218) , l_743) | g_253)) && (-1L)) , l_720)), 0x0.Dp+1)) < l_720)) != 0x3.95DA9Ap-53));
        return g_129;
    }
    else
    {
        float l_744 = (-0x1.Fp+1);
        int32_t l_745 = 0x2184A584L;
        int32_t l_746 = 0L;
        int32_t l_748 = 0L;
        l_749--;
    }
    return g_713;
}
int8_t func_16(int16_t p_17, uint32_t p_18, int32_t p_19, uint16_t p_20, uint8_t p_21)
{
    uint32_t l_547 = 7UL;
    int16_t l_549 = 0xD239L;
    int32_t l_550 = 8L;
    uint8_t l_551 = 255UL;
    int32_t l_671 = 0x4E4F0E57L;
    uint32_t l_705 = 1UL;
    if ((g_217 = (((safe_lshift_func_int16_t_s_s(p_17, 6)) && p_17) && (safe_mul_func_uint32_t_u_u((((0xACL & ((g_223 , l_547) & (~g_89))) <= (((((l_550 = (p_21 , (p_17 = l_549))) <= ((p_18 | p_18) == l_549)) , l_551) , 8L) & p_19)) <= g_234), g_242)))))
    {
        uint32_t l_559 = 0x8C925E92L;
        int32_t l_562 = 0x54C74708L;
        int32_t l_569 = (-10L);
        p_19 = (l_569 &= ((((~(safe_rshift_func_uint16_t_u_u(((1UL < 9UL) | p_21), 11))) , (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint32_t_u_u(l_559, 14)), 2))) & (safe_sub_func_int16_t_s_s((l_562 = g_129), 0xC6C9L))) == ((g_123 &= (((safe_rshift_func_uint16_t_u_u((((l_550 = 0x00L) >= ((safe_rshift_func_uint8_t_u_s(p_17, (((g_231 = ((p_18 = (safe_mul_func_uint32_t_u_u(0UL, l_547))) >= p_21)) && g_234) ^ l_559))) & 0xF1FBFD77L)) && l_559), 14)) != g_129) <= 0x58L)) <= g_129)));
    }
    else
    {
        int16_t l_602 = (-8L);
        int32_t l_629 = (-1L);
        if (p_21)
        {
            return g_74;
        }
        else
        {
            uint32_t l_600 = 18446744073709551615UL;
            int32_t l_601 = 0x05DD36FAL;
            int32_t l_603 = 1L;
            int8_t l_630 = 6L;
            int32_t l_631 = (-4L);
            g_11 = (safe_sub_func_float_f_f((safe_div_func_float_f_f(((safe_mul_func_float_f_f((safe_add_func_float_f_f((-p_18), (((safe_sub_func_float_f_f((safe_add_func_float_f_f(0xB.1A1276p-74, g_211)), (safe_add_func_float_f_f((safe_mul_func_float_f_f((g_225 = g_225), g_82)), ((((0x9.38310Bp+46 == (safe_mul_func_float_f_f((safe_mul_func_float_f_f(((((safe_lshift_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s((safe_mul_func_int64_t_s_s(3L, ((safe_lshift_func_int16_t_s_u(((l_601 = (safe_mul_func_uint32_t_u_u((l_550 = g_212), ((l_600 |= (g_214 < p_19)) >= p_17)))) , 0x4936L), 7)) >= 0xD699L))))) || l_602) , l_602), 2)) != g_243) ^ l_603) , (-0x3.1p-1)), g_218)), g_211))) != 0x1.4p-1) == p_18) == 0x6.7F8F86p-29))))) <= (-0x1.Fp-1)) <= p_19))), g_242)) <= 0x1.4p+1), g_253)), 0x5.16F4E7p-52));
            l_550 &= (l_631 |= (safe_sub_func_int32_t_s_s((l_629 = (safe_unary_minus_func_int32_t_s((l_630 ^= (safe_sub_func_uint8_t_u_u(((1UL <= l_547) != ((0xCF6CL || (safe_lshift_func_uint32_t_u_s(((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_601, ((g_213 , (g_254 = ((((l_603 = g_215) != 0xD.E2FEEAp+30) == ((((!((+(safe_mul_func_float_f_f((l_551 != ((safe_sub_func_float_f_f((safe_div_func_float_f_f((safe_sub_func_float_f_f((safe_mul_func_float_f_f((-0x2.4p-1), 0x0.34E3B2p-91)), g_106)), g_518)), g_123)) <= g_125)), g_211))) <= (-0x6.3p-1))) <= (-0x1.6p-1)) > p_21) != g_123)) != p_18))) , p_19))), p_17)), 65535UL)) , l_600), 1))) & g_22)), 0x74L)))))), l_601)));
        }
        if ((((0xA6L || (safe_div_func_int32_t_s_s((safe_rshift_func_int32_t_s_u((p_21 = p_21), ((safe_mul_func_uint16_t_u_u(g_223, (safe_rshift_func_uint32_t_u_s((l_629 = (g_251 <= (g_235 ^= (-1L)))), p_18)))) | (p_20 != 18446744073709551615UL)))), 4L))) , 0L) < 1UL))
        {
            uint64_t l_642 = 1UL;
            g_123 = ((safe_rshift_func_uint64_t_u_s(0xD0E5178DD40C299FLL, 28)) || l_642);
            l_629 = g_216;
        }
        else
        {
            int64_t l_662 = (-9L);
            int32_t l_689 = (-1L);
            uint32_t l_712 = 0xD7D713FAL;
            l_689 |= ((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u((g_231 = ((((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(l_602, ((safe_lshift_func_int64_t_s_s((+(safe_lshift_func_uint16_t_u_s(l_547, 5))), 15)) != (safe_lshift_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((l_662 >= (safe_lshift_func_int32_t_s_u((safe_div_func_int16_t_s_s((((~((safe_lshift_func_uint16_t_u_s(((+l_671) <= (l_629 = (0UL || (safe_sub_func_int16_t_s_s((p_19 = ((!((safe_sub_func_int64_t_s_s((g_225 && ((safe_mul_func_float_f_f((((safe_sub_func_float_f_f((safe_add_func_float_f_f(((safe_mul_func_float_f_f((((safe_div_func_float_f_f((safe_sub_func_float_f_f(g_217, (-0x1.Ep-1))), ((g_254 = 0x0.4p+1) < (-0x5.Dp+1)))) < g_518) <= l_602), g_74)) != 0x1.8p-1), p_21)), l_662)) <= g_476) >= 0x6.7p-1), g_214)) , g_253)), p_21)) < p_17)) && 2UL)), 0x2C48L))))), 1)) & 4294967291UL)) != l_550) >= p_17), p_21)), l_602))), g_252)), 16))))), p_20)) | l_602) != g_37) == 0x2537133DL)), (-3L))) != 0x47L) ^ p_18) && 0L), l_602)), g_235)) > g_213);
            g_123 = ((0x34L >= ((((-10L) <= (safe_sub_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(g_236, ((p_18 = (((safe_unary_minus_func_int8_t_s((1L ^ l_551))) > (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(((++l_705) == ((((safe_add_func_uint64_t_u_u(((l_547 ^ (safe_div_func_int64_t_s_s(((((p_19 |= (g_123 < (g_218 != p_21))) , 65535UL) == g_248) , l_550), l_671))) , g_225), p_20)) , l_629) || 0L) < p_17)), 18446744073709551610UL)) && 2L), g_89)), p_20)), p_21)), l_550))) , l_712)) <= g_713))) ^ g_713), g_127))) > g_251) == g_243)) || g_225);
        }
    }
    return g_74;
}
uint16_t func_23(int16_t p_24, uint8_t p_25, uint8_t p_26, uint32_t p_27, int16_t p_28)
{
    int16_t l_36 = 0x6B58L;
    int32_t l_460 = 0xE153FDD8L;
    int32_t l_470 = 0x15EBB02EL;
    uint32_t l_471 = 0x2901F4CEL;
    const int32_t l_477 = 0x7867C112L;
    int16_t l_478 = 0x3B4EL;
    int32_t l_541 = 0xCDD09516L;
    if ((func_31((g_37--), (((safe_mul_func_uint16_t_u_u((l_460 = (safe_add_func_int64_t_s_s((func_44(l_36) >= p_25), l_460))), ((safe_unary_minus_func_uint8_t_u(((l_470 = (g_218 &= ((safe_mul_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(((safe_div_func_int16_t_s_s(l_36, (1UL & (((safe_rshift_func_uint32_t_u_s((l_36 && (((l_471--) > (safe_mod_func_uint8_t_u_u(g_22, ((g_476 , p_27) && l_36)))) && g_22)), l_477)) <= p_28) , p_24)))) != p_24), 18446744073709551615UL)) >= g_248), p_27)) && 0x8EB3064726813546LL))) ^ g_213))) == g_211))) , p_27) < 0xC.603431p-69), l_478, g_213) & p_25))
    {
        float l_499 = 0xA.9F631Ep+26;
        int32_t l_520 = 0x52917DDBL;
        int32_t l_521 = (-10L);
        int32_t l_522 = (-1L);
        int64_t l_523 = 0x7B3AEEDC8E8C16CFLL;
        l_523 = ((p_24 ^ (p_27 || ((safe_mul_func_int64_t_s_s(((safe_rshift_func_int32_t_s_u(g_106, l_477)) != ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(((safe_mul_func_int64_t_s_s((l_522 = (l_521 = ((((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((l_520 = (safe_add_func_uint64_t_u_u((((p_26 ^ (safe_rshift_func_int8_t_s_s(((((g_236 > l_478) || g_518) > (!g_237)) < g_74), 1))) & p_28) && g_253), g_231))) > p_24) , 4L), 0x4608L)), g_253)), l_36)) , g_235) && l_520) >= g_242))), 0xB779B002552F691BLL)) >= p_27), p_24)) <= p_28), p_25)), g_22)) & p_26)), g_214)) ^ 0x175B46407B08E14CLL))) | 1UL);
    }
    else
    {
        int32_t l_537 = 0L;
        int32_t l_538 = (-8L);
        l_541 &= (g_218 = (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((0xE4L && (g_215 > ((65535UL == (+(safe_rshift_func_int32_t_s_u(((safe_rshift_func_uint16_t_u_u((l_460 = (((safe_mul_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(9UL, (-9L))), l_537)) == (p_28 , (l_470 |= (g_74 = (g_251 ^= (l_538 = 0x85259C5DL)))))) != (safe_mul_func_int16_t_s_s((65535UL && 0L), g_234)))), g_518)) , (-1L)), 23)))) == l_36))), p_25)), g_142)));
    }
    return g_476;
}
int32_t func_31(uint64_t p_32, float p_33, uint64_t p_34, int16_t p_35)
{
    int64_t l_481 = 8L;
    int32_t l_483 = 0x184050AAL;
    int32_t l_484 = 0x9144B7A4L;
    int32_t l_485 = 0x0869CC9FL;
    int32_t l_488 = 2L;
    int32_t l_489 = 0xAAC22CEFL;
    uint8_t l_492 = 255UL;
    for (g_213 = 29; (g_213 > 10); g_213 = safe_sub_func_uint32_t_u_u(g_213, 7))
    {
        int32_t l_482 = 0x7DA8BCA9L;
        int32_t l_486 = 0x4E6F9233L;
        int32_t l_487 = 4L;
        int32_t l_490 = (-1L);
        int32_t l_491 = (-1L);
        ++l_492;
        return l_485;
    }
    return g_234;
}
int32_t func_44(uint32_t p_45)
{
    float l_50 = 0x2.0B7390p-6;
    const int32_t l_94 = 0x05ADB561L;
    int32_t l_348 = 1L;
    uint16_t l_349 = 65535UL;
    int32_t l_350 = 0L;
    float l_381 = 0xB.C25709p+16;
    float l_424 = 0x7.5C18F2p-36;
    uint16_t l_430 = 1UL;
    int8_t l_433 = 0xAFL;
    if (((((func_46(g_22, p_45, p_45) != (safe_sub_func_uint32_t_u_u(((g_89 = p_45) > (safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(l_94, func_53(((((l_350 ^= (safe_rshift_func_int16_t_s_s(func_53((func_53(g_22, (l_348 = (func_97(((safe_add_func_uint32_t_u_u((g_106 ^= func_53((((safe_sub_func_uint8_t_u_u((((func_53((g_22 != l_94), g_22, g_22) || g_22) , g_22) || p_45), l_94)) | g_22) || g_22), p_45, g_22)), p_45)) , l_94), p_45, l_94, l_94) , p_45)), l_349) != 1L), g_211, g_253), p_45))) > l_349) && p_45) > p_45), p_45, g_304))) | l_94), 0x7D501D7207EEB9DBLL))), 0x8EE96670L))) && g_253) == 0xE13A80E33C98966ELL) & 4294967290UL))
    {
        uint32_t l_382 = 0xAD85B91FL;
        for (l_348 = 1; (l_348 < (-22)); l_348--)
        {
            uint32_t l_359 = 7UL;
            int16_t l_360 = 0x3855L;
            int32_t l_361 = 0x9CC61E16L;
            l_361 = (0x7C964B70L | ((safe_mod_func_uint64_t_u_u((((g_215 , 0x43L) , ((g_106 || (safe_mul_func_int16_t_s_s(1L, p_45))) != ((0x3AL != (g_212 && (l_359 != 1L))) , 6UL))) && p_45), 1L)) || l_360));
            l_382 = (safe_mod_func_uint64_t_u_u((+(safe_sub_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(g_22, ((l_349 , (safe_rshift_func_int64_t_s_s((+(l_361 || (0xEC86742A66AFE181LL && ((safe_lshift_func_uint32_t_u_s(((safe_mul_func_int64_t_s_s((((p_45 , g_129) & 3UL) <= (safe_rshift_func_int8_t_s_s(0xFCL, 3))), ((+(safe_sub_func_int64_t_s_s(0x3B8671DFE0E36B67LL, p_45))) & g_128))) , p_45), g_242)) != p_45)))), p_45))) , l_349))) ^ 0xBEF1L), 0L))), p_45));
        }
    }
    else
    {
        int32_t l_393 = 0xD88184EFL;
        const int32_t l_410 = 0x54228E14L;
        if ((safe_mul_func_int8_t_s_s((safe_mul_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((((safe_rshift_func_int32_t_s_u((l_393 = l_393), g_252)) && ((safe_mul_func_int32_t_s_s(((l_350 |= (~g_304)) , ((safe_mul_func_int64_t_s_s(g_243, 18446744073709551612UL)) && (safe_add_func_uint64_t_u_u((safe_rshift_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((g_231 |= (((~l_393) || (l_393 |= 0xC8936D7ED5845017LL)) < (g_127 = ((((l_350 ^= ((~((safe_mul_func_uint64_t_u_u((((+((l_410 ^ (l_410 > (-8L))) && p_45)) == 1UL) , 0xB8AF9111AFA2E2DFLL), g_213)) ^ g_123)) | g_243)) , p_45) , l_410) <= g_127)))), g_225)), 28)), g_123)))), p_45)) , l_94)) , 0x2871D3FFL) , g_22), g_245)), 8)), g_142)), g_216)))
        {
            const int32_t l_434 = 5L;
            p_45 = (safe_sub_func_int32_t_s_s((g_106 = (safe_mod_func_uint32_t_u_u(((((((l_393 &= ((4294967295UL ^ 0x56ECF784L) , g_248)) == ((((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(0xDAA919A787C15747LL)), ((((safe_lshift_func_uint64_t_u_s(p_45, ((g_231 = (((p_45 != l_410) <= ((((safe_sub_func_float_f_f((safe_mul_func_float_f_f(((-((((l_430 > ((((safe_div_func_int8_t_s_s(((-1L) | p_45), g_223)) ^ l_433) , 0x9.DF276Ap+48) >= p_45)) != g_129) > (-0x9.2p-1)) >= p_45)) >= 0x7.5F3B0Ap-44), g_223)), 0x5.BCDF45p-69)) != 0x5.923DCEp+87) > 0x7.80B903p+67) , l_410)) >= l_410)) && p_45))) , l_434) & (-7L)) , l_434))) >= l_433), l_349)) || 0x4665L) > (-1L)) == l_410)) , p_45) < l_410) || g_89) && 1L), l_349))), 0x60C56A79L));
        }
        else
        {
            int32_t l_459 = 0x4B426675L;
            g_229 = (((safe_unary_minus_func_int32_t_s(0L)) < (safe_mul_func_int32_t_s_s((safe_sub_func_int64_t_s_s(0x0069E6D3141FF948LL, g_253)), (g_251 != (g_106 = (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((((((((safe_sub_func_int32_t_s_s(((+l_410) , p_45), 8UL)) > ((safe_rshift_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((g_248 >= (safe_mod_func_uint32_t_u_u(4294967294UL, 0xD4261A66L))), 1UL)), 16)) && l_459)) <= 6UL) >= p_45) >= (-1L)) ^ l_459) >= p_45), p_45)), (-1L))) != l_393) , l_459) && p_45), 0x7CL)), g_229)), 1))))))) | g_216);
        }
    }
    return p_45;
}
int16_t func_46(int8_t p_47, int8_t p_48, int32_t p_49)
{
    uint16_t l_69 = 0x0F86L;
    uint64_t l_70 = 18446744073709551615UL;
    uint32_t l_71 = 4UL;
    int32_t l_77 = 0x628D16E9L;
    l_77 = ((safe_mod_func_uint8_t_u_u(func_53(g_22, (p_49 = p_49), (g_22 | (p_47 >= (safe_sub_func_int16_t_s_s(((((p_47 <= ((((p_48 > (func_59(((safe_lshift_func_uint64_t_u_u((((p_47 >= ((((((safe_sub_func_float_f_f(((g_11 == ((g_22 > p_48) <= g_22)) <= p_47), (-0x9.0p+1))) , 0x0.2p+1) < l_69) >= 0x2.41E971p+0) , p_47) != p_47)) , 0xBB4D05C4L) | l_70), 56)) ^ p_47), l_71, p_47, g_22, g_22) , 0x94BBB87E338AE633LL)) , g_22) & l_70) <= l_70)) >= l_77) && g_22) >= 0UL), l_70))))), l_71)) , g_22);
    for (p_49 = 0; (p_49 < (-20)); p_49 = safe_sub_func_uint32_t_u_u(p_49, 9))
    {
        if (g_22)
        {
            if (g_22)
                break;
        }
        else
        {
            int32_t l_80 = 0x5BDB26F1L;
            int32_t l_81 = 0xFA7F9CD9L;
            int32_t l_83 = (-2L);
            uint16_t l_84 = 65528UL;
            ++l_84;
            l_81 = l_81;
        }
        if (g_22)
            continue;
    }
    return g_74;
}
uint8_t func_53(int32_t p_54, int32_t p_55, int8_t p_56)
{
    return p_54;
}
uint8_t func_59(uint8_t p_60, uint16_t p_61, uint16_t p_62, uint16_t p_63, uint32_t p_64)
{
    int64_t l_72 = (-1L);
    int32_t l_73 = 0xF09958A8L;
    --g_74;
    return p_62;
}
float func_97(uint16_t p_98, int32_t p_99, uint64_t p_100, float p_101)
{
    uint16_t l_116 = 0xCEACL;
    int32_t l_124 = 0x864DC945L;
    int32_t l_126 = 0x2D563F42L;
    int32_t l_140 = 0x6D778B14L;
    int32_t l_141 = 0x3E462BFCL;
    int32_t l_143 = 2L;
    int32_t l_157 = (-1L);
    uint64_t l_173 = 0x8F6E363805CA1C99LL;
    float l_196 = 0x0.6p-1;
    uint32_t l_210 = 0x5D7992C5L;
    int16_t l_222 = 3L;
    float l_290 = 0x0.Cp+1;
    float l_325 = (-0x8.Bp+1);
    if (func_53((l_143 &= ((g_142 = func_53(g_106, ((safe_sub_func_int16_t_s_s(((p_99 , func_109(g_22, ((g_123 = ((safe_lshift_func_int32_t_s_u((l_141 = (l_116 | (safe_lshift_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((safe_rshift_func_int64_t_s_u((g_106 || (--g_129)), (l_140 = (l_124 = (4294967295UL == (safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((((p_100 = (l_126 &= p_100)) != (safe_mul_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u(9UL, (g_106 , g_123))) > g_125) , g_125) & 0x1D759801L), p_99))) <= l_116) < 0xEEL), l_124)), p_99))))))), p_98)) >= p_98), g_128)))), p_98)) >= 0xBEF72180A8C21786LL)) == l_116), g_106, g_22)) , 0x7323L), (-7L))) , g_106), p_99)) != 0xB8388ADFL)), g_106, g_128))
    {
        int32_t l_145 = 0L;
        int32_t l_158 = 2L;
        uint64_t l_169 = 0x7CC63A23B0424951LL;
        l_158 |= ((g_123 = (0xE6L < (0x3F6CL | (!0x21A3L)))) , ((l_145 ^ (safe_sub_func_int64_t_s_s((((0xA8L < (((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint64_t_u_u(p_100, 32)))), (safe_add_func_uint16_t_u_u((g_22 , p_99), l_157)))) == g_106) >= p_98)) > l_145) | g_142), l_145))) , l_124));
        l_158 = (p_99 = (g_142 = ((l_141 = ((0x96F98B6A621C5902LL > (safe_mod_func_int16_t_s_s((((safe_mul_func_int64_t_s_s((l_157 != (((((safe_mod_func_int32_t_s_s((p_99 | g_127), (safe_sub_func_int64_t_s_s((((g_123 && ((safe_mul_func_int8_t_s_s((l_169 | (+(l_140 = (l_158 , p_99)))), (g_106 = (safe_div_func_int32_t_s_s(p_98, l_116))))) < l_126)) > 0x5F2FL) | g_123), l_158)))) , 0x1D91L) >= 0L) , 0x9880E71BL) , 8UL)), p_99)) >= g_142) != l_116), l_173))) && p_98)) <= g_123)));
    }
    else
    {
        uint8_t l_183 = 6UL;
        int32_t l_197 = 0x67482672L;
        int32_t l_219 = 1L;
        int32_t l_220 = 0x2F281150L;
        int32_t l_224 = 0xBB7F4976L;
        int32_t l_228 = 1L;
        int32_t l_230 = 0L;
        int32_t l_238 = 0xD1DAC5B9L;
        int32_t l_239 = 0x86EBFBDCL;
        int32_t l_241 = 0xCC0EDDC4L;
        int32_t l_249 = 0xBB931B0DL;
        float l_291 = (-0x1.1p-1);
        uint16_t l_292 = 0xB0E6L;
        if ((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((~(((safe_mod_func_uint32_t_u_u((((safe_lshift_func_int64_t_s_u(0x7591BD5E56AD494ALL, ((0x4CFFL <= (((l_183 > ((p_100 < l_157) , (safe_mul_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((g_128 , ((((l_197 = (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((l_183 , (p_99 == p_98)) == l_126), 0x6A60L)), l_173))) != g_125) , g_142) ^ 1UL)), p_99)), l_183)) < l_157), g_142)), 1L)))) & 0x33DC0AD4A388CAFDLL) >= l_173)) , 1UL))) == 0x9216L) != p_100), g_123)) <= p_98) != 0x0BE2757DL)), 9)) != g_123), g_22)) , 0x0FB557DD5A8A1F86LL) <= 0x625C23C1BAF1AC7FLL))
        {
            return p_100;
        }
        else
        {
            uint32_t l_199 = 4294967295UL;
            const int32_t l_204 = 0xE16DA6D5L;
            int32_t l_221 = 0L;
            uint64_t l_226 = 0x7607B9B31375F163LL;
            int32_t l_227 = 0x4CE34C1BL;
            int32_t l_232 = (-1L);
            int16_t l_233 = 0x3F64L;
            int32_t l_240 = 0L;
            int32_t l_244 = 9L;
            int32_t l_246 = 0xF677657BL;
            int32_t l_247 = (-2L);
            int32_t l_250 = 0x780FFA4CL;
            g_254 = (p_101 = (0x5.502811p+19 > (((g_127 = (!l_199)) <= l_199) , (safe_mul_func_float_f_f((((18446744073709551607UL <= (p_98 &= g_22)) && ((safe_lshift_func_uint64_t_u_u((p_100 , l_204), ((l_126 |= (safe_sub_func_uint32_t_u_u((p_99 = (g_123 = (((~l_124) < (((((((safe_div_func_int32_t_s_s((((g_123 != l_210) >= 0x4EB0A2725A8890B9LL) , 0xE583CD54L), p_98)) , 4UL) , g_123) , g_128) || g_142) , g_127) || l_143)) && l_183))), (-9L)))) < 0xBFDBL))) , (-8L))) , l_116), 0x5.3p+1)))));
            l_157 = (l_143 = ((p_98 = ((safe_rshift_func_uint64_t_u_s(((safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s(g_211, (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_100, (safe_rshift_func_uint64_t_u_s(((l_140 <= ((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(l_204, ((safe_rshift_func_uint64_t_u_u((g_215 = 1UL), (((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((((safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s((((((g_253 , (safe_lshift_func_int16_t_s_s(((l_238 = (safe_add_func_uint64_t_u_u(((safe_rshift_func_uint64_t_u_s((4294967295UL < ((l_141 = (l_116 || (safe_lshift_func_int64_t_s_s(((l_224 = (safe_unary_minus_func_int32_t_s((p_99 |= 1L)))) , g_123), 33)))) , 0UL)), 31)) , p_100), g_251))) <= p_98), 0))) >= g_253) & 0x67L) , 0xCAL) || g_211), p_100)), l_173)) , (-1L)) == l_241), l_292)), l_249)) || l_141) && 0x4FF5F6CEBD2D59B1LL))) , (-1L)))), 0x86L)) <= p_100)) ^ 0L), 43)))), p_98)))), 0x6D238DED41DA0D0BLL)) || p_99), 11)) , 65531UL)) && g_129));
        }
        return p_98;
    }
    if ((0x41L || ((l_157 > p_99) && l_116)))
    {
        int16_t l_293 = 0x0E11L;
        const uint32_t l_294 = 0x62F120E7L;
        int8_t l_310 = 1L;
        if (l_293)
        {
            uint32_t l_299 = 0xD17A2B0FL;
            int32_t l_303 = 0xFEBF8EEFL;
            g_217 &= ((l_294 || ((safe_div_func_uint16_t_u_u(((p_99 == p_98) & (g_231 <= 1UL)), (l_299 = 1L))) & (!(safe_add_func_int16_t_s_s((l_303 | (g_304 , 0x70D685FEB4F4C75CLL)), 0x9F38L))))) > 0xA352L);
        }
        else
        {
            const int8_t l_313 = 0xFEL;
            g_212 ^= (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(1UL, (((p_99 = ((+l_310) ^ (((((g_123 = g_142) > (((-1L) == (g_127 |= (l_313 || (g_217 = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint32_t_u_s((!((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u((l_124 > ((0x7EL >= g_129) < (((g_248 > 0x142A30A2B9BF124FLL) , p_100) <= 7UL))), p_99)), g_229)) , 0x1AL)), g_251)), g_125)), l_313)))))) == g_304)) , l_313) , g_128) && 0xD60A175790A1AEEBLL))) , 0x7CE9A38E781DF53ALL) & 0UL))), g_251));
        }
    }
    else
    {
        int32_t l_326 = 0L;
        uint8_t l_330 = 0x6FL;
        int64_t l_331 = 1L;
        int32_t l_347 = 0x0BBF0BD6L;
        p_101 = (((-0x5.Cp+1) <= l_326) <= ((((safe_add_func_uint8_t_u_u((l_331 = ((-l_330) , g_123)), ((safe_div_func_int8_t_s_s((safe_rshift_func_int64_t_s_u((safe_lshift_func_uint16_t_u_u((((+(l_347 &= ((safe_sub_func_int16_t_s_s(((g_22 && (safe_lshift_func_int32_t_s_s(((l_124 = (l_124 | (g_245 &= (g_231 , ((1L | (safe_sub_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(0x17790CCD4F399569LL, p_99)) >= p_99), 0x7B65L))) & g_251))))) | l_210), l_210))) & 0x1390052BFA017EF0LL), l_157)) >= g_127))) >= 4UL) ^ l_330), 3)), l_143)), g_223)) >= (-1L)))) < l_222) , p_101) < p_98));
    }
    return l_140;
}
int32_t func_109(uint32_t p_110, int32_t p_111, int32_t p_112, int16_t p_113)
{
    p_110 = p_110;
    return g_128;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    
    transparent_crc(g_22, print_hash_value);
    transparent_crc(g_37, print_hash_value);
    transparent_crc(g_74, print_hash_value);
    
    transparent_crc(g_89, print_hash_value);
    transparent_crc(g_106, print_hash_value);
    transparent_crc(g_123, print_hash_value);
    transparent_crc(g_125, print_hash_value);
    transparent_crc(g_127, print_hash_value);
    transparent_crc(g_128, print_hash_value);
    transparent_crc(g_129, print_hash_value);
    transparent_crc(g_142, print_hash_value);
    transparent_crc(g_211, print_hash_value);
    transparent_crc(g_212, print_hash_value);
    transparent_crc(g_213, print_hash_value);
    transparent_crc(g_214, print_hash_value);
    transparent_crc(g_215, print_hash_value);
    transparent_crc(g_216, print_hash_value);
    transparent_crc(g_217, print_hash_value);
    transparent_crc(g_218, print_hash_value);
    transparent_crc(g_223, print_hash_value);
    transparent_crc(g_225, print_hash_value);
    transparent_crc(g_229, print_hash_value);
    transparent_crc(g_231, print_hash_value);
    transparent_crc(g_234, print_hash_value);
    transparent_crc(g_235, print_hash_value);
    transparent_crc(g_236, print_hash_value);
    transparent_crc(g_237, print_hash_value);
    transparent_crc(g_242, print_hash_value);
    transparent_crc(g_243, print_hash_value);
    transparent_crc(g_245, print_hash_value);
    transparent_crc(g_248, print_hash_value);
    transparent_crc(g_251, print_hash_value);
    transparent_crc(g_252, print_hash_value);
    transparent_crc(g_253, print_hash_value);
    
    transparent_crc(g_304, print_hash_value);
    transparent_crc(g_476, print_hash_value);
    transparent_crc(g_518, print_hash_value);
    transparent_crc(g_713, print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return (unsigned char)(crc32_context);
}
