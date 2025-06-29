
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

float g_2 = 0x1.4p+1;
uint16_t g_4 = 0UL;
uint16_t g_35 = 0UL;
uint64_t g_36 = 18446744073709551615UL;
uint64_t g_37 = 0x1162D50C857617C0LL;
uint8_t g_42 = 255UL;
uint16_t g_55 = 65535UL;
int32_t g_62 = (-1L);
int32_t g_64 = 0xFE6B3E96L;
int16_t g_77 = 0x3943L;
int32_t g_78 = (-5L);
int64_t g_82 = 0x160806AF73E8932ALL;
int32_t g_83 = 0xA103ABEDL;
int32_t g_89 = 0L;
int32_t g_92 = (-1L);
int16_t g_95 = 8L;
uint64_t g_96 = 0x2685807939616D9CLL;
int32_t g_112 = 0x58DD5D93L;
int64_t g_113 = 1L;
float g_114 = 0x1.8p+1;
int16_t g_159 = 0x6291L;
uint8_t g_188 = 1UL;
uint32_t g_268 = 0xE0753CE6L;
uint8_t g_269 = 0xFDL;
uint32_t g_270 = 0UL;
int16_t g_323 = 1L;
uint8_t g_324 = 0xD9L;
uint16_t g_325 = 65533UL;
uint16_t g_326 = 65533UL;
uint64_t g_327 = 0x70DFA86E48C6A7EALL;
int32_t g_369 = (-1L);
int16_t g_371 = 0x33EAL;
uint32_t g_395 = 0x9AC969B5L;
uint32_t g_452 = 0xF8870B41L;
int8_t g_498 = 2L;
uint64_t g_499 = 18446744073709551607UL;
int16_t g_520 = (-3L);
int32_t g_581 = 0L;
int32_t g_615 = 0x7C031590L;
uint16_t g_617 = 1UL;
uint32_t g_622 = 0xF42E43CEL;
uint64_t g_659 = 1UL;
uint16_t g_694 = 1UL;
uint16_t g_707 = 65530UL;
int32_t g_713 = 0x20A6EDD0L;
uint8_t g_714 = 1UL;
int64_t g_744 = 1L;
uint64_t g_745 = 0UL;
int16_t g_771 = 1L;
int16_t g_793 = 0xBD71L;
float g_795 = 0x1.FD5A42p-48;
uint32_t g_796 = 0UL;
uint32_t g_811 = 18446744073709551615UL;
uint8_t g_847 = 0UL;
uint64_t g_912 = 0xC29B2D544666EBB9LL;
int8_t g_927 = 0xA3L;
int32_t g_929 = 0x2068D1EFL;
uint8_t g_935 = 0xDDL;
uint64_t g_1049 = 0x73E0D1504BD36AD0LL;
int32_t g_1050 = 1L;
uint32_t g_1051 = 2UL;
float g_1052 = 0x5.Fp+1;
const uint16_t func_1(void);
float func_7(int8_t p_8);
int16_t func_9(uint16_t p_10, float p_11);
uint32_t func_16(int32_t p_17, int16_t p_18);
int64_t func_30(uint32_t p_31);
int32_t func_116(uint32_t p_117);
uint32_t func_125(float p_126);
uint32_t func_127(int8_t p_128, int8_t p_129, float p_130);
const uint16_t func_133(uint16_t p_134);
const int16_t func_148(int64_t p_149, float p_150);
const uint16_t func_1(void)
{
    int32_t l_3 = 0x0B02971CL;
    int8_t l_21 = 0xA3L;
    const uint32_t l_34 = 1UL;
    int32_t l_999 = (-1L);
    int32_t l_1000 = 0L;
    float l_1001 = (-0x1.6p+1);
    int32_t l_1015 = 1L;
    int64_t l_1037 = 0L;
    g_4++;
    l_1001 = func_7(((((g_4 , (l_3 ^ func_9((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(func_16((safe_rshift_func_int16_t_s_s(l_21, (safe_mul_func_int32_t_s_s((safe_lshift_func_uint64_t_u_s((safe_rshift_func_int8_t_s_u(0xC9L, l_3)), 56)), (g_36 = (safe_rshift_func_int64_t_s_s((((((func_30(g_4) ^ l_34) , (g_35 , g_35)) && g_4) , 0x5169FF4CL) > g_35), 42))))))), l_3), g_35)), l_3)), g_42))) | l_34) > 1L) || l_34));
    if (l_999)
    {
        g_64 &= (~(l_999 != 0xBCEE5861L));
    }
    else
    {
        const uint32_t l_1018 = 0x508D49B6L;
        int32_t l_1019 = 0x53D56C27L;
        int32_t l_1053 = (-3L);
        int32_t l_1071 = 0xB026780BL;
        int32_t l_1072 = 1L;
        l_1019 = ((safe_mul_func_int32_t_s_s((l_999 >= (g_369 , ((((safe_div_func_uint64_t_u_u(((safe_add_func_int16_t_s_s((-6L), ((l_34 == (((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x51L, ((l_1015 != (safe_add_func_uint16_t_u_u(((0x8FL & l_1018) , 0x9A6AL), g_324))) < l_21))), g_96)), 1L)) , (-1L)) && 0L)) != 0x4CB7C6A8590251D6LL))) ^ 4294967292UL), 18446744073709551608UL)) , g_42) && l_1018) > l_1018))), 2L)) || g_771);
        g_795 = ((((safe_div_func_float_f_f(((((((safe_div_func_float_f_f(((g_1052 = (g_114 = (safe_div_func_float_f_f((l_34 != (((g_325 != (safe_div_func_float_f_f((safe_div_func_float_f_f(((safe_div_func_float_f_f((0x0.Ep-1 < (safe_sub_func_float_f_f((((+((safe_mul_func_float_f_f(l_1037, (l_1015 != (+(safe_mul_func_float_f_f(l_1000, g_745)))))) <= ((safe_div_func_uint16_t_u_u((safe_mul_func_int64_t_s_s((+(safe_lshift_func_int8_t_s_u(1L, (((+(g_927 != l_1019)) , l_34) | g_1049)))), 0x5930A24FA060F582LL)), g_371)) , l_1015))) <= 0x0.3p+1) != l_1015), l_1018))), (-0x1.1p+1))) <= 0x0.1A20D9p+32), g_37)), g_114))) < g_37) == g_269)), 0xF.2512C7p-1)))) == l_1019), l_1019)) <= l_1053) > l_1037) != l_1000) >= 0x1.7p+1) > g_714), g_269)) <= 0x1.3p+1) == l_1018) == (-0x1.Fp+1));
        l_1072 ^= (((safe_div_func_uint8_t_u_u(l_1053, (safe_rshift_func_int16_t_s_u((((!(g_371 == 5UL)) == l_3) > (safe_mul_func_uint64_t_u_u((((((safe_lshift_func_uint64_t_u_s(g_324, (l_999 , (g_581 = (l_1071 |= (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((g_1049 = g_499), ((safe_mul_func_int64_t_s_s((safe_add_func_int32_t_s_s((((5L > (((g_929 = (-1L)) || g_83) , 0xDACF3449L)) <= (-3L)) >= 8UL), l_1000)), l_21)) < g_707))) == l_1019), g_36))))))) > g_1050) < l_1015) == 0x1558127AL) > 0x147E3C25L), g_694))), 15)))) && 0L) && g_615);
    }
    return g_847;
}
float func_7(int8_t p_8)
{
    int64_t l_115 = (-4L);
    int32_t l_551 = 0x170954E7L;
    float l_620 = 0x6.Ap-1;
    uint8_t l_646 = 1UL;
    float l_654 = 0x1.A4AA38p-38;
    int32_t l_655 = 0x7A4429F5L;
    int32_t l_656 = 0L;
    int32_t l_657 = 0x68A4D62CL;
    int32_t l_658 = 0L;
    uint8_t l_666 = 0UL;
    int8_t l_679 = 1L;
    int32_t l_794 = (-2L);
    uint16_t l_808 = 9UL;
    uint64_t l_998 = 9UL;
    l_115 = g_78;
    if (func_116(p_8))
    {
        const uint8_t l_539 = 0x5AL;
        int32_t l_582 = (-10L);
        int32_t l_621 = 0xD8B994C7L;
        int32_t l_689 = 2L;
        int32_t l_692 = (-1L);
        int32_t l_693 = 0xCB1CF178L;
        int32_t l_730 = 6L;
        uint32_t l_878 = 0UL;
        if ((((p_8 , ((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((l_539 || g_113) , (safe_mod_func_int64_t_s_s((safe_rshift_func_uint32_t_u_s(p_8, 1)), p_8))), l_539)), (~(((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint64_t_u_s((((g_77 = (p_8 , g_77)) && (g_4 && g_369)) > g_89), 30)), 0xBDE4L)), g_324)) != l_551) <= g_371)))), 0x6D68L)) <= l_539)) == 0L) < g_188))
        {
            for (g_325 = 5; (g_325 == 4); g_325 = safe_sub_func_uint16_t_u_u(g_325, 5))
            {
                uint64_t l_556 = 9UL;
                int32_t l_559 = (-8L);
                for (g_323 = 0; (g_323 > (-3)); g_323 = safe_sub_func_uint16_t_u_u(g_323, 9))
                {
                    ++l_556;
                    if (p_8)
                        continue;
                    if (g_35)
                        continue;
                }
                l_559 = 0x51B02FE9L;
            }
        }
        else
        {
            int32_t l_600 = 0x001631C7L;
            int32_t l_616 = 0x00628D2FL;
            for (g_36 = 0; (g_36 < 51); g_36 = safe_add_func_uint64_t_u_u(g_36, 1))
            {
                uint32_t l_572 = 4294967289UL;
                int32_t l_576 = 0xC38B294EL;
                for (g_327 = 0; (g_327 != 31); g_327++)
                {
                    float l_564 = 0xC.5C2829p+93;
                    int32_t l_565 = (-1L);
                    int32_t l_575 = 1L;
                    if (((l_565 <= (((safe_lshift_func_int32_t_s_s(g_95, 17)) > g_159) != (l_576 = (((g_42 , (safe_mod_func_uint16_t_u_u(g_369, (safe_div_func_int32_t_s_s(l_572, 0x589AFB4CL))))) > (g_64 , (safe_lshift_func_uint32_t_u_u((l_575 = g_112), 28)))) ^ 18446744073709551614UL)))) , g_42))
                    {
                        g_96 = g_96;
                        if (p_8)
                            break;
                        return g_499;
                    }
                    else
                    {
                        uint32_t l_583 = 0x28A5FAD6L;
                        uint64_t l_599 = 1UL;
                        int32_t l_601 = 0xF32D9A53L;
                        l_601 = ((safe_sub_func_int16_t_s_s(((p_8 , (safe_rshift_func_uint32_t_u_s(((((l_583--) | (((safe_add_func_int16_t_s_s((p_8 <= 0x24EEBE0AL), (((l_600 |= ((g_55 , ((safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(p_8, (((g_581 |= (!((safe_add_func_int16_t_s_s(p_8, 0xA7D3L)) >= ((safe_sub_func_uint64_t_u_u((g_395 , ((safe_mul_func_int8_t_s_s((((0xA5L >= l_576) != g_268) < 8L), 254UL)) && g_323)), l_599)) >= p_8)))) ^ p_8) , 2UL))) | 0x0D8FL), p_8)) >= g_89)) , 255UL)) <= 0UL) , p_8))) , 0xE6CCE7E1L) == l_599)) <= 8L) > 0x1C01L), 14))) <= l_575), 7UL)) ^ 0x6BL);
                    }
                    g_2 = ((l_600 > (((safe_lshift_func_int8_t_s_s(0L, 5)) > ((g_499 , g_4) <= (safe_lshift_func_uint32_t_u_s(((((safe_mul_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((p_8 != (safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s(0xCCB4F9CFB12D965ELL, (!g_452))), g_55))), 5L)), g_4)) > 3UL) >= l_582) ^ l_551), g_96)))) , l_115)) >= l_572);
                }
                l_576 ^= p_8;
                ++g_617;
                --g_622;
            }
            l_551 = ((l_616 |= (safe_lshift_func_uint64_t_u_u(0x3F5649298EB77F97LL, g_96))) , (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_539, 7)), p_8)), ((g_55 || (g_581 ^= (safe_add_func_int16_t_s_s(((+p_8) && (((~((g_270 |= (safe_sub_func_int16_t_s_s((((safe_add_func_uint64_t_u_u((g_62 != (~(safe_div_func_uint16_t_u_u(g_112, (l_621 = (safe_mul_func_uint8_t_u_u(l_539, l_646))))))), g_617)) , l_582) , g_4), p_8))) , g_89)) != g_42) & l_551)), g_62)))) , g_55))));
            l_582 &= ((l_666 = (safe_sub_func_int32_t_s_s(((g_42 == ((safe_mul_func_int64_t_s_s((((1UL >= (g_622 ^= (safe_mod_func_int8_t_s_s(((p_8 >= (l_616 = ((safe_unary_minus_func_uint8_t_u((--g_659))) < (l_621 <= (safe_sub_func_int64_t_s_s((p_8 & ((((p_8 && (((((safe_add_func_uint32_t_u_u(4294967294UL, (l_656 |= l_616))) > l_658) , g_78) < p_8) , (-1L))) <= p_8) > l_616) | 0UL)), g_96)))))) , 0x2EL), g_326)))) , g_615) , g_325), 18446744073709551615UL)) || 1L)) && p_8), (-7L)))) > 0x70L);
        }
        if (((safe_mul_func_float_f_f((safe_div_func_float_f_f(p_8, ((((g_114 = ((safe_sub_func_float_f_f(g_617, p_8)) != (g_395 > ((l_621 , ((g_37 = g_37) > (safe_sub_func_uint8_t_u_u(0x74L, ((safe_sub_func_int32_t_s_s((g_268 & (safe_lshift_func_uint8_t_u_s(((g_64 >= g_89) ^ l_679), 4))), l_539)) < 1L))))) , l_657)))) > p_8) == p_8) >= 0x3.8638C1p-13))), 0x2.46A19Ap-67)) , g_89))
        {
            int16_t l_687 = 0x63E2L;
            int32_t l_688 = (-1L);
            int32_t l_690 = 0x6CAB2DC5L;
            int32_t l_691 = 0L;
            int32_t l_742 = 1L;
            uint8_t l_888 = 250UL;
            g_714 &= (((((safe_add_func_float_f_f(((safe_sub_func_float_f_f(g_369, (0x1.27C976p-4 == g_325))) <= (((g_114 = (((~l_582) , ((safe_add_func_float_f_f(g_270, (((((++g_694) & ((safe_mod_func_int16_t_s_s((safe_mul_func_uint64_t_u_u(((safe_rshift_func_int64_t_s_s((65528UL > (g_622 = (l_688 |= (safe_div_func_uint32_t_u_u((l_551 = (safe_sub_func_int8_t_s_s(((l_582 = g_707) , (safe_unary_minus_func_uint8_t_u((g_324 = l_646)))), (safe_lshift_func_int8_t_s_s((g_452 &= (safe_sub_func_int64_t_s_s((g_713 , g_42), 0x501A06F55D3FCE58LL))), g_83))))), 2UL))))), 6)) >= 0x2087D7C6BDDD89E2LL), p_8)), p_8)) > g_96)) , p_8) >= p_8) < g_323))) <= p_8)) != 0x1.9BB82Fp+68)) <= 0x9.38F233p-56) <= g_83)), l_646)) , p_8) || g_581) , 0x039CL) ^ 0x46E4L);
            if ((safe_rshift_func_uint16_t_u_u(((((((~(safe_mul_func_int32_t_s_s(((((l_693 || 0xB1L) == g_82) != (safe_add_func_int16_t_s_s(((l_688 = (((g_62 = ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((((safe_mul_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((l_730 = 65535UL), (g_659 & (!((l_621 = ((~(safe_lshift_func_int32_t_s_s(g_395, 29))) < 0x8B1B7BE437D307D6LL)) ^ 0UL))))) , (safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((g_581 = (safe_mod_func_int32_t_s_s((g_64 ^= l_656), l_656))), l_730)) && 1UL), 0xFC3CL))), g_188)) ^ l_688) , 3L), 1UL)) >= 0xE0BCB37DF4D30234LL), 2)) > g_369)) | p_8) , 0x6EFCL)) & 0L), l_692))) && 0x415CB8EEL), p_8))) , 0xCF5338B8L) , 4294967295UL) <= g_35) , l_657) && l_621), 13)))
            {
                int32_t l_741 = 9L;
                int32_t l_743 = 0x851B160FL;
                int32_t l_845 = 0x68D957FBL;
                int32_t l_846 = 7L;
                uint16_t l_850 = 0UL;
                --g_745;
                g_2 = (safe_mul_func_float_f_f((((l_658 = ((safe_rshift_func_uint8_t_u_s(((l_582 = (((l_693 &= p_8) ^ 1L) >= (+(l_743 &= p_8)))) <= l_741), 2)) >= l_692)) , 0x7.687097p-51) > ((g_188 = g_188) , p_8)), g_37));
                if ((((safe_add_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((l_658 = 0x6C54L), (g_694 <= ((safe_div_func_int16_t_s_s((((l_692 <= (safe_rshift_func_int8_t_s_s((0L > (p_8 | ((safe_mul_func_int8_t_s_s(l_655, ((0L > (safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((g_96 &= g_745) & p_8), 0x65F4L)), p_8))) && l_741))) == g_4))), l_742))) | p_8) != g_62), 0x9704L)) & g_325)))) ^ 4L) < l_655), g_326)) , l_551) , g_713))
                {
                    for (g_452 = 3; (g_452 == 6); g_452 = safe_add_func_uint32_t_u_u(g_452, 1))
                    {
                        g_64 = g_581;
                        g_326 = g_325;
                        if (p_8)
                            break;
                        g_270 = g_270;
                    }
                    l_690 = 0x2E638FF5L;
                }
                else
                {
                    uint32_t l_785 = 0xAE4E02DAL;
                    int32_t l_791 = 0xFCEA9CE3L;
                    int32_t l_792 = 0xAB154389L;
                    uint8_t l_843 = 0x97L;
                    int32_t l_879 = 0x17A5AEE2L;
                    for (g_159 = 0; (g_159 != 18); ++g_159)
                    {
                        const int64_t l_788 = 0x61283FBB4B0A2116LL;
                        g_771 = l_693;
                        l_792 = (((((!((safe_lshift_func_uint16_t_u_s(((l_791 = (((l_655 = (safe_div_func_int8_t_s_s(((safe_div_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_96, (safe_mul_func_uint32_t_u_u((--l_785), g_113)))), (g_270 & (l_743 = (255UL <= g_96))))), (g_498 = (((l_788 | ((p_8 > g_96) > ((safe_lshift_func_int16_t_s_u((0xAA03L < g_36), g_713)) || g_36))) <= l_791) , p_8)))) , g_83), g_42))) , 0xC604L) >= p_8)) , p_8), g_452)) == l_688)) != g_112) | l_689) || l_741) || g_36);
                        g_4 = g_617;
                        return g_269;
                    }
                    --g_796;
                    if ((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((p_8 < (((((l_730 , 1UL) == (+(safe_sub_func_uint8_t_u_u(((g_112 = l_741) , (0xA4L && ((((safe_lshift_func_uint16_t_u_u((l_551 &= (g_713 != l_808)), 2)) == l_688) & (g_811 = (safe_sub_func_int16_t_s_s(((((l_656 &= l_646) && 0xC507E00B3EDB47F7LL) < g_42) == p_8), g_64)))) & p_8))), g_269)))) ^ p_8) == l_657) >= l_582)), p_8)), 5)))
                    {
                        int64_t l_834 = 8L;
                        l_655 = g_188;
                        g_62 = (safe_lshift_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(p_8, g_520)), 0)), ((safe_div_func_uint8_t_u_u(((~(safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_690 = (safe_lshift_func_uint64_t_u_s((((safe_mul_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((safe_div_func_uint64_t_u_u((l_834 <= g_324), (-8L))))), (safe_lshift_func_uint16_t_u_s((1UL > (safe_div_func_int64_t_s_s(((g_64 &= ((g_96 ^= g_327) > (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((l_691 = p_8) < 0x07L), p_8)), 1)))) != 0L), g_498))), 7)))) , l_843) && 0x3DL), p_8))), l_666)), 0xAEL))) != l_582), 3L)) == g_323))) < p_8) <= g_771), 2));
                        return g_659;
                    }
                    else
                    {
                        int16_t l_844 = 6L;
                        l_690 ^= 0x0E272AB7L;
                        g_847--;
                    }
                    g_622 = ((l_850 = p_8) ^ (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(l_730, l_679)) != (l_743 ^= (((safe_mod_func_int64_t_s_s((l_879 = (((l_666 >= g_159) > (((+g_371) < g_89) == (((safe_add_func_int16_t_s_s(l_843, ((((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((safe_mul_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((0xA522300FC23C7B04LL >= p_8), 0x3DFAE343D10D8582LL)), g_847)) >= l_646) , 0xF544L) >= 0xC000L), p_8)) != 0xD1L), l_687)), l_742)) && l_878), 0xDE20E009L)) , p_8) == g_714) < p_8))) , g_64) == 0x07D834A7L))) > l_551)), g_714)) < g_323) < l_741))), 5)), p_8)) && l_582), p_8)), g_55)));
                }
            }
            else
            {
                uint32_t l_880 = 0x6F3AD6EFL;
                int32_t l_883 = 7L;
                l_880 = l_730;
                l_693 = ((l_689 = (l_883 = (safe_lshift_func_int64_t_s_s(0x284E26C44DFFC98ELL, 5)))) != (safe_mul_func_uint16_t_u_u(g_37, (((l_888 == (((((((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int64_t_s_s(p_8, (+((safe_mod_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(((g_452 |= (safe_mul_func_int64_t_s_s(((+(safe_div_func_uint32_t_u_u(((0x41C9E2AB228961EDLL != ((l_878 != l_690) >= p_8)) < (safe_mul_func_uint32_t_u_u(p_8, 0xAEC735D3L))), g_745))) | g_4), p_8))) < g_659), p_8)) ^ 0xA1E0L) && l_666), g_270)) , p_8) || p_8), g_64)) <= 0x22L)))), 0x1E1CL)) ^ p_8) > p_8) >= g_327) ^ 9L) <= g_847) , l_878) >= p_8) < 4294967295UL)) || 18446744073709551615UL) && 0x73L))));
            }
            return g_112;
        }
        else
        {
            int8_t l_907 = 0x60L;
            int32_t l_910 = 0x1A77267AL;
            int32_t l_911 = 7L;
            g_64 &= (l_907 |= 0xBE535BFFL);
            g_581 ^= l_658;
            l_911 = ((l_910 = ((g_622 = (safe_mul_func_uint8_t_u_u(5UL, g_83))) != g_499)) < p_8);
        }
        g_912--;
    }
    else
    {
        int32_t l_928 = 9L;
        int32_t l_930 = 0x9B98DB5BL;
        int32_t l_931 = 0xC9904E6FL;
        int32_t l_932 = 0L;
        int32_t l_933 = 0xE7359D6EL;
        int8_t l_934 = (-4L);
        uint64_t l_942 = 0xB19618110A24856ALL;
        uint32_t l_997 = 0x25E74781L;
        l_655 &= (safe_mod_func_uint32_t_u_u((safe_lshift_func_int32_t_s_s(5L, 2)), (p_8 && (g_77 == (g_793 <= (g_37 < ((safe_mul_func_uint16_t_u_u((~0x45L), ((+(l_930 = ((safe_rshift_func_uint32_t_u_s((--g_935), 5)) , ((l_931 , ((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((252UL | (-9L)) && 7L), g_55)), l_931)) | l_942)) & p_8)))) && p_8))) & 0xA2L)))))));
        g_452 = (safe_lshift_func_int16_t_s_s((safe_mul_func_uint64_t_u_u(g_82, g_847)), 11));
        g_62 &= (safe_rshift_func_uint32_t_u_s(((safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s(((g_714 || (safe_rshift_func_int32_t_s_u(((g_95 , (l_658 = (((safe_div_func_int32_t_s_s((safe_rshift_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_8 ^ (g_927 = 0xA3L)), p_8)), 11)) || (l_930 = (safe_mod_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_u((!((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(l_656, (safe_div_func_int16_t_s_s((l_551 &= (g_498 ^= p_8)), (safe_mul_func_uint64_t_u_u(((l_655 = (safe_unary_minus_func_uint8_t_u(((safe_mod_func_uint16_t_u_u(l_930, (g_744 , p_8))) , p_8)))) <= 0x45377B80L), 0xDBAEC4A3C3525F6ELL)))))), 7)), 2UL)) >= p_8)), 6)) > p_8) >= g_325) < 1L), l_928)))), 22)), l_933)) || l_931), p_8)), 0x3FA1F826L)) < 0xA5223A87L) || l_655))) , (-1L)), l_656))) , l_931), 0x97FB6D1FL)) | 0x6295F52C98F5F015LL), l_934)) , g_929), 25));
        l_655 = (safe_lshift_func_int64_t_s_u((l_657 < ((p_8 ^ (((((safe_mul_func_uint32_t_u_u(((l_551 = (-2L)) != (safe_unary_minus_func_uint32_t_u(0xA10974CBL))), ((l_998 &= ((0x69EA876EL && (((((safe_mul_func_uint8_t_u_u(((p_8 & l_646) & (safe_mod_func_int64_t_s_s(((((l_997 = ((0xC552FDA0C3135628LL >= ((((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((g_771 > (-5L)) != 0UL))), g_323)) ^ l_932) ^ 247UL) > g_912)) | g_159)) >= l_934) >= (-1L)) || 0x8DL), g_36))), 0x0FL)) > g_62) < g_324) , l_942) || g_745)) & p_8)) == 0x1CL))) <= g_395) && g_113) , 1L) , p_8)) == l_933)), l_646));
    }
    return l_658;
}
int16_t func_9(uint16_t p_10, float p_11)
{
    int8_t l_66 = 0x15L;
    int32_t l_67 = 0x6C342871L;
    int32_t l_68 = (-2L);
    int32_t l_69 = (-2L);
    int32_t l_70 = 0x37A000C9L;
    int32_t l_71 = 7L;
    int32_t l_72 = 0L;
    int32_t l_73 = 0xEEC0DB1BL;
    int32_t l_74 = 0x77332E7AL;
    int32_t l_75 = 5L;
    int32_t l_76 = 1L;
    int32_t l_79 = 0xD66052DBL;
    int32_t l_80 = (-1L);
    int32_t l_81 = 0x1FD024CAL;
    int32_t l_84 = (-1L);
    int32_t l_85 = 0x6C5FB330L;
    int32_t l_86 = 0xF2FC99F1L;
    int32_t l_87 = (-7L);
    int32_t l_88 = 0L;
    int32_t l_90 = (-1L);
    int32_t l_91 = (-1L);
    int32_t l_93 = 0x8480AD74L;
    int32_t l_94 = 1L;
    int32_t l_111 = 0x19870F1EL;
    g_96++;
    g_2 = ((safe_add_func_float_f_f((-0x4.2p+1), (g_89 != (g_114 = ((safe_mul_func_float_f_f(((((((safe_sub_func_int32_t_s_s(2L, (safe_sub_func_uint64_t_u_u((func_30((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(func_16(p_10, g_77), 10)), (l_111 , func_30(g_42))))) > p_10), 0x2A3B4A04EC100FABLL)))) , p_10) == g_4) != g_35) != l_87) , 0x6.667EE9p+76), l_75)) <= l_68))))) > g_96);
    return g_82;
}
uint32_t func_16(int32_t p_17, int16_t p_18)
{
    const uint32_t l_45 = 0x58E7EA1BL;
    uint32_t l_46 = 0x16971DB9L;
    int32_t l_47 = 0xF7D59448L;
    int32_t l_50 = 0xF32215F8L;
    uint8_t l_65 = 0x86L;
    --g_37;
    l_47 |= ((safe_lshift_func_int8_t_s_u(g_42, 1)) , (safe_sub_func_int64_t_s_s((l_45 == (p_17 , (l_46 ^= (l_45 > 0x6A45L)))), 0x74643A64E785C2F4LL)));
    g_55 = (safe_add_func_uint64_t_u_u(((l_50 = (l_47 = g_4)) | (l_46 ^ (l_45 == ((((safe_rshift_func_int32_t_s_s(((p_17 && func_30(g_42)) & l_46), 27)) && (g_42 < (safe_lshift_func_int64_t_s_u(l_46, p_17)))) , g_37) , p_18)))), p_17));
    for (l_47 = 0; (l_47 > (-17)); l_47 = safe_sub_func_uint8_t_u_u(l_47, 1))
    {
        int32_t l_63 = (-2L);
        g_64 = ((((l_50 = 1UL) && func_30(((safe_rshift_func_uint16_t_u_s(func_30(p_17), 11)) , 0UL))) || (((g_42 ^ 1UL) < ((g_62 = func_30(g_4)) > l_63)) != 0x39L)) ^ p_17);
        return l_50;
    }
    return l_65;
}
int64_t func_30(uint32_t p_31)
{
    float l_32 = 0x4.7D228Dp-4;
    int32_t l_33 = 0xF25DB2B0L;
    l_33 = p_31;
    return p_31;
}
int32_t func_116(uint32_t p_117)
{
    int32_t l_118 = 0x52248422L;
    int8_t l_121 = 0x4FL;
    int32_t l_122 = 9L;
    int64_t l_226 = 0xA36358C7ECC317C6LL;
    l_118 |= g_112;
    g_2 = (safe_div_func_float_f_f(p_117, l_118));
    l_118 |= (safe_add_func_int8_t_s_s(((0x7275A216L != func_125(((func_127((safe_lshift_func_uint8_t_u_s((l_226 = (func_133((safe_div_func_uint8_t_u_u(0x1EL, 1L))) , (((safe_rshift_func_uint64_t_u_u((((((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(p_117, p_117)), (l_122 = ((safe_lshift_func_int64_t_s_u((safe_div_func_int64_t_s_s((0xC2D9L && 0UL), 0xEEB66546BCCE8995LL)), 8)) != p_117)))) , 0UL) && (-1L)) != 0L) > g_188), g_77)) & 0xD2546FF5L) >= l_121))), g_55)), g_55, g_83) , p_117) , g_188))) < 1UL), g_42));
    g_113 |= g_82;
    return g_498;
}
uint32_t func_125(float p_126)
{
    int64_t l_353 = 0xA3D86430DACF9795LL;
    int32_t l_357 = 3L;
    int32_t l_364 = 0xA819F9FFL;
    int32_t l_366 = 0xE7484E07L;
    int32_t l_367 = 0L;
    uint8_t l_392 = 0xA4L;
    p_126 = p_126;
    if (l_353)
    {
        float l_356 = (-0x1.Ep+1);
        int32_t l_360 = 0x91A34F91L;
        int32_t l_361 = 1L;
        int32_t l_362 = 0L;
        int32_t l_363 = (-9L);
        int32_t l_365 = (-1L);
        int32_t l_368 = 0xF5F2331DL;
        int32_t l_370 = 0L;
        int32_t l_372 = (-8L);
        uint64_t l_373 = 0xE46CAC9683876718LL;
        int64_t l_402 = 0x44A164EB4755BD57LL;
        uint32_t l_411 = 0UL;
        uint32_t l_418 = 4294967295UL;
        uint8_t l_494 = 7UL;
        l_362 = (safe_mul_func_uint32_t_u_u(((l_357 = l_353) && (((safe_div_func_int8_t_s_s(l_360, 255UL)) != ((--l_373) > (((safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s((((((safe_sub_func_int8_t_s_s(((0xCAL == g_95) , ((g_159 != (safe_lshift_func_uint64_t_u_u(0x28EA8F4955D7B029LL, 49))) <= 65527UL)), 0x69L)) & l_362) ^ 0xB37DF5FCC094F27FLL) || g_324) & l_362), l_366)), l_372)) == 0x9FFBL) , g_369))) , l_366)), g_42));
        if (((g_62 == (safe_sub_func_int16_t_s_s(((l_366 = ((safe_lshift_func_uint64_t_u_s(l_361, 51)) > (safe_mod_func_int8_t_s_s(((l_372 ^ (((7UL > ((safe_div_func_uint16_t_u_u((--l_392), ((((g_62 & (++g_395)) | l_365) >= l_360) ^ g_37))) , ((safe_sub_func_int8_t_s_s((l_357 &= (safe_rshift_func_uint32_t_u_s((l_365 == g_36), l_402))), 1L)) <= 4294967295UL))) , 0x35F0C6E62EBD1B2ALL) > 0x6402A00CF9A2BB02LL)) | 0xA64F363A3BE4AEF5LL), l_367)))) && l_367), g_188))) || l_363))
        {
            uint16_t l_405 = 0x726BL;
            int32_t l_419 = (-7L);
            int32_t l_420 = 0x45E32B36L;
            int32_t l_421 = 0xFCCB76EAL;
            l_361 = (0xCE22F347L > (safe_rshift_func_int64_t_s_s(l_405, ((+(l_421 = (l_420 = (l_419 = (((safe_sub_func_uint64_t_u_u(18446744073709551611UL, ((((safe_mul_func_int32_t_s_s((g_37 <= ((l_360 = (((((l_411 | (safe_mul_func_int32_t_s_s(l_373, 1UL))) | l_372) >= (safe_sub_func_int64_t_s_s(((((g_270 = ((safe_sub_func_int16_t_s_s(((l_405 | g_188) ^ l_367), l_418)) ^ g_269)) < 65527UL) , g_42) , (-1L)), 0xED5F9CC06512020FLL))) ^ l_362) ^ l_361)) != g_395)), 0x0178618AL)) >= l_361) > g_82) , l_405))) ^ l_405) >= g_269))))) , 0L))));
            if (g_326)
            {
                uint16_t l_431 = 0x2686L;
                int32_t l_434 = 0xB72CE6AAL;
                int32_t l_447 = 0x2B4C9BABL;
                l_419 = ((safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u(l_405)) < ((safe_sub_func_uint64_t_u_u((((((l_419 , (((safe_add_func_uint64_t_u_u((--l_431), l_402)) <= l_434) > (safe_add_func_int16_t_s_s(((l_362 < (l_405 & (safe_div_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_s(((((safe_sub_func_uint64_t_u_u((safe_mul_func_int64_t_s_s(l_421, ((l_447 = ((safe_lshift_func_uint32_t_u_s((((g_4 | (l_434 > g_326)) != l_366) | l_434), l_434)) , g_325)) != l_434))), 0x63CE230C5E8C4E4ELL)) & l_434) == g_83) , l_392), l_434)) , l_367) != l_361) ^ 0xFFL), 0x8DL)))) != 0xF8A00B1F0B624E79LL), g_36)))) || g_159) , 18446744073709551615UL) , 253UL) || l_421), g_327)) == l_367)), 2)) <= 0xA196L);
                for (l_368 = 0; (l_368 != 25); l_368 = safe_add_func_uint16_t_u_u(l_368, 1))
                {
                    if (g_371)
                        break;
                }
            }
            else
            {
                g_452 |= (safe_sub_func_int16_t_s_s(l_418, g_270));
                for (g_270 = (-18); (g_270 >= 41); ++g_270)
                {
                    int64_t l_457 = 0xCB5EDF6F51F5FFA1LL;
                    int32_t l_477 = 1L;
                    g_452 = (safe_add_func_int64_t_s_s((((l_457 >= (l_477 = (g_270 , ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint64_t_u_s((l_363 = l_405), (safe_div_func_int8_t_s_s((((safe_lshift_func_uint64_t_u_u((l_457 | (l_361 &= l_365)), 19)) > (l_364 = ((safe_div_func_int16_t_s_s((g_64 |= (l_457 , (g_95 < (safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((l_362 >= (~(safe_sub_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((((l_457 , g_113) || g_62) | l_405), g_326)) , l_405) || g_4), 0x7845L)))), l_367)) <= l_457), g_77))))), g_269)) >= g_77))) | (-1L)), g_323)))) ^ l_457), g_325)) <= 0x12CE1CFEL)))) && l_366) >= l_457), g_96));
                    return g_78;
                }
            }
            g_2 = (safe_sub_func_float_f_f(((p_126 = p_126) == (safe_div_func_float_f_f((((l_373 >= (((safe_mod_func_uint64_t_u_u(((6UL > g_92) > (((safe_add_func_uint16_t_u_u(l_368, l_420)) , l_421) < g_188)), (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((((safe_add_func_int64_t_s_s((l_353 > l_366), l_405)) , l_362) || l_392) , l_405), 1UL)), l_405)))) , 0xF.0A9B69p-67) >= l_494)) != l_392) >= 0x3.0839E8p+24), g_77))), l_364));
        }
        else
        {
            int32_t l_495 = 0x47031BFCL;
            int32_t l_496 = 1L;
            int32_t l_497 = 0x8E751C5CL;
            g_499++;
        }
        return l_372;
    }
    else
    {
        float l_514 = 0x3.56443Ep-65;
        const int32_t l_519 = 0x450F0D24L;
        if (l_357)
        {
            uint8_t l_502 = 254UL;
            return l_502;
        }
        else
        {
            const uint64_t l_509 = 0x66A94C78A6BF2998LL;
            int32_t l_521 = 0x5475D525L;
            l_521 |= (g_62 = ((((((safe_mod_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u(l_364, l_509)), (safe_sub_func_int8_t_s_s(((1UL && (safe_div_func_int8_t_s_s((((g_64 < g_498) == 65527UL) || (g_64 = (((safe_rshift_func_int32_t_s_u(l_509, (safe_div_func_uint16_t_u_u(l_519, (((((g_520 < l_366) , g_270) < l_392) < l_519) | l_509))))) >= l_364) <= l_519))), g_269))) , l_392), g_36)))) <= l_519) || 0x3793A32EL), l_509)) == l_509) ^ 0x9E56529D9DC93415LL) && 65528UL) && l_357) && 1UL));
        }
    }
    l_367 ^= (l_366 = (safe_rshift_func_int16_t_s_u(((((safe_lshift_func_int8_t_s_u((l_364 &= l_357), 4)) | (l_357 && l_392)) > (((+l_366) & ((safe_div_func_uint64_t_u_u((safe_mul_func_uint32_t_u_u(l_366, (safe_mod_func_uint64_t_u_u((0x12L || g_371), 0x621A295A454E6242LL)))), 0xF313769372414C67LL)) != g_395)) && 5UL)) , l_353), l_392)));
    l_367 = l_364;
    return l_367;
}
uint32_t func_127(int8_t p_128, int8_t p_129, float p_130)
{
    int32_t l_227 = (-3L);
    int32_t l_250 = (-1L);
    int8_t l_351 = 0x2CL;
    int32_t l_352 = 0x056CC7CCL;
    if ((0x814AE1D9C254B315LL || l_227))
    {
        const int32_t l_235 = 0x11A83D06L;
        int32_t l_244 = 0x045DDD74L;
        for (g_112 = 0; (g_112 >= 24); g_112 = safe_add_func_int16_t_s_s(g_112, 4))
        {
            int64_t l_234 = 0xB990F7100B6ED011LL;
            int32_t l_251 = 0xDED1B2F9L;
            int32_t l_252 = 0x2F1F12ECL;
            int16_t l_253 = 0L;
            const int32_t l_267 = 4L;
            l_253 |= ((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_113 = l_234), (l_235 < (((l_252 = ((((((safe_div_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((safe_lshift_func_int64_t_s_s(l_235, l_227)) > ((-2L) >= (l_251 = (safe_mul_func_int32_t_s_s((((((((l_244 |= 0x91F55A1BL) | (safe_lshift_func_uint32_t_u_s(((l_250 = (safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u(0x66L, l_227))))) >= p_128), 9))) & (-3L)) != g_159) >= l_234) < l_234) && g_64), p_128))))), g_188)) == 4294967295UL), 1UL)) && 0x29E21D3D7B662462LL) ^ 0x26C017CAL) ^ 0L) && 0L) <= (-1L))) , 251UL) , l_227)))), l_235)) && g_78);
            g_2 = ((g_62 == (((0x9.D0CA95p+83 == ((safe_add_func_float_f_f((safe_mul_func_float_f_f(g_42, (safe_sub_func_float_f_f(0xB.43A053p+46, (p_130 = ((safe_add_func_float_f_f(0x0.Ap+1, ((safe_add_func_float_f_f(((safe_mul_func_float_f_f((p_129 > (-((g_114 = 0x3.7p+1) >= p_130))), g_64)) > l_267), g_92)) >= p_128))) , 0x1.6p+1)))))), l_251)) < g_269)) , p_129) > 0x0.5p-1)) <= l_250);
        }
        l_250 ^= p_128;
        g_2 = ((g_114 = (((safe_lshift_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(l_244, (safe_mod_func_int32_t_s_s(l_227, g_4)))), ((p_128 | g_77) == (safe_sub_func_uint8_t_u_u((p_129 , (l_250 &= p_129)), (p_128 & (((safe_lshift_func_uint16_t_u_s((((safe_mod_func_int64_t_s_s(((g_4 <= p_129) >= g_95), l_235)) < g_83) , l_244), 10)) || g_35) , g_36))))))), g_36)) , l_235) != g_62)) >= 0x3.8069DBp+18);
        l_250 = 0xE82150C0L;
    }
    else
    {
        l_227 ^= ((safe_lshift_func_uint16_t_u_s(p_129, 1)) ^ (g_4 ^= g_55));
        g_2 = (p_129 , 0xF.EC47B7p-59);
        for (g_268 = 0; (g_268 >= 17); g_268++)
        {
            uint32_t l_295 = 18446744073709551615UL;
            uint32_t l_296 = 1UL;
            g_114 = (p_130 = ((g_36 , (0L ^ g_268)) , (safe_mul_func_float_f_f((0x7.7p+1 != ((((0x7.2A3349p+43 < l_227) > (safe_div_func_float_f_f((safe_mul_func_float_f_f(l_250, l_295)), ((p_128 , g_188) , 0xA.EB97D6p+64)))) < p_129) != p_130)), l_296))));
        }
    }
    g_2 = (safe_add_func_float_f_f(l_250, (safe_div_func_float_f_f(((safe_rshift_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(l_227, l_227)), 7)), l_227)) , (p_130 = (safe_add_func_float_f_f(((safe_div_func_float_f_f((safe_div_func_float_f_f(0x3.8p-1, ((g_114 = ((safe_sub_func_float_f_f((safe_add_func_float_f_f((((((l_227 , ((l_227 , ((g_83 , (safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s((l_227 = (g_64 = l_227)), g_268)), l_250)), g_188))) | (-1L))) >= l_250)) , p_129) , (-1L)) , p_128) <= g_112), g_89)), 0xC.553572p+83)) != l_250)) >= 0x3.Fp-1))), l_250)) < p_129), l_250)))), g_188))));
    g_64 &= (((0xD50ABDCF2520F901LL ^ ((g_270 = (((g_270 == ((l_227 , ((l_352 ^= ((((safe_lshift_func_uint8_t_u_u(p_129, p_128)) , (0x879FE9B06FFBB3F4LL ^ 0x1ED44951996EC3DBLL)) == (l_351 = (safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((g_270 ^ (safe_mod_func_int64_t_s_s((((l_250 |= (safe_div_func_int64_t_s_s((safe_lshift_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(((~(safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((g_268 && l_227), 4)), 0x1A05C3C847D68F8ALL))) & p_128), 0x5AAE58CCL)), l_227)) | 0xCDA17076L), 0xAA67B04CF6092038LL)) || g_35), g_62)), 18446744073709551611UL))) || l_227) , g_95), l_227))), g_62)), g_77)))) | (-9L))) && l_351)) < (-8L))) > 0x99L) ^ 255UL)) & 1UL)) > 0x28C49628F99BDF1ELL) , l_352);
    return p_128;
}
const uint16_t func_133(uint16_t p_134)
{
    int32_t l_139 = 0x255DAF8EL;
    int32_t l_155 = 0x9D2F4757L;
    int32_t l_156 = (-1L);
    int32_t l_157 = 0x7F463393L;
    int32_t l_158 = 0x08FD8E19L;
    int16_t l_187 = (-8L);
    g_4 = ((l_139 && ((g_159 = (l_158 &= (((l_157 = (((~(g_64 = (safe_rshift_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((+g_83), (l_156 = (65534UL >= (((safe_mul_func_int16_t_s_s(func_148(((safe_lshift_func_int32_t_s_u(((g_95 , (l_155 ^= (safe_div_func_uint16_t_u_u((((l_139 <= (l_139 < ((g_89 < 0x8AFDL) != l_139))) & g_112) <= 9L), 0x20F6L)))) , p_134), 6)) > g_37), g_83), 0L)) || p_134) == 18446744073709551615UL))))) < p_134) == p_134), 9)))) , 4294967286UL) > l_139)) , 0x5684B0DFL) & p_134))) == g_37)) , p_134);
    g_159 |= (((((safe_div_func_int16_t_s_s(l_156, ((safe_add_func_uint64_t_u_u(((safe_add_func_int64_t_s_s(g_82, (safe_mod_func_uint16_t_u_u((l_155 &= ((safe_add_func_uint8_t_u_u(p_134, (l_158 || ((~(safe_add_func_int64_t_s_s((((p_134 , ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s(l_157, ((safe_rshift_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_134, (l_157 > ((safe_add_func_int16_t_s_s(g_77, 1UL)) == 0x5FL)))), 2L)), 0)), 28)) > 0UL))) || g_55), 6)) | l_157)) ^ (-1L)) , 0x6C1D071B3E14F1F8LL), g_4))) != g_112)))) ^ 248UL)), 65527UL)))) == l_158), 18446744073709551615UL)) , l_155))) , l_157) , 0x2.47B03Fp-21) == g_112) , l_187);
    g_188--;
    for (g_112 = 23; (g_112 >= (-4)); g_112 = safe_sub_func_uint64_t_u_u(g_112, 9))
    {
        uint16_t l_212 = 1UL;
        int32_t l_215 = (-1L);
        g_64 |= (safe_mul_func_int32_t_s_s(((0x8E47A8F7DD28A493LL > (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(8L, ((l_156 = (safe_mod_func_int64_t_s_s((+(((safe_lshift_func_int32_t_s_u((safe_div_func_uint8_t_u_u(0x65L, (g_62 = (l_215 |= (l_157 = ((safe_rshift_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(p_134, ((safe_div_func_int8_t_s_s(l_212, p_134)) ^ p_134))), (4L >= ((safe_lshift_func_uint8_t_u_u(g_36, g_113)) , p_134)))) >= p_134)))))), p_134)) | (-1L)) <= 5UL)), 0x7B1BE5FB79008C5DLL))) <= 0x05CD23E3L))), 3))) > p_134), 0L));
    }
    return p_134;
}
const int16_t func_148(int64_t p_149, float p_150)
{
    return p_149;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    
    transparent_crc(g_4, print_hash_value);
    transparent_crc(g_35, print_hash_value);
    transparent_crc(g_36, print_hash_value);
    transparent_crc(g_37, print_hash_value);
    transparent_crc(g_42, print_hash_value);
    transparent_crc(g_55, print_hash_value);
    transparent_crc(g_62, print_hash_value);
    transparent_crc(g_64, print_hash_value);
    transparent_crc(g_77, print_hash_value);
    transparent_crc(g_78, print_hash_value);
    transparent_crc(g_82, print_hash_value);
    transparent_crc(g_83, print_hash_value);
    transparent_crc(g_89, print_hash_value);
    transparent_crc(g_92, print_hash_value);
    transparent_crc(g_95, print_hash_value);
    transparent_crc(g_96, print_hash_value);
    transparent_crc(g_112, print_hash_value);
    transparent_crc(g_113, print_hash_value);
    
    transparent_crc(g_159, print_hash_value);
    transparent_crc(g_188, print_hash_value);
    transparent_crc(g_268, print_hash_value);
    transparent_crc(g_269, print_hash_value);
    transparent_crc(g_270, print_hash_value);
    transparent_crc(g_323, print_hash_value);
    transparent_crc(g_324, print_hash_value);
    transparent_crc(g_325, print_hash_value);
    transparent_crc(g_326, print_hash_value);
    transparent_crc(g_327, print_hash_value);
    transparent_crc(g_369, print_hash_value);
    transparent_crc(g_371, print_hash_value);
    transparent_crc(g_395, print_hash_value);
    transparent_crc(g_452, print_hash_value);
    transparent_crc(g_498, print_hash_value);
    transparent_crc(g_499, print_hash_value);
    transparent_crc(g_520, print_hash_value);
    transparent_crc(g_581, print_hash_value);
    transparent_crc(g_615, print_hash_value);
    transparent_crc(g_617, print_hash_value);
    transparent_crc(g_622, print_hash_value);
    transparent_crc(g_659, print_hash_value);
    transparent_crc(g_694, print_hash_value);
    transparent_crc(g_707, print_hash_value);
    transparent_crc(g_713, print_hash_value);
    transparent_crc(g_714, print_hash_value);
    transparent_crc(g_744, print_hash_value);
    transparent_crc(g_745, print_hash_value);
    transparent_crc(g_771, print_hash_value);
    transparent_crc(g_793, print_hash_value);
    
    transparent_crc(g_796, print_hash_value);
    transparent_crc(g_811, print_hash_value);
    transparent_crc(g_847, print_hash_value);
    transparent_crc(g_912, print_hash_value);
    transparent_crc(g_927, print_hash_value);
    transparent_crc(g_929, print_hash_value);
    transparent_crc(g_935, print_hash_value);
    transparent_crc(g_1049, print_hash_value);
    transparent_crc(g_1050, print_hash_value);
    transparent_crc(g_1051, print_hash_value);
    
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return (unsigned char)(crc32_context);
}
