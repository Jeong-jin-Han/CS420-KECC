
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

uint32_t g_8 = 5UL;
float g_67 = 0x0.2p+1;
float g_89 = 0xB.9ACCE3p+2;
int32_t g_112 = 0L;
int32_t g_129 = 0x9F7832F5L;
uint64_t g_131 = 0x7F0D5E47109BDD52LL;
const uint16_t g_194 = 0xAA43L;
int32_t g_196 = (-7L);
int32_t g_199 = (-1L);
int32_t g_202 = 0xDE73C794L;
uint32_t g_205 = 4294967292UL;
int8_t g_253 = 0xBFL;
int64_t g_285 = 8L;
int32_t g_286 = 0x363783EFL;
int32_t g_324 = (-1L);
uint64_t g_328 = 1UL;
int64_t g_373 = 0L;
int64_t g_409 = (-4L);
uint64_t g_410 = 0xB9B7F2E98DDD9E29LL;
int64_t g_419 = 0x3F63190A6632FA3DLL;
uint8_t g_445 = 246UL;
uint32_t g_471 = 0x165275F8L;
uint32_t g_508 = 0x52F59C97L;
int8_t g_538 = (-1L);
float g_546 = (-0x1.Cp+1);
uint16_t g_560 = 0xFC28L;
int8_t g_572 = 1L;
int16_t g_573 = 0x06F1L;
int32_t g_587 = 0x7DB7F74AL;
int32_t g_604 = (-2L);
int16_t g_605 = (-1L);
int8_t g_610 = 0x8BL;
int16_t g_647 = 0x37ADL;
int32_t g_648 = (-5L);
uint8_t g_652 = 0xB2L;
uint8_t g_680 = 254UL;
uint64_t g_687 = 0xD3CC1AAF0B857579LL;
uint32_t g_700 = 4294967295UL;
int32_t g_704 = 0L;
int32_t g_707 = 0x3DC856F2L;
uint16_t g_711 = 0xFF94L;
float g_713 = 0x7.Dp+1;
uint32_t g_776 = 0x94DD3B51L;
uint32_t g_875 = 0xB71C4078L;
uint32_t g_878 = 1UL;
int8_t g_961 = 9L;
int32_t g_964 = 0xF6A5772AL;
uint8_t g_965 = 0x78L;
int8_t g_1012 = 0xAAL;
int8_t g_1013 = 0L;
uint32_t g_1014 = 2UL;
float g_1074 = 0x3.1p-1;
uint8_t g_1147 = 255UL;
int32_t g_1222 = 0L;
uint32_t g_1225 = 0x9A05B66EL;
int16_t g_1226 = 0xD351L;
uint32_t g_1227 = 6UL;
int32_t g_1231 = 0x5A11DEE8L;
uint32_t g_1232 = 0xC5BB1E1EL;
uint64_t g_1233 = 0x3FE9D1A58BD04583LL;
int64_t g_1236 = 0x2145E80EB6E8E811LL;
uint64_t g_1247 = 0x95643ACC5A521842LL;
uint64_t g_1250 = 18446744073709551615UL;
int8_t g_1251 = 0xD5L;
uint8_t g_1254 = 9UL;
int16_t g_1256 = (-1L);
uint16_t g_1257 = 0xC2C9L;
int32_t g_1262 = 1L;
uint64_t g_1267 = 18446744073709551615UL;
float g_1269 = (-0x7.9p-1);
float g_1441 = 0xC.6EDD66p+46;
uint16_t g_1449 = 65535UL;
uint64_t g_1575 = 0UL;
float g_1604 = (-0x1.0p+1);
uint32_t g_1650 = 2UL;
int16_t g_1802 = 1L;
uint64_t g_1805 = 0xACA4BDED6B1C46C3LL;
float g_1888 = 0x7.B66173p+95;
int32_t g_1964 = 0x49CAE329L;
float g_1965 = 0x9.89B42Bp+44;
int64_t g_1966 = 0L;
int64_t g_1969 = 0x01ECC3CA77F6A71FLL;
uint32_t g_1970 = 0x969734E3L;
uint8_t g_1983 = 0xFDL;
uint32_t g_2021 = 0UL;
float g_2034 = (-0x2.7p-1);
uint32_t g_2035 = 0xD5E9A6CBL;
int16_t g_2077 = 0x6BBBL;
uint8_t g_2081 = 0xC9L;
int32_t g_2182 = 1L;
float g_2195 = 0xA.3ED254p-12;
int64_t g_2197 = (-5L);
uint64_t g_2198 = 0UL;
uint16_t g_2259 = 0x0F58L;
uint32_t g_2328 = 1UL;
uint8_t g_2433 = 0UL;
uint32_t g_2605 = 0UL;
uint32_t g_2687 = 0xC669D319L;
int64_t g_2696 = (-3L);
int64_t g_2725 = 0x860C555D4F51D86DLL;
uint8_t g_2726 = 0x94L;
uint32_t g_2729 = 4294967295UL;
uint32_t g_2805 = 0x54A7F554L;
uint64_t g_2894 = 0xD0ADB30CF342D3C4LL;
int8_t g_2980 = 0x36L;
uint32_t g_2981 = 1UL;
uint32_t g_3044 = 0x28FC4F39L;
uint32_t g_3078 = 0UL;
int16_t g_3155 = 0L;
int32_t g_3158 = 0xB3CC9E87L;
float g_3159 = 0x6.F73E4Ep-47;
uint32_t g_3160 = 18446744073709551615UL;
uint64_t g_3190 = 0xF43FA83F3E4A44F7LL;
int8_t g_3227 = 0x41L;
uint32_t g_3338 = 0UL;
uint64_t g_3358 = 18446744073709551607UL;
uint64_t g_3367 = 0x87CCC3298214A6F9LL;
int32_t g_3403 = 0xF95C5824L;
uint16_t g_3518 = 65535UL;
uint32_t g_3604 = 0x9BFB7C5FL;
int16_t g_3606 = 0x93F0L;
int32_t g_3653 = 5L;
uint8_t g_3654 = 0xCDL;
int32_t g_3682 = 0x6B860D6EL;
int8_t g_3684 = (-4L);
uint64_t g_3686 = 0x66EEF3CEC0E56E4DLL;
uint32_t g_3717 = 0xB33E7975L;
int32_t func_1(void);
int8_t func_4(uint64_t p_5, int16_t p_6, int32_t p_7);
int32_t func_12(uint32_t p_13);
int32_t func_16(int16_t p_17, int32_t p_18, uint32_t p_19, const float p_20, uint64_t p_21);
uint16_t func_24(const uint32_t p_25, uint8_t p_26, int8_t p_27);
uint8_t func_28(uint32_t p_29, int64_t p_30, uint64_t p_31, float p_32, int8_t p_33);
uint32_t func_39(float p_40, int32_t p_41, uint16_t p_42);
float func_45(float p_46, uint32_t p_47, uint16_t p_48, uint8_t p_49, uint16_t p_50);
uint64_t func_56(const uint32_t p_57);
const float func_81(uint8_t p_82);
int32_t func_1(void)
{
    uint16_t l_9 = 4UL;
    uint8_t l_2224 = 247UL;
    int32_t l_2246 = 0L;
    int32_t l_2247 = 0x864CBE76L;
    int32_t l_2250 = (-1L);
    int32_t l_2254 = 0x71646D5CL;
    int32_t l_2256 = 1L;
    int32_t l_2257 = (-5L);
    uint8_t l_2277 = 250UL;
    uint64_t l_2305 = 0x0AE4D0F29E3185A4LL;
    float l_2320 = (-0x1.8p-1);
    uint32_t l_2385 = 0UL;
    uint32_t l_2457 = 18446744073709551615UL;
    uint32_t l_2472 = 0x04B7E86CL;
    int32_t l_2606 = (-10L);
    int64_t l_2629 = 0L;
    uint32_t l_2710 = 0xC750A52AL;
    int16_t l_2780 = 0x22F3L;
    uint32_t l_2927 = 18446744073709551615UL;
    int32_t l_2942 = 0xFA090BE4L;
    uint16_t l_3207 = 0x3471L;
    int32_t l_3257 = 0L;
    int16_t l_3336 = 0x732BL;
    uint32_t l_3447 = 9UL;
    uint32_t l_3527 = 0xC16C383EL;
    int32_t l_3551 = 0x987B78AAL;
    int32_t l_3587 = 0x319968D3L;
    int64_t l_3605 = 0x632682760BA3E545LL;
    int32_t l_3710 = (-4L);
    int32_t l_3714 = 0x1521B7DFL;
    int32_t l_3715 = (-1L);
    int32_t l_3716 = 5L;
    if ((safe_add_func_uint32_t_u_u((func_4((g_8 , g_8), l_9, (g_8 , (l_9 <= g_8))) >= (safe_lshift_func_uint32_t_u_s((g_1267 , 0x4EFC7B8AL), g_1250))), l_2224)))
    {
        int16_t l_2244 = 0L;
        int32_t l_2245 = 0x34C80B3CL;
        l_2247 |= (((safe_mul_func_uint64_t_u_u((l_2224 != ((safe_mul_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((+((safe_add_func_int16_t_s_s(g_285, 4UL)) , (l_2224 == (safe_rshift_func_int8_t_s_s(g_965, 0))))) ^ g_700), (safe_rshift_func_uint64_t_u_s((safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(253UL, (l_2246 = (g_1964 ^ ((safe_rshift_func_uint8_t_u_u((l_2245 = (((g_1650 != l_9) == 18446744073709551607UL) < l_2244)), l_9)) | l_2224))))) || g_1226), (-1L))), 53)))), l_2244)) != 0x1DL)), 18446744073709551613UL)) > 0x68D8C52CL) , l_2244);
    }
    else
    {
        int32_t l_2248 = 0L;
        int32_t l_2249 = 0xE0B9A8A5L;
        int32_t l_2251 = (-1L);
        int32_t l_2252 = 0x91D9AFCAL;
        int32_t l_2253 = 0x0F5CAE8FL;
        int32_t l_2255 = 0xA9CD13D2L;
        int32_t l_2258 = 0L;
        int32_t l_2289 = 0xC283F6EFL;
        int32_t l_2327 = 0L;
        uint32_t l_2339 = 0UL;
        const uint8_t l_2413 = 0xB7L;
        uint64_t l_2540 = 0xEA409909F57152FFLL;
        uint64_t l_2567 = 18446744073709551614UL;
        int16_t l_2604 = (-1L);
        const int32_t l_2683 = 0x58E1FC3EL;
        const int64_t l_2690 = 0L;
        int16_t l_2694 = 0x1A77L;
        float l_2695 = 0xE.33EB5Ap+94;
        int64_t l_2790 = 0L;
        const int8_t l_2838 = 0x01L;
        int32_t l_2910 = 0x99405B5EL;
        uint8_t l_3047 = 2UL;
        int8_t l_3077 = (-1L);
        uint16_t l_3121 = 8UL;
        int32_t l_3151 = 0x1843947DL;
        int64_t l_3203 = (-1L);
        int64_t l_3208 = (-1L);
        const int32_t l_3286 = 0x9F0CA0C5L;
        int32_t l_3293 = (-1L);
        int32_t l_3468 = 0x1DE48043L;
        int64_t l_3469 = 0L;
        int64_t l_3634 = (-5L);
        int32_t l_3661 = 0L;
        int16_t l_3676 = 1L;
        int64_t l_3683 = 1L;
        g_2259--;
        if ((safe_mul_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(((!(((l_2256 || l_9) < 0x771428A3L) & (safe_mod_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u((l_2255 , (((((l_9 == (safe_mod_func_int8_t_s_s((g_1226 <= ((l_2254 = ((safe_add_func_uint32_t_u_u(((l_2277 <= ((safe_div_func_uint8_t_u_u((l_2248 > ((safe_div_func_int64_t_s_s(0x387B2219A00FFC6DLL, l_2254)) && l_2249)), 0x76L)) , 0x6B147728F966E180LL)) & 0x740EL), g_1254)) && l_2253)) && g_2197)), l_2277))) == g_2081) >= g_1262) , 0x5BC132A3DA9F34EDLL) && g_196)), 0x62C50675L)) < l_2255), 1L)))) != 0x5269L), 1UL)) , l_2255) <= 0xB8L) && (-1L)), (-4L))), g_1147)))
        {
            uint64_t l_2296 = 0x5FB282F1C3C02505LL;
            int32_t l_2303 = (-7L);
            int32_t l_2304 = (-1L);
            int32_t l_2321 = 0x8F6D1BDCL;
            int64_t l_2322 = 0L;
            uint64_t l_2331 = 1UL;
            int32_t l_2334 = 0x4055185DL;
            if ((((g_253 || ((+(l_2305 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((-1L) >= (((safe_sub_func_uint16_t_u_u((l_2289 ^= l_2250), ((((((l_2304 = (safe_mod_func_uint64_t_u_u(((l_2303 = (safe_add_func_uint32_t_u_u((((safe_mul_func_int64_t_s_s((((l_2247 = l_2249) <= (g_1232 , (0xFD9E9800DBE414F2LL <= (l_2296 != (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u((g_1802 && (((l_2296 > 0xB4L) , (-1L)) <= g_1014)), g_1225)) > (-1L)) != (-3L)) && 0x215E6545L), 0)) | 0xEBE4L), 0x74L)))))) , g_1257), l_2249)) && g_1226) & 0x9C9990480EBBBDD3LL), 0xE44D5B28L))) ^ 4294967295UL), l_2258))) != g_707) >= g_1232) > g_687) || l_2303) != g_707))) && g_704) || l_2296)), 13)), 65526UL)) != 18446744073709551615UL))) , g_8)) > g_1222) , 0xE8F73A59L))
            {
                float l_2306 = 0x0.5p-1;
                g_1604 = (l_2306 = 0x1.Dp-1);
            }
            else
            {
                uint16_t l_2311 = 1UL;
                int32_t l_2319 = 0xEBA1F68BL;
                uint32_t l_2323 = 0UL;
                int32_t l_2326 = 8L;
                g_2182 = (safe_sub_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((0xA520L ^ 0UL), (-5L))) > l_2311) == (safe_unary_minus_func_uint8_t_u((l_2252 = (g_1222 = ((-1L) || (safe_mul_func_int64_t_s_s((l_2257 >= 0xC54EF541BBCA83D1LL), ((((safe_add_func_uint8_t_u_u(((0x95L && (safe_div_func_uint8_t_u_u((((l_2256 ^= g_1966) , (-1L)) <= 0x6B70DC0E87926935LL), g_2197))) < g_707), g_1969)) , g_1251) > g_199) < g_572))))))))), g_604));
                l_2323++;
                g_2328++;
                l_2331--;
            }
            return l_2334;
        }
        else
        {
            uint16_t l_2335 = 0x2057L;
            int32_t l_2429 = 0xEA520780L;
            int32_t l_2473 = 0x2B3C720BL;
            int32_t l_2474 = 0xD1064E7AL;
            int32_t l_2539 = 0x97047150L;
            int32_t l_2568 = (-1L);
            int32_t l_2601 = 0x3B429DB9L;
            int32_t l_2662 = 1L;
            float l_2666 = (-0x1.Cp+1);
            uint32_t l_2784 = 0x29FB4498L;
            uint64_t l_2852 = 18446744073709551612UL;
            uint8_t l_2890 = 0xE3L;
            if ((l_2248 || l_2335))
            {
                int8_t l_2384 = 0x57L;
                float l_2426 = 0x5.1B4D6Fp+19;
                int32_t l_2427 = (-7L);
                int32_t l_2430 = 0L;
                int32_t l_2431 = 0xF94B0D3CL;
                g_2182 = (0xB6C7DCF2L == (safe_unary_minus_func_int32_t_s(((safe_rshift_func_int16_t_s_s(l_2339, (safe_div_func_int64_t_s_s(g_373, g_199)))) > (g_2035 ^= g_1227)))));
                g_878 = (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((safe_rshift_func_int32_t_s_s((g_610 = ((g_1147 , (safe_rshift_func_int16_t_s_u(g_961, (g_419 , (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int64_t_s_u(((((safe_sub_func_int16_t_s_s(((safe_div_func_float_f_f((l_2246 == ((((((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((l_2254 = (l_2251 |= 1UL)) > ((((l_2327 && (safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s((+(g_419 = 0x09F7AF2E6DBEEADBLL)), (l_9 , (safe_div_func_int16_t_s_s((((((((+(((((safe_mul_func_uint8_t_u_u(0xEEL, g_652)) | g_572) , l_2335) < 0xA.E53BEAp+48) == 0xD.6D0850p+76)) , g_1232) > g_205) || l_2258) , g_572) & g_445) , (-2L)), l_2384)))))))) != l_2384) < l_2339) , l_2385)), g_205)), g_1257)), 0x2546L)) , g_1012) != l_2257) >= 0x0.Dp-1) != 0xC.4C55D4p-43) < l_2252)), l_2339)) , l_2257), 0x90D3L)) ^ g_573) | 0x29L) >= g_648), l_2335)) || l_2384), 0xCFL)), l_2335)) , l_2335), 1L)), l_2250)) & g_1650), 2)), 0x14L)), l_2335)))))) , g_961)), 27)) || 1L))), 0x4C72L));
                for (g_1969 = 0; (g_1969 == 6); ++g_1969)
                {
                    uint8_t l_2408 = 247UL;
                    int32_t l_2432 = 4L;
                    uint32_t l_2511 = 1UL;
                    if ((g_253 == (safe_sub_func_uint16_t_u_u(g_687, (safe_lshift_func_int32_t_s_s((l_2427 = (((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s(l_2249, ((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((l_2408 < (safe_rshift_func_uint16_t_u_s(((0xB288D06362D0391FLL < (safe_mul_func_uint8_t_u_u((l_2413 , (((safe_lshift_func_int32_t_s_s((safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u((0x70961206F5D8EB1DLL <= (g_1012 , ((g_605 , g_1225) ^ l_2408))), l_2408)) && 0x85ECL), 0xBEF62F3BFFCE4B10LL)) < l_2253) , 0x02L), g_687)) | 0xC55040C767409DA4LL) != g_2259), g_652)) ^ g_1575) , 8L), 0x5AL)), 18)) , g_1256) != 0x6F517053163E0E65LL)), l_2249))) ^ l_2384), 6))) ^ 1UL) , g_1014) <= l_2408), 1UL)), l_2408)), 2L)) , 7UL))) <= g_1226), (-4L))), l_2413)), g_445)), 1)) | g_704) || l_2224) | 0x741822D0L) , g_1966)), g_1226))))))
                    {
                        uint32_t l_2438 = 0x4C7ADB4CL;
                        g_2328 = (l_2305 | (0x96L == ((+l_2335) != g_205)));
                        --g_2433;
                        g_707 |= (((9UL & (safe_lshift_func_int64_t_s_u(0xD6558C6872123F33LL, 24))) > (g_587 = (l_2438 ^= l_2431))) && (g_652 > (g_202 , (safe_lshift_func_uint8_t_u_s((g_1227 ^= g_8), 6)))));
                    }
                    else
                    {
                        uint64_t l_2441 = 0x404AB43449D953AALL;
                        l_2441++;
                    }
                    g_2077 = ((safe_div_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((((+(l_2432 ^= 0x4648L)) <= (((((safe_sub_func_int32_t_s_s((+(g_1012 , ((((g_1236 , l_2335) , ((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_1222 = ((g_373 = (-7L)) <= (l_2250 || ((safe_unary_minus_func_uint32_t_u(l_2431)) >= 0xEBL)))) ^ (0x20L <= l_2335)), 1)), 5L)) || l_2429)) == l_2408) , l_2457))), 0L)) == l_2249) != g_508) , 0x7CL) & g_253)) >= l_2408) & 1UL) ^ g_704), g_875)), g_1966)) , g_2077);
                    if (((safe_rshift_func_int32_t_s_s(((g_604 |= (safe_mul_func_uint16_t_u_u(l_2429, ((safe_lshift_func_int32_t_s_u(((l_2251 = l_2252) > ((0x2FDBL == 0x5F23L) , (safe_mul_func_uint32_t_u_u(((l_2384 && (((safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((g_647 & (l_2472 > (l_2474 &= ((0xF5EEC44AL >= ((g_707 = (l_2473 &= (0xF1B0L && 0xFC94L))) != 0x0BF383F6L)) <= g_285)))) >= g_2077), 1L)), l_2335)) | (-1L)) | g_647)) || l_2472), l_2335)))), 26)) > 0xDA3DB781FC3698F5LL)))) && l_2429), g_965)) && 1L))
                    {
                        l_2432 = ((safe_add_func_int16_t_s_s(0L, g_2259)) , ((safe_mod_func_uint8_t_u_u((l_2251 = (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_707, 8UL)) >= g_1256), (safe_mod_func_int32_t_s_s(((g_2182 = ((safe_rshift_func_uint64_t_u_u(l_2432, 62)) | (safe_mul_func_uint8_t_u_u(g_286, ((safe_mul_func_float_f_f((-((safe_mul_func_float_f_f(0x5.Cp-1, (safe_mul_func_float_f_f((safe_div_func_float_f_f(g_1225, 0xB.BCC05Bp+24)), 0x5.ADD570p+2)))) , g_2081)), l_2247)) , l_2474))))) & g_1225), 0x3C88A403L))))), l_2430)) < 0xA9C5L));
                        return g_1013;
                    }
                    else
                    {
                        int32_t l_2510 = 6L;
                        g_1222 |= (((g_604 = ((safe_div_func_uint64_t_u_u(g_1226, (((((g_1232 || 1L) || ((0UL < l_2335) , ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(g_1262, (-8L))) != (safe_mul_func_uint8_t_u_u(l_2252, (safe_sub_func_int32_t_s_s(g_680, l_2413))))), g_8)), l_2258)) <= l_2432))) | l_2432) , (-1L)) , 0x49708CE379A0505CLL))) >= 0x22ECFDF0L)) < 18446744073709551609UL) && 7UL);
                        l_2511++;
                        g_1964 ^= 0x48AB7CC6L;
                    }
                    g_2328 = (safe_div_func_uint32_t_u_u((g_2182 = (((safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_uint64_t_u((safe_sub_func_int16_t_s_s(g_1147, (safe_div_func_int32_t_s_s((g_1233 ^= ((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u((g_1257 , ((safe_div_func_int32_t_s_s(((safe_rshift_func_int64_t_s_u((g_205 |= (safe_lshift_func_uint64_t_u_s(((((g_194 == (l_2432 = g_573)) && (((safe_rshift_func_int16_t_s_s((((0x724BFDE9C2D2464ELL == l_2258) <= 0x939827BDE8C71406LL) == 0x70E35333B76A3072LL), (safe_div_func_uint16_t_u_u((g_648 = (6L == g_471)), g_704)))) || l_2457) != g_680)) , l_2385) | (-3L)), 46))), 3)) ^ g_1970), g_652)) == g_610)), g_2182)) , l_2473) , l_2539) == 8L), g_1232)), g_610)) , l_2540)), l_2277)))))) ^ (-1L)), l_2384)) == g_647) != 0UL)), 4UL));
                }
            }
            else
            {
                int16_t l_2548 = (-4L);
                int32_t l_2554 = 0xFDE36B28L;
                l_2248 |= ((g_1650 , ((safe_sub_func_int16_t_s_s(((g_700 = (((safe_unary_minus_func_int32_t_s((g_1964 = ((safe_mod_func_uint32_t_u_u((l_2548 < g_1575), 0x627DBBA0L)) > (((l_2554 |= (safe_mul_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u(g_508)), (safe_div_func_uint32_t_u_u(l_2258, 4294967295UL))))) == (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint32_t_u_u((g_1236 <= ((safe_mul_func_int64_t_s_s(((((((safe_add_func_uint64_t_u_u((((((safe_lshift_func_int16_t_s_u((l_2251 , g_1231), 6)) == 0x20L) ^ 0xC08FB7A6L) || l_2474) != 255UL), g_2081)) & 1UL) >= g_205) >= l_2567) == 4294967294UL) || 0xD3629D28L), l_2568)) | g_2077)), g_2021)) <= 4294967292UL), 3)), l_2548))) == g_587))))) > 0x4307B1CEC7297D5ELL) ^ g_410)) | 1UL), 6L)) && 0UL)) ^ 0L);
                if (((~((l_2429 ^= (safe_rshift_func_uint32_t_u_s((safe_mod_func_uint8_t_u_u((0x32L | ((safe_sub_func_int8_t_s_s((((safe_lshift_func_uint32_t_u_s(((((g_1269 = (safe_sub_func_float_f_f((l_2567 == ((g_2034 = ((safe_mul_func_float_f_f((safe_sub_func_float_f_f((l_2567 < ((safe_div_func_float_f_f(0x0.8p-1, (safe_mul_func_float_f_f(0x9.FA2DB5p-26, ((safe_add_func_float_f_f((safe_sub_func_float_f_f(((safe_div_func_uint8_t_u_u(((safe_rshift_func_int64_t_s_u((251UL >= ((~(((g_1965 = (safe_mul_func_float_f_f(((safe_mul_func_float_f_f(g_205, l_2601)) == (safe_div_func_float_f_f((l_2554 < 0xA.9530A0p-86), (-0x1.2p+1)))), l_2601))) , l_2604) > g_1250)) ^ (-8L))), 28)) | g_508), 255UL)) , 0x8.4p-1), g_2605)), g_373)) == l_2548))))) < g_1012)), 0x0.Dp+1)), g_538)) == 0xE.B4B043p-5)) == g_1247)), l_2568))) , l_2540) | g_610) > l_2606), 3)) , l_2554) ^ l_2548), l_2606)) || l_2539)), g_1449)), 21))) ^ g_410)) < 0xF7C7L))
                {
                    uint8_t l_2646 = 0x77L;
                    int32_t l_2676 = (-3L);
                    int32_t l_2686 = 1L;
                    for (l_2601 = (-3); (l_2601 == (-8)); --l_2601)
                    {
                        int16_t l_2611 = 0xDA46L;
                        int32_t l_2628 = 0x5F9395EFL;
                        l_2554 &= (safe_mod_func_uint64_t_u_u(g_605, (l_2611 && (safe_rshift_func_int64_t_s_s(((g_2605 ^= ((safe_rshift_func_uint32_t_u_u(4294967291UL, 28)) ^ (l_2429 <= ((safe_div_func_int8_t_s_s((g_1225 = (safe_unary_minus_func_int64_t_s((safe_sub_func_int8_t_s_s((+((((((g_961 > (l_2429 ^ (((0L == 0x2B40L) && (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((-1L) >= g_410), 0)), 0xE4DDL)), 3L))) <= 0x9441FB235AA8DB13LL))) >= g_1449) <= 18446744073709551615UL) > g_700) <= 0x4D9D2B2AL) >= g_196)), g_875))))), (-1L))) & (-1L))))) > 0xF2L), 62)))));
                        g_1604 = 0xE.7B822Dp+71;
                        l_2629 |= (0x06D72887L != (l_2554 &= g_2077));
                    }
                    g_67 = (g_1227 >= ((safe_sub_func_float_f_f(((((safe_lshift_func_uint16_t_u_u((0x1CC810FEL <= (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(l_2554, l_2548)), ((((l_2540 < (safe_mul_func_uint8_t_u_u((safe_rshift_func_int32_t_s_s(g_2021, (safe_mod_func_int8_t_s_s(l_2646, ((safe_add_func_float_f_f((((safe_add_func_float_f_f((-(safe_add_func_float_f_f((safe_sub_func_float_f_f(0xA.BA9B6Bp-23, (g_1965 = (safe_add_func_float_f_f((safe_mul_func_float_f_f(((safe_sub_func_uint8_t_u_u((g_1257 & l_2539), l_2604)) , l_2548), l_2429)), 0x5.6p+1))))), l_2251))), 0x1.0p+1)) <= l_2246) > g_1267), l_2662)) , g_605))))), g_1250))) < l_2568) > 0x58DB807ACC303781LL) && 0x0B8CL))), l_2548))), g_1225)) , (-0x3.Bp+1)) >= g_1441) > g_610), g_2605)) > g_1257));
                    l_2429 = (g_1225 != (safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int32_t_s_u(l_2662, (safe_sub_func_int16_t_s_s(l_9, (safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((g_1257 & (g_2077 = g_605)) <= (safe_mod_func_uint64_t_u_u(((l_2676 = 0L) > (g_1650 |= g_1225)), (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(g_538, (safe_lshift_func_uint32_t_u_s(g_1254, g_1236)))), l_2256))))))), g_1805)), l_2683)))))) < (-8L)))));
                    g_964 = (l_2247 = ((safe_lshift_func_uint64_t_u_u(((l_2253 , (++g_2687)) , l_2601), 45)) | l_2690));
                }
                else
                {
                    int32_t l_2693 = 0xB0495FE9L;
                    for (g_610 = (-9); (g_610 > (-27)); g_610--)
                    {
                        g_1222 = (-1L);
                        g_546 = (l_2251 <= (l_2694 = l_2693));
                    }
                    return g_1231;
                }
            }
            if (((g_2696 = (g_1233 |= 0x583BE6E6323092BBLL)) == (safe_sub_func_int8_t_s_s(0xF6L, 0xEFL))))
            {
                int32_t l_2707 = 1L;
                int32_t l_2719 = 0L;
                uint8_t l_2720 = 0UL;
                int32_t l_2721 = 0L;
                int32_t l_2722 = 0xD5D775A8L;
                int32_t l_2723 = 0xBE40B53BL;
                int32_t l_2724 = 0x31ACB6BEL;
                g_2182 ^= (g_2198 == ((safe_mod_func_int64_t_s_s((l_2720 = ((g_419 , (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((l_2690 != (safe_rshift_func_uint32_t_u_s(l_2707, ((safe_add_func_int64_t_s_s(l_2710, (l_2719 = (((safe_rshift_func_int32_t_s_u(((g_194 & (((~(safe_lshift_func_uint32_t_u_s((65535UL & g_2605), 3))) | (safe_unary_minus_func_int64_t_s((safe_sub_func_int8_t_s_s((g_2035 > l_2601), g_8))))) || g_129)) || l_2253), 14)) || l_2568) >= g_560)))) < g_687)))), l_2473)) , 0x35L), 4))) , l_2250)), g_1256)) , (-2L)));
                g_2726--;
                l_2724 = g_573;
                --g_2729;
            }
            else
            {
                uint16_t l_2732 = 0x8B9AL;
                uint32_t l_2778 = 18446744073709551613UL;
                int32_t l_2782 = 0x12202AE7L;
                int32_t l_2783 = 0x42FCBB30L;
                if (l_2732)
                {
                    int32_t l_2764 = 1L;
                    int8_t l_2765 = 7L;
                    int32_t l_2781 = 0x5956F9ADL;
                    for (l_2251 = 16; (l_2251 > (-1)); --l_2251)
                    {
                        uint32_t l_2768 = 0x549BB0B2L;
                        int32_t l_2779 = 1L;
                        int64_t l_2787 = 3L;
                        l_2781 ^= ((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(g_648, (safe_add_func_int32_t_s_s(((safe_mul_func_int64_t_s_s(l_2335, (+(safe_add_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((l_2764 = ((safe_rshift_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((((l_2253 <= (((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((g_560 , (((((safe_rshift_func_int64_t_s_s(((safe_add_func_uint32_t_u_u((l_2765 ^= (safe_div_func_int32_t_s_s(0x19DFB507L, (safe_mod_func_int16_t_s_s((-4L), l_2764))))), ((safe_rshift_func_int32_t_s_u((((l_2768 & (((~(safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((((l_2257 >= l_2568) , l_2732) > l_2778) == 0xDF3B4AA75D3F069FLL), 0xCFL)) != g_1226), l_2779)), 0xB47856F6L)), l_2732))) , 0x9C70L) ^ 0xB37EL)) != g_1014) , 0xD495BDF1L), l_2780)) <= 0xB1EF0424L))) <= 0xAD076C7D848B38EELL), 21)) == g_328) | g_704) , l_2732) < l_2335)), g_199)), 5UL)) & 0x1CL) && g_1262)) <= g_647) || g_687), l_2335)), l_2779)) <= (-9L))), 0x455D0812L)) & 0L), l_2457))))) == 0x3EEFL), l_2277)))), 0xBBC93B10L)) && (-4L));
                        l_2784--;
                        if (g_2696)
                            continue;
                        g_2195 = 0x5.76E96Dp+3;
                    }
                }
                else
                {
                    float l_2791 = 0x2.80F177p-60;
                    int32_t l_2792 = 0L;
                    uint8_t l_2850 = 0UL;
                    int32_t l_2851 = 0xEC46F2ADL;
                    for (g_1231 = 3; (g_1231 == 26); g_1231 = safe_add_func_int16_t_s_s(g_1231, 1))
                    {
                        uint8_t l_2793 = 246UL;
                        int32_t l_2804 = 0xDE99990AL;
                        g_713 = (g_2605 < 0x1.Dp+1);
                        ++l_2793;
                        g_2805 = (safe_mod_func_int64_t_s_s((-1L), (((((g_419 , (safe_lshift_func_uint8_t_u_s(((-1L) ^ (safe_add_func_int16_t_s_s((l_2804 = (l_2792 = (safe_sub_func_int32_t_s_s(g_2077, l_2783)))), l_2250))), ((l_2694 ^ ((l_2782 | (g_112 <= 0x98236563B0F5327CLL)) == 0xB5L)) >= 1L)))) | 9UL) <= g_2605) != l_2253) , l_2732)));
                        g_205 = (safe_sub_func_int64_t_s_s(((((((safe_add_func_int32_t_s_s(g_964, g_2805)) > ((g_538 , (-1L)) | (safe_unary_minus_func_int64_t_s(g_2696)))) , (safe_div_func_int32_t_s_s((safe_rshift_func_uint32_t_u_u(((safe_mul_func_int32_t_s_s(l_2457, g_508)) && (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int64_t_s_u(((((safe_mod_func_uint8_t_u_u((l_2606 <= ((l_2804 & 0xEFL) && l_2793)), g_2328)) , g_1013) | g_1227) == l_2710), 45)) , g_1805), l_2804))), 3)), g_587))) ^ g_680) < g_1575) ^ 5UL), 0L));
                    }
                    g_2195 = (safe_add_func_float_f_f((!(safe_mul_func_float_f_f((((g_89 = (g_1965 = (safe_mul_func_float_f_f((safe_mul_func_float_f_f((g_8 < (safe_add_func_float_f_f((safe_sub_func_float_f_f((safe_mul_func_float_f_f((l_2838 > ((0xDC20E012L ^ (((!((safe_div_func_int64_t_s_s((g_707 = ((l_2539 = (safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s(l_2784, g_2077)), 8UL))) >= (l_2601 = (g_1233 | g_1231)))), ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_2257, 13)), l_2792)) ^ l_2850))) ^ 1UL)) & l_2662) >= l_2305)) , g_1267)), l_2606)), 0x2.Dp+1)), (-0x8.2p-1)))), 0xB.055B76p-44)), 0x1.26A283p-84)))) >= 0x0.D7F6D0p-20) != g_2182), l_2792))), (-0x1.Ap-1)));
                }
                l_2852++;
                for (l_2335 = 0; (l_2335 < 1); l_2335 = safe_add_func_uint16_t_u_u(l_2335, 6))
                {
                    int8_t l_2864 = (-1L);
                    int32_t l_2889 = 0xCF0C8AE2L;
                    if (l_2246)
                        break;
                    for (g_1231 = 7; (g_1231 != (-4)); --g_1231)
                    {
                        int32_t l_2888 = 0L;
                        int32_t l_2893 = (-1L);
                        l_2248 = (safe_lshift_func_int16_t_s_u((safe_mul_func_int64_t_s_s(((~(l_2864 == (l_2782 = ((l_2838 && (g_2198 && ((safe_sub_func_int16_t_s_s((-1L), (safe_lshift_func_uint64_t_u_s(g_652, (g_1970 ^= (((+(safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int32_t_s_u(((safe_rshift_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((l_2429 = (65535UL == g_253)), (g_253 ^ ((g_1256 > g_410) , 0UL)))), l_2540)) < 0x7AB1A0F2L) , g_409), 24)) | 0xD9L), 18)), 4)), g_1233)), l_2248))) > g_2182) | 0xEC999D200C5E5343LL)))))) & 0L))) , g_776)))) >= l_2473), l_2778)), 0));
                        if (l_2783)
                            break;
                        l_2890--;
                        g_2894++;
                    }
                }
            }
            g_1251 = g_253;
            for (g_112 = 0; (g_112 < 1); ++g_112)
            {
                uint8_t l_2909 = 253UL;
                uint8_t l_2918 = 0x89L;
                int32_t l_2919 = 0xA11634C1L;
                g_1147 = l_2277;
                for (g_1970 = 0; (g_1970 >= 25); g_1970 = safe_add_func_uint64_t_u_u(g_1970, 9))
                {
                    uint16_t l_2913 = 5UL;
                    uint8_t l_2922 = 1UL;
                    g_875 = (safe_add_func_int16_t_s_s((((l_2919 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((-2L), ((g_704 >= ((l_2257 = (g_196 == ((((safe_add_func_uint8_t_u_u(l_2909, l_2910)) & (safe_mod_func_uint16_t_u_u((l_2913 && ((l_2913 == (safe_mul_func_int8_t_s_s(g_964, ((g_700 = ((safe_sub_func_uint16_t_u_u(g_1247, l_2690)) ^ l_2918)) , g_1232)))) != l_2662)), g_878))) > l_2604) || g_1802))) >= l_2335)) & 1L))), g_1247))) & g_2077) < l_2251), g_2021));
                    for (g_2696 = (-15); (g_2696 < 29); g_2696 = safe_add_func_uint64_t_u_u(g_2696, 4))
                    {
                        int8_t l_2934 = 0x19L;
                        g_1964 &= 0x11CCE0F4L;
                        l_2922++;
                        g_1888 = (safe_add_func_float_f_f((((((0xC07F43FA6C41539ALL == g_1267) & ((l_2919 = (l_2473 == l_2568)) ^ (g_1232 ^= l_2927))) , (safe_rshift_func_int64_t_s_s((g_1225 <= (4294967295UL ^ (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint32_t_u_u(((0x206C48D4L != ((g_410 && l_2662) < l_2919)) , g_961), g_1970)) < 0x1DL), 14)))), 6))) , g_605) >= 0x1.3p+1), l_2927));
                        g_1254 = l_2909;
                    }
                    for (g_2081 = 0; (g_2081 < 41); g_2081 = safe_add_func_int8_t_s_s(g_2081, 8))
                    {
                        return l_2253;
                    }
                }
                for (g_572 = 0; (g_572 <= (-6)); g_572 = safe_sub_func_uint16_t_u_u(g_572, 4))
                {
                    uint16_t l_2949 = 0UL;
                    g_2605 |= (+((g_875 , (safe_rshift_func_int8_t_s_u(l_2942, (((-1L) & (safe_mod_func_uint8_t_u_u(((g_205 & ((l_2251 || (0xDB88544AF6ED6B2BLL == ((l_2250 >= (safe_sub_func_uint8_t_u_u((l_2919 |= (0x4FL == (safe_sub_func_int16_t_s_s(((g_573 <= l_2927) & l_2949), g_373)))), g_1251))) != l_2910))) <= l_2604)) <= g_1257), l_2927))) , l_2949)))) & 0UL));
                    if (g_2021)
                        break;
                    for (l_2258 = 0; (l_2258 >= 28); l_2258 = safe_add_func_int8_t_s_s(l_2258, 8))
                    {
                        return l_2257;
                    }
                    l_2250 = g_1251;
                }
            }
        }
        for (l_2710 = 20; (l_2710 < 11); --l_2710)
        {
            uint32_t l_2960 = 0xC749DC4CL;
            int32_t l_2978 = 0x1D874E17L;
            int32_t l_2979 = (-1L);
            uint8_t l_3048 = 0x9BL;
            uint8_t l_3076 = 2UL;
            for (l_2256 = 0; (l_2256 == (-27)); l_2256 = safe_sub_func_int64_t_s_s(l_2256, 8))
            {
                uint16_t l_2964 = 65528UL;
                const int32_t l_3005 = 1L;
                int16_t l_3024 = 0x3FD8L;
                int32_t l_3026 = 0x7C2F8E12L;
                for (g_2696 = (-10); (g_2696 > 12); g_2696 = safe_add_func_uint64_t_u_u(g_2696, 5))
                {
                    float l_2976 = 0x1.6p-1;
                    int32_t l_3004 = 0x4201A8CBL;
                    uint32_t l_3025 = 1UL;
                    int32_t l_3027 = 0L;
                    for (l_2629 = 0; (l_2629 > 12); l_2629 = safe_add_func_int32_t_s_s(l_2629, 1))
                    {
                        float l_2961 = 0x0.9p+1;
                        int32_t l_2975 = 0x9FD7B753L;
                        int32_t l_2977 = (-10L);
                        g_1269 = 0xA.7A913Bp-91;
                        if (g_2035)
                            continue;
                        l_2978 = ((l_2254 ^= (((safe_div_func_uint16_t_u_u((l_2964 ^ ((safe_lshift_func_int8_t_s_s((l_2979 |= ((g_648 = ((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((l_2413 , (safe_div_func_int64_t_s_s(g_328, (safe_div_func_int64_t_s_s(g_2182, ((g_604 = ((g_2981++) <= 0x994ED0ACL)) & ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int64_t_s_s(0xA3A640EEF7930499LL, 10)), 9)) > l_2975))))))) , ((safe_mul_func_uint16_t_u_u((g_2198 , (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int32_t_s_s((((l_2249 = (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(g_1964, g_1250)) < l_3004) >= g_1983), g_1964)), g_253)), l_2964)), 0x4EL))) & 65534UL) , g_2021), g_647)) && g_711), 5))), g_1254)) , 2L)), 2)), g_1964)) ^ 0x0511A201L) || g_202) < g_2980)) & g_1147)), l_2960)) != 0x0B6DE313L)), l_2224)) , g_1254) ^ l_3005)) > 0xF3L);
                    }
                    l_3004 = ((((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u((l_2457 != (l_3027 &= ((((((+(l_2978 ^= (safe_sub_func_uint64_t_u_u((g_1222 = (l_3004 == 0xD0L)), g_648)))) , (l_3026 = (((g_707 = (((safe_add_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(((((g_2182 |= (g_194 > ((safe_rshift_func_int64_t_s_s(g_129, (((g_1970 = (g_2433 | ((safe_mul_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((safe_mul_func_uint64_t_u_u(l_3024, (((g_605 >= 0x846348B7L) , l_3025) >= g_1257))) ^ 18446744073709551615UL), 1L)) , l_3025), g_572)) , g_1257))) , g_1147) | g_129))) & l_2472))) >= g_1147) <= 0xB4C0771206CFD95DLL) >= 8UL), g_253)) == g_1650), g_875)) > 0x6F0334A828B2ABE1LL) >= g_652)) && g_1254) >= g_1964))) ^ l_2964) & g_373) , g_202) || l_2567))))) < 0xA4L) != l_2960), 0xCB06L)) == l_2964) , 0x01C3L) != g_419);
                    l_2246 |= (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint64_t_u_s((((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s(l_2979, (-6L))), l_3004)) , (l_2327 &= (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(((g_1970 &= (((-7L) | g_652) | (((((safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint32_t_u(l_2790)))) && 0x490CEB9DL) & (l_2606 ^= (--g_3044))) & 1L) > g_1257))) <= l_3047), l_2252)) && g_538), 0x759D99B5L)), l_2964)))) >= l_2960), 27)) , g_410), g_112));
                }
            }
            g_648 = (l_3048 && (((!((((l_2606 = ((((safe_mul_func_uint32_t_u_u((!g_445), (safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((~(safe_sub_func_int32_t_s_s(l_2253, ((g_205 = (((safe_div_func_uint8_t_u_u((g_2328 , ((l_2256 = g_572) | (safe_div_func_uint8_t_u_u((0x05L == (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_1802, 1)), (safe_div_func_uint16_t_u_u((g_1964 = ((safe_lshift_func_int64_t_s_u((-1L), 42)) != (l_2960 , l_3076))), 3UL)))), 0L)), g_324))), 0xBFL)))), g_1232)) | 4294967295UL) & 0x9CD0CD85DE450695LL)) >= g_2980)))) < l_2978), g_1969)) != 1UL), 252UL)))) == 6L) , l_2629) | 0x26270192L)) > l_2960) < g_409) > l_2979)) > g_129) && g_1013));
            g_3078++;
            if (l_2224)
                continue;
        }
        if (((safe_mod_func_int64_t_s_s(g_1232, (safe_lshift_func_int32_t_s_s((safe_div_func_int32_t_s_s((g_2726 | 0x27L), ((l_2246 ^= (g_2980 = 0x13L)) , g_1257))), 24)))) || (g_3078 | (1L == ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint64_t_u_u(((l_2256 || (g_445 = ((((safe_add_func_uint32_t_u_u((g_410 > l_2250), g_373)) < l_2277) | g_2077) , g_445))) != l_2567), g_1257)) , g_1983), g_587)) > g_711)))))
        {
            int8_t l_3102 = 0x21L;
            int32_t l_3122 = 1L;
            int32_t l_3123 = 0x3ECCE287L;
            uint16_t l_3131 = 0x645DL;
            const int32_t l_3153 = 0x7AD951D8L;
            uint32_t l_3209 = 18446744073709551609UL;
            int16_t l_3218 = 0x0830L;
            const int8_t l_3258 = 0x95L;
            uint16_t l_3337 = 0x85C5L;
            const int32_t l_3340 = 0xB07F558AL;
            uint32_t l_3558 = 18446744073709551611UL;
            int32_t l_3677 = 0xDCA640FDL;
            int32_t l_3678 = 0xF292045DL;
            int32_t l_3679 = 0x861CCF7BL;
            int32_t l_3680 = 0x0C339602L;
            int32_t l_3681 = 0x41634921L;
            int32_t l_3685 = 0L;
            l_2258 = g_324;
            if ((safe_rshift_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(l_2838, g_1262)), 42)))
            {
                int8_t l_3101 = 0x29L;
                int32_t l_3113 = 0x90784C2CL;
                int32_t l_3124 = 0xC75C4FE0L;
                int32_t l_3156 = 0x36AD14E4L;
                int8_t l_3189 = (-6L);
                uint32_t l_3228 = 0x9CE4F884L;
                uint32_t l_3432 = 0UL;
                uint16_t l_3451 = 65532UL;
                l_3124 = (((g_3044 = ((safe_mod_func_int64_t_s_s((g_205 = (l_3123 = (((l_3101 && l_3102) ^ ((safe_mod_func_uint8_t_u_u((l_2710 , (safe_mod_func_uint64_t_u_u(((l_3122 ^= (safe_lshift_func_uint8_t_u_s(g_1256, ((safe_sub_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u((l_3113 = g_286), (safe_unary_minus_func_uint64_t_u(((safe_rshift_func_int8_t_s_u((g_560 , ((g_2805 == ((safe_rshift_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_3101, (0x7CL >= g_3078))), 29)) > g_2980)) != g_1257)), g_587)) ^ 0L))))) || g_2077) <= 0x80L) < l_3121), g_409)) , g_2198)))) , 0UL), 0x028F97475676C22ALL))), l_2255)) , 247UL)) | 0L))), g_875)) ^ g_648)) == 1UL) , 2L);
                if (((2UL != ((+(safe_add_func_uint16_t_u_u((~((safe_mul_func_int8_t_s_s(l_3124, (l_3113 < (l_2780 | g_1233)))) && (l_3124 = l_3131))), l_2253))) ^ (safe_rshift_func_uint64_t_u_u((safe_mul_func_uint64_t_u_u(l_2250, g_131)), l_3122)))) ^ 2L))
                {
                    return l_2252;
                }
                else
                {
                    float l_3150 = 0x1.8p+1;
                    int32_t l_3152 = (-1L);
                    int32_t l_3157 = (-1L);
                    if (((((safe_mul_func_int64_t_s_s(g_2433, g_1970)) > ((0x4AL == (safe_sub_func_uint16_t_u_u((l_3122 = (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((-4L), g_1226)), ((((((((g_707 = (l_3123 , ((g_1254 >= (g_1267 = ((g_196 > (safe_div_func_uint64_t_u_u(((l_2254 < 0UL) < 0L), g_445))) , 0UL))) > 0x22C8L))) & g_1262) || l_3122) , l_3151) >= (-1L)) | l_3123) == 0x7219L) <= 0x20L)))), 0xFB4FL))) , g_1257)) , l_3152) <= l_3153))
                    {
                        int64_t l_3154 = 0xF012C0386D2C41B9LL;
                        int32_t l_3188 = 0x454A719AL;
                        g_3160++;
                        g_1888 = (safe_div_func_float_f_f(g_194, l_3154));
                        g_205 = (safe_sub_func_int16_t_s_s((g_1226 <= (((safe_mul_func_int64_t_s_s((safe_div_func_uint16_t_u_u((g_1222 = ((safe_lshift_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u(((g_3044 = (safe_rshift_func_uint64_t_u_u(g_1449, 39))) > (l_2257 = (l_3157 != (((((+0x09L) , (safe_mul_func_uint8_t_u_u(((g_1964 = l_3122) , (((safe_div_func_int8_t_s_s((((((safe_rshift_func_uint16_t_u_s((l_3188 = (g_196 > (safe_sub_func_uint16_t_u_u(1UL, (safe_lshift_func_uint32_t_u_s((g_1964 = (++g_3190)), 4)))))), 2)) , g_965) || ((safe_lshift_func_uint16_t_u_s((l_2942 |= (safe_add_func_int8_t_s_s((((0xD5L != l_3189) > l_3154) > g_573), g_1012))), l_3113)) == l_3101)) & g_1970) | g_2696), g_878)) != 0x41L) || 0xB6L)), g_648))) && g_1231) & l_3154) != g_3160)))), l_2567)) , 0L) > g_1256), 23)) != 0x1DL)), l_2250)), g_2981)) , g_961) | g_704)), l_2277));
                    }
                    else
                    {
                        return g_610;
                    }
                }
                if (((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(0xFC913566L, l_3203)) == l_3113), (((safe_sub_func_uint32_t_u_u((l_2567 , (g_285 , ((l_3124 = (+l_2248)) , ((g_1969 <= (l_3207 || l_3121)) >= 0xB59AB270EF794D72LL)))), l_3207)) || l_3208) != 0x9FL))) & 0xD3L), 8)) ^ 0x5A4D33CEL))
                {
                    int32_t l_3255 = 1L;
                    float l_3256 = 0x2.2p-1;
                    l_3209--;
                    for (g_1254 = 0; (g_1254 > 1); g_1254 = safe_add_func_int64_t_s_s(g_1254, 2))
                    {
                        int8_t l_3225 = 9L;
                        int32_t l_3226 = 0x5243AB3EL;
                        l_2255 &= (safe_div_func_int16_t_s_s((((((((l_2256 = (safe_add_func_uint32_t_u_u(g_964, 0UL))) & (((l_2385 < l_2780) > (l_3218 && (safe_div_func_int8_t_s_s(0x66L, (((g_205 = (safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u(((g_253 ^ (0x0B21E09979DC11BDLL >= (--l_3228))) > g_1236), g_1650)), 6L))) <= g_572) || l_3225))))) , (-1L))) != l_3207) | g_3155) | g_373) != g_572) , g_2198), l_3226));
                        g_1222 |= (safe_mod_func_int64_t_s_s(l_2257, (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u(((g_2687 >= (0x7E0C26A1L == (l_3156 = (g_2182 = ((((g_1257 = (l_3113 |= 0xB8C8L)) && ((!(g_700 = ((safe_add_func_uint16_t_u_u((((((safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((((((l_3225 >= 0UL) && (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_2605, (safe_unary_minus_func_int16_t_s(g_285)))) , ((l_3124 = (g_3155 || l_2250)) & 0xD1L)), l_2250))) | l_3255) > l_3218) && 8L) > 0x45A5L) ^ g_3190), (-8L))), 1L)), l_3101)) , g_2328) >= 0x6A6C64559C5B4864LL) > g_560) < g_1449), g_1227)) & l_3101))) <= l_2385)) <= g_419) != g_131))))) , g_1966), g_373)) >= l_3209), g_1236))));
                        if (l_3257)
                            break;
                    }
                }
                else
                {
                    g_8 = g_2687;
                }
                if ((1L < ((((((l_3258 && (g_419 = l_2629)) , ((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((((safe_lshift_func_int32_t_s_s(g_2605, g_1805)) || (safe_rshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u(l_3258, 2L)) == (((safe_rshift_func_int64_t_s_u(((((safe_rshift_func_int8_t_s_s(l_3047, 7)) ^ (safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u(8UL, g_2197)) > 1UL) || g_1236), 0UL)), l_3228))) || g_1225) ^ 9UL), 18)) == l_3122) || g_2687)), 7))) < 0xB7A391A9L) || 65526UL) >= 0x60A0L), l_2790)), l_2289)) || l_2339)) | l_3124) > l_3101) && l_3123) , g_2328)))
                {
                    uint8_t l_3279 = 254UL;
                    int32_t l_3294 = 0x1E58CBD2L;
                    float l_3357 = 0x8.AD4F00p-81;
                    if ((l_3218 || (l_3102 | l_3279)))
                    {
                        uint32_t l_3289 = 0x801923F8L;
                        const uint8_t l_3292 = 1UL;
                        int32_t l_3295 = 0xBB2DFC3CL;
                        g_713 = ((((-0x1.3p-1) == (safe_add_func_float_f_f((g_546 = ((safe_div_func_float_f_f(g_1983, ((l_3218 == (l_3286 > ((safe_rshift_func_uint64_t_u_u(((g_2805 < ((l_3289 & (l_3131 >= (safe_sub_func_int64_t_s_s(0L, (g_687 | 0x4B24L))))) > 251UL)) , l_3292), l_2629)) < g_878))) , g_707))) < l_3293)), 0x1.B42627p-76))) >= l_3189) > g_878);
                    }
                    else
                    {
                        float l_3296 = 0x7.B6438Dp-38;
                        int32_t l_3312 = 1L;
                        g_1966 = g_2725;
                        g_1964 &= (l_3122 = ((safe_rshift_func_int16_t_s_s(((0xBB1D566BL & l_2339) > l_3153), 7)) && (!(safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_3294 |= g_2894), (((g_560 >= 4294967294UL) || (safe_add_func_uint32_t_u_u(g_1256, ((((safe_lshift_func_uint32_t_u_u((safe_add_func_int16_t_s_s(0x7A9FL, (safe_rshift_func_int64_t_s_s(((g_1970 &= g_1225) < 0xEAEE3A10L), 25)))), l_3113)) , l_3312) < g_1966) ^ l_3151)))) || 0xD5L))) > g_1969), 0x023CL)))));
                    }
                    g_3159 = (safe_div_func_float_f_f(l_2327, ((-((safe_add_func_float_f_f((g_1888 = (g_713 = (safe_div_func_float_f_f(l_3218, (safe_div_func_float_f_f(g_1888, ((safe_div_func_float_f_f((((g_2034 = (+(g_1269 = (safe_mul_func_float_f_f((safe_sub_func_float_f_f(l_3279, (((((!((l_2246 < ((0x0379L <= ((safe_rshift_func_uint64_t_u_u(0x5CDC6439D4771C32LL, ((safe_lshift_func_uint16_t_u_s(l_2289, 0)) != (safe_sub_func_uint8_t_u_u(g_573, l_9))))) < 0UL)) != g_878)) | 0x74L)) , g_286) <= 0x1.8p-1) != 0x1.Ap-1) <= 0x0.1p+1))), g_324))))) < g_2805) >= 0xB.9417C1p-29), l_3102)) >= g_196))))))), l_3131)) == l_3279)) != l_3294)));
                    g_604 |= ((g_648 &= ((g_1964 = (((+g_3158) && l_3340) == ((safe_div_func_int8_t_s_s((l_3124 = ((safe_mul_func_uint32_t_u_u(2UL, (((((safe_add_func_uint32_t_u_u(((g_652 = ((((((((((g_707 = (safe_mod_func_int16_t_s_s(((0x9DEAL != (-1L)) ^ ((safe_rshift_func_int32_t_s_s(((((g_538 > (-1L)) >= (safe_mul_func_int16_t_s_s(((((((((safe_div_func_int16_t_s_s(((((l_3113 < (safe_mod_func_int16_t_s_s(((g_205 ^= ((g_1262 != l_2258) & g_2081)) || l_3279), g_587))) >= 0xFF89L) > g_3078) > g_1257), 1L)) < l_3294) >= g_652) >= 18446744073709551607UL) >= 18446744073709551615UL) && g_1147) , l_3207) <= g_8), 0x83B1L))) == l_3208) >= 8UL), g_2805)) < 0xCCDFFC34E5944F23LL)), l_2251))) && 7L) , 0x0C3B7BB7EE369FFBLL) ^ g_1232) , 0xCFL) || l_3294) | 0xBFL) , g_605) , l_3218) , g_445)) == 0UL), g_1267)) | 8UL) , g_560) <= l_2927) , l_3228))) ^ (-1L))), 250UL)) < 3UL))) == l_3101)) == g_3358);
                }
                else
                {
                    uint16_t l_3384 = 0xB7DDL;
                    int32_t l_3418 = 0x87D80D89L;
                    uint32_t l_3419 = 18446744073709551612UL;
                    g_2328 = (safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(0x8C18D4CD6C19CBDCLL, ((l_2254 = (g_3367--)) > ((((l_2327 = (g_2605 ^= (safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s(g_647, (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((g_2805 , (safe_rshift_func_int16_t_s_u((-1L), 8))), (safe_mod_func_uint16_t_u_u(l_2710, (g_1969 = g_1966))))), (safe_mod_func_uint16_t_u_u((((l_3384 | ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_s((((+((safe_rshift_func_int64_t_s_u(((safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(((~(safe_rshift_func_int16_t_s_u(6L, (safe_mod_func_int16_t_s_s((safe_rshift_func_int32_t_s_u((safe_lshift_func_uint64_t_u_u((((l_3156 != g_3155) ^ 0xA27663E52634F5D5LL) || g_647), l_3156)), g_1262)), g_373))))) == 18446744073709551615UL), g_3403)))) || g_1262), 32)) != g_129)) != g_604) && 0xE0D0CF20L), g_680)))) & 1L)) , 18446744073709551615UL) & g_131), g_538)))))) , g_1969) && l_2249), 0x986F102C96BB572BLL)))) >= l_2256) <= g_652) ^ g_373)))) & 0xC632L), l_3384)), 0x1C4AL)), l_3384));
                    g_1964 = (g_445 >= (safe_div_func_uint32_t_u_u(((((((safe_mod_func_uint64_t_u_u(((safe_div_func_int64_t_s_s(g_2981, (safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((((safe_mul_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u((l_3419++), (g_587 | l_3121))) >= g_1966), ((safe_mul_func_int64_t_s_s(((safe_rshift_func_int32_t_s_u(l_3101, (l_3418 = (4294967295UL >= (safe_div_func_uint32_t_u_u((l_3418 ^ ((safe_rshift_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((0xF7205E8AL & l_3384), 5)), 28)) >= (-5L))), 0x304E43CFL)))))) && l_3336), l_2248)) != g_2894))) > l_3102) >= 3UL) , l_3218), 0x772FL)), 0xA8C2C5D1823E477BLL)))) < g_1964), g_652)) <= l_3432) > 0x0C0F9451195031CBLL) <= l_3101) | g_1012) > (-1L)), g_652)));
                    g_1964 = ((safe_div_func_int64_t_s_s((((safe_add_func_int16_t_s_s((0xCBC77A3713225688LL || (!((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_1225, g_199)), (((!l_2339) || (g_604 &= ((safe_rshift_func_uint64_t_u_u(((safe_sub_func_float_f_f((l_3447 , ((safe_add_func_float_f_f(g_3190, ((+l_3451) < ((safe_mul_func_float_f_f((g_1965 = (safe_mul_func_float_f_f((g_67 = (safe_add_func_float_f_f(((((safe_sub_func_float_f_f(0x6.Bp-1, ((safe_mul_func_float_f_f(((safe_mul_func_float_f_f((safe_add_func_float_f_f(((safe_add_func_float_f_f((g_546 = ((((((g_1965 <= 0x8.Bp+1) <= l_3468) < 0x3.2A2F85p-48) < 0x2.9284A7p+54) != l_3384) < 0x7.FFBF93p-96)), g_2035)) > g_1225), 0x0.Ep+1)), g_2981)) <= g_3403), g_1449)) > 0x0.37390Bp+60))) , (-0x3.6p+1)) >= l_2248) == 0x0.4p-1), g_1225))), g_538))), 0x9.23880Fp-54)) > l_3102)))) , 0xB.BB6121p-56)), 0x5.6p+1)) , l_3384), 57)) != 0x9C51B008L))) && g_605))) != 1UL))), 3L)) ^ 1L) ^ g_3190), g_3358)) == 0UL);
                }
            }
            else
            {
                uint8_t l_3498 = 0xFBL;
                int32_t l_3517 = 0xB3FA02D2L;
                int32_t l_3528 = 0xD318A105L;
                uint16_t l_3529 = 0x1D46L;
                int16_t l_3530 = (-1L);
                g_1970 |= (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((g_1802 , ((((safe_mod_func_uint16_t_u_u((g_704 &= ((((safe_div_func_uint32_t_u_u(((((safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s((g_776 ^ (safe_sub_func_uint8_t_u_u((+(safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((l_3517 = (safe_mod_func_int64_t_s_s((((((((safe_div_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s((l_3529 = (l_2606 = (((safe_mod_func_uint16_t_u_u((9UL & ((safe_unary_minus_func_uint64_t_u((l_3498 <= ((safe_rshift_func_uint64_t_u_u(g_1969, 63)) | ((safe_lshift_func_int64_t_s_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((((l_3447 && ((l_3528 ^= (((safe_mod_func_int8_t_s_s((((l_3498 && ((safe_div_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((g_573 | ((g_3518++) , (safe_lshift_func_uint64_t_u_s(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_2252, l_3077)) , l_3527), l_3517)) > g_2726), g_711)))), 3L)) ^ 0xD0DFE9DDL), (-3L))) | 0x35A4A02A6E67C4FALL)) || g_328) < g_131), 255UL)) || l_2251) >= l_3102)) , (-7L))) == l_3498) >= l_3517) && g_1650) ^ g_2696), g_1225)), g_410)), 28)), 1)), g_1222)) > g_1247))))) != 4L)), l_3517)) & l_3517) | l_2457))), 0x2C04L)) != 0UL) && 0x0ADE3984L), 0x906D5524L)) , l_3257) , 0xBBBDL) || g_410) & g_373) <= 0xE15ACB89F5EE54B5LL) , 0x8CF5425B7A21D7F4LL), (-10L)))), 2)), g_1267))), 0xFFL))), 1UL)), 0x0BD09A8DL)) <= g_2687) , g_67) , 1UL), 0x9D017491L)) | l_3257) , g_2081) , g_199)), 65535UL)) & g_445) && l_3077) ^ g_1449)), l_3530)) & l_2942), 0xCAEFL));
                g_648 ^= ((safe_lshift_func_int64_t_s_s(g_3044, ((+((safe_mul_func_int32_t_s_s(g_707, (+0xAF0FD41DL))) < ((g_2182 = ((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((((l_3257 |= (safe_mul_func_int32_t_s_s(((safe_unary_minus_func_uint64_t_u(((0xC96EL && g_3338) && (safe_unary_minus_func_int16_t_s((safe_add_func_uint64_t_u_u(l_3529, (safe_sub_func_int64_t_s_s((l_3153 | ((g_1012 = l_3102) == 0x1ABFL)), 0xD5CEFEE895C14DD8LL))))))))) || (-1L)), 0x1FBD2A9AL))) || g_286) >= g_3155) < 0UL), g_8)), 1L)) < g_878)) == g_1236))) , l_3551))) == 0xDCB470B0FFE35676LL);
                if ((((g_648 &= (g_1257 >= l_3122)) , g_538) >= g_2259))
                {
                    int64_t l_3572 = 0L;
                    int32_t l_3588 = 0xDE2CE383L;
                    if ((((g_1262 , ((safe_mul_func_float_f_f(g_687, (g_67 = ((0x6.17CDA3p+80 == l_3077) > (g_1256 >= (safe_sub_func_float_f_f((0x6.2p-1 >= l_3203), 0xC.AAE145p-17))))))) , ((0x67F8L >= 0x28C7L) || l_3218))) , g_328) & 1UL))
                    {
                        uint32_t l_3583 = 18446744073709551615UL;
                        g_1964 = (((safe_mul_func_int64_t_s_s(((l_3529 > (g_680 = g_445)) == ((l_3558 < (g_3078 >= l_3498)) < ((g_196 = (-1L)) , ((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_int64_t_s_s((safe_sub_func_int8_t_s_s((l_2472 && ((safe_mul_func_uint64_t_u_u((~(safe_mod_func_int16_t_s_s(0xA647L, (((l_3123 = (((l_3528 = (1L ^ l_3258)) ^ 9UL) & g_8)) && (-1L)) & l_3122)))), l_3517)) | g_1805)), g_285)), l_3572)), g_1262)), g_205)) >= 18446744073709551615UL)))), 0x5ED91AADC763A87DLL)) >= g_538) >= 0x3C9B25703FDDF945LL);
                        g_587 = (safe_add_func_uint32_t_u_u(l_3572, (safe_sub_func_uint64_t_u_u((l_3572 , (safe_mul_func_int16_t_s_s(((g_604 &= (((safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(0x1BL, (l_3583 != (l_3517 && ((!(safe_add_func_int16_t_s_s(l_3587, ((l_3588 = (4294967295UL == 0xDC87AA12L)) && (safe_unary_minus_func_int8_t_s(0x0EL)))))) < 0L))))) == 0x6FL), l_3572)) , (-1L)) <= g_1222)) || g_610), l_2247))), g_1802))));
                        l_3517 = (g_604 &= ((l_3572 >= (safe_lshift_func_int32_t_s_u((((((((safe_rshift_func_int8_t_s_s(0xCCL, g_2981)) , ((g_3606 = (safe_rshift_func_uint64_t_u_u((((g_3604 = (((((g_1225 = (safe_rshift_func_int16_t_s_s(g_711, (((l_2277 && g_3338) ^ (g_2182 &= l_2254)) <= g_2328)))) || (safe_div_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((l_3469 , 0L) || l_2305), g_2981)), g_3367)) >= (-1L)) != 0x9CF2B6701D801338LL), g_776))) == l_3469) != g_1650) || g_610)) ^ l_3605) <= (-1L)), 1))) > 65528UL)) > l_3102) | 0x8F7C411798680A95LL) == g_1236) | g_652) < l_3131), 14))) != 18446744073709551615UL));
                        return g_1231;
                    }
                    else
                    {
                        int32_t l_3607 = 0x9434B1CDL;
                        return l_3607;
                    }
                }
                else
                {
                    float l_3610 = 0x5.A825D1p+71;
                    int32_t l_3623 = (-5L);
                    g_2198 = g_2894;
                    g_67 = (safe_sub_func_float_f_f(((g_1965 = ((l_2277 > l_3610) == (safe_sub_func_float_f_f(0x0.6p-1, ((g_1231 <= ((safe_mul_func_float_f_f(((g_1269 = (safe_sub_func_float_f_f((safe_add_func_float_f_f(0xC.458B65p+94, (((safe_div_func_float_f_f((safe_add_func_float_f_f(l_3529, l_3623)), ((((safe_sub_func_float_f_f((((l_3517 != (((safe_div_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((g_587 = (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((-2L) || g_1013), g_1236)), l_3530))), l_2413)) < 0xE650L), 0x08L)) , l_3530) , (-0x1.Bp+1))) < 0x2.Cp-1) <= g_196), l_3153)) <= 0x9.904308p+8) < g_875) >= g_2980))) <= 0x7.2FD0F8p+31) != 0x9.D654DFp+64))), 0xE.F141A0p+89))) <= l_3530), 0x8.8p+1)) != g_875)) != g_1226))))) > l_3634), 0x0.Fp-1));
                }
                return g_1247;
            }
            for (l_2254 = 2; (l_2254 == 3); l_2254 = safe_add_func_int16_t_s_s(l_2254, 4))
            {
                uint8_t l_3649 = 0UL;
                int32_t l_3674 = 0x6AFF2FCAL;
                int32_t l_3675 = 0x7498A92AL;
                g_1970 = ((l_3293 |= ((((safe_mul_func_uint16_t_u_u(l_2540, (g_878 = ((safe_rshift_func_int32_t_s_s(0L, g_2433)) , (safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint64_t_u_s((l_3649 , 1UL), 12)), (((((+(safe_add_func_uint8_t_u_u((l_2258 = l_3649), (--g_3654)))) , (((((g_445 <= (safe_add_func_int64_t_s_s((safe_rshift_func_int32_t_s_s((-5L), 1)), ((l_3209 > 0x24L) && l_3661)))) | g_573) & g_2035) ^ g_1575) & g_687)) <= 0x7E366991L) , 18446744073709551615UL) >= g_2021))), l_3337)) ^ g_572), g_1147)))))) != l_2413) , l_3558) | g_3653)) & g_1256);
                g_3159 = (g_89 = (safe_add_func_float_f_f((((((safe_rshift_func_int64_t_s_s(l_2250, 50)) == l_3131) | (safe_lshift_func_int16_t_s_u(l_3649, ((((safe_lshift_func_int32_t_s_u((safe_div_func_uint16_t_u_u(l_3131, 0x8660L)), 14)) >= (g_1650 ^= (safe_sub_func_uint8_t_u_u(l_3122, 255UL)))) < (g_373 |= g_419)) , (l_2942 = g_1247))))) & l_2305) , 0x0.4p+1), l_2540)));
                g_707 = 0xEBDCEBD2L;
                g_3686++;
            }
        }
        else
        {
            const uint32_t l_3709 = 1UL;
            for (l_2258 = 0; (l_2258 == 17); l_2258++)
            {
                const int32_t l_3711 = (-3L);
                int8_t l_3712 = 0xE2L;
                int32_t l_3713 = (-1L);
                l_3713 = (safe_div_func_uint64_t_u_u((safe_lshift_func_uint32_t_u_s(0x608F65DBL, 10)), (g_707 |= (g_1267 == (((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((((l_2257 || ((safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((((((safe_add_func_uint64_t_u_u((0UL == l_3709), 0xFACE4F3C9E2E36A0LL)) && (((18446744073709551615UL < g_1013) >= (g_680 && g_2605)) <= g_2182)) | l_2838) != 18446744073709551608UL) && 0L) || 0xE760B898L), g_2687)) , l_3710), g_2805)) == 0x06A76BA008BEDEBCLL)) , 0x313F9B95L) == l_2567), 2)) || l_3711), l_3712)) , l_2838) >= 1L)))));
            }
        }
    }
    g_3717++;
    return l_2224;
}
int8_t func_4(uint64_t p_5, int16_t p_6, int32_t p_7)
{
    int32_t l_14 = 0x10789328L;
    int32_t l_1450 = 0xD2C7166FL;
    int32_t l_1534 = 0xB717E545L;
    int32_t l_1535 = 0x406A4F76L;
    int32_t l_1543 = (-2L);
    int16_t l_1647 = 0x8080L;
    int8_t l_1667 = 0x31L;
    uint64_t l_1678 = 0xB55CECDDA531A09FLL;
    int8_t l_1798 = 0x4CL;
    uint64_t l_1878 = 18446744073709551615UL;
    uint8_t l_1879 = 0x60L;
    int16_t l_1893 = 0xA27DL;
    uint8_t l_1940 = 0x05L;
    float l_1977 = 0x1.2p-1;
    uint32_t l_2005 = 0xFF741950L;
    int32_t l_2024 = 0x3B6D038EL;
    int32_t l_2025 = 0x8D9E2B77L;
    int32_t l_2026 = (-1L);
    int8_t l_2027 = 0x45L;
    int32_t l_2028 = (-5L);
    int32_t l_2029 = 0x226EDE56L;
    int32_t l_2030 = 1L;
    int32_t l_2031 = 0xC0696D8DL;
    int32_t l_2032 = 0xF50C01ADL;
    int32_t l_2033 = 0xA6AAEECFL;
    uint32_t l_2054 = 4UL;
    int16_t l_2101 = (-6L);
    int16_t l_2106 = 0x49EEL;
    float l_2111 = 0xC.660781p+82;
    uint32_t l_2168 = 0xE6FE5FEAL;
    int64_t l_2181 = (-1L);
    p_7 = ((func_12((l_14 != 0UL)) < ((((safe_mul_func_int8_t_s_s((l_1450 = (safe_rshift_func_uint16_t_u_u((((p_5 , (p_7 > l_14)) , ((g_1449 = ((safe_rshift_func_uint16_t_u_u(l_14, g_1250)) > ((65531UL ^ p_5) | l_14))) == g_1227)) >= g_285), g_1225))), p_5)) <= (-1L)) == (-9L)) < p_5)) ^ l_14);
    if (p_5)
    {
        uint8_t l_1459 = 255UL;
        int32_t l_1468 = 0xE111B2E0L;
        int32_t l_1492 = 1L;
        l_1468 ^= (((safe_lshift_func_uint64_t_u_s(((0x22CC74E265C20BD6LL >= (safe_mod_func_int16_t_s_s(p_7, (safe_add_func_uint16_t_u_u(((((l_1459 = (safe_mul_func_uint32_t_u_u((p_6 | 0UL), 0x4282CCBEL))) , (safe_mul_func_int16_t_s_s(((l_1450 = g_1226) <= (4294967286UL & (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(l_1459, l_14)) , p_7), 2)) == 1L), p_7)))), p_5))) < g_647) & p_5), g_1231))))) | l_14), g_1247)) ^ g_1233) , 0x038D5C04L);
        l_1492 ^= (safe_lshift_func_uint16_t_u_s(((g_419 |= (-7L)) == (((((((safe_lshift_func_int8_t_s_u((safe_mul_func_int64_t_s_s(p_6, (((g_285 || ((safe_add_func_int64_t_s_s(0L, ((safe_add_func_uint32_t_u_u(l_1468, 0xB9AB9EAEL)) , (((p_7 |= ((((safe_mod_func_uint8_t_u_u(l_1459, (safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((+g_560), ((safe_sub_func_int8_t_s_s((g_700 ^ p_5), (-6L))) & 0xA32865DB5F1CDC9CLL))), p_5)), 1UL)), (-10L))))) == g_1233) , 6UL) && p_6)) & g_878) , p_5)))) | l_1468)) ^ p_6) && 1UL))), 5)) | g_131) , l_1450) == 0xD2FCA3FCL) | (-1L)) >= 1L) >= (-4L))), 9));
        g_286 &= (safe_mul_func_int64_t_s_s(g_707, (((safe_sub_func_int64_t_s_s(l_1492, (safe_rshift_func_uint16_t_u_u((((safe_mul_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((safe_rshift_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((p_6 && l_1492), ((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((l_14 ^ (safe_sub_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u(((((p_7 , 0x1.8DD6A8p-8) < (safe_mul_func_float_f_f((safe_div_func_float_f_f(((safe_add_func_float_f_f(p_7, ((safe_add_func_float_f_f((((g_587 = l_1450) < p_5) < l_1492), g_1231)) <= 0x1.CAA6A2p+85))) < l_1450), p_7)), p_6))) == g_1222) , p_6), g_324)), p_6))), 6)), l_1450)) > p_5))), 16)) == 0xAC25L), l_1459)) & 0xB50267C1L), g_285)) , l_14) , 0x4228L), 7)))) > l_1459) <= 0xA644EE3421122834LL)));
    }
    else
    {
        uint32_t l_1526 = 0x7AA991EDL;
        int32_t l_1532 = (-8L);
        int32_t l_1537 = 0x57039FE5L;
        int32_t l_1540 = 1L;
        int32_t l_1541 = 0xF3416135L;
        int32_t l_1542 = (-1L);
        uint64_t l_1544 = 1UL;
        uint32_t l_1547 = 1UL;
        uint64_t l_1863 = 0xD3821AE68A8B1122LL;
        uint16_t l_2003 = 0x82E1L;
        uint8_t l_2017 = 0x93L;
        for (g_253 = (-4); (g_253 <= 13); g_253 = safe_add_func_int64_t_s_s(g_253, 3))
        {
            int64_t l_1525 = 0x0BAC863691C6DEAELL;
            l_1526++;
            if (p_7)
                break;
        }
        l_1532 = (g_700 &= (safe_rshift_func_int16_t_s_u(g_1227, (g_961 != ((!(p_5 , 0x0F2BFFEFL)) & l_1526)))));
        if (p_7)
        {
            int32_t l_1533 = 0xD94DBE6EL;
            int32_t l_1536 = 0x19B415F0L;
            int32_t l_1538 = (-3L);
            int32_t l_1539 = 0xB0260CE8L;
            --l_1544;
            l_1547--;
            g_875 = (safe_rshift_func_uint8_t_u_s(0x5EL, (safe_mod_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(((g_1575 = ((safe_sub_func_uint16_t_u_u((((l_1537 = (safe_sub_func_int8_t_s_s(l_1542, (safe_mod_func_uint32_t_u_u((l_1536 < (l_1535 = (p_7 = (+p_7)))), (p_6 | (safe_rshift_func_uint64_t_u_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint64_t_u_s((g_1225 = (safe_add_func_int64_t_s_s((l_1541 &= ((l_1539 ^= ((((g_878 == p_6) == (safe_mul_func_uint64_t_u_u((((3UL > g_1233) > l_1532) , 18446744073709551613UL), l_1532))) == 0x0D61L) | 1L)) && p_5)), 18446744073709551615UL))), g_508)) || g_964), p_6)), 14)))))))) || p_6) && p_6), p_6)) , g_129)) | l_1533), l_1450)) && g_1226), p_6)) & l_1533), g_373))));
            l_1543 = l_1547;
        }
        else
        {
            int64_t l_1602 = (-9L);
            int32_t l_1603 = 0L;
            uint64_t l_1605 = 18446744073709551615UL;
            const uint32_t l_1670 = 4294967289UL;
            uint64_t l_1735 = 18446744073709551609UL;
            uint8_t l_1829 = 248UL;
            uint64_t l_1843 = 2UL;
            int32_t l_1963 = 0x407A3556L;
            int32_t l_1967 = 0xAF793EA2L;
            int32_t l_1968 = 2L;
            uint32_t l_1996 = 1UL;
            for (g_711 = 0; (g_711 < 40); ++g_711)
            {
                uint8_t l_1586 = 0x92L;
                int32_t l_1596 = (-5L);
                uint32_t l_1597 = 0x9B829494L;
                g_648 = (p_6 >= (!0x717532ECCE37B468LL));
                l_1543 ^= (safe_add_func_int64_t_s_s((!0x1D20C0DDA4F0EBFBLL), ((((((p_5 < (((safe_lshift_func_int8_t_s_u((l_1450 = (safe_lshift_func_uint8_t_u_s(l_1586, 2))), (safe_rshift_func_int32_t_s_s((+g_965), g_324)))) > (g_1449 != (1L || ((l_1540 = (((safe_add_func_uint8_t_u_u(0xCEL, (safe_add_func_int32_t_s_s((l_1596 = (safe_mul_func_uint16_t_u_u(g_604, l_1540))), p_6)))) && g_647) > 1L)) && 0x3A811B34DB317B76LL)))) < 0xD188ADACL)) <= l_1586) <= p_7) > l_1597) < 0xE15F3C45030EDCDCLL) | p_7)));
            }
            if ((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_1605--), 0)), (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((+p_7) == (((safe_rshift_func_uint32_t_u_u((g_1222 = (safe_rshift_func_int32_t_s_u((safe_lshift_func_uint16_t_u_u(l_14, (safe_add_func_uint64_t_u_u(p_7, (~l_1544))))), p_6))), (~g_964))) , (safe_div_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(((~((safe_lshift_func_int16_t_s_s(((((l_1541 &= ((((safe_mul_func_int8_t_s_s(((+((safe_sub_func_int32_t_s_s((((((safe_mod_func_int16_t_s_s((safe_rshift_func_int32_t_s_u((safe_mul_func_int16_t_s_s(0x5412L, (p_6 || ((safe_lshift_func_int64_t_s_u((safe_div_func_uint32_t_u_u(g_324, g_604)), 42)) , g_508)))), g_129)), l_1540)) >= p_6) < 3UL) | 0x93A79E26341A2CC1LL) , p_6), p_5)) , l_1602)) > g_8), g_1147)) > 0UL) & g_1267) ^ l_1602)) && 0x70L) ^ 253UL) > l_1647), 6)) | p_6)) & g_194), 0x1C6D3BA719058A43LL)) & 1L), p_6))) | (-1L))), p_6)) & g_1262), 13)) && (-1L)) <= p_5), l_1537)))))
            {
                float l_1665 = 0x9.Bp+1;
                int32_t l_1666 = (-5L);
                uint8_t l_1773 = 0UL;
                int32_t l_1799 = (-1L);
                int32_t l_1801 = 0xF495DA3AL;
                int32_t l_1804 = 0xE55872F0L;
                if ((l_1532 &= ((g_707 = ((g_700 = (safe_mul_func_int64_t_s_s((((g_409 || (((((g_1650--) < (safe_div_func_uint64_t_u_u((g_587 = (((p_6 < (l_1543 &= 0x1D5F3A37L)) && (4294967295UL == (safe_lshift_func_int64_t_s_u(((l_1534 = ((+(~(p_7 ^ (l_1603 = (p_6 <= (safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((p_7 ^ (safe_div_func_uint8_t_u_u(l_1450, l_1666))), 2UL)) && 0x44D9L), 4294967295UL))))))) ^ 0x6E173CC5L)) <= g_573), g_1449)))) >= g_199)), 0x4205AA1B9523B840LL))) >= g_1222) | l_1667) != g_1236)) & 0x23F7A1622C184558LL) && (-1L)), g_1232))) == l_1605)) != g_409)))
                {
                    l_1535 = l_14;
                }
                else
                {
                    return l_1605;
                }
                if (((g_700 = ((g_445 | (p_6 && l_1535)) & 0x158BL)) >= ((((safe_add_func_uint16_t_u_u(l_1670, (safe_mul_func_int8_t_s_s(((g_1233 = l_1605) , ((~(safe_div_func_int64_t_s_s((p_7 = p_7), ((g_508 <= (((safe_lshift_func_uint16_t_u_u((g_205 = (l_1666 & l_1526)), 8)) ^ 246UL) == l_1678)) ^ p_6)))) <= g_1247)), l_1534)))) , l_1535) > g_587) || g_573)))
                {
                    int16_t l_1699 = 0x5D6CL;
                    int32_t l_1700 = 0x111204D1L;
                    l_1700 |= (((((safe_mul_func_float_f_f(((safe_add_func_float_f_f(g_1247, (safe_mul_func_float_f_f(0xE.FB9970p-39, (safe_div_func_float_f_f(((safe_div_func_float_f_f(0x0.4p-1, ((safe_div_func_float_f_f((safe_mul_func_float_f_f(((safe_div_func_float_f_f((g_1269 = (((safe_div_func_float_f_f(p_5, 0x1.1230B4p+74)) < (((0x64CBL <= g_1233) == 0x47L) , (safe_add_func_float_f_f(g_1231, l_1699)))) <= 0x4.619547p+43)), g_1575)) == p_6), l_1603)), g_1225)) < g_324))) > 0x6.9p+1), l_1666)))))) != 0x7.FF2B48p-31), p_5)) < g_445) , g_573) & l_1605) == 1L);
                    g_1650 ^= ((l_1534 = (safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_uint64_t_u_u((p_6 = p_6), ((((safe_div_func_float_f_f(((safe_add_func_float_f_f((((l_1666 ^ (p_7 > l_1699)) , (((g_89 = ((safe_mul_func_int16_t_s_s((((safe_mul_func_int64_t_s_s(p_7, (((g_604 = p_7) | ((((((l_1700 || (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_mul_func_int64_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_961, (((safe_mod_func_int64_t_s_s((safe_lshift_func_int64_t_s_s((p_7 , g_875), g_1232)), 0xF0DC38B28E3B7CDELL)) == l_1542) ^ p_5))), g_1231)), p_7)) < p_7), l_1666)), l_1735)), l_1543)) ^ 0UL), g_1231))) , 1UL) || (-9L)) | g_409) || 6UL) , p_7)) >= g_194))) , 5UL) & 7L), g_538)) , 0x7.D3432Ap-13)) >= g_1449) == 0xA.887B62p+33)) <= g_409), g_1247)) <= p_7), g_205)) < 0x5.3p+1) , l_1603) , p_7))), 7)), l_1532)), 10))) ^ 0UL);
                }
                else
                {
                    const uint16_t l_1774 = 65530UL;
                    int32_t l_1844 = 0x1CA42992L;
                    if (p_7)
                    {
                        int32_t l_1748 = 0xCD8BFCFAL;
                        int32_t l_1749 = 0x868A40F9L;
                        int32_t l_1750 = 3L;
                        int32_t l_1800 = 1L;
                        float l_1803 = 0xD.1D8D3Ap+36;
                        l_1750 |= (g_1251 >= ((safe_mul_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((g_711 == g_647), 12)), (l_1749 &= (((l_1748 = (0L < (safe_mod_func_uint8_t_u_u(((l_1541 = (g_131 == ((p_7 , (0x7CEFL | ((safe_rshift_func_int64_t_s_u(((safe_add_func_int64_t_s_s(g_648, (safe_add_func_int8_t_s_s(((p_5 & p_6) , g_1575), 0x62L)))) | p_5), 39)) , 9L))) , p_5))) < 0xD12EL), 251UL)))) > p_5) != l_1602)))) , g_1227));
                        g_546 = (+(safe_mul_func_float_f_f((safe_sub_func_float_f_f((safe_mul_func_float_f_f(p_7, (safe_div_func_float_f_f(0x0.34A6D6p+35, ((+(g_1604 = (-0x1.Dp-1))) != ((safe_add_func_float_f_f((g_713 = ((safe_add_func_float_f_f((g_1267 != p_6), 0x1.Ep+1)) > (((safe_sub_func_uint8_t_u_u(((((((safe_sub_func_int32_t_s_s(((g_707 = (p_7 , (0UL && (safe_add_func_uint64_t_u_u((((g_1222 = (((safe_sub_func_uint32_t_u_u(l_1773, l_1774)) , 0x47L) >= g_8)) && g_1014) ^ 0x9D53L), p_6))))) , l_1542), l_1666)) && 1L) , g_1225) && g_1254) >= 0x2031EBE07566F00ELL) && p_5), 1L)) , g_1074) == g_680))), g_194)) == 0xE.BE83D5p+86)))))), p_5)), g_1225)));
                        p_7 = (l_1537 ^= (safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((((safe_mul_func_int64_t_s_s((l_1749 , (((l_1774 < (((g_67 = 0x8.62762Fp-91) == l_1774) , ((safe_div_func_int32_t_s_s((safe_mul_func_uint32_t_u_u(((p_6 , (safe_unary_minus_func_uint64_t_u(((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((p_7 ^ p_6), (safe_rshift_func_int16_t_s_u(1L, l_1798)))), g_1247)) ^ p_7)))) >= p_6), g_1254)), p_7)) && p_6))) | 4294967290UL) && l_1773)), g_253)) == l_1749) , 0x8E8ECF8644ED7195LL) > 0x4B1E8D3CF9A23453LL), l_1547)) == p_5), l_1666)) && 0UL), g_604)) > 0xB93BL), 0x1991L)));
                        g_1805--;
                    }
                    else
                    {
                        int8_t l_1842 = (-1L);
                        g_587 = (l_1603 &= ((((safe_lshift_func_uint32_t_u_s((safe_mul_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((((l_1450 ^= p_6) & (+(safe_rshift_func_int64_t_s_u((safe_lshift_func_uint32_t_u_u((p_6 , (safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_mul_func_int32_t_s_s((safe_mod_func_int8_t_s_s((l_1829 == (-1L)), (((safe_lshift_func_uint64_t_u_u((l_1844 = (l_1537 |= ((safe_mod_func_int8_t_s_s((!(((safe_sub_func_int64_t_s_s(0xD64771D1C942733ALL, (l_1843 ^= (g_707 |= (p_7 == ((0x54D0L && ((((+(safe_rshift_func_uint8_t_u_s(255UL, (safe_sub_func_uint16_t_u_u(l_1842, 1L))))) , 1L) != (-10L)) < p_5)) | (-1L))))))) >= p_6) > 18446744073709551610UL)), 0x54L)) && 0xCC56DD87L))), 46)) != l_1774) , g_508))), g_704)), p_6)), g_131))), 4)), g_1247)))) > l_1526), p_5)) , l_1844), 0x57L)), 0UL)), l_1532)) == g_1231) , p_6) <= 0x911630AE155518B4LL));
                        g_875 = ((safe_add_func_int32_t_s_s(((-8L) < (+(safe_unary_minus_func_uint8_t_u((0x27L == p_6))))), ((0x3ADBBF24L & (((((safe_lshift_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_mul_func_int64_t_s_s(l_1829, (safe_mul_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(p_5, g_687)) || (l_1666 |= 65530UL)), l_1844)), g_610)))), g_1449)), 5)) ^ (-7L)) && 0xD5F9E7D4L) ^ l_1541) , p_7)) ^ 0x5DF3EBC87B0017BELL))) | 0x61L);
                    }
                    l_1804 ^= (((safe_sub_func_uint32_t_u_u((0x7567L | l_1863), ((l_1541 = ((+(((((!((safe_sub_func_uint16_t_u_u(((p_7 = (((safe_mul_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((g_1262 , (((l_1829 >= (((safe_mod_func_uint64_t_u_u(0xA21E6CE3BE01FE2CLL, (g_560 & (g_1013 == 1UL)))) || (safe_div_func_int16_t_s_s(l_1603, p_5))) , p_7)) || g_573) < 18446744073709551614UL)) < p_5), 3)) == 0xBFL), p_7)), l_1878)) , 0L) > l_1678)) | 1UL), l_1602)) >= l_1542)) || 0xD809L) && 0x9FL) != l_1678) && p_5)) == 1L)) ^ l_1667))) > (-1L)) >= g_652);
                }
            }
            else
            {
                int32_t l_1889 = (-1L);
                int32_t l_1894 = 0x5875CE04L;
                int32_t l_1980 = 0L;
                int32_t l_1981 = (-8L);
                --l_1879;
                g_1074 = (safe_add_func_float_f_f((safe_mul_func_float_f_f((g_67 = (g_89 = ((((safe_add_func_float_f_f(((l_1534 = p_7) == (g_648 = p_7)), l_1843)) < 0x1.Cp-1) <= (g_1604 = (p_7 , (l_1889 != (g_546 = (p_7 >= (safe_sub_func_float_f_f((!l_1893), (g_700 != l_1735))))))))) != p_6))), l_1879)), (-0x2.Dp+1)));
                if (p_7)
                {
                    uint16_t l_1895 = 0x3ED7L;
                    int32_t l_1943 = 9L;
                    ++l_1895;
                    for (g_1222 = (-3); (g_1222 != 28); g_1222 = safe_add_func_int32_t_s_s(g_1222, 1))
                    {
                        const int16_t l_1925 = (-8L);
                        int32_t l_1978 = 0L;
                        p_7 = ((safe_add_func_uint8_t_u_u((((((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((g_707 = ((l_1895 <= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint32_t_u_s((safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((((((safe_lshift_func_int8_t_s_s(((safe_add_func_float_f_f((((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(l_1602, (safe_unary_minus_func_uint8_t_u(((p_5 > (0xEEF5L && l_1843)) ^ (g_648 = ((safe_add_func_uint32_t_u_u(l_1925, (g_1227 = l_1526))) && l_1895))))))) , (safe_div_func_int32_t_s_s(g_1227, p_5))), p_7)) , p_7) == 0x7.0FDFD3p+64), g_1014)) , l_1895), 2)) <= p_7) | 0x10L) , g_1232) & 0x303A1719L), g_652)), g_711)), 0)), 14))) && 0L)), l_1450)), g_1232)) && 0x4CL) & p_5) | l_1925) > 0xD2666F0A98E9AD3FLL), l_1925)) <= 0x1C3A6D85AF6588EDLL);
                        g_89 = ((safe_sub_func_float_f_f(l_1889, l_1532)) == (safe_sub_func_float_f_f(((safe_sub_func_float_f_f((g_1604 = (0x9.FBE338p-59 <= ((safe_div_func_float_f_f(((p_5 >= (safe_sub_func_float_f_f((g_199 > (safe_sub_func_float_f_f((g_713 = (((l_1940 = g_604) <= ((g_1604 <= (safe_sub_func_float_f_f(g_1247, (((p_5 | g_1014) , 0x6.21579Bp-37) != l_1895)))) != p_6)) != l_1843)), l_1543))), g_1262))) >= 0x7.2p+1), p_5)) == 0x1.5p+1))), g_546)) == 0x0.0p+1), p_6)));
                        p_7 = (g_964 & 4L);
                        l_1543 = (((safe_mul_func_int64_t_s_s(l_1895, (g_961 > g_700))) != ((((safe_lshift_func_int32_t_s_s(0x9BF1C20CL, 30)) , 0x23L) || (g_604 |= (+((-1L) <= (((l_1943 = (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint32_t_u_s(((((g_587 |= (safe_rshift_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_1970++), (g_373 >= (l_1889 = ((safe_lshift_func_uint32_t_u_s(((safe_mul_func_int64_t_s_s(g_410, 0x70BD4CE4650CAB5ELL)) >= p_5), g_194)) == g_573))))), 1)), g_1227))) & l_1537) > 0x56L) && 7UL), 5)) & p_5), 1L))) > l_1894) == l_1978))))) | 0L)) & 0x986FF34BL);
                    }
                }
                else
                {
                    float l_1979 = 0x4.ABE04Ep-78;
                    int32_t l_1982 = 0x66B23AF7L;
                    uint32_t l_2002 = 0x55710972L;
                    int32_t l_2004 = 0x5EB05E63L;
                    --g_1983;
                    g_1888 = (safe_sub_func_float_f_f((g_89 = (g_546 = (safe_sub_func_float_f_f((safe_sub_func_float_f_f((safe_add_func_float_f_f(((l_1532 = (safe_div_func_uint8_t_u_u(p_5, (g_1232 = l_1996)))) , ((-0x6.Ep+1) >= (safe_div_func_float_f_f(((((l_1967 > p_7) < ((safe_add_func_float_f_f(p_5, (((-0x8.BAD1B8p-64) < ((((g_324 <= 4L) , p_7) == l_2002) < p_6)) >= p_5))) >= p_7)) , l_2003) < g_647), l_1532)))), p_5)), p_6)), 0x0.1p+1)))), p_6));
                }
            }
            l_1543 = (safe_rshift_func_int8_t_s_s((g_1267 , (safe_mul_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_1534, (safe_sub_func_uint64_t_u_u(g_572, (safe_unary_minus_func_int16_t_s(g_409)))))), (l_2003 != (safe_lshift_func_uint8_t_u_u(l_2017, 5)))))), 1));
        }
    }
    if ((safe_mod_func_int32_t_s_s((l_1543 &= ((p_6 | g_1231) >= (!(g_647 , l_2005)))), ((((g_2021--) , (((g_373 >= (++g_2035)) < 2UL) != (g_1805 ^ (l_1534 || ((g_1251 = (p_5 , l_1667)) , l_2027))))) & p_7) & 1UL))))
    {
        uint16_t l_2038 = 0xAA41L;
        int8_t l_2066 = 5L;
        int32_t l_2067 = (-5L);
        int32_t l_2068 = (-1L);
        --l_2038;
        p_7 = (safe_rshift_func_uint16_t_u_s(((((safe_div_func_int32_t_s_s((safe_rshift_func_uint32_t_u_u(4294967295UL, 14)), (g_409 = g_285))) , (l_2068 = ((safe_sub_func_int32_t_s_s(g_587, ((249UL <= (!(((1L > ((safe_mod_func_uint32_t_u_u((l_2054++), (g_1222 = (safe_div_func_uint64_t_u_u(((safe_sub_func_float_f_f((0xA.E397CBp-51 > (0x6.DA87DDp-96 > (safe_sub_func_float_f_f(0x5.26F8B1p-32, (+(safe_div_func_float_f_f((g_713 = 0x5.6p-1), 0x8.1559F3p+23))))))), 0x1.6p+1)) , p_7), g_647))))) , l_2067)) , l_2054) || g_2021))) <= 0xE277L))) & p_5))) , g_324) ^ l_2067), p_6));
    }
    else
    {
        float l_2075 = 0x7.07237Bp-87;
        int32_t l_2076 = (-2L);
        int32_t l_2078 = (-2L);
        int32_t l_2079 = 0x9755BA3FL;
        int32_t l_2080 = 0x934651D8L;
        float l_2138 = 0x7.Bp-1;
        l_1543 = (safe_lshift_func_int16_t_s_s(g_711, 2));
        if ((safe_sub_func_int32_t_s_s((l_2076 = ((safe_sub_func_uint16_t_u_u(((g_2081++) & l_2079), (((((safe_div_func_uint16_t_u_u(l_1798, l_1667)) <= (safe_sub_func_uint16_t_u_u((((!(((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((((((~((+(((g_610 || (l_2028 , (!(1UL | ((p_7 = (g_1964 == (safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint64_t_u_u((safe_rshift_func_int64_t_s_u(g_961, ((l_2025 = (p_6 | 0xAEL)) < (-1L)))), p_5)) , l_2033) >= l_1798) , l_2029), p_6)))) , p_7))))) & 0x1132L) || g_471)) & l_2033)) > p_5) | l_2026) | p_5) >= g_196))), l_1667)) < l_14) || 4294967295UL)) < g_1267) , p_6), 5UL))) , l_1893) == g_285) | p_5))) != l_2101)), g_572)))
        {
            uint64_t l_2102 = 0x974B3C40E38BB1BALL;
            int32_t l_2105 = 0L;
            ++l_2102;
            l_2105 = l_2078;
        }
        else
        {
            uint32_t l_2115 = 18446744073709551610UL;
            int32_t l_2136 = 0x5F2550ABL;
            int32_t l_2137 = 0x0BC1A541L;
            g_964 = (l_2106 , (safe_mul_func_uint16_t_u_u(((((((safe_div_func_uint32_t_u_u((p_7 , ((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u(((l_2115 = p_6) , ((((((safe_div_func_int16_t_s_s((((safe_div_func_uint32_t_u_u((safe_lshift_func_uint64_t_u_s(p_7, 7)), (safe_mod_func_uint32_t_u_u((safe_rshift_func_int32_t_s_s((l_2137 = (((safe_rshift_func_int16_t_s_u((-2L), 8)) , ((g_1225 , ((+(safe_sub_func_int64_t_s_s((~(safe_mul_func_int8_t_s_s((((l_2136 = (safe_lshift_func_uint16_t_u_u(((p_7 , (((-7L) >= (l_2026 = 0xA484728BL)) | 0x36E1ECD09CB3F723LL)) ^ g_1257), l_2076))) ^ l_2080) , p_7), l_2115))), p_5))) ^ (-9L))) ^ p_5)) , 0xB996DA2EL)), 11)), l_2115)))) ^ 0xA9L) ^ l_1450), l_2115)) || 1UL) || 1L) < 8UL) < p_7) , g_1983)))), p_7)) & g_131)), p_5)) < 1UL) ^ 4294967295UL) || p_6) >= 1UL) > l_2079), 0L)));
        }
    }
    for (g_285 = 0; (g_285 == (-10)); --g_285)
    {
        float l_2166 = 0x7.5D30D9p+44;
        int32_t l_2167 = 0x70E1FED9L;
        int32_t l_2183 = (-5L);
        int32_t l_2184 = 0xEC347ED5L;
        int32_t l_2186 = 0x7F9FDD01L;
        int32_t l_2188 = (-1L);
        int32_t l_2190 = 0xB34249A0L;
        int32_t l_2191 = 0x0F2F6C52L;
        int32_t l_2193 = 0L;
        int32_t l_2218 = 0x193AE650L;
        uint16_t l_2219 = 7UL;
        for (l_2030 = 0; (l_2030 < (-1)); --l_2030)
        {
            int8_t l_2177 = 0L;
            int32_t l_2185 = 7L;
            int32_t l_2187 = 0L;
            int32_t l_2189 = (-1L);
            int32_t l_2192 = 3L;
            int32_t l_2194 = 0x3460ECE7L;
            int32_t l_2196 = (-10L);
            g_776 = (safe_lshift_func_uint32_t_u_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((g_2182 = (((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_2167 = (l_2181 = ((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((l_2005 , ((g_1013 == (safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((((g_196 & 1UL) >= ((--l_2168) , ((safe_sub_func_uint16_t_u_u((l_2167 ^ (l_2025 = (safe_add_func_int32_t_s_s((((p_7 = (safe_lshift_func_uint8_t_u_u(l_2177, 7))) >= (1UL != 252UL)) | (safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u(l_2177, (-5L)))))), l_2025)))), 0xCD0CL)) , p_7))) == 3UL), p_5)), l_1534))) && l_2167)) < (-5L)), 1)), p_5)) < g_1225))), 1)), 7UL)))), p_5)) ^ p_5) == p_6)) | 0x82F7L), 0UL)), 16)), g_445)), p_6));
            if (g_205)
                break;
            ++g_2198;
        }
        g_2195 = (((-((safe_sub_func_float_f_f((safe_add_func_float_f_f(((safe_sub_func_float_f_f((safe_sub_func_float_f_f((((1L & l_1878) , l_2183) <= p_6), 0xB.A75022p+41)), ((((g_2034 = 0x0.EE170Ap+4) < (((safe_mul_func_uint64_t_u_u(l_1893, g_2198)) < (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint32_t_u_s((safe_rshift_func_uint64_t_u_s(p_6, g_1236)), 8)), g_2021))) , p_7)) < (-0x4.5p+1)) >= g_1254))) != p_5), 0x1.4p+1)), g_1225)) != 0x6.7C34C8p-69)) <= (-0x7.6p+1)) == l_2190);
        --l_2219;
    }
    return p_5;
}
int32_t func_12(uint32_t p_13)
{
    int64_t l_15 = 1L;
    int16_t l_34 = 0xFECBL;
    float l_55 = 0x1.C44381p-46;
    int32_t l_1076 = 0x4CF6BCD1L;
    int32_t l_1414 = 0x715D4566L;
    int16_t l_1440 = 3L;
    int32_t l_1442 = (-10L);
    l_15 ^= g_8;
    l_1414 = func_16((safe_add_func_uint16_t_u_u(func_24(p_13, func_28(l_15, (l_34 , 1L), (safe_div_func_uint32_t_u_u(((safe_mul_func_uint32_t_u_u(((l_1076 |= func_39((0xE.467B47p+53 > (safe_sub_func_float_f_f((func_45((l_15 , (((safe_add_func_float_f_f(l_15, (safe_add_func_float_f_f((l_55 >= g_8), p_13)))) > p_13) == 0xA.24B834p+17)), g_8, l_34, l_15, l_15) == g_194), g_605))), l_15, l_34)) | l_15), g_572)) & l_15), p_13)), g_1012, l_15), g_324), p_13)), l_34, l_34, l_15, p_13);
    p_13 = ((safe_div_func_int32_t_s_s((((((((safe_div_func_int16_t_s_s((p_13 < (safe_div_func_uint8_t_u_u(((p_13 ^ (((safe_mul_func_uint8_t_u_u(g_1226, l_1414)) <= g_1222) < (l_1076 = (safe_rshift_func_uint64_t_u_s((safe_mod_func_uint64_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int64_t_s((l_1414 != g_704))), 12)) ^ l_1076) > (g_1254 , l_15)) & l_1076), 0x54DC219C44CE2026LL)), 36))))) < p_13), 0x6DL))), l_34)) >= p_13) , l_1414) , l_34) > g_131) , p_13) >= p_13), 0x3BA42C78L)) | g_1251);
    g_1222 &= ((safe_lshift_func_int64_t_s_u(((-8L) && ((safe_sub_func_int32_t_s_s(g_711, ((1UL | ((((l_1414 &= ((l_34 != l_34) , l_15)) ^ (safe_mul_func_int16_t_s_s(l_1076, (l_1442 = (((g_199 ^= (((l_1440 ^= ((safe_sub_func_int16_t_s_s(1L, ((safe_div_func_uint8_t_u_u(253UL, 0xDEL)) ^ g_410))) < l_15)) ^ p_13) , g_202)) , 3UL) , 0x8B85L))))) != g_680) , 0xF5BEB9B9L)) ^ g_1231))) <= l_34)), p_13)) <= l_1076);
    return l_34;
}
int32_t func_16(int16_t p_17, int32_t p_18, uint32_t p_19, const float p_20, uint64_t p_21)
{
    uint64_t l_1369 = 0UL;
    int32_t l_1372 = 0x2D647B46L;
    int32_t l_1373 = 0x901076FDL;
    int32_t l_1374 = (-3L);
    int32_t l_1375 = 0x21BE6B07L;
    int32_t l_1376 = 0x1AF08E0AL;
    int32_t l_1413 = 2L;
    for (g_196 = (-18); (g_196 <= 21); g_196 = safe_add_func_uint16_t_u_u(g_196, 5))
    {
        int32_t l_1366 = 0x32D12F14L;
        if (g_1254)
            break;
        if (l_1366)
            break;
    }
    g_1074 = (safe_div_func_float_f_f((l_1369 = (p_21 = p_21)), (safe_add_func_float_f_f((g_546 = p_20), (g_1233 == (((-((g_89 = (g_1222 != ((safe_div_func_uint64_t_u_u(((+(safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(l_1376, 5)), ((safe_rshift_func_int32_t_s_s((g_8 < ((l_1372 &= (g_700 & (!((((0x6DF402DBF0D90F23LL || ((safe_div_func_int16_t_s_s(0xD232L, (-1L))) <= l_1375)) != 0xC0L) > l_1373) || 0x0489L)))) ^ g_1251)), 22)) & l_1375)))) , l_1376), g_1267)) , l_1372))) < 0xE.D613B5p-52)) != g_285) < g_604))))));
    g_286 = ((safe_unary_minus_func_int64_t_s(0xD0F79596F6AB5048LL)) || ((safe_lshift_func_int64_t_s_u((l_1375 = (safe_add_func_int32_t_s_s(g_1014, (+(((((((p_21 >= (p_19 ^ (((safe_rshift_func_int32_t_s_s(g_205, 1)) , (safe_sub_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(g_1233, (safe_div_func_uint64_t_u_u((((g_587 = (safe_unary_minus_func_uint64_t_u(l_1372))) < (safe_mul_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((g_680 , 0x830B31CBL) , 255UL), 0x23L)) != g_711), g_700))) && g_194), p_21)))) < (-7L)), 0x8984L))) == l_1413))) & p_17) , l_1413) <= l_1373) <= 0x2575L) ^ l_1373) >= 2UL))))), l_1373)) > l_1372));
    return p_19;
}
uint16_t func_24(const uint32_t p_25, uint8_t p_26, int8_t p_27)
{
    int64_t l_1118 = 0xC5D39734E5A01DB8LL;
    int32_t l_1145 = 0xAAB71EF8L;
    int32_t l_1146 = (-8L);
    uint32_t l_1157 = 0x77CEAD60L;
    int32_t l_1158 = 0L;
    int32_t l_1159 = 0x3CA4379FL;
    int32_t l_1218 = 0x1149FAD0L;
    int32_t l_1220 = 0x1A976BF5L;
    int32_t l_1221 = 0x08EE8A5EL;
    int32_t l_1223 = 0x7721B04BL;
    int16_t l_1224 = 0xE708L;
    int32_t l_1239 = 1L;
    int32_t l_1240 = 1L;
    int32_t l_1243 = 0xAF05DC71L;
    int32_t l_1244 = 0xF7E30634L;
    int32_t l_1246 = 0xCAE52427L;
    int32_t l_1248 = 0xC380131EL;
    int32_t l_1259 = 0xD356E544L;
    int32_t l_1261 = 0xC8B5F9CBL;
    int32_t l_1263 = 1L;
    int32_t l_1268 = 0x3A8D0CBAL;
    l_1159 |= (((safe_rshift_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int32_t_s_s(0x65355352L, 12)) & (g_194 , ((safe_mod_func_int16_t_s_s(((p_27 == ((safe_sub_func_int8_t_s_s((g_1012 = 0x5CL), (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(3UL, (((safe_add_func_uint8_t_u_u(((l_1118 > (safe_rshift_func_uint8_t_u_s((l_1158 |= ((safe_div_func_uint64_t_u_u(p_27, ((((safe_mod_func_uint64_t_u_u((!(safe_mod_func_uint64_t_u_u((safe_lshift_func_uint32_t_u_s(((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int64_t_s_u((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((((safe_rshift_func_uint32_t_u_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(((((++g_1147) & (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(p_25, (((safe_unary_minus_func_int32_t_s((safe_mod_func_int8_t_s_s((g_202 ^ g_604), p_27)))) && (-6L)) ^ g_285))), l_1145))) && (-10L)) & 0UL))), l_1146)), 23)) ^ g_560) != g_419) | p_27), l_1118)), g_112)), g_409)) , g_1147), 7)), 0x2016A220802629CBLL)) > g_410), p_26)), g_112))), l_1118)) & 0xCA3BL) <= 0UL) ^ l_1157))) | 1L)), p_25))) > 0x6B3AL), p_26)) ^ l_1118) , g_194))), p_27)))) ^ 0UL)) ^ l_1157), p_25)) <= l_1145))), l_1146)), p_26)) > 0xD3L) != g_652);
    for (g_1147 = 0; (g_1147 > 36); g_1147 = safe_add_func_int64_t_s_s(g_1147, 1))
    {
        int32_t l_1174 = (-4L);
        int32_t l_1182 = 1L;
        int32_t l_1191 = 3L;
        uint32_t l_1219 = 0x555AE452L;
        int32_t l_1228 = 0xB18B2525L;
        int32_t l_1229 = 0x9A40A8ACL;
        int32_t l_1230 = 0xD6EBDFFFL;
        int32_t l_1234 = 0L;
        int32_t l_1235 = 0x0CDA6668L;
        int32_t l_1237 = 0xA7682818L;
        int32_t l_1238 = (-1L);
        int32_t l_1241 = 0x85C9472FL;
        int32_t l_1242 = 9L;
        int32_t l_1245 = (-4L);
        int32_t l_1249 = 1L;
        int32_t l_1252 = (-7L);
        int32_t l_1253 = 0xBD5A98E1L;
        int32_t l_1255 = 0x9D27A457L;
        int32_t l_1258 = (-1L);
        int32_t l_1260 = (-9L);
        uint8_t l_1264 = 9UL;
        int32_t l_1265 = (-8L);
        int32_t l_1266 = 0L;
        int8_t l_1311 = 4L;
        l_1174 = (l_1145 = ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_25, (l_1159 == (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(3UL, 6)), ((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((-9L), ((4294967287UL | l_1174) < ((g_560 <= ((safe_mul_func_int16_t_s_s((l_1191 = (safe_lshift_func_int8_t_s_u((l_1146 = (safe_sub_func_uint8_t_u_u((~(l_1182 = g_202)), (safe_lshift_func_uint32_t_u_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s(g_605, (-1L))), (-5L))), g_131)), 28))))), l_1118))), g_707)) <= g_112)) >= 0x9CB7FB8CL)))), 0UL)) & l_1174)))))), 251UL)) <= l_1174));
        if ((safe_add_func_uint16_t_u_u((((!0xA8L) == (((safe_sub_func_float_f_f((+(g_1269 = (safe_mul_func_float_f_f((g_546 = ((!(safe_sub_func_float_f_f((safe_sub_func_float_f_f(((-0x7.Bp+1) < (((safe_add_func_float_f_f((safe_sub_func_float_f_f(l_1157, (g_572 = (-(g_538 = p_27))))), (g_67 = (safe_add_func_float_f_f(0x0.Cp-1, (safe_mul_func_float_f_f((g_713 = (p_27 , ((safe_add_func_float_f_f((safe_mul_func_float_f_f(((((g_89 = ((-0x2.Bp+1) >= (p_26 == 0x6.322046p-65))) < g_286) <= l_1182) <= l_1145), 0xA.F1ADEAp+27)), g_194)) >= p_26))), 0x3.FC2441p+72))))))) == g_604) >= g_700)), p_26)), 0x6.55167Cp-47))) < 0x8.4p-1)), p_26)))), g_878)) , p_26) ^ g_285)) && 0xB9023B44L), 0xE0E7L)))
        {
            uint16_t l_1299 = 0x5718L;
            int32_t l_1310 = 0xD3EBB1A8L;
            int32_t l_1312 = 1L;
            uint64_t l_1319 = 1UL;
            g_419 = ((+((((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((g_471 >= (safe_mul_func_uint16_t_u_u(((0x2CL < ((((l_1310 = ((-(l_1158 , ((l_1244 |= 4294967293UL) , (((((safe_sub_func_float_f_f((safe_sub_func_float_f_f((((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(((((g_1227 | (((l_1229 >= (+(safe_mod_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_lshift_func_uint64_t_u_u((++l_1299), p_26)), ((((((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(p_27, (safe_sub_func_int16_t_s_s((((((((((((safe_sub_func_int32_t_s_s((g_1222 = ((1L & p_25) >= g_285)), g_1267)) | p_27) & g_1250) , p_27) && p_25) || p_25) < g_711) == l_1266) != 0x8EL) || g_1231) < l_1310), g_1227)))) < 0x573CF0C660DA0CC5LL), 13)) <= 0xFE029D6CL) != 0x0BCF90FFL) < 0xA3B65493L) , 65535UL) <= 0x9625L))) >= g_1232), l_1310)))) == p_26) < p_26)) < l_1259) < g_410) , p_26), l_1310)) , l_1311), p_25)) , g_680) < (-0x1.Ep-1)), l_1157)), p_27)) <= p_25) == g_112) < g_560) <= g_604)))) , l_1159)) , g_373) | g_711) & l_1221)) , g_1233), 3UL))) && l_1235), 18446744073709551613UL)), g_1267)), p_27)), 2)) , l_1221) | l_1312) , l_1253)) , g_373);
            g_1269 = (safe_mul_func_float_f_f((0x2.D63AE3p-5 != (((g_713 = ((safe_add_func_float_f_f((-0x7.Ap-1), (g_89 = 0x1.2p-1))) == ((((g_202 < ((safe_div_func_int8_t_s_s(l_1319, l_1319)) & ((g_1231 >= (safe_rshift_func_int16_t_s_u((4294967293UL < ((safe_div_func_uint16_t_u_u(l_1245, p_27)) && p_27)), l_1118))) | p_26))) , p_25) == (-0x7.Bp+1)) != p_27))) != l_1312) < 0x9.CB0166p-52)), 0x5.C12B01p+9));
        }
        else
        {
            const uint64_t l_1336 = 0x430187EFAE687A53LL;
            float l_1347 = 0x5.59F9F1p-93;
            int32_t l_1357 = 0x65A3FEFAL;
            int32_t l_1361 = 0x4F377273L;
            g_707 = 0L;
            for (l_1158 = (-4); (l_1158 == (-19)); l_1158 = safe_sub_func_uint32_t_u_u(l_1158, 7))
            {
                int32_t l_1358 = 5L;
                for (g_573 = 0; (g_573 <= 10); g_573++)
                {
                    int32_t l_1359 = 0xD38AE262L;
                    int32_t l_1360 = 0x4ABA42A2L;
                    g_1269 = (safe_div_func_float_f_f((safe_sub_func_float_f_f((safe_add_func_float_f_f(((safe_add_func_float_f_f((l_1336 < ((!(safe_add_func_float_f_f((safe_mul_func_float_f_f((g_573 != (!(safe_add_func_float_f_f((g_546 = ((safe_sub_func_float_f_f(((((0x5.680CBBp+5 <= (((((-0x10.7p+1) <= 0x7.BE5576p+82) < (((p_26 = (g_1254 ^= g_680)) , ((safe_add_func_float_f_f(((-((safe_add_func_float_f_f(((l_1357 = ((l_1157 && ((safe_mod_func_int16_t_s_s(l_1259, g_1231)) > 0UL)) != 0UL)) , 0xD.F852EAp+59), p_26)) >= g_1251)) <= (-0x1.1p-1)), 0x8.0D2351p+49)) > p_26)) < g_1227)) < 0x6.4p-1) >= g_202)) == l_1358) > l_1221) <= l_1359), 0x7.C6B4E0p-31)) != g_129)), 0xC.08D143p+32)))), l_1360)), 0x2.9F7F91p-70))) <= p_25)), g_1247)) != l_1243), 0x7.9p-1)), 0xF.73BB1Fp+40)), g_711));
                    l_1358 &= 0x392EAEB6L;
                }
                if (g_1225)
                    break;
                l_1230 = g_776;
                g_67 = (safe_div_func_float_f_f(((l_1223 > g_508) == (l_1361 = g_8)), g_409));
            }
        }
    }
    return p_26;
}
uint8_t func_28(uint32_t p_29, int64_t p_30, uint64_t p_31, float p_32, int8_t p_33)
{
    int64_t l_1098 = 0L;
    int32_t l_1099 = 0x78F421C6L;
    g_410 = g_131;
    p_32 = (safe_add_func_float_f_f((safe_div_func_float_f_f(0x7.8p-1, (g_89 = (((safe_sub_func_float_f_f((safe_sub_func_float_f_f(0x8.0p+1, (-0x1.5p+1))), (safe_mul_func_float_f_f(0x5.F71188p-32, 0x1.Ep+1)))) == (-g_573)) <= ((((safe_add_func_float_f_f((safe_div_func_float_f_f((safe_mul_func_float_f_f((safe_mul_func_float_f_f(((((g_1012 != (((0L ^ ((safe_rshift_func_uint32_t_u_u((((g_680 ^= g_445) | g_687) || (-1L)), l_1098)) || p_29)) , 7UL) , (-0x1.Dp-1))) >= 0x8.D8C109p+65) , p_30) , p_29), l_1098)), l_1098)), 0x1.Dp-1)), l_1098)) == (-0x1.1p-1)) > g_572) == 0xF.BCD18Ap-91))))), p_32));
    return g_419;
}
uint32_t func_39(float p_40, int32_t p_41, uint16_t p_42)
{
    uint32_t l_1075 = 0x8E35408AL;
    l_1075 = g_196;
    return g_700;
}
float func_45(float p_46, uint32_t p_47, uint16_t p_48, uint8_t p_49, uint16_t p_50)
{
    uint16_t l_60 = 1UL;
    int32_t l_68 = 0x04523830L;
    const int64_t l_758 = 0x5DED12DA6B6E503ALL;
    int32_t l_759 = 0x60DCBF25L;
    int64_t l_760 = (-1L);
    int32_t l_774 = 0x1AD6F70AL;
    int32_t l_775 = 0L;
    uint32_t l_784 = 0xB9FEADADL;
    int16_t l_989 = 0x63DDL;
    int32_t l_1010 = 6L;
    uint16_t l_1038 = 0UL;
    int32_t l_1044 = 0x8E76EFE8L;
    uint8_t l_1049 = 1UL;
    if ((g_8 && (func_56((safe_sub_func_int16_t_s_s(p_48, (l_60 > ((safe_div_func_int8_t_s_s((((safe_sub_func_float_f_f((((safe_sub_func_int32_t_s_s(0x511F0B9FL, ((l_68 = 0x0B1B9B96L) ^ 4294967295UL))) , (g_67 = (safe_div_func_float_f_f(0x2.5B0D6Bp-40, ((safe_sub_func_float_f_f(((safe_mul_func_int16_t_s_s((l_68 | (safe_mul_func_uint32_t_u_u(4294967295UL, 4294967286UL))), 65535UL)) , g_67), p_47)) > 0x8.8p+1))))) , g_67), l_60)) , l_68) > l_60), l_60)) , l_68))))) ^ p_50)))
    {
        uint64_t l_717 = 0xCD3C3C058F161DB0LL;
        int32_t l_761 = (-1L);
        uint64_t l_768 = 18446744073709551615UL;
        int32_t l_770 = 0x182F2CC5L;
        int32_t l_771 = 0xB9F633A4L;
        int32_t l_772 = 0xE0DE5307L;
        int32_t l_773 = 0xE649C3E8L;
        uint32_t l_819 = 0xF2616FFFL;
        for (g_409 = (-1); (g_409 == 10); g_409++)
        {
            int16_t l_716 = 4L;
            int32_t l_769 = 0xE4D65C08L;
            l_717--;
            l_761 |= (((safe_lshift_func_int64_t_s_u((!(4294967295UL > (safe_mul_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_uint64_t_u_u((((g_471 <= (((+(safe_unary_minus_func_int8_t_s((safe_rshift_func_int32_t_s_u(g_409, (safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((!(safe_sub_func_uint64_t_u_u((g_707 || (safe_div_func_uint32_t_u_u(((((l_68 = g_129) >= (safe_div_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((l_759 = (1L != (safe_mod_func_uint32_t_u_u(4294967295UL, (p_50 , (safe_lshift_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(g_199, g_573)) , g_112), 251UL)), l_717)) != l_717), 9)) >= l_758) != 4UL), 26))))))), l_760)) < l_716), p_50))) | 0xA80CL) > p_48), 1UL))), p_47))) != g_131), l_758)), 0x1C7F1546F2AC656BLL))))))) , p_49) < p_47)) <= g_205) , p_48), p_50)), 18446744073709551606UL)), 0L)))), 48)) < p_48) > l_716);
            l_769 &= (l_761 = ((safe_mul_func_int16_t_s_s(((l_758 == g_253) > 0x04F62833L), (g_687 = g_328))) | ((((((l_717 != 1L) > (((((((safe_mul_func_int32_t_s_s((g_573 = g_605), (((((l_716 || ((g_707 = (safe_mod_func_uint16_t_u_u(l_716, l_759))) < g_410)) || g_538) == g_285) < l_761) <= 0xCFF9L))) | l_758) & g_129) < 0UL) , p_48) || p_50) <= 0L)) , p_48) ^ 0UL) || l_768) >= 0x42FB3E71L)));
        }
        g_776++;
        for (p_47 = 0; (p_47 != 33); p_47 = safe_add_func_int16_t_s_s(p_47, 1))
        {
            int64_t l_781 = 0x5DBA4CD745D6A0C8LL;
            if (g_194)
                break;
            l_772 ^= ((((l_68 = l_781) , (safe_mul_func_int8_t_s_s((l_784 != ((l_775 && (g_508 ^ (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((g_648 < (safe_sub_func_int64_t_s_s(((g_199 && ((safe_div_func_int8_t_s_s((0UL && ((l_768 ^ l_761) < 4L)), l_771)) == p_48)) ^ 0x92ADL), p_48))), 2L)), 0x12L)))) & 0xFCL)), g_700))) != 18446744073709551614UL) || 0L);
        }
        if ((0x83151DA4L > 0L))
        {
            uint32_t l_800 = 4294967289UL;
            int32_t l_809 = 0x0E1917BBL;
            int32_t l_812 = 1L;
            uint32_t l_829 = 1UL;
            int32_t l_945 = (-8L);
            int64_t l_1031 = 0x10B91E8C5C240689LL;
            if ((safe_add_func_int16_t_s_s(g_324, ((+((l_717 & (g_700 = (safe_div_func_uint32_t_u_u((l_800--), (safe_mod_func_int32_t_s_s((safe_mul_func_uint64_t_u_u((g_605 , (safe_lshift_func_uint8_t_u_s((l_809 = 1UL), g_508))), ((safe_sub_func_int8_t_s_s((l_812 > ((safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(l_773, (safe_sub_func_uint32_t_u_u(g_652, l_812)))), (-1L))) | l_812)), g_700)) && p_49))), g_605)))))) , l_819)) && l_761))))
            {
                int16_t l_834 = (-1L);
                l_771 = l_760;
                g_700 ^= (safe_add_func_uint32_t_u_u((~((((g_129 ^ (safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(0x53739F0B637EF90ELL, p_49)), 1))) <= g_205) ^ (safe_div_func_uint64_t_u_u(((l_829 = 3L) > (safe_add_func_int8_t_s_s(g_707, (safe_sub_func_int8_t_s_s(l_834, (safe_div_func_int16_t_s_s(((l_834 & (((safe_lshift_func_int64_t_s_u(((l_759 = ((safe_div_func_float_f_f(g_285, p_49)) , 0UL)) | g_196), l_717)) != l_774) == g_199)) | 0x3010F4C1L), 0xFC05L))))))), 0x240D0ABE85DF39C6LL))) , l_834)), p_49));
                return l_60;
            }
            else
            {
                float l_841 = (-0x5.1p+1);
                int32_t l_842 = (-3L);
                int32_t l_960 = 0L;
                int32_t l_962 = 3L;
                int32_t l_963 = 0xAAB625AAL;
                l_842 = g_648;
                for (l_68 = 0; (l_68 != (-3)); l_68--)
                {
                    uint32_t l_853 = 0UL;
                    int32_t l_860 = 6L;
                    l_759 = ((safe_rshift_func_int32_t_s_s((!(-3L)), (255UL <= ((g_648 |= (safe_sub_func_uint16_t_u_u(g_419, (l_853 = (safe_unary_minus_func_int8_t_s(l_842)))))) != g_573)))) ^ (safe_div_func_int8_t_s_s((g_604 ^= (((safe_mod_func_uint8_t_u_u((((((l_812 == ((g_205 = (safe_mod_func_int16_t_s_s((((((g_324 | g_205) == (p_49 >= l_860)) , g_572) > l_842) , 0xF239L), l_829))) | 0xA244C800CACFB8C9LL)) , l_775) | g_538) > p_49) < g_587), p_50)) && p_49) > 0UL)), 0xBAL)));
                    if (l_809)
                        break;
                }
                for (l_759 = (-29); (l_759 != 6); l_759 = safe_add_func_uint32_t_u_u(l_759, 5))
                {
                    const int64_t l_863 = (-8L);
                    int32_t l_872 = (-3L);
                    int32_t l_873 = 8L;
                    int32_t l_874 = (-3L);
                    g_587 = (l_863 && (l_819 >= (safe_rshift_func_uint64_t_u_u(((((l_829 || (((g_711 && (((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((++g_875), l_774)), ((p_48 > (g_878--)) , (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((((~(safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((g_538 || ((((safe_add_func_int16_t_s_s(0x3404L, p_47)) , p_50) | l_758) > g_572)), g_409)), 0UL)) | 0x40CAL), g_687)), 1))) > 0x6FD4B1B5L) == 0L) , g_445), 2)) ^ l_800), 0x94B0L)) & g_194) > l_800), 18446744073709551609UL)), p_48)), l_842))))) != g_687), 7)) , 8UL) && 6L)) <= g_471) , l_873)) >= p_49) && (-8L)) ^ 255UL), p_48))));
                    for (g_199 = 0; (g_199 == 14); g_199++)
                    {
                        l_842 = (safe_lshift_func_int64_t_s_u((safe_div_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((((safe_sub_func_int16_t_s_s(((g_707 = (g_410 < (p_50 && g_700))) != ((-3L) && l_759)), (g_587 = (l_863 , (l_800 < ((safe_mul_func_int8_t_s_s((l_809 = ((safe_div_func_uint32_t_u_u((g_878 = (l_775 &= (safe_lshift_func_uint64_t_u_u(p_50, 26)))), ((l_770 = (((+(safe_div_func_int32_t_s_s((((l_872 &= l_873) == p_49) >= p_49), l_759))) , p_47) == g_711)) , g_445))) <= p_49)), g_112)) , l_873)))))) ^ g_610) == g_253), l_842)), l_873)) || p_47) && g_202), l_771)), g_680));
                        if (p_50)
                            continue;
                        l_809 = 0x648DFD7DL;
                        g_587 |= l_770;
                    }
                    for (p_50 = 0; (p_50 != 51); p_50 = safe_add_func_uint8_t_u_u(p_50, 3))
                    {
                        int32_t l_946 = 0x20FAC971L;
                        uint8_t l_959 = 6UL;
                        l_842 = (l_774 |= ((l_842 , p_50) , ((safe_lshift_func_int64_t_s_u((safe_rshift_func_int8_t_s_s((((l_946 = (g_587 == (safe_mul_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((0xEF9FL & (+p_48)), ((((3L || ((l_945 = ((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((((((g_373 = (-7L)) && ((safe_add_func_uint64_t_u_u(l_768, (+(g_707 = (safe_rshift_func_uint64_t_u_s(l_758, g_205)))))) | l_812)) | p_49) == l_842) < 255UL), l_759)), 3)) >= p_48)) , g_285)) && p_50) , l_829) <= p_47))), 0x10L)), l_812)))) | 0UL) , l_872), 0)), 59)) > p_49)));
                        g_713 = ((safe_div_func_float_f_f(((g_711 = p_48) > l_842), ((((safe_mul_func_float_f_f(((safe_div_func_float_f_f((-0x1.7p-1), (p_46 = ((l_842 > p_47) != ((((safe_sub_func_float_f_f((safe_div_func_float_f_f((((safe_mul_func_int8_t_s_s(p_48, (g_508 , (p_50 <= p_47)))) , l_842) != 0x1.4F5AEFp+93), p_49)), p_50)) == p_50) >= p_48) < p_50))))) > l_959), 0x1.783E99p-76)) > 0x9.5B6C0Fp-84) > p_47) == g_410))) < g_538);
                        if (g_112)
                            break;
                    }
                    --g_965;
                }
            }
            g_687 = l_717;
            if (((safe_rshift_func_int16_t_s_s(3L, 6)) < (safe_div_func_uint8_t_u_u(g_112, g_711))))
            {
                int32_t l_990 = 0xF625C169L;
                int32_t l_1009 = 0x745EA026L;
                int32_t l_1011 = 0x9DF5FFFFL;
                p_48 = ((safe_rshift_func_uint32_t_u_u(((~(~(((safe_add_func_uint64_t_u_u(((0xCB8F614D934DF2BELL ^ ((~(safe_rshift_func_int16_t_s_s((g_419 = l_760), (safe_add_func_uint16_t_u_u(p_50, ((((g_604 = (!(safe_mul_func_uint64_t_u_u((!((0x813FL <= (safe_lshift_func_uint8_t_u_u(p_49, 4))) | (l_990 = (l_989 != g_112)))), l_775)))) && (((4294967295UL | g_560) == 0xBA81AB7CL) & l_770)) == (-5L)) ^ g_129)))))) == g_652)) != 0x2115D6B1DC8AE568LL), 18446744073709551614UL)) , (-1L)) > 1L))) > g_445), l_945)) , p_48);
                l_1009 |= (safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((-1L) == (0L == (safe_rshift_func_int64_t_s_s(l_784, ((((((safe_lshift_func_uint32_t_u_u(((safe_mul_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(p_47, 1L)), (safe_mod_func_uint16_t_u_u((p_48 & (l_760 && ((((l_812 == p_48) >= 0x6B0AL) & g_605) >= 0x34D23D44C5EDD466LL))), g_700)))) >= g_194) , p_49), g_648)), p_48)) , g_875), p_48)) < 65531UL) , g_202) == p_50) <= g_328) > 0xEA08FB83E85982D0LL))))), p_48)) > 3UL), l_68));
                g_648 = (l_812 = 0x185A9B60L);
                g_1014++;
            }
            else
            {
                for (g_253 = 27; (g_253 != 22); g_253--)
                {
                    return p_49;
                }
                for (l_771 = 0; (l_771 >= (-12)); --l_771)
                {
                    if (p_49)
                        break;
                }
                l_68 = (g_587 = g_587);
            }
            g_587 = (p_49 , ((safe_rshift_func_int64_t_s_u(2L, (((l_759 = (((g_707 = (safe_mod_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((p_48 , l_759), (safe_sub_func_int32_t_s_s(g_961, (((p_49 > 65535UL) >= ((0xA988L != l_760) || l_1031)) , g_8))))), l_68)) , 0x5A9DL) || l_945), 1L))) || p_50) > p_50)) ^ (-4L)) < p_49))) != 18446744073709551609UL));
        }
        else
        {
            g_286 = (g_965 && ((0xF308L & ((safe_add_func_int8_t_s_s((((g_707 = ((safe_mul_func_uint16_t_u_u((((-6L) <= ((g_253 , (safe_lshift_func_uint8_t_u_u(l_1038, (0x5F7811E0D8CB3FF9LL == (safe_div_func_uint64_t_u_u((9UL < 0x53075074L), (safe_rshift_func_int16_t_s_u((p_49 <= g_560), g_875)))))))) == 0UL)) < 0xC8A15D8FE355048BLL), l_758)) , l_772)) & (-1L)) != g_205), 0x4CL)) , 0x6D38L)) < 0UL));
        }
    }
    else
    {
        uint16_t l_1043 = 0xA12FL;
        l_1043 = g_875;
    }
    l_1044 = g_373;
    g_604 |= ((safe_add_func_int64_t_s_s(((safe_add_func_int32_t_s_s((l_774 = ((++l_1049) > (((safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(g_419, 3)) < (((0xC7A49CFBL && g_131) > (safe_rshift_func_uint64_t_u_s(((0xA2L && (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_50, 5)), (safe_mod_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((((0x6F80ED83L || ((((safe_mul_func_uint32_t_u_u(0x01EC5E1EL, 7UL)) >= (safe_mul_func_uint32_t_u_u(((p_47 || g_1013) == l_758), 8L))) & p_49) || p_47)) <= g_573) , g_961) & 0xA3F1L) > 0x6791A72BE2722EB1LL), l_1038)), g_8)) < 0x3AL) & p_50), 0x34E0L)) , p_49) == 0x1816080BCB88AB51LL), 0x2271L))))) == 18446744073709551615UL), p_47))) > g_587)), g_560)) < l_1010) >= 0x2DE5E301L))), p_49)) >= 0x65823189L), g_285)) != 3L);
    return p_49;
}
uint64_t func_56(const uint32_t p_57)
{
    int32_t l_83 = (-7L);
    int32_t l_681 = 8L;
    int32_t l_682 = 0x26A8E26AL;
    int32_t l_683 = (-3L);
    int32_t l_684 = 0x867E31A6L;
    int32_t l_685 = 0L;
    int32_t l_686 = 0xCED819CAL;
    int32_t l_688 = 0xB6C910B1L;
    int32_t l_689 = 0x088DFA95L;
    int32_t l_690 = (-1L);
    int32_t l_691 = (-1L);
    int32_t l_692 = 0L;
    int32_t l_693 = (-4L);
    int32_t l_694 = (-1L);
    int32_t l_695 = 8L;
    int32_t l_696 = 0xA7D16AB6L;
    int32_t l_697 = 0xC3BF5AFFL;
    int32_t l_698 = 0x57B7C47FL;
    int32_t l_699 = 0x1A6C58D8L;
    int32_t l_701 = 0xF1983AC7L;
    int32_t l_702 = 0x40FA5F11L;
    int32_t l_703 = 0xB4A6F76CL;
    int32_t l_705 = 0xDF18A018L;
    int32_t l_706 = 0L;
    int32_t l_708 = (-8L);
    int32_t l_709 = 0x199F0403L;
    int32_t l_710 = 0x29C4BD88L;
    int32_t l_712 = 0xC2A867BAL;
    l_688 |= (((g_713 = (safe_div_func_float_f_f((safe_add_func_float_f_f(func_81(l_83), (safe_div_func_float_f_f((-(p_57 <= (safe_mul_func_float_f_f((safe_div_func_float_f_f((safe_sub_func_float_f_f(p_57, ((safe_lshift_func_uint64_t_u_s((g_680 = (safe_div_func_uint32_t_u_u((safe_mul_func_uint64_t_u_u(((g_194 , ((((l_83 || 0x55L) & l_83) && (g_648 = ((l_83 >= 0xFBL) == 0x24L))) && l_83)) == 1L), p_57)), l_83))), l_83)) , p_57))), 0x1.9p+1)), 0x9.7C0ABCp-49)))), 0x0.3p+1)))), l_83))) , p_57) < (-1L));
    l_689 = p_57;
    return p_57;
}
const float func_81(uint8_t p_82)
{
    uint32_t l_84 = 0x7B20295DL;
    int32_t l_122 = 1L;
    int64_t l_128 = 0x2FF03E53C5305585LL;
    int32_t l_133 = 0x449D34E1L;
    uint8_t l_134 = 0x1BL;
    uint8_t l_154 = 1UL;
    uint32_t l_287 = 0xC972B03FL;
    uint8_t l_313 = 0x10L;
    const int8_t l_466 = (-6L);
    uint32_t l_662 = 0x13DE392BL;
    if (l_84)
    {
        uint32_t l_123 = 0UL;
        int32_t l_135 = 9L;
        int32_t l_153 = 0x0E064424L;
        uint16_t l_165 = 65526UL;
        int32_t l_244 = 0x7F26C9C1L;
        uint16_t l_290 = 0x8A83L;
        for (l_84 = 27; (l_84 < 24); --l_84)
        {
            const int32_t l_119 = 0x01E8B95DL;
            int32_t l_130 = 0xA8812E5EL;
            int32_t l_203 = 0xC582B1A1L;
            int32_t l_204 = 0L;
            uint32_t l_283 = 0x8013064CL;
            int8_t l_284 = 0L;
            for (p_82 = 0; (p_82 >= 43); p_82++)
            {
                int16_t l_90 = 0L;
                int32_t l_97 = 0x5E53F01EL;
                uint16_t l_148 = 65535UL;
                int32_t l_217 = 0L;
                l_90 = 0x914F0912L;
                if (((((safe_sub_func_uint64_t_u_u((((0xEFD7F9B64A474477LL | (safe_lshift_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((g_112 = ((l_97 &= p_82) < ((safe_sub_func_float_f_f(l_84, (safe_div_func_float_f_f(g_8, (safe_sub_func_float_f_f((safe_sub_func_float_f_f(0x5.91552Dp-34, 0x3.7B27F9p-51)), (safe_sub_func_float_f_f((p_82 <= (safe_sub_func_float_f_f(((g_89 = (safe_sub_func_float_f_f((((p_82 , g_8) > g_67) >= (-0x7.Bp+1)), p_82))) == 0x4.73F190p-30), 0xE.A102A8p+58))), l_90)))))))) , 6UL))), g_8)) && g_8) & p_82), 3))) != 1L) , l_97), p_82)) , p_82) > 0x004527F8L) , l_90))
                {
                    uint32_t l_132 = 1UL;
                    int32_t l_155 = 0x5A6583FDL;
                    int32_t l_156 = 0x37DDF4F0L;
                    int64_t l_198 = 0xA001A3C860666158LL;
                    l_133 &= (safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_div_func_int64_t_s_s(l_84, p_82)) , (l_119 < (safe_rshift_func_int64_t_s_u(((g_131 = (((l_84 >= ((l_122 |= l_119) <= l_123)) , ((safe_lshift_func_int16_t_s_u(0x934CL, 4)) < (g_129 ^= (0x632CC17BCF7A535ALL & ((safe_add_func_int64_t_s_s((255UL > l_128), 1L)) < 4294967286UL))))) <= l_130)) == l_84), 33)))), l_132)), p_82));
                    g_89 = (l_134 >= (((g_131 , (l_135 |= g_131)) , (safe_mul_func_float_f_f(((safe_mul_func_float_f_f(g_89, (g_131 < (safe_mul_func_float_f_f(((safe_div_func_float_f_f((g_67 = (safe_mul_func_float_f_f(((safe_sub_func_uint16_t_u_u((p_82 && (l_134 , l_148)), ((safe_add_func_uint32_t_u_u((l_135 = ((((safe_mod_func_int64_t_s_s(p_82, l_133)) && p_82) > l_130) <= 0xAC55B158L)), l_119)) , g_129))) , p_82), l_123))), g_112)) >= l_123), 0x7.F38625p-24))))) >= g_89), g_112))) <= g_131));
                    for (g_129 = 8; (g_129 > 28); g_129 = safe_add_func_uint8_t_u_u(g_129, 1))
                    {
                        uint8_t l_195 = 1UL;
                        int32_t l_197 = 0x8EC11135L;
                        l_197 = (safe_rshift_func_uint32_t_u_s((l_156 >= (g_112 , (((safe_div_func_uint64_t_u_u(l_165, (safe_div_func_uint64_t_u_u(((((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((l_155 = ((g_196 = (((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((safe_mul_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_119, g_8)), ((safe_mod_func_uint32_t_u_u((l_84 && (-1L)), g_131)) | (safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s(((l_195 = (((safe_add_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(p_82, 0x942222B0L)) ^ 0xCF65DDD0L), g_131)) > g_112) | g_194)) > p_82), 1L)) ^ l_97) && l_195), 1))))), g_194)), 15)) == 0xFF7CL) & g_112)) & p_82)) , 0UL), l_130)) < 7L), 5)) & g_112), p_82)), g_131)) < p_82) | g_194) || l_90), g_131)))) > l_119) < g_129))), 12));
                    }
                    if (l_198)
                        continue;
                }
                else
                {
                    float l_200 = (-0x6.6p+1);
                    int32_t l_214 = 0xC86C8505L;
                    if ((g_199 = l_130))
                    {
                        int32_t l_201 = 0xCADF514AL;
                        if (l_201)
                            break;
                        g_205--;
                        g_89 = (safe_sub_func_float_f_f((safe_div_func_float_f_f(0x0.C0E695p+48, ((safe_lshift_func_uint16_t_u_s(((((l_214 < (p_82 & ((safe_sub_func_uint8_t_u_u((l_217 && (safe_rshift_func_int64_t_s_s(0xC7289F41D23F08B2LL, 37))), ((3L != (safe_lshift_func_uint32_t_u_u(((~((l_97 = 0x14BEF022L) < (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((l_214 >= ((((l_204 |= (l_203 = (safe_sub_func_int16_t_s_s(l_135, 65527UL)))) & 0L) && 0xAD79L) | p_82)), p_82)), p_82)))) < l_135) || 4294967295UL), 1L)), g_196)))) <= 0xE4L), g_129))) , g_205))) && g_194))) != p_82) > g_131) & l_165), 2)) , g_67))), 0xF.1E5DE6p+70));
                        return p_82;
                    }
                    else
                    {
                        return l_214;
                    }
                }
                if (p_82)
                    continue;
            }
            if (((safe_add_func_int32_t_s_s((l_203 == (((((safe_mod_func_int16_t_s_s(p_82, (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s((p_82 || ((+0xFDL) & (g_253 = ((safe_add_func_uint32_t_u_u(g_202, ((l_244 != (g_205 != g_205)) == (safe_lshift_func_int64_t_s_u((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(0xE9A979A3L, l_165)) > l_135), p_82)), p_82)), g_129))))) || l_130)))))), p_82)))) || g_199) >= p_82) , p_82) | l_135)), l_204)) , 0L))
            {
                uint8_t l_278 = 255UL;
                g_89 = ((g_253 = g_253) , (safe_div_func_float_f_f(g_196, (safe_div_func_float_f_f((p_82 != (((0xFE33L != (g_253 , (safe_add_func_uint16_t_u_u(p_82, 0x08C4L)))) && 0xE33EB71EL) , (g_89 != g_194))), p_82)))));
                l_153 = (safe_lshift_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(0x4AL, ((((safe_mod_func_int16_t_s_s(((0x4EF5L | g_253) != ((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0x46L, ((safe_add_func_int16_t_s_s(0xDDEDL, 0L)) < (safe_mod_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u(p_82, 3)) ^ (safe_mul_func_int16_t_s_s(l_278, ((safe_add_func_uint64_t_u_u((((safe_div_func_int64_t_s_s((8L && 0x0119L), l_119)) ^ p_82) != l_153), g_8)) && (-1L))))) , l_203), g_196))))), l_134)) || 0x02AD15776B272A17LL)), l_204)) <= 0x2A5AE14A2BDFB097LL) | g_131) < g_129))) & l_283), g_131));
                l_203 = (g_199 == 0x14L);
            }
            else
            {
                uint16_t l_291 = 65535UL;
                ++l_287;
                l_290 |= g_286;
                l_122 = ((-2L) ^ l_291);
            }
        }
    }
    else
    {
        uint32_t l_294 = 0x7ECCD117L;
        int32_t l_314 = 0x34B83A5DL;
        int32_t l_315 = 0L;
        int32_t l_316 = 5L;
        int32_t l_317 = 0x8AD5BD78L;
        uint32_t l_463 = 0xD0D2D7D5L;
        int8_t l_467 = 0x2DL;
        l_294 = (safe_sub_func_int16_t_s_s((g_285 | l_134), p_82));
        p_82 = p_82;
        g_89 = ((safe_unary_minus_func_uint8_t_u(((g_8 = l_294) < 0UL))) , (((safe_div_func_float_f_f((safe_add_func_float_f_f((safe_div_func_float_f_f((((g_253 , (safe_add_func_float_f_f((l_133 = g_112), (safe_add_func_float_f_f(l_134, (safe_div_func_float_f_f((safe_sub_func_float_f_f(((((l_122 , (!((safe_div_func_float_f_f(0x6.CF389Dp+20, l_294)) > l_313))) < p_82) == p_82) < p_82), 0x0.F92F17p-57)), p_82))))))) > 0x0.Cp-1) == g_112), g_253)), g_194)), l_294)) > 0x0.Ap+1) < p_82));
        for (l_287 = (-4); (l_287 < 45); l_287 = safe_add_func_int8_t_s_s(l_287, 9))
        {
            int8_t l_322 = 0xE4L;
            int32_t l_323 = 1L;
            int16_t l_325 = 0x0A6FL;
            int32_t l_326 = 0xCBF73657L;
            uint32_t l_464 = 0xBDAD2427L;
            uint8_t l_571 = 248UL;
            int32_t l_649 = 0xBCA2B792L;
            int32_t l_651 = 0x86DF23C8L;
            int8_t l_661 = 0xEAL;
            for (g_253 = 0; (g_253 == (-15)); g_253 = safe_sub_func_uint32_t_u_u(g_253, 5))
            {
                int8_t l_327 = (-2L);
                int32_t l_361 = 0x4A28D324L;
                uint32_t l_363 = 0x40D2D856L;
                int32_t l_408 = 0x2B217F77L;
                uint32_t l_420 = 4294967295UL;
                uint64_t l_590 = 18446744073709551615UL;
                int64_t l_611 = 0xF1ED797AE97160B4LL;
                if ((l_122 &= ((l_323 = l_322) <= (--g_328))))
                {
                    const uint16_t l_341 = 0xD16DL;
                    const uint32_t l_357 = 0x79274EEEL;
                    int32_t l_362 = 5L;
                    for (l_326 = 0; (l_326 != 27); l_326 = safe_add_func_uint64_t_u_u(l_326, 9))
                    {
                        uint8_t l_360 = 0x03L;
                        p_82 = l_134;
                        l_361 = (g_285 <= (safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_mul_func_int64_t_s_s(g_328, (safe_sub_func_int8_t_s_s((l_323 = ((l_341 ^ 0x688AD4082952BEEBLL) || ((+(safe_sub_func_int32_t_s_s(l_154, (safe_add_func_int16_t_s_s(((((safe_rshift_func_int64_t_s_u((((safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((g_202 == (safe_mul_func_uint64_t_u_u((g_194 && ((safe_sub_func_uint64_t_u_u(l_357, (safe_mod_func_uint64_t_u_u((g_199 < g_285), l_327)))) && 0x052A225A8C6FE17DLL)), 18446744073709551615UL))), l_317)) , l_84), 7)) , g_205) != 0L), p_82)) , 0xCBL) <= g_328) < l_360), 1UL))))) > 0x8CFFL))), 0x0BL)))) < l_316), p_82)) >= 65532UL), p_82)));
                    }
                    ++l_363;
                }
                else
                {
                    int32_t l_372 = 0x67A8A6FBL;
                    l_323 &= (safe_rshift_func_uint8_t_u_s(l_294, ((-6L) == ((((safe_add_func_uint8_t_u_u((g_131 | (((g_373 = (l_372 | 1L)) >= ((safe_sub_func_int16_t_s_s(l_363, (p_82 == (safe_lshift_func_int32_t_s_s(0xB9BC0F59L, 26))))) , (((safe_add_func_int8_t_s_s((g_205 = (l_363 ^ 0L)), g_253)) || 1L) != 0x5AA2L))) > l_327)), l_372)) | p_82) , p_82) != 0L))));
                    l_326 = p_82;
                    if (p_82)
                        break;
                }
                g_89 = (safe_add_func_float_f_f((safe_sub_func_float_f_f((safe_mul_func_float_f_f((safe_mul_func_float_f_f(((-(safe_add_func_float_f_f(0x9.9p+1, (safe_div_func_float_f_f(((safe_add_func_float_f_f((-0x2.Cp+1), (l_287 == (safe_mul_func_float_f_f((safe_sub_func_float_f_f((((g_67 = (((((((g_419 = (+(l_363 > (l_133 = (0x7C1476EEAEBF9CC5LL <= (safe_sub_func_uint32_t_u_u(p_82, (l_122 &= (3L >= (safe_add_func_uint32_t_u_u(((l_408 ^= (safe_rshift_func_int8_t_s_u((1UL < (--g_410)), (safe_mul_func_int32_t_s_s((safe_div_func_int64_t_s_s((safe_lshift_func_uint64_t_u_u(18446744073709551615UL, g_253)), l_361)), 0x7E123A8CL))))) | l_133), 0xEDFA59ACL))))))))))) < (-1L)) , p_82) & 1UL) , g_89) >= g_112) == g_409)) > g_253) >= p_82), 0x7.3E7C29p+76)), l_323))))) == 0x4.5722FBp-99), l_420))))) <= l_325), p_82)), p_82)), 0x0.Dp+1)), 0xC.4D18DCp-10));
                if ((0x3AC69C9B773CFD7DLL < 0x042BDC2A12C240C7LL))
                {
                    uint64_t l_465 = 18446744073709551609UL;
                    int32_t l_468 = 7L;
                    uint16_t l_483 = 0x034FL;
                    int64_t l_612 = 1L;
                    l_317 ^= (((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((((l_467 = (safe_mul_func_int8_t_s_s((safe_mul_func_int64_t_s_s(l_315, (safe_sub_func_int8_t_s_s(((l_322 == ((((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((g_131 && (--g_445)), ((safe_mul_func_uint8_t_u_u((l_408 = (((l_465 = (safe_rshift_func_uint32_t_u_s((p_82 || (safe_mod_func_int16_t_s_s(((!(((p_82 == (((safe_rshift_func_uint64_t_u_s((l_361 = ((((((safe_mod_func_uint32_t_u_u(g_324, p_82)) || (safe_add_func_uint16_t_u_u(0UL, ((l_322 ^ 5L) | g_112)))) == l_361) >= l_294) > 0x9DD5L) | p_82)), 24)) , l_463) >= 0x42E88A8FL)) != p_82) , (-3L))) , l_464), l_315))), 13))) >= l_466) & p_82)), g_373)) & 0x0DFFL))) , l_466), 0x8FBDL)), g_373)), p_82)), (-8L))) == 0x178CEC19L) < 0UL) < 0xA3ECCFEC03593D4BLL)) , 0L), g_205)))), g_285))) , p_82) >= l_323), l_322)) ^ g_202), l_468)) == l_294) & l_323);
                    for (g_131 = (-24); (g_131 <= 6); g_131 = safe_add_func_int16_t_s_s(g_131, 1))
                    {
                        uint64_t l_476 = 1UL;
                        uint32_t l_481 = 0x7E42EC95L;
                        uint32_t l_482 = 18446744073709551615UL;
                        int32_t l_486 = 1L;
                        g_471--;
                        g_205 |= ((safe_mul_func_uint32_t_u_u(1UL, l_476)) ^ ((((safe_mod_func_uint64_t_u_u((((g_471 != ((l_486 = (p_82 > (((safe_sub_func_uint64_t_u_u(p_82, ((l_481 && (l_482 == ((l_483 , (safe_mul_func_uint32_t_u_u(((g_8 ^ l_483) > g_199), l_464))) ^ g_129))) , p_82))) < 0x5AEE3F43L) || g_194))) | g_373)) || p_82) , l_322), g_112)) | l_154) == 18446744073709551615UL) | l_476));
                    }
                    l_408 = (l_323 = g_129);
                    if ((safe_div_func_uint16_t_u_u(l_463, (safe_mul_func_int64_t_s_s(g_410, ((safe_lshift_func_uint32_t_u_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint32_t_u_s(0xDB7C5D05L, (0UL != (safe_unary_minus_func_uint32_t_u((((p_82 && (0xE7L != (p_82 | ((safe_mul_func_int8_t_s_s((safe_rshift_func_int64_t_s_u(((safe_add_func_uint32_t_u_u((g_205 = (safe_rshift_func_uint32_t_u_s(l_363, ((((l_316 = (safe_add_func_int16_t_s_s((l_465 , l_361), l_463))) ^ g_508) , 0xA22641FEL) , p_82)))), p_82)) | l_322), 37)), g_131)) ^ g_324)))) && g_419) > 0xC8310920EB86FDFCLL)))))), p_82)), l_322)) == l_322))))))
                    {
                        float l_533 = 0x0.4p+1;
                        uint8_t l_545 = 0xDFL;
                        g_205 |= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((((g_196 >= ((safe_mod_func_uint32_t_u_u(((~(safe_add_func_int32_t_s_s((l_361 |= (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_285, (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(1L)), ((l_154 < (g_445 &= ((safe_lshift_func_int32_t_s_u(l_323, 29)) , p_82))) & (((safe_rshift_func_uint32_t_u_u((p_82 | (safe_add_func_int16_t_s_s(((((safe_add_func_int16_t_s_s((g_538 = l_122), ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint32_t_u_s((safe_lshift_func_int64_t_s_s((l_408 = (l_545 = p_82)), g_202)), 16)), 7)) , g_202))) || p_82) | 0x481374B1L) == p_82), 0xA34AL))), 2)) != l_326) < 1UL)))))), p_82))), p_82))) , g_373), 0x78772178L)) < l_467)) && 0xD6D122049A0B0C24LL) <= (-2L)) != p_82), g_131)) & g_324), 5)), p_82));
                        g_286 = (((safe_mod_func_uint8_t_u_u((+(((((l_571 = (((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_82, (safe_div_func_uint64_t_u_u((0L <= (safe_rshift_func_int32_t_s_u((l_287 && ((safe_mod_func_uint8_t_u_u(g_199, 0xB8L)) , ((g_560 ^= (g_471 >= l_313)) & (l_326 ^= (safe_rshift_func_int32_t_s_s((safe_add_func_uint16_t_u_u(l_420, (((safe_mod_func_int8_t_s_s((!(((safe_add_func_uint32_t_u_u(((((((~l_545) , l_465) > (-1L)) , 0x42L) & g_373) & g_131), 0x0A53A96FL)) >= 0L) ^ g_373)), 0x09L)) >= p_82) < 0xA9D3D1F5A900BB5DLL))), p_82)))))), 18))), p_82)))), p_82)) | l_545) < g_194)) && p_82) < g_410) , 0xFEL) ^ p_82)), l_325)) ^ (-10L)) && (-1L));
                    }
                    else
                    {
                        uint64_t l_574 = 5UL;
                        int32_t l_601 = (-1L);
                        uint64_t l_606 = 0xF4F018074033CB16LL;
                        int8_t l_650 = 1L;
                        uint32_t l_660 = 0xEA81F63EL;
                        --l_574;
                        l_122 = (((((l_323 = (p_82 > ((safe_mul_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((l_363 <= ((0xF9L <= ((safe_div_func_uint16_t_u_u(((l_326 , (l_468 |= (g_587 = (g_129 ^ ((((safe_mul_func_int64_t_s_s((g_253 && (safe_lshift_func_int32_t_s_s(0xE091C185L, 14))), 18446744073709551611UL)) > (l_133 |= p_82)) > g_373) || l_313))))) <= l_128), g_202)) > p_82)) || g_199)) && 18446744073709551610UL), p_82)), 18446744073709551615UL)) != (-9L)))) || 1UL) & 0x7D48L) || g_196) , l_574);
                        l_133 = (((g_202 != (safe_mul_func_uint8_t_u_u(l_590, (g_604 = (((safe_rshift_func_int16_t_s_u((((safe_mul_func_int32_t_s_s((0x9F3CL >= (safe_div_func_uint8_t_u_u((g_610 = (g_205 ^= (safe_div_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(g_409, ((l_326 = ((l_601 ^= 0xD186L) > l_467)) & p_82))), ((safe_div_func_int32_t_s_s(((--l_606) >= (!p_82)), 0x1B11B147L)) && l_314))))), g_199))), p_82)) && p_82) >= l_611), 7)) >= g_409) <= g_445))))) | l_612) == g_8);
                        g_546 = (safe_sub_func_float_f_f(((safe_add_func_float_f_f((safe_sub_func_float_f_f((safe_sub_func_float_f_f(((((safe_mod_func_uint8_t_u_u((l_294 && p_82), (safe_lshift_func_int64_t_s_u((safe_div_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u(0x5A46C8D1F78BCFD7LL, (safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((((safe_mul_func_int64_t_s_s((safe_mul_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int32_t_s_u(0xD2665F52L, 19)), ((((g_572 | g_112) , (g_205 = (safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mul_func_int32_t_s_s((((((l_316 & ((((g_652--) | (~((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint32_t_u_s((((((((((g_131 , g_419) < 0x0E22L) , l_322) , g_8) >= 3UL) == l_660) != 0x4D1AL) <= g_508) ^ 65530UL), g_194)) != g_328) , p_82) & p_82), g_409)) ^ g_605))) ^ l_465) , 0xEAL)) == g_112) <= p_82) >= 1UL) , 0xFF4E7C8DL), g_112)), 5)) != 1L), g_328)))) && 0x526589F5L) || p_82))) < 0x6B06L) || 0x84L), 0x61277F72L)), p_82)) > p_82) | 0xE4L), l_287)), 0x4DE50B8690C5102CLL)))) , g_285) && 0x32L), l_601)), 51)))) , 0x4141L) <= p_82) , g_445), l_361)), g_328)), p_82)) < 0x9.6C7A63p+53), l_465));
                    }
                }
                else
                {
                    return g_573;
                }
            }
            l_662++;
            if (g_112)
                break;
        }
    }
    return p_82;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, print_hash_value);
    
    
    transparent_crc(g_112, print_hash_value);
    transparent_crc(g_129, print_hash_value);
    transparent_crc(g_131, print_hash_value);
    transparent_crc(g_194, print_hash_value);
    transparent_crc(g_196, print_hash_value);
    transparent_crc(g_199, print_hash_value);
    transparent_crc(g_202, print_hash_value);
    transparent_crc(g_205, print_hash_value);
    transparent_crc(g_253, print_hash_value);
    transparent_crc(g_285, print_hash_value);
    transparent_crc(g_286, print_hash_value);
    transparent_crc(g_324, print_hash_value);
    transparent_crc(g_328, print_hash_value);
    transparent_crc(g_373, print_hash_value);
    transparent_crc(g_409, print_hash_value);
    transparent_crc(g_410, print_hash_value);
    transparent_crc(g_419, print_hash_value);
    transparent_crc(g_445, print_hash_value);
    transparent_crc(g_471, print_hash_value);
    transparent_crc(g_508, print_hash_value);
    transparent_crc(g_538, print_hash_value);
    
    transparent_crc(g_560, print_hash_value);
    transparent_crc(g_572, print_hash_value);
    transparent_crc(g_573, print_hash_value);
    transparent_crc(g_587, print_hash_value);
    transparent_crc(g_604, print_hash_value);
    transparent_crc(g_605, print_hash_value);
    transparent_crc(g_610, print_hash_value);
    transparent_crc(g_647, print_hash_value);
    transparent_crc(g_648, print_hash_value);
    transparent_crc(g_652, print_hash_value);
    transparent_crc(g_680, print_hash_value);
    transparent_crc(g_687, print_hash_value);
    transparent_crc(g_700, print_hash_value);
    transparent_crc(g_704, print_hash_value);
    transparent_crc(g_707, print_hash_value);
    transparent_crc(g_711, print_hash_value);
    
    transparent_crc(g_776, print_hash_value);
    transparent_crc(g_875, print_hash_value);
    transparent_crc(g_878, print_hash_value);
    transparent_crc(g_961, print_hash_value);
    transparent_crc(g_964, print_hash_value);
    transparent_crc(g_965, print_hash_value);
    transparent_crc(g_1012, print_hash_value);
    transparent_crc(g_1013, print_hash_value);
    transparent_crc(g_1014, print_hash_value);
    
    transparent_crc(g_1147, print_hash_value);
    transparent_crc(g_1222, print_hash_value);
    transparent_crc(g_1225, print_hash_value);
    transparent_crc(g_1226, print_hash_value);
    transparent_crc(g_1227, print_hash_value);
    transparent_crc(g_1231, print_hash_value);
    transparent_crc(g_1232, print_hash_value);
    transparent_crc(g_1233, print_hash_value);
    transparent_crc(g_1236, print_hash_value);
    transparent_crc(g_1247, print_hash_value);
    transparent_crc(g_1250, print_hash_value);
    transparent_crc(g_1251, print_hash_value);
    transparent_crc(g_1254, print_hash_value);
    transparent_crc(g_1256, print_hash_value);
    transparent_crc(g_1257, print_hash_value);
    transparent_crc(g_1262, print_hash_value);
    transparent_crc(g_1267, print_hash_value);
    
    
    transparent_crc(g_1449, print_hash_value);
    transparent_crc(g_1575, print_hash_value);
    
    transparent_crc(g_1650, print_hash_value);
    transparent_crc(g_1802, print_hash_value);
    transparent_crc(g_1805, print_hash_value);
    
    transparent_crc(g_1964, print_hash_value);
    
    transparent_crc(g_1966, print_hash_value);
    transparent_crc(g_1969, print_hash_value);
    transparent_crc(g_1970, print_hash_value);
    transparent_crc(g_1983, print_hash_value);
    transparent_crc(g_2021, print_hash_value);
    
    transparent_crc(g_2035, print_hash_value);
    transparent_crc(g_2077, print_hash_value);
    transparent_crc(g_2081, print_hash_value);
    transparent_crc(g_2182, print_hash_value);
    
    transparent_crc(g_2197, print_hash_value);
    transparent_crc(g_2198, print_hash_value);
    transparent_crc(g_2259, print_hash_value);
    transparent_crc(g_2328, print_hash_value);
    transparent_crc(g_2433, print_hash_value);
    transparent_crc(g_2605, print_hash_value);
    transparent_crc(g_2687, print_hash_value);
    transparent_crc(g_2696, print_hash_value);
    transparent_crc(g_2725, print_hash_value);
    transparent_crc(g_2726, print_hash_value);
    transparent_crc(g_2729, print_hash_value);
    transparent_crc(g_2805, print_hash_value);
    transparent_crc(g_2894, print_hash_value);
    transparent_crc(g_2980, print_hash_value);
    transparent_crc(g_2981, print_hash_value);
    transparent_crc(g_3044, print_hash_value);
    transparent_crc(g_3078, print_hash_value);
    transparent_crc(g_3155, print_hash_value);
    transparent_crc(g_3158, print_hash_value);
    
    transparent_crc(g_3160, print_hash_value);
    transparent_crc(g_3190, print_hash_value);
    transparent_crc(g_3227, print_hash_value);
    transparent_crc(g_3338, print_hash_value);
    transparent_crc(g_3358, print_hash_value);
    transparent_crc(g_3367, print_hash_value);
    transparent_crc(g_3403, print_hash_value);
    transparent_crc(g_3518, print_hash_value);
    transparent_crc(g_3604, print_hash_value);
    transparent_crc(g_3606, print_hash_value);
    transparent_crc(g_3653, print_hash_value);
    transparent_crc(g_3654, print_hash_value);
    transparent_crc(g_3682, print_hash_value);
    transparent_crc(g_3684, print_hash_value);
    transparent_crc(g_3686, print_hash_value);
    transparent_crc(g_3717, print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return (unsigned char)(crc32_context);
}
