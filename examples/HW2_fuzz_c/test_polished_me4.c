
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

uint8_t g_20 = 0x4DL;
uint16_t g_32 = 0x1DB6L;
int64_t g_49 = 9L;
int8_t g_50 = 4L;
int32_t g_68 = 0xE1984BBCL;
int64_t g_112 = 5L;
int8_t g_115 = 0x9BL;
uint32_t g_116 = 0x98C55CA0L;
uint32_t g_119 = 1UL;
int32_t g_122 = (-3L);
int64_t g_124 = (-7L);
int32_t g_126 = 0xD51B5D7EL;
uint32_t g_128 = 4294967295UL;
int16_t g_130 = 0x30FDL;
uint16_t g_131 = 0xD2E8L;
uint16_t g_136 = 65531UL;
int64_t g_139 = 0x571715C7436F42B8LL;
uint64_t g_141 = 18446744073709551615UL;
uint64_t g_142 = 18446744073709551615UL;
uint32_t g_145 = 0x23B5E53DL;
int8_t g_148 = 0x05L;
uint32_t g_149 = 0x6717EFFEL;
int32_t g_151 = 1L;
int32_t g_154 = 0x881B6A48L;
float g_159 = 0x4.Fp+1;
int32_t g_163 = 0xF805AAA4L;
uint16_t g_164 = 0xC33BL;
int8_t g_165 = 1L;
int32_t g_166 = (-8L);
uint64_t g_167 = 0xCFDFC4DD9E31D749LL;
int8_t g_168 = 0x8EL;
int64_t g_169 = (-1L);
uint64_t g_170 = 0x254FF34EAFFB5D17LL;
uint32_t g_171 = 0UL;
float g_173 = 0xB.4B0677p-23;
float g_231 = 0xC.7C7AF3p+80;
uint8_t g_246 = 0x44L;
int32_t g_251 = 2L;
float g_252 = 0xD.AB5425p-68;
int16_t g_253 = (-4L);
uint32_t g_257 = 0x952AE489L;
uint64_t g_408 = 18446744073709551615UL;
uint32_t g_415 = 0x52184E34L;
uint64_t g_434 = 18446744073709551607UL;
uint8_t g_491 = 0x0FL;
float g_513 = (-0x5.Fp+1);
int32_t g_515 = 0x852F5961L;
int8_t g_517 = 1L;
uint32_t g_521 = 5UL;
uint8_t g_660 = 255UL;
uint64_t g_707 = 18446744073709551611UL;
int32_t g_769 = 1L;
int16_t g_915 = 0xBAF8L;
uint32_t g_929 = 0x4A13A5DCL;
int8_t g_1063 = (-1L);
int32_t g_1064 = 1L;
uint64_t g_1065 = 18446744073709551615UL;
int32_t g_1081 = 0xB1BC31AAL;
int8_t g_1082 = (-6L);
int16_t g_1083 = 0x7E6AL;
uint8_t g_1084 = 4UL;
uint16_t g_1228 = 0x4429L;
float g_1231 = 0xD.B6B0B5p+7;
uint32_t g_1232 = 4UL;
int64_t g_1395 = 1L;
float g_1396 = 0xB.86122Cp+55;
int32_t g_1398 = 0xE41DAA8AL;
int32_t g_1400 = (-2L);
uint64_t g_1403 = 18446744073709551608UL;
int16_t g_1465 = 0x6B6FL;
int32_t g_1472 = 0L;
int16_t g_1476 = 0xF0B5L;
int8_t g_1485 = 0x91L;
int32_t g_1486 = (-1L);
int16_t g_1487 = 1L;
int32_t g_1488 = 0x74F19596L;
uint32_t g_1496 = 0xDB7690F6L;
uint16_t g_1564 = 65534UL;
uint64_t g_1613 = 0x8BC0AF0BB683F7DCLL;
int8_t g_1614 = 0L;
float g_1731 = 0x5.3C3201p+45;
uint64_t g_1733 = 7UL;
float func_1(void);
uint16_t func_8(float p_9);
float func_14(int32_t p_15, int8_t p_16, int64_t p_17);
int32_t func_21(uint16_t p_22, uint32_t p_23, float p_24);
uint32_t func_25(uint64_t p_26);
int32_t func_37(float p_38, int16_t p_39, int16_t p_40);
int32_t func_51(uint32_t p_52, float p_53, uint8_t p_54, float p_55, float p_56);
float func_58(uint32_t p_59, int64_t p_60, int32_t p_61, int16_t p_62, int32_t p_63);
int16_t func_69(int8_t p_70, int16_t p_71, int32_t p_72, const int32_t p_73, int8_t p_74);
int32_t func_75(int8_t p_76);
float func_1(void)
{
    const int8_t l_4 = (-2L);
    int32_t l_5 = 8L;
    int64_t l_43 = 1L;
    uint32_t l_44 = 0x30509B95L;
    const float l_725 = 0xC.9AE86Ep-89;
    uint64_t l_726 = 0xEF94E310CE17E4F5LL;
    uint8_t l_727 = 0x3EL;
    int32_t l_1419 = 4L;
    int32_t l_1420 = 0xA3F681BAL;
    int32_t l_1421 = 0x4FE4C1E5L;
    uint16_t l_1499 = 1UL;
    int16_t l_1519 = (-1L);
    uint16_t l_1571 = 0x4CA3L;
    int32_t l_1584 = 0xFD743C15L;
    int32_t l_1644 = 0xFA89CA67L;
    const int16_t l_1653 = 6L;
    uint32_t l_1732 = 0xAD3E6433L;
    l_1421 = (((safe_sub_func_int8_t_s_s(l_4, (l_5 = l_4))) & ((0UL <= ((safe_mod_func_uint32_t_u_u(((l_1419 = (func_8(((safe_mul_func_float_f_f((safe_mul_func_float_f_f(((((g_1396 = func_14((safe_rshift_func_uint64_t_u_s(g_20, (g_20 , l_4))), (func_21(l_4, func_25((safe_div_func_uint16_t_u_u(((((((safe_unary_minus_func_int64_t_s(((safe_rshift_func_int64_t_s_u((g_32 = 0x7AD53A38D06721F7LL), ((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((func_37(((safe_div_func_float_f_f((g_20 != g_20), 0xD.FE9F48p-40)) < 0x8.DACB31p+66), l_43, l_44) , l_44) > l_4), 0x7D46871DL)), 0xA7ABL)) , l_726))) , g_660))) , g_119) > 0xDF5830393F36CBF5LL) || g_32) , 0xB21BCFB39EDF9B02LL) , l_727), 1L))), g_141) , (-1L)), g_131)) <= g_1063) <= l_4) != 0xE.98A461p-81), l_4)), 0x0.Fp-1)) <= l_1421)) , l_4)) ^ l_1420), 0xD9B6A7C4L)) , l_1419)) ^ g_1488)) >= g_1400);
    g_252 = 0xE.D35A66p+32;
    l_1499 = g_434;
    if ((((g_1403 && (l_1421 |= ((safe_lshift_func_uint16_t_u_s((((g_660 != (safe_mul_func_float_f_f((safe_sub_func_float_f_f(((safe_add_func_float_f_f((g_154 = g_166), (safe_div_func_float_f_f(0x4.274D9Ep+97, (g_1231 = ((safe_div_func_float_f_f((g_251 != (safe_mul_func_float_f_f(((g_1487 < l_4) < g_1084), (safe_add_func_float_f_f(((safe_mod_func_uint32_t_u_u(((+(g_173 = ((0xC.2246EFp-81 != g_32) < g_251))) , 6UL), g_168)) , g_1065), 0x1.Cp-1))))), l_4)) > 0xC.289337p-36)))))) > (-0x8.Ep+1)), g_1081)), 0xF.D7B404p-23))) , l_4) || 0x4E97C079L), l_726)) == g_112))) && g_1485) >= 0x4FL))
    {
        int32_t l_1542 = 0x6BE568E2L;
        uint32_t l_1551 = 18446744073709551615UL;
        int32_t l_1572 = 0x8DAB3149L;
        uint32_t l_1573 = 18446744073709551613UL;
        int32_t l_1575 = 5L;
        if (g_491)
        {
            uint16_t l_1532 = 65535UL;
            int64_t l_1533 = 4L;
            g_165 &= (((safe_lshift_func_int16_t_s_s((g_915 && ((+(l_1419 |= (((!(0x8DE683146DF4ED84LL || g_1232)) && (((g_169 , (+(!(safe_sub_func_int32_t_s_s(((g_173 = (safe_sub_func_float_f_f((safe_sub_func_float_f_f(l_1532, l_1533)), (safe_add_func_float_f_f(((safe_div_func_float_f_f(l_1533, (((g_50 < ((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(5L, g_50)), l_1533)) , l_1542)) == 0x3.Dp-1) > g_1487))) != g_1083), (-0x1.7p+1)))))) , 0x942F92B2L), l_1542))))) && g_164) ^ g_1228)) , g_136))) && 4294967295UL)), g_119)) ^ g_122) , g_168);
            g_1231 = (l_726 != 0xA.38390Ap+21);
        }
        else
        {
            int8_t l_1574 = 0xB0L;
            uint32_t l_1627 = 0xA910A183L;
            int64_t l_1642 = 0x6174B360046A2B95LL;
            uint16_t l_1643 = 65530UL;
            for (g_136 = (-19); (g_136 < 42); g_136 = safe_add_func_uint32_t_u_u(g_136, 6))
            {
                int64_t l_1562 = 0x3D08D363DFEE3907LL;
                const uint32_t l_1563 = 1UL;
                int64_t l_1615 = 0xDBC654F72A374B39LL;
                int16_t l_1622 = (-7L);
                g_151 ^= ((l_1575 &= (safe_div_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint32_t_u_s(g_491, l_1551)), 0xA446L)), ((((safe_mod_func_int64_t_s_s(((((l_1572 ^= ((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(l_1562, ((l_1563 , 0xD0B3L) && 0x9868L))), g_1564)) > ((l_5 = ((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(18446744073709551609UL, g_154)), 0xA5F6L)) <= l_1551), g_148)) ^ l_1551)) > g_1485)) & 0x29L), l_1551)), l_1571)) ^ 0x2499L)) <= g_660) < l_1421) && g_168), l_1573)) >= l_1574) == g_167) && g_408)))) <= g_1082);
                l_1575 |= ((((l_1562 ^ (g_246 , (((1L || ((safe_add_func_int8_t_s_s((g_1400 = (((g_1465 = g_253) , (((((((l_4 | (safe_mul_func_int64_t_s_s(((safe_div_func_int32_t_s_s(g_1065, g_1496)) < (safe_lshift_func_int64_t_s_u((((g_521 = l_1563) , (g_166 & g_167)) , l_1584), 19))), 0x6D22A8FCA16C589FLL))) >= g_171) >= l_1571) , 0x25L) , l_1551) , g_151) ^ l_1562)) >= g_139)), g_1488)) ^ 0xFC30266CL)) , l_1562) <= 0xD3L))) || 0xD3D8219BL) <= g_515) >= l_1574);
                l_1419 ^= ((((g_1083 |= (~(-1L))) & (+(0x5B49L && (l_726 , ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(((g_1064 &= (!g_168)) , ((+(safe_add_func_uint8_t_u_u(251UL, ((((safe_lshift_func_uint64_t_u_s((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s(9L, (((((((safe_rshift_func_uint16_t_u_u(l_1563, ((safe_add_func_uint8_t_u_u((g_251 = ((g_1614 = ((((+g_1465) & (((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(g_1488)), g_1063)), g_148)) , g_49) & g_1613)) >= l_1574) && 1L)) , l_1575)), g_1395)) == g_408))) ^ l_1563) < l_1615) && l_1551) | l_1573) || 2L) & 0x0C1CL))), g_169)), 2)) == l_1574) <= (-1L)) <= g_660)))) && l_1562)), l_1574)), l_1584)) != 0x770CL), g_521)) | g_170))))) == l_1563) & (-5L));
                g_231 = (0xB.B18755p+12 > (safe_sub_func_float_f_f(((safe_div_func_int16_t_s_s(((((g_68 = (l_1622 < (((g_68 || (0x9FL == 246UL)) != ((safe_div_func_int32_t_s_s((g_149 || g_915), g_164)) == (safe_add_func_int64_t_s_s(((-5L) > g_521), g_167)))) == g_1496))) && l_1622) == l_1562) >= 2L), 1L)) , g_253), l_5)));
            }
            g_154 = ((l_1627 || (l_1575 = (g_415 <= ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((((l_5 = 0x36A4C1F3L) == (safe_add_func_int16_t_s_s((((g_707 <= (g_1063 | ((((safe_add_func_uint8_t_u_u(l_1572, (safe_rshift_func_int64_t_s_s(0x21FF0ACD5650C866LL, 53)))) < (((safe_rshift_func_uint16_t_u_u((l_1642 == (((g_1488 = ((g_521 = l_1627) , 0xDBF90434L)) , l_726) == l_1551)), 6)) != (-1L)) == g_1398)) == g_163) > l_1643))) == l_1572) < l_1644), 0x0990L))) , 0xA85C57C856D68A31LL) > g_1083) == 0xC83C43812E7A0B84LL), 8)), g_915)) ^ 0x11L)))) >= g_49);
        }
        g_166 |= (((((((safe_lshift_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u(g_1614, (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((((g_169 > (-1L)) ^ l_1653) || (-5L)), (((safe_add_func_int32_t_s_s(l_726, 4294967287UL)) == (!(g_660 || (((((safe_add_func_int16_t_s_s((+0xFC49060AL), g_163)) > 1UL) > l_1584) , 1UL) < g_20)))) >= 0x00F69837L))), 0L)))) & l_1573), g_1063)) , l_1499) , g_1083) == g_1403) == 0xB2L) & (-1L)) != l_1572);
    }
    else
    {
        uint16_t l_1685 = 0UL;
        for (g_1613 = 0; (g_1613 >= 21); g_1613++)
        {
            int16_t l_1676 = 0xEF5CL;
            float l_1686 = 0xF.0F71D7p-70;
            int16_t l_1687 = (-8L);
            int32_t l_1688 = 0xFEE419C5L;
            uint32_t l_1689 = 0x3D361A53L;
            l_1688 &= (safe_div_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((g_166 ^= (safe_div_func_uint64_t_u_u(((((safe_mod_func_uint32_t_u_u(0xE9A7F05DL, (g_251 |= (~(safe_mod_func_int64_t_s_s((g_1403 , (g_1064 != (((~(g_145 = (((((safe_rshift_func_int32_t_s_u(l_1676, (l_1420 ^= (safe_add_func_int64_t_s_s(((g_1065 & ((((safe_rshift_func_int64_t_s_s(((g_1064 <= (g_1064 != (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint32_t_u_u(((g_1488 = (g_521 > 0x57B29FA5L)) , 0x6832128EL), 30)), 14)))) ^ g_170), l_1685)) != 250UL) ^ g_1403) <= l_1676)) ^ g_145), 18446744073709551606UL))))) <= g_1476) > l_1687) < g_515) & l_1685))) , l_1653) & 0UL))), 9L)))))) & l_1421) || g_128) > 1L), l_1584))), 0x70L)) , g_148) || 0x48L), 0x030347CBL));
            g_1232 = l_1689;
        }
        g_521 = (g_171 = (safe_rshift_func_uint32_t_u_u(((safe_mul_func_uint32_t_u_u(l_1685, (g_164 && g_1232))) ^ ((safe_add_func_uint64_t_u_u((4294967289UL || g_491), ((safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint64_t_u_s((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x9ECCL, ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_1488, 5)), (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((~(safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(g_1065, ((safe_lshift_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((l_1419 = (safe_add_func_uint8_t_u_u(255UL, l_727))), 3)), 49)) && l_1499))), 1L)), l_1653)), g_126)) | g_1064), 0xE862E6A5L)), g_124))) <= l_1644) , (-1L)), g_142)), l_1685)))) & g_707))), l_1644)), 25)) <= l_1420), g_1398)) <= l_44))) | g_116)), 11)));
        return l_1732;
    }
    return g_1733;
}
uint16_t func_8(float p_9)
{
    uint64_t l_1422 = 0xC99C8DDC3B13BCD0LL;
    int32_t l_1463 = 0L;
    int32_t l_1464 = 0x4B6DBA52L;
    int32_t l_1466 = 0x671E8E7EL;
    int32_t l_1467 = (-1L);
    int32_t l_1468 = 7L;
    int32_t l_1469 = 0x91FBD33CL;
    int16_t l_1470 = 0xD620L;
    int64_t l_1471 = 5L;
    int32_t l_1473 = 1L;
    int32_t l_1474 = 0x7C30AF97L;
    int32_t l_1475 = 4L;
    int32_t l_1477 = (-1L);
    int32_t l_1478 = (-5L);
    int32_t l_1479 = 0xDB227900L;
    uint32_t l_1480 = 0UL;
    uint8_t l_1484 = 6UL;
    int32_t l_1489 = 0x6E659B6BL;
    int32_t l_1490 = 0x0BA00332L;
    int32_t l_1491 = 0x78C6B7F9L;
    int32_t l_1492 = 0x507B0076L;
    int32_t l_1493 = 0xB66A5847L;
    int32_t l_1494 = 0xAF5C294BL;
    int32_t l_1495 = 1L;
    l_1422 |= (-1L);
    g_513 = (((safe_div_func_float_f_f((((((safe_add_func_float_f_f(g_124, (((safe_mul_func_float_f_f((safe_div_func_float_f_f((safe_sub_func_float_f_f(((((safe_sub_func_float_f_f((safe_add_func_float_f_f((((((!(safe_div_func_float_f_f(((safe_add_func_float_f_f((p_9 != (g_1403 = l_1422)), (g_49 < ((safe_div_func_float_f_f((l_1422 , (safe_div_func_float_f_f((safe_sub_func_float_f_f(g_434, (((safe_div_func_float_f_f((((safe_unary_minus_func_uint32_t_u((!l_1422))) , (safe_mul_func_float_f_f(((safe_add_func_float_f_f(((safe_mul_func_float_f_f((safe_add_func_float_f_f((((g_169 ^ (((((safe_unary_minus_func_uint64_t_u((++l_1480))) == (!(l_1474 , l_1484))) > 0UL) >= l_1469) | g_136)) & l_1469) , 0x6.AA4CB5p+86), g_707)), 0x7.Bp+1)) >= 0x1.Dp-1), l_1475)) > l_1470), l_1478))) == p_9), g_707)) > p_9) < g_257))), (-0x1.Bp+1)))), l_1479)) != 0x0.9p+1)))) < g_141), l_1473))) < 0x7.79C80Fp+89) >= g_1395) != g_50) < 0xA.59DF1Bp-84), 0x4.F6A747p-28)), p_9)) == (-0x1.Ap+1)) < l_1463) >= l_1468), l_1475)), l_1463)), 0xE.221C90p-68)) >= p_9) == (-0x2.0p+1)))) < g_415) <= l_1470) == l_1469) != 0xB.2F99A2p+95), 0xD.37BFF9p+6)) >= 0x8.7p+1) >= l_1473);
    --g_1496;
    return l_1469;
}
float func_14(int32_t p_15, int8_t p_16, int64_t p_17)
{
    uint32_t l_1059 = 0xA52660BCL;
    uint8_t l_1144 = 0x9FL;
    uint32_t l_1170 = 1UL;
    float l_1278 = (-0x1.Ap+1);
    int32_t l_1335 = 0L;
    uint32_t l_1336 = 0xE89DA805L;
    uint64_t l_1356 = 0x0A75AA67A1B81F1ALL;
    int32_t l_1383 = 0x0650E161L;
    int32_t l_1387 = 1L;
    uint32_t l_1388 = 4294967295UL;
    int32_t l_1397 = 6L;
    int32_t l_1399 = 9L;
    int32_t l_1401 = 0xCA2ABF08L;
    int32_t l_1402 = 0x67742791L;
    for (g_151 = 0; (g_151 <= (-27)); g_151 = safe_sub_func_int16_t_s_s(g_151, 3))
    {
        uint32_t l_1062 = 0xF083F46CL;
        int32_t l_1073 = 1L;
        int32_t l_1078 = (-10L);
        int32_t l_1079 = (-4L);
        int32_t l_1080 = 0x878E9D8DL;
        const uint16_t l_1239 = 65534UL;
        uint16_t l_1293 = 0x51D4L;
        int32_t l_1305 = (-1L);
        uint32_t l_1418 = 0x736595EFL;
        if ((0xD2F1382BL != ((safe_mod_func_uint16_t_u_u((p_17 > (((~(((safe_lshift_func_int64_t_s_u((((((l_1059 > g_166) , p_17) ^ 1UL) >= p_17) ^ ((safe_mul_func_uint64_t_u_u((9L <= p_15), p_16)) & 0xD76F464622A03E4CLL)), p_16)) , g_434) || 0UL)) >= g_169) | l_1062)), p_17)) <= 0x279DL)))
        {
            uint64_t l_1072 = 0x70E1E19F41CA215ELL;
            int32_t l_1149 = 0x05DB30E4L;
            int8_t l_1218 = (-1L);
            uint16_t l_1295 = 0x3EFDL;
            int32_t l_1319 = 1L;
            if ((l_1073 &= ((g_1065--) & (safe_rshift_func_int8_t_s_u((l_1062 & (0x36L >= (safe_rshift_func_int32_t_s_s(p_16, l_1072)))), g_126)))))
            {
                uint8_t l_1128 = 0xFCL;
                int32_t l_1129 = (-4L);
                int32_t l_1130 = 0x323E3699L;
                for (g_141 = 10; (g_141 > 27); g_141 = safe_add_func_int8_t_s_s(g_141, 6))
                {
                    uint32_t l_1126 = 0xC9CD3A57L;
                    int32_t l_1127 = 0L;
                    for (p_17 = (-29); (p_17 >= 23); p_17 = safe_add_func_uint8_t_u_u(p_17, 7))
                    {
                        const int32_t l_1105 = 0x07B7EF9EL;
                        g_1084--;
                        l_1130 |= (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((l_1129 = ((g_149 |= ((safe_add_func_uint8_t_u_u((safe_lshift_func_int32_t_s_u((safe_mul_func_uint16_t_u_u(l_1072, (safe_lshift_func_int16_t_s_s((g_68 ^= (~(+(((safe_add_func_uint64_t_u_u((l_1105 == ((l_1072 && (safe_rshift_func_int64_t_s_s((l_1127 = ((safe_add_func_int64_t_s_s(l_1072, ((((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((p_16 >= p_16), (l_1126 ^= (safe_lshift_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((l_1059 | (safe_rshift_func_uint32_t_u_s((255UL < (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int64_t_s_s((l_1059 , l_1105), p_17)) , 0x107735A1L), g_130))), 15))), 3)), p_15))))), 0xFA75744DADD26C43LL)) & p_15), p_16)) >= 65535UL) < g_20) <= p_15))) , l_1079)), 9))) && l_1059)), l_1128)) < 18446744073709551615UL) > l_1072)))), p_16)))), g_660)), l_1079)) , g_929)) >= p_15)), g_49)), l_1105)), l_1128));
                        g_517 = p_16;
                    }
                    if (p_17)
                        break;
                }
                p_15 |= (p_16 <= 2L);
                l_1078 = ((g_253 , p_16) , g_253);
                l_1130 = (safe_lshift_func_int16_t_s_s(l_1073, 15));
            }
            else
            {
                const int8_t l_1133 = 0x23L;
                int32_t l_1171 = 0x38BF6629L;
                int32_t l_1172 = 8L;
                g_119 ^= ((4294967293UL ^ l_1080) & (l_1133 != ((safe_mod_func_uint8_t_u_u((((((safe_sub_func_uint16_t_u_u((0xC6555B2405DBCEA7LL | (((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((0x1E73189CL <= (l_1078 = 0xC6F50153L)))) , l_1072), (safe_unary_minus_func_int8_t_s(0xD3L)))) || ((safe_add_func_uint64_t_u_u(l_1062, l_1144)) , g_434)) & g_1084)), 0xA11DL)) && 0xA2BCL) ^ l_1133) == g_660) || 0L), 255UL)) | l_1059)));
                if ((safe_rshift_func_uint64_t_u_u(g_122, 54)))
                {
                    g_159 = 0x3.3F2CEBp+38;
                    for (l_1072 = 0; (l_1072 >= 28); l_1072++)
                    {
                        uint16_t l_1150 = 0UL;
                        ++l_1150;
                    }
                    if (((1L ^ ((safe_mul_func_uint64_t_u_u((65534UL | ((safe_mod_func_uint16_t_u_u((0x10L <= (4294967294UL == ((((+(safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((4294967290UL > (g_1064 = (p_17 != (65533UL == (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((g_251 = (((safe_mul_func_float_f_f((p_15 , 0xC.672CE8p-89), l_1149)) , 0xC2AEA444L) == p_17)), 0xF8ECL)), l_1133)))))) , p_17), g_169)), p_15))) <= 0xD014F9BBL) || g_115) | 2L))), p_15)) && p_15)), 0xB079C3388573F65FLL)) < g_515)) == 0UL))
                    {
                        l_1170 = (safe_lshift_func_int64_t_s_s(p_16, 20));
                        l_1172 |= (l_1171 &= g_136);
                    }
                    else
                    {
                        g_1084 = l_1144;
                        if (g_164)
                            break;
                    }
                }
                else
                {
                    int32_t l_1203 = 8L;
                    int32_t l_1229 = 0xB5748B43L;
                    const int32_t l_1240 = 0x868E0A0AL;
                    int32_t l_1294 = 0xC68D6A91L;
                    if (((safe_sub_func_int32_t_s_s((!65535UL), (p_15 = ((g_119 ^= (safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((((0xD0F4L & 1UL) != (((safe_div_func_uint16_t_u_u(0xC328L, (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_16, 2)), (((safe_add_func_int64_t_s_s((p_17 = 0x758BCBA85E7BBECFLL), ((safe_lshift_func_int32_t_s_s(((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint32_t_u_s((!(safe_div_func_uint8_t_u_u(0x7BL, (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((g_32 | (0L >= 0xCBBAL)) , g_116), l_1203)) == p_16), l_1080))))), 5)) >= 0x35648917L), g_20)) , 1UL) || 0x4F24FA83L) & g_1083), 22)) > p_15))) , p_15) && p_17))))) , l_1133) | p_16)) ^ l_1062), p_15)) >= g_1082), 0xB5C73F4EL)), g_1082))) < p_15)))) & p_16))
                    {
                        const uint32_t l_1217 = 0x0756F908L;
                        g_513 = (safe_div_func_float_f_f((((safe_mul_func_uint32_t_u_u((safe_rshift_func_uint32_t_u_u((p_16 = p_16), 24)), 0x897C4027L)) ^ (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_17, (+(((((l_1073 && (g_170 , (((((0xEFC14C97L & (g_1064 = (((safe_add_func_int8_t_s_s((((p_17 > 0xD7E284F1L) | g_136) , g_408), l_1217)) && g_115) <= 0x9E5F15BB36C4BC45LL))) , p_17) | 0xCCB2CEBB9E5CD0F3LL) | p_15) && 0L))) >= g_251) | l_1203) != p_17) < l_1218)))), p_17))) , 0xF.171D28p+68), 0xB.E41D1Fp-43));
                    }
                    else
                    {
                        uint32_t l_1219 = 0UL;
                        int32_t l_1230 = 0L;
                        g_122 = (-6L);
                        l_1219 |= g_915;
                        l_1171 = (((((g_251 |= 0x1E3B6715L) , (safe_sub_func_uint16_t_u_u(((safe_mul_func_int64_t_s_s(l_1203, ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(g_434, (g_1228 & ((g_1232++) != (g_166 = (safe_add_func_uint32_t_u_u((p_15 >= (p_16 ^ (l_1203 >= ((g_251 = (((safe_mod_func_int16_t_s_s((g_131 = g_164), g_124)) != 0x7BL) >= l_1171)) && l_1239)))), l_1240))))))), l_1229)) != p_16))) <= 4L), (-1L)))) <= l_1079) != p_15) ^ l_1219);
                        l_1149 |= ((l_1133 ^ (safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((p_16 > 4294967295UL), (((l_1172 &= (safe_rshift_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((p_15 <= (safe_lshift_func_int8_t_s_u(4L, 5))) >= (g_251 &= (safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((l_1230 ^= ((~(safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((!0x7BFAL), p_15)), ((safe_lshift_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u(0UL, p_15)) , p_17) , g_170) , p_16), 10)) , 0xAE4BL)))) || l_1059)) , l_1229), 0x17L)) <= p_16), 0xA3E3L)))), 2)), 0xFF45149247E45647LL)), 17))) , l_1133) || p_16))) > p_17) >= g_126), 0xBBL)) == p_16), g_165))) || 0x3864L);
                    }
                    g_159 = ((safe_sub_func_float_f_f((!(((g_1231 = (safe_mul_func_float_f_f((safe_mul_func_float_f_f(g_491, ((((safe_mul_func_float_f_f(l_1278, p_17)) == ((p_16 >= (safe_div_func_float_f_f((safe_div_func_float_f_f((safe_mul_func_float_f_f((g_253 == ((safe_div_func_float_f_f((safe_mul_func_float_f_f(p_16, ((g_173 = ((safe_mul_func_float_f_f((l_1229 <= 0x1.4p-1), ((safe_rshift_func_int16_t_s_s((0x91A7A146L <= 0x74CEFA13L), g_115)) , l_1171))) >= l_1072)) < l_1218))), 0xD.D0A3B7p-33)) >= l_1295)), g_164)), 0x0.C7E9DEp+8)), p_15))) > 0x5.A6612Fp-32)) == 0x1.Ap+1) >= g_145))), l_1170))) > g_1082) <= 0x0.AC73DCp+77)), p_15)) > g_1084);
                    g_231 = (g_1232 > (safe_mul_func_float_f_f(g_521, ((safe_sub_func_float_f_f(p_15, ((safe_div_func_float_f_f((safe_sub_func_float_f_f((((p_17 , (g_513 = (p_16 == g_130))) < ((p_15 < (-(g_1231 = (((g_1063 == l_1080) >= 0xD.36C54Ap+52) >= p_15)))) <= l_1170)) == 0xB.9D957Ep+59), l_1295)), 0x7.4p-1)) != g_166))) != g_491))));
                    if ((safe_mul_func_uint8_t_u_u(((l_1059 >= p_15) && ((p_15 || 4UL) | (safe_sub_func_uint64_t_u_u(((safe_div_func_int32_t_s_s((+((g_1065 = 0x0B83F0201A880AA1LL) , (safe_div_func_int8_t_s_s((((g_173 = (safe_add_func_float_f_f((l_1133 <= (safe_add_func_float_f_f(p_17, ((0x3.219B72p+47 <= 0x0.Ap-1) != (-0x2.1p-1))))), g_163))) , g_145) && (-4L)), 4L)))), p_15)) == p_17), (-1L))))), g_122)))
                    {
                        l_1149 = (g_1084 ^ 0L);
                    }
                    else
                    {
                        g_128 ^= (g_1084 & (l_1319 = 8UL));
                    }
                }
                g_166 = (l_1149 >= 0x311C082408A46F1ALL);
            }
            if (g_165)
                break;
        }
        else
        {
            const uint8_t l_1325 = 252UL;
            int32_t l_1345 = 0x63862536L;
            int32_t l_1381 = 0x9DB66D21L;
            int32_t l_1382 = (-1L);
            if ((!((((((safe_lshift_func_int16_t_s_u((((safe_add_func_uint64_t_u_u(l_1325, (+((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((((g_1081 >= (p_15 >= ((l_1335 & 4294967295UL) >= p_16))) , (--l_1336)) || (safe_sub_func_int16_t_s_s(0xF7E7L, (((safe_mod_func_int8_t_s_s((p_15 ^= ((safe_mul_func_int32_t_s_s(l_1345, (((((safe_mul_func_float_f_f(g_173, 0x1.7p-1)) < (-0x7.Cp-1)) , (-4L)) | g_49) >= l_1170))) ^ p_16)), p_16)) == 0xCDA514CFCB39FD60LL) > g_166)))), l_1335)), p_17)), 0x4CL)) && l_1325)))) & 0xBDE1162E4A05C657LL) > 65530UL), 14)) < l_1080) || p_15) , p_16) == (-5L)) > 5L)))
            {
                int32_t l_1350 = 0x05A2723EL;
                int8_t l_1360 = 0L;
                g_154 = (safe_add_func_int16_t_s_s((l_1073 > (l_1350 == l_1335)), (!(l_1293 & (((-1L) != (1UL > (safe_mod_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((l_1356 , (safe_mod_func_uint8_t_u_u((+(p_15 < l_1079)), g_68))), 0xA3L)) || 0x47L) | 0x04D78CE1L), l_1360)))) > g_434)))));
            }
            else
            {
                uint32_t l_1384 = 4294967295UL;
                int32_t l_1385 = 0x9A18E8EDL;
                int32_t l_1386 = 0x181CBEAFL;
                g_159 = ((safe_mul_func_float_f_f(p_17, (safe_sub_func_float_f_f(0x6.665CFCp+86, (g_257 < (safe_sub_func_float_f_f(g_154, ((((safe_div_func_float_f_f(((safe_div_func_float_f_f(((((g_173 = (l_1073 == (g_252 = (g_1231 = (safe_add_func_float_f_f((safe_sub_func_float_f_f(g_915, g_517)), (((safe_mul_func_float_f_f((((g_660 , (safe_unary_minus_func_int32_t_s((!(safe_rshift_func_uint32_t_u_s(0x22D7E426L, p_17)))))) | 0L) , l_1325), l_1345)) <= g_1065) != p_17))))))) == 0x3.441A6Fp-63) >= (-0x5.Ap-1)) >= p_17), l_1325)) < g_251), p_17)) > 0xC.0C6740p+20) >= p_16) == p_15)))))))) >= 0x5.0p+1);
                if (l_1170)
                    break;
                g_171 ^= ((p_15 |= ((g_130 , 9UL) && (p_16 == 0L))) ^ (0UL ^ (safe_rshift_func_uint64_t_u_s(p_17, 24))));
            }
            if (g_136)
                continue;
        }
        p_15 = (-10L);
        l_1387 = g_142;
        g_231 = (g_1231 = (safe_mul_func_float_f_f((g_253 < (safe_div_func_float_f_f((p_17 < p_17), ((((((--g_1403) , 0xC.2F800Ep-92) <= p_16) != ((safe_sub_func_float_f_f(((safe_div_func_float_f_f((safe_div_func_float_f_f((safe_sub_func_float_f_f(0x0.Fp+1, 0x2.4DC75Dp-18)), ((((safe_div_func_float_f_f(g_136, (safe_div_func_float_f_f(0xD.7E8977p+87, l_1336)))) >= g_231) >= g_257) < g_169))), g_145)) >= (-0x8.2p+1)), l_1335)) < l_1418)) < g_1064) , p_15)))), (-0x7.7p+1))));
    }
    g_112 = g_1395;
    return g_257;
}
int32_t func_21(uint16_t p_22, uint32_t p_23, float p_24)
{
    uint16_t l_755 = 0xE53BL;
    int32_t l_799 = 0xBABC1C82L;
    int32_t l_800 = 0xF3C4FACAL;
    int32_t l_914 = (-1L);
    uint32_t l_919 = 0UL;
    uint32_t l_943 = 0x9BC6FBD1L;
    uint16_t l_1051 = 65535UL;
    if (l_755)
    {
        int32_t l_770 = 0xBA0FE4CBL;
        p_24 = (p_23 <= (safe_sub_func_float_f_f(0x4.0p+1, (p_23 < ((((+g_169) == ((g_169 , (safe_sub_func_float_f_f((p_24 <= (safe_add_func_float_f_f((safe_mul_func_float_f_f(l_755, (safe_mul_func_float_f_f(g_126, (safe_sub_func_float_f_f((0x3.4C05A1p+37 < 0xD.C1ACA8p-80), 0x3.99DF28p-90)))))), g_116))), g_769))) >= p_22)) == l_770) == p_22)))));
    }
    else
    {
        uint8_t l_801 = 0xCDL;
        int32_t l_814 = (-4L);
        const uint8_t l_884 = 1UL;
        int32_t l_926 = 0x92FFAEF2L;
        int32_t l_928 = (-10L);
        int32_t l_939 = 0x4E33A1BDL;
        int32_t l_960 = 0x183E1779L;
        uint64_t l_979 = 0x16738E1EB6BEADF2LL;
        for (g_415 = (-17); (g_415 <= 14); ++g_415)
        {
            uint32_t l_798 = 0x6D287245L;
            int32_t l_815 = 1L;
            int32_t l_916 = 0L;
            int32_t l_918 = 0L;
            int16_t l_923 = 0xDC40L;
            int32_t l_941 = 0x05967D65L;
            g_159 = (safe_div_func_float_f_f(p_22, (((safe_sub_func_float_f_f(((safe_mul_func_float_f_f((safe_sub_func_float_f_f((g_517 , g_119), (((((safe_mul_func_int16_t_s_s(g_257, 0UL)) , ((safe_mul_func_float_f_f((g_252 = ((!((safe_mul_func_float_f_f((((safe_add_func_float_f_f((safe_div_func_float_f_f((safe_div_func_float_f_f(((p_24 = (((g_660 = 0xC1L) <= g_115) , ((p_22 , (safe_sub_func_float_f_f((safe_add_func_float_f_f((l_798 > g_660), p_22)), p_23))) != p_22))) >= l_755), g_167)), p_22)), 0x1.9p+1)) < p_23) < g_167), 0x1.5p+1)) , l_799)) > 0x0.Cp-1)), l_801)) == p_22)) > l_798) != 0xC.26C68Ap+79) != g_50))), 0xF.3836B1p-56)) != g_122), p_22)) == 0x0.C7D1C1p+96) <= g_151)));
            if ((g_119 < (~(((l_800 == ((((safe_lshift_func_uint16_t_u_u((l_815 = (g_68 |= (((safe_sub_func_uint32_t_u_u((l_798 && (safe_div_func_uint32_t_u_u((1UL == l_798), (g_32 || 0x425CAEBDBC004668LL)))), (safe_sub_func_uint8_t_u_u(((g_32 >= (+((safe_sub_func_uint32_t_u_u((((((l_814 = 0L) || g_415) != 0x5408L) ^ 0x8CB9DB35F985DE2BLL) , 0x84E62406L), l_755)) == 0xF6L))) && 1UL), g_163)))) >= 0xCA462831L) != p_23))), p_23)) && l_800) && l_800) && p_22)) && g_166) ^ 0x340AD02C0A2CD494LL))))
            {
                const uint16_t l_830 = 0xFB5DL;
                uint16_t l_854 = 0xAA44L;
                int32_t l_879 = (-1L);
                int16_t l_924 = 0xC6BAL;
                int16_t l_925 = 4L;
                int32_t l_927 = 1L;
                if ((safe_lshift_func_uint16_t_u_s((l_814 = (l_755 , (p_23 ^ ((safe_div_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((l_814 & (g_257 ^ (((((safe_unary_minus_func_int8_t_s((safe_div_func_uint8_t_u_u(0x88L, p_22)))) > (safe_div_func_uint16_t_u_u(g_169, (-1L)))) && (safe_mul_func_uint64_t_u_u((~4294967292UL), l_830))) , l_800) || p_23))), l_798)) == p_23), 0xD7F635DCL)) , 1L)))), l_801)))
                {
                    uint16_t l_839 = 0UL;
                    int8_t l_862 = (-9L);
                    int32_t l_863 = (-1L);
                    p_22 = ((((l_863 &= (((safe_div_func_int64_t_s_s(((((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((l_815 = ((safe_rshift_func_uint64_t_u_s((l_839 , g_515), 27)) > ((((p_22 , ((safe_sub_func_uint8_t_u_u(((((g_136 ^= p_22) <= ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(l_798, (safe_lshift_func_uint32_t_u_s((safe_mod_func_int64_t_s_s(0xCD6C4EFCDE9FE012LL, (safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s((l_854 , (safe_mod_func_uint32_t_u_u((safe_mul_func_int64_t_s_s((p_23 > (safe_mul_func_uint32_t_u_u((!(l_755 <= g_126)), g_115))), g_246)), 0x717D9985L))), l_815)), l_815)))), 3)))), l_862)) || g_169)) <= 0x57CFADEEL) == 1L), l_815)) && l_800)) && 0UL) > p_22) > 0x762F34FCL))) || 1L) , l_798), l_862)), g_145)) && g_660) < g_116) ^ g_139), g_145)) & 0UL) < g_168)) >= g_491) , 0x9.4p-1) , p_22);
                    g_159 = 0x7.4F25BFp+36;
                    return p_23;
                }
                else
                {
                    uint32_t l_880 = 0xC8F50BC2L;
                    int32_t l_882 = 0xF0BE7B25L;
                    int32_t l_883 = 1L;
                    int32_t l_917 = (-1L);
                    for (l_801 = (-9); (l_801 >= 49); l_801++)
                    {
                        uint32_t l_878 = 1UL;
                        int32_t l_881 = 0x2DBE0661L;
                        int32_t l_901 = 0x069CEC7FL;
                        uint8_t l_922 = 255UL;
                        g_231 = ((safe_add_func_float_f_f(((-((!((p_24 = (((g_252 = (l_799 == ((((safe_add_func_float_f_f((safe_div_func_float_f_f(l_830, 0x1.Bp+1)), (g_517 >= (safe_div_func_float_f_f(((safe_mul_func_float_f_f((((p_22 > (p_23 , (g_167 >= l_878))) > (-10L)) , g_141), g_171)) < (-0x1.Cp-1)), g_252))))) > g_154) >= p_22) == l_800))) < p_24) == 0xE.ACD9F3p+41)) >= l_881)) != 0x0.Dp-1)) >= g_126), p_23)) , 0x8.2p+1);
                        l_799 = l_884;
                        l_814 ^= (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(g_251, 3)) < g_517), (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(g_142, g_251)), 5)))), (((g_68 = ((l_799 = (~(safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint16_t_u_u((l_924 &= (((l_901 &= (+p_23)) < (g_149 = p_23)) || (safe_mul_func_int64_t_s_s(((((safe_lshift_func_int64_t_s_s(g_20, 42)) || (safe_lshift_func_uint8_t_u_s((g_145 >= ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((--l_919), 0)), ((l_922 = ((p_22 , 0xD.AE6873p-86) , p_22)) ^ g_415))) <= p_22)), p_23))) > p_22) , l_923), 0x9391D9F90F2B9C83LL)))), l_918)) != l_925) & l_830), 5)))) >= l_755)) || 65535UL) ^ l_798)));
                    }
                    ++g_929;
                    l_882 ^= (p_23 > (((+g_130) , l_883) != g_915));
                }
            }
            else
            {
                int8_t l_940 = (-3L);
                int32_t l_942 = 0x18C6E77BL;
                g_145 = (safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(0xADA914324D5CD3B3LL, (((l_943++) , g_124) <= ((g_171 = (safe_mod_func_uint16_t_u_u((((((safe_mod_func_int8_t_s_s(((safe_rshift_func_int64_t_s_u((~(g_126 = l_941)), l_940)) >= (l_926 |= ((~0xB8CBF27536C391E9LL) , (safe_mod_func_int8_t_s_s(0xE2L, p_23))))), 1L)) >= (safe_rshift_func_int64_t_s_s(((g_151 = (safe_rshift_func_int8_t_s_s((((g_251 , 0x77L) , l_960) == p_22), 6))) <= 0xAAA6L), g_112))) | l_798) < g_124) >= 18446744073709551615UL), p_22))) > 1UL)))) >= 0L), p_23)) || 0x60L), l_755));
                l_942 = p_23;
                l_979 = ((((((safe_rshift_func_uint64_t_u_u(l_815, ((safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((0x66L & ((((!l_941) | ((((l_942 ^= p_22) & ((safe_mul_func_uint64_t_u_u(l_940, (safe_add_func_uint64_t_u_u((safe_rshift_func_int64_t_s_u((0x9253L <= (-1L)), 3)), g_141)))) >= ((safe_add_func_int32_t_s_s(((safe_mul_func_int64_t_s_s((((safe_unary_minus_func_int16_t_s(0xFE08L)) ^ (-8L)) <= p_23), p_23)) || p_22), 3UL)) ^ g_122))) <= 0xBCFB72970AEFB2DALL) <= g_171)) >= g_136) <= g_257)) | g_915), l_815)), g_68)) & g_116))) <= 0x561F73E5L) > 0xD70DL) < g_131) <= g_149) & g_130);
                if ((safe_rshift_func_uint32_t_u_s(((l_918 = p_22) < (g_154 = l_916)), (l_942 &= (p_23 || (g_165 = g_168))))))
                {
                    uint64_t l_989 = 18446744073709551615UL;
                    p_23 = g_116;
                    for (g_122 = 4; (g_122 >= 20); ++g_122)
                    {
                        int8_t l_988 = 8L;
                        l_815 = (safe_lshift_func_int8_t_s_s((safe_mul_func_uint64_t_u_u((l_989--), g_145)), 2));
                    }
                    l_942 = (((safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((0xA2L || g_141), ((p_23 > (~((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_uint16_t_u_u(g_253, ((((g_148 , ((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(0xBC4C0D3AL, l_940)), g_148)) != (-10L))) || g_124) != 9L) || p_22))) > l_960) && l_940) > 0x60L), 0x79DF4E6EL)) > p_22))) , g_151))), l_989)) ^ 0x60L) != p_23);
                    l_815 ^= p_23;
                }
                else
                {
                    uint64_t l_1005 = 18446744073709551615UL;
                    int32_t l_1006 = 0xBA44E566L;
                    g_166 &= (((l_1006 = ((((l_914 , (l_1005 ^= p_22)) > (l_1006 ^ (safe_rshift_func_uint32_t_u_s((p_22 <= (g_517 , l_814)), (safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((safe_div_func_int32_t_s_s(1L, p_22)) <= ((((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(0x234138CEL, 6UL)), 6)) > 0xD95BEE93L) != l_914), 3L)) , l_814) ^ 5L) != g_167)) | g_251), g_408)), g_20)))))) ^ p_23) == p_23)) & p_23) || p_22);
                }
            }
            l_815 ^= g_124;
        }
        return g_130;
    }
    g_136 = (g_164 = ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((p_22 , ((safe_mod_func_int32_t_s_s((~(((safe_add_func_int64_t_s_s((g_521 = l_919), ((safe_sub_func_uint16_t_u_u(((g_122 |= (((l_800 = ((4294967295UL > (safe_add_func_int64_t_s_s(((g_130 >= (((~(+((g_116 = p_23) ^ (safe_mul_func_uint32_t_u_u((g_68 = (!(0x594C3FCC48918AD2LL >= (p_22 , ((((((safe_div_func_float_f_f((((safe_sub_func_float_f_f(((safe_mul_func_float_f_f(((g_141 = 0x8F263B851967BBFELL) , ((safe_sub_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((((safe_mul_func_int8_t_s_s((((l_799 = l_755) < l_919) < p_22), g_408)) ^ p_22) , (-1L)), 4L)) , l_943), 0L)) , l_1051)), g_163)) != l_919), 0xA.4F31AFp-73)) != 0x3.3p+1) <= l_800), p_23)) <= p_24) , l_800) < 2L) > g_32) && 18446744073709551615UL))))), l_943))))) & p_23) , 0L)) <= g_112), l_919))) < g_168)) || g_164) > p_23)) ^ g_170), p_22)) < 0xCB513A9DL))) < g_139) < 65530UL)), l_1051)) || 18446744073709551615UL)), l_914)), l_943)) , l_755));
    return p_23;
}
uint32_t func_25(uint64_t p_26)
{
    int8_t l_728 = 0L;
    int32_t l_729 = 0L;
    uint64_t l_730 = 0x7CA7E5A90CAF5909LL;
    uint64_t l_753 = 0xDE9FFD4C0335E154LL;
    int32_t l_754 = 0L;
    l_730++;
    l_754 = (safe_mul_func_int16_t_s_s(((l_729 = ((safe_sub_func_float_f_f(((g_173 = (l_730 > (-0x1.6p-1))) < g_126), (safe_mul_func_float_f_f(((l_729 < p_26) , p_26), (g_253 <= (safe_div_func_float_f_f(((((safe_div_func_float_f_f((+((safe_add_func_float_f_f((safe_sub_func_float_f_f((+l_728), (safe_mul_func_float_f_f((g_159 = (safe_sub_func_float_f_f(g_124, g_142))), 0x8.EF1223p-77)))), l_729)) >= 0x0.Ep-1)), g_112)) != 0x9.39E87Fp-93) < l_728) >= (-0x2.Cp-1)), g_517))))))) , l_729)) < g_116), 65532UL));
    return l_753;
}
int32_t func_37(float p_38, int16_t p_39, int16_t p_40)
{
    int8_t l_57 = 1L;
    int32_t l_689 = (-1L);
    int32_t l_693 = 8L;
    int8_t l_694 = 0x31L;
    int32_t l_695 = 1L;
    int32_t l_696 = 9L;
    int32_t l_697 = (-6L);
    int32_t l_698 = 0x48E4A59FL;
    int32_t l_699 = 0x2A16E3B1L;
    int32_t l_700 = 0x41FC93D0L;
    int32_t l_701 = 0xCBEDF935L;
    int32_t l_702 = (-1L);
    int32_t l_703 = (-8L);
    int32_t l_704 = 0x27EE7266L;
    int32_t l_705 = 0xE655808AL;
    float l_706 = 0xD.8928E7p-43;
    l_689 = (safe_lshift_func_int64_t_s_u((((g_50 = (safe_lshift_func_int32_t_s_s((g_49 |= p_40), 21))) && func_51(l_57, l_57, p_39, g_50, ((func_58(p_40, (safe_lshift_func_int8_t_s_s((((g_49 & ((g_68 = (safe_mod_func_uint32_t_u_u(0x153AA9B2L, 0x54120977L))) || p_39)) == g_20) < p_40), g_49)), p_40, l_57, p_39) == 0xB.6892B8p+98) >= g_136))) > l_57), 35));
    l_697 = ((safe_rshift_func_int16_t_s_s((!(l_689 ^= (((++g_707) == (g_164 = (((((safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s((p_39 > p_39), (((p_40 <= (safe_sub_func_uint16_t_u_u(p_39, (safe_unary_minus_func_int16_t_s(p_40))))) <= (0x1DL > (((safe_div_func_uint32_t_u_u((g_116 || (safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((p_39 != (l_695 = (l_700 ^ g_145))), p_39)), g_145))), g_49)) , g_168) != p_39))) < g_122))), 0x2D3FEC5D0741B08ALL)), 18446744073709551615UL)) | 255UL) >= g_142) < g_163) , 0x21F5L))) , p_40))), 2)) ^ 7UL);
    return l_705;
}
int32_t func_51(uint32_t p_52, float p_53, uint8_t p_54, float p_55, float p_56)
{
    int16_t l_581 = 0xF508L;
    const int16_t l_582 = (-5L);
    int8_t l_588 = 1L;
    int32_t l_589 = 1L;
    int32_t l_590 = 0x7CABE5EFL;
    uint64_t l_630 = 0x2443C714739A51EDLL;
    int8_t l_647 = 1L;
    int32_t l_656 = 6L;
    int32_t l_658 = 0x30C2B7ABL;
    if ((g_122 ^= ((safe_unary_minus_func_uint16_t_u(g_415)) < ((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u(l_581, l_582)) == (+p_52)), (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_590 = (l_589 = l_588)), (safe_mod_func_uint64_t_u_u(0xE3DA1E99B2589F4ALL, g_517)))), (((((g_171 |= (l_588 | (safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s((+0x1C6DL), p_52)), p_52)))) , l_581) < p_54) >= g_253) & g_139))))), 7)) , g_251), g_112)) && l_582) ^ g_149) ^ 4294967295UL))))
    {
        int32_t l_600 = 0x8F05BC62L;
        uint64_t l_610 = 0x0EC4276A19489864LL;
        g_68 ^= ((p_54 >= g_171) == 0x71E515C1L);
        g_128 ^= (safe_mod_func_uint64_t_u_u(l_600, (0xF5CB3850L & (~(safe_lshift_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((l_590 &= (-8L)), 5)), (safe_lshift_func_uint64_t_u_s((safe_add_func_uint32_t_u_u((l_610 < p_54), (safe_sub_func_int16_t_s_s(1L, (safe_div_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(((safe_rshift_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(l_600, (g_517 ^ ((safe_mul_func_uint32_t_u_u((((((safe_div_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((g_145 ^= ((safe_mul_func_uint32_t_u_u(0x3195C1B3L, l_630)) , p_52)), 0x182B9280L)), (-1L))) ^ 0x95L), 0xBFL)) , 0x3054D78C9F4425D8LL) != 9L) | 0x4098L) , p_52), g_151)) != l_588)))) >= l_581), g_124)) < l_582))), l_581)))))), g_119))))))));
    }
    else
    {
        float l_633 = 0x6.4p+1;
        int32_t l_648 = (-7L);
        int16_t l_687 = 9L;
        int32_t l_688 = 0L;
        l_648 = (safe_lshift_func_int32_t_s_s((((((l_590 |= p_52) || g_165) >= (+(safe_add_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(g_169, (((l_630 > g_521) & (((safe_rshift_func_int8_t_s_s(g_68, p_54)) <= ((l_647 = (safe_lshift_func_int8_t_s_u(((p_54 || ((safe_lshift_func_int8_t_s_u((((!(g_251 = (!(g_163 || p_54)))) ^ 0xDF532CABL) && g_170), p_52)) , 0xF894L)) , p_52), 2))) || l_582)) != g_50)) && g_116))), p_54)))) < p_54) != p_52), l_648));
        for (g_517 = 0; (g_517 <= 16); ++g_517)
        {
            uint64_t l_651 = 9UL;
            int32_t l_652 = 0x8EF8292CL;
            int32_t l_657 = 2L;
            int32_t l_659 = (-8L);
            if (g_168)
            {
                g_151 = (l_651 = 0L);
            }
            else
            {
                int32_t l_653 = 0x630E178AL;
                int16_t l_654 = 0xCCA1L;
                int32_t l_655 = 0x513ECCE0L;
                l_688 |= (l_648 > ((((g_660++) ^ (((((!l_654) & g_166) , ((l_658 |= (safe_lshift_func_uint8_t_u_s(((((safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s((l_648 & (((g_171 &= (safe_lshift_func_int32_t_s_u((safe_sub_func_uint32_t_u_u((l_589 &= (safe_sub_func_int64_t_s_s((+(safe_lshift_func_int64_t_s_s(((((((((p_52 >= ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint32_t_u_s((((p_54 <= p_54) , 0x8F74L) != (((safe_mul_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(0x46BAL, l_648)), (-1L))) | 254UL) == g_141)), l_687)), 0x43L)) & l_653)) && 0xB7A1L) < p_54) & g_257) | (-1L)) || g_167) && p_52) || l_647), 45))), p_52))), 6UL)), 9))) && p_54) || 0xEFL)), 0xE0F3748EL)), g_169)) != l_657) != g_68) ^ g_434), p_54))) <= g_116)) < g_170) , p_54)) && 0xA8FB614299B8E3C3LL) > l_687));
            }
        }
    }
    return g_154;
}
float func_58(uint32_t p_59, int64_t p_60, int32_t p_61, int16_t p_62, int32_t p_63)
{
    int32_t l_77 = 0xA95A4792L;
    uint64_t l_96 = 0x2AD41D66485393F1LL;
    uint16_t l_97 = 65527UL;
    int32_t l_98 = 0x5EE8DA53L;
    int32_t l_99 = (-8L);
    int16_t l_174 = 0L;
    int32_t l_571 = 0x1F358700L;
    l_77 = ((func_69(((g_50 == (l_174 = func_75((l_77 < (safe_rshift_func_int16_t_s_u((((safe_div_func_int32_t_s_s((((safe_add_func_int8_t_s_s((((l_99 &= (l_98 = ((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(p_61, 5)), p_63)) || ((safe_lshift_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((p_61 > (safe_mod_func_uint32_t_u_u((l_97 = ((p_62 & p_60) || (l_96 , 0xD6L))), 0x343DEF57L))), l_96)), g_68)) >= g_49)))) <= g_50) , 0L), g_50)) , p_60) ^ g_49), 0x98B2365BL)) , 0x2F019D465F4E4D73LL) & 1L), g_50)))))) >= g_149), l_77, g_163, g_141, l_96) != (-5L)) <= g_50);
    p_62 = p_62;
    l_571 = ((safe_rshift_func_int64_t_s_u((safe_add_func_int8_t_s_s((l_99 = ((safe_sub_func_int16_t_s_s(p_60, (((p_62 > ((l_77 = ((p_60 ^ (safe_mod_func_uint8_t_u_u((((((g_148 = g_115) == ((l_77 , ((safe_rshift_func_int16_t_s_s(g_253, ((+((l_98 = ((safe_add_func_int16_t_s_s((l_98 & (((0x1D13L && ((safe_mod_func_int16_t_s_s(((g_251 & 0L) <= p_59), p_61)) >= p_62)) | g_165) ^ p_61)), l_99)) > 9UL)) <= l_97)) || l_174))) , 9L)) > l_99)) < g_168) , p_60) , l_98), g_164))) && l_77)) ^ p_59)) == l_99) ^ l_96))) , 0x2BL)), 0UL)), l_96)) != 0L);
    return g_170;
}
int16_t func_69(int8_t p_70, int16_t p_71, int32_t p_72, const int32_t p_73, int8_t p_74)
{
    uint16_t l_181 = 0xB8D9L;
    int16_t l_203 = 0L;
    int32_t l_204 = 0x73838C22L;
    int32_t l_205 = 0xF38B7723L;
    int64_t l_249 = 4L;
    float l_357 = 0x2.3p+1;
    int32_t l_403 = 3L;
    int32_t l_404 = 0xF5139A76L;
    int32_t l_406 = 3L;
    int32_t l_482 = 1L;
    int32_t l_483 = 0x950CD63CL;
    int32_t l_484 = (-6L);
    int32_t l_485 = 0xA50D181DL;
    float l_486 = 0x9.0p-1;
    int32_t l_487 = 0xB987CA8CL;
    int32_t l_488 = (-10L);
    int32_t l_489 = 0x12CC45B1L;
    int32_t l_490 = (-1L);
    const int64_t l_545 = 0x2ECFFAD69ECFBAD7LL;
    int16_t l_555 = 0xAC25L;
    if (((safe_mod_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((l_205 = (l_204 = ((safe_lshift_func_uint16_t_u_s(l_181, l_181)) != (g_166 |= (((safe_mod_func_uint16_t_u_u((+((safe_rshift_func_int8_t_s_u(l_181, (((safe_lshift_func_int8_t_s_u(((6L ^ (safe_mul_func_uint16_t_u_u((1L & ((safe_div_func_int16_t_s_s(p_72, (safe_rshift_func_uint16_t_u_u(65535UL, ((safe_rshift_func_uint32_t_u_s(((safe_lshift_func_uint16_t_u_s(g_149, 5)) != (g_128 = (safe_div_func_int32_t_s_s((p_73 , p_70), l_181)))), 10)) || g_122))))) >= l_203)), p_72))) && p_71), p_72)) || p_74) >= p_71))) , 0L)), 0x8864L)) & g_154) == l_203))))), 65527UL)) >= l_181) | p_73), l_203)) > 4294967295UL))
    {
        int16_t l_206 = 1L;
        int32_t l_215 = 4L;
        int32_t l_245 = (-5L);
        int32_t l_250 = 0xA7604D3DL;
        int16_t l_255 = 0xA16AL;
        uint64_t l_370 = 0x41E3A8740F6EF4EALL;
        int32_t l_405 = 0xD1B7C7B1L;
        int32_t l_432 = (-7L);
        int32_t l_433 = (-1L);
        l_206 |= (g_164 , (g_130 ^= p_71));
        l_215 ^= ((safe_rshift_func_uint32_t_u_u((4294967295UL <= (-1L)), (safe_lshift_func_int8_t_s_u((safe_mul_func_uint64_t_u_u(((g_130 = p_71) || ((+(g_115 = p_74)) && 255UL)), (l_204 = (~0xAEA5EAF73BA8E61ELL)))), 1)))) , 0x7E072EDAL);
        for (l_215 = 27; (l_215 != 3); l_215 = safe_sub_func_int32_t_s_s(l_215, 8))
        {
            uint32_t l_223 = 1UL;
            int32_t l_229 = 0x4E495FCCL;
            int32_t l_230 = 0x7A7A2773L;
            int32_t l_232 = 0x62B2D3F7L;
            int32_t l_233 = (-4L);
            int32_t l_234 = (-1L);
            int32_t l_235 = 0L;
            l_235 |= (((((+((safe_mul_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((p_71 ^ (l_223 & g_168)), g_142)) , (l_234 = (safe_unary_minus_func_uint16_t_u((g_168 && (l_233 ^= (((safe_div_func_uint8_t_u_u((l_232 = (((9L || (g_148 > ((g_112 , (l_229 = ((safe_add_func_uint8_t_u_u(((l_230 |= ((p_72 && l_229) , p_70)) | g_68), g_167)) < 0x50L))) < g_164))) , 0x3EEDCE34L) , 0x11L)), 0x33L)) >= l_204) <= l_223))))))), l_206)) || p_74)) || 0x27A575A08344C3BFLL) ^ p_72) ^ p_74) , 1L);
            if ((g_171 = (safe_mul_func_uint8_t_u_u((((p_74 , (l_215 ^ 0L)) ^ ((safe_lshift_func_int16_t_s_s((l_245 ^= (g_68 = ((((((+g_171) , 65535UL) | (safe_sub_func_int16_t_s_s((g_112 , ((g_116 > ((((((p_73 , 0x7666566E71845DB4LL) != 0x469CFB4F43482B3DLL) , l_234) ^ 0x64L) ^ (-8L)) < l_181)) && l_232)), p_73))) , g_130) >= p_73) == l_206))), 2)) == l_181)) > 4294967295UL), g_164))))
            {
                float l_254 = (-0x1.Ep-1);
                int32_t l_256 = 4L;
                --g_246;
                g_257++;
            }
            else
            {
                int32_t l_299 = 0x40D45DD2L;
                int32_t l_300 = 0L;
                for (l_206 = 28; (l_206 == (-24)); l_206--)
                {
                    int16_t l_262 = 0x8372L;
                    uint32_t l_263 = 0xBA6CA5C4L;
                    ++l_263;
                    if (g_253)
                        break;
                    return p_72;
                }
                l_250 = 2L;
                if ((g_115 && p_74))
                {
                    int32_t l_274 = 0x9A3497EFL;
                    int32_t l_298 = (-1L);
                    l_234 |= ((((((g_154 || ((p_71 , ((p_74 ^ l_250) < ((safe_mul_func_float_f_f(l_223, (safe_add_func_float_f_f((((safe_div_func_uint64_t_u_u((safe_rshift_func_int64_t_s_u(l_274, (safe_div_func_int16_t_s_s((!(safe_rshift_func_int64_t_s_u((((safe_mul_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((l_299 = ((((safe_rshift_func_uint64_t_u_s((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_uint64_t_u_s(((safe_rshift_func_int16_t_s_u(p_74, 5)) <= (((l_298 = (l_245 = (safe_mul_func_int32_t_s_s((p_73 ^ (l_232 , l_245)), 0xB0749740L)))) | l_233) , p_71)), g_166)) > g_131) < p_70) == p_71), g_68)), g_251)) & 0UL) == 0L) , l_249)), g_148)), l_274)), 0xEBB8L)) || g_257) > l_255), p_70)) , 0L) , g_126), 32))), p_70)))), g_166)) , g_253) == 0x1.AA5C5Dp+71), 0xB.71C95Ep+57)))) , g_20))) && 0x46C75788D5B51C37LL)) , p_71) == 0xF2L) | g_253) != l_300) > g_136);
                    if (p_70)
                        continue;
                }
                else
                {
                    g_151 |= (((((p_73 || (safe_sub_func_uint64_t_u_u((l_232 &= ((safe_sub_func_uint8_t_u_u(0x73L, l_181)) | (((safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((l_250 ^= (safe_add_func_int8_t_s_s((safe_lshift_func_uint32_t_u_u((((g_166 = l_204) == ((safe_add_func_uint8_t_u_u((l_300 < (l_255 | ((safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s(l_234, (6UL ^ (safe_rshift_func_int64_t_s_s((l_245 = (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((p_70 & p_71), 8L)) ^ g_169), p_73))), g_164))))), 4)) > 0xE721F199CA37C214LL))), p_71)) || p_71)) , p_70), g_251)), l_235))), g_49)) , p_72), l_299)) >= g_246) ^ l_223))), l_299))) || 0L) & 0x0BL) && 0xB77572B0L) || 0UL);
                    g_173 = (safe_div_func_float_f_f(((safe_div_func_float_f_f(((safe_sub_func_float_f_f((g_159 = ((((safe_mul_func_float_f_f((safe_mul_func_float_f_f(0x8.7p+1, ((safe_add_func_float_f_f((!((safe_sub_func_float_f_f((((safe_mul_func_float_f_f((safe_sub_func_float_f_f((((g_168 || g_151) , (g_141 || 0x31CD22D570F6F371LL)) , (safe_add_func_float_f_f((((l_300 == (((safe_mul_func_uint16_t_u_u((((g_154 = ((((((safe_div_func_int16_t_s_s((((safe_rshift_func_uint64_t_u_s(((safe_sub_func_uint64_t_u_u(((((l_234 == 1L) | ((~(safe_lshift_func_int64_t_s_s((((0x0.3p-1 == l_357) , p_73) > 0UL), g_130))) >= g_246)) <= 0x28L) | l_223), 0x3F096784529F8FE3LL)) == 0x2EF38C47E81A8B05LL), p_72)) > 65529UL) != l_205), l_204)) == p_71) > p_73) , l_223) != 0x1F37E9A4C5BC5EB1LL) != 0xE44F4403A960763BLL)) != p_73) >= 0x12L), 0x4C1EL)) ^ l_300) , p_73)) == p_74) <= g_149), 0xD.4BFFB1p-0))), p_74)), p_73)) >= (-0x5.Ap-1)) >= g_50), g_50)) > l_299)), l_300)) <= l_223))), l_300)) > p_73) == l_255) != g_170)), (-0x9.1p+1))) >= g_163), g_126)) >= l_299), 0x7.CE192Bp+18));
                }
            }
            if (((l_205 >= (((g_116 >= (safe_lshift_func_uint64_t_u_u(((p_74 >= g_168) , 0x68FD03CFEF64EFBDLL), 54))) || ((safe_add_func_int32_t_s_s(((l_233 == (-1L)) && ((g_171 &= (safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0UL, ((safe_div_func_int64_t_s_s((-1L), g_149)) <= g_170))), p_70)) | p_71), 0x99C83E0CL))) , g_124)), l_204)) || 6L)) || l_370)) ^ l_232))
            {
                for (l_223 = 3; (l_223 != 8); l_223++)
                {
                    l_230 = ((safe_rshift_func_uint16_t_u_s(0x1F3BL, 5)) ^ g_167);
                }
            }
            else
            {
                int16_t l_398 = 1L;
                int32_t l_400 = 0xA813B8E7L;
                int32_t l_401 = 0x7F9AE2D6L;
                for (l_204 = 0; (l_204 > (-23)); --l_204)
                {
                    float l_379 = 0x0.06E27Dp-2;
                    int32_t l_391 = (-7L);
                    int32_t l_399 = 0x38AA62ECL;
                    int32_t l_402 = 0xC5FAE3B1L;
                    int32_t l_407 = 0xA5481160L;
                    g_168 |= g_165;
                    l_401 = ((l_400 = ((l_399 = (((l_235 = l_250) || p_74) <= (((safe_sub_func_int64_t_s_s((-1L), g_20)) > (safe_sub_func_uint64_t_u_u((~(safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(g_145, (((l_391 = p_70) <= g_148) , (safe_sub_func_uint16_t_u_u(0x68D3L, (((safe_div_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s(p_71, 0UL)) || p_70) || 0xF5CC839FL) || 0x70A0293AL), 18446744073709551610UL)) >= l_398) , l_250)))))) >= l_215) | 0x05L), l_255)) <= 4294967295UL), p_73))), l_203))) <= l_398))) , g_142)) ^ 0L);
                    g_408++;
                    if (p_74)
                        break;
                }
            }
            g_159 = (l_215 >= (safe_div_func_float_f_f(g_115, p_70)));
        }
        g_159 = (safe_mul_func_float_f_f((l_403 = (g_415 = g_246)), (safe_add_func_float_f_f(0x2.B8D20Ep+86, (safe_mul_func_float_f_f(((((-0x1.Cp-1) != 0x1.FF86E4p-24) >= (l_245 < 0x9.2AE671p+18)) == (safe_mul_func_float_f_f((g_252 = ((safe_mul_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_165, ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int32_t_s_s((0x150271E2L || (++g_434)), (safe_mul_func_uint16_t_u_u(g_251, l_203)))), g_253)) , p_73))), g_68)), 0x1C1144BB95E3B4EDLL)) , 0x5.1p-1)), g_173))), p_74))))));
    }
    else
    {
        int16_t l_462 = 0x760FL;
        int32_t l_463 = (-1L);
        int32_t l_480 = (-1L);
        int32_t l_481 = (-1L);
        for (l_205 = 0; (l_205 < 23); l_205 = safe_add_func_int16_t_s_s(l_205, 6))
        {
            int32_t l_443 = 0xF784C0FBL;
            int32_t l_464 = 1L;
            int32_t l_465 = 0xD2F77C82L;
            l_465 &= (safe_lshift_func_int64_t_s_s((g_148 < l_443), (((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((p_74 |= 1L) & (safe_rshift_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(0xC25EL, (p_70 && (g_141 == ((-4L) <= ((l_464 &= (safe_mod_func_uint16_t_u_u((g_128 , ((safe_rshift_func_uint16_t_u_u((((l_463 ^= ((safe_add_func_int8_t_s_s((safe_lshift_func_uint32_t_u_s(l_462, g_168)), 0x75L)) , 8L)) ^ 0x44A458A64CC767CELL) <= 0xBDDCC80E5877543BLL), g_251)) >= l_443)), p_70))) , 5UL)))))), 36))), 0x9A375466L)), l_462)) >= p_73) != 3L)));
            l_403 ^= (((safe_sub_func_int16_t_s_s(((g_139 == (((-(0x8.1019B4p+5 >= (g_159 = (((safe_div_func_float_f_f((g_231 = (safe_sub_func_float_f_f(l_464, (g_173 = (((((l_463 = ((!(l_463 && g_20)) | ((safe_lshift_func_uint32_t_u_s(4294967290UL, (g_122 = (((safe_rshift_func_uint64_t_u_s(p_72, (l_249 , ((((((safe_sub_func_uint64_t_u_u((l_464 != l_463), p_70)) >= l_462) && g_253) && (-7L)) , l_443) == p_72)))) < p_73) <= p_70)))) == g_408))) > g_128) == 0xF49BC35313655EE2LL) , g_173) < 0x1.2p+1))))), g_128)) < 0x0.9C0ABDp+6) < l_462)))) < l_464) <= p_71)) , l_481), 1L)) , p_73) , g_124);
        }
    }
    ++g_491;
    if (g_257)
    {
        int32_t l_494 = (-1L);
        int32_t l_505 = 0xBE2347F5L;
        int32_t l_506 = 0xAB4B80B1L;
        int32_t l_507 = 8L;
        int32_t l_508 = (-4L);
        int32_t l_509 = 1L;
        int32_t l_510 = 1L;
        int32_t l_511 = (-1L);
        int32_t l_512 = (-1L);
        int32_t l_514 = (-1L);
        int32_t l_516 = 0L;
        int32_t l_518 = 1L;
        int32_t l_519 = 0x07DCDA6CL;
        int32_t l_520 = 0x00E8F710L;
        int8_t l_528 = 9L;
        int32_t l_529 = 1L;
        uint32_t l_530 = 0xDE530967L;
        l_490 &= ((l_494 , (l_506 |= (safe_mod_func_int8_t_s_s(((p_74 ^ ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((l_205 = (safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(p_70, (((((l_406 = ((g_136 <= (-1L)) > 250UL)) , ((--g_521) || (((safe_lshift_func_int32_t_s_u(0L, 6)) | (safe_div_func_uint64_t_u_u(((p_74 == p_70) & l_485), g_168))) >= p_71))) < 0x1BF1L) , l_403) , 0x878EL))), p_74))), 1)) && l_528), l_529)) , l_205)) , l_530), 247UL)))) , p_74);
    }
    else
    {
        uint32_t l_539 = 0x33FCBB72L;
        int32_t l_540 = 0xFD5F5532L;
        int32_t l_554 = 0x886A7733L;
        g_252 = ((safe_sub_func_float_f_f(((((safe_mul_func_int32_t_s_s(p_71, (safe_lshift_func_uint8_t_u_u((g_50 , g_491), 0)))) , (safe_mul_func_float_f_f((g_513 = (-0x7.Cp-1)), (g_517 = ((((g_151 = (safe_div_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s(l_545, ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((p_71 , ((l_554 = (l_540 ^= (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int32_t_s_u(((-3L) >= g_124), p_73)) && 251UL) & p_70), l_483)))) , p_73)), p_74)), g_142)) , p_70))) > p_73), l_488))) != l_539) >= g_246) , p_70))))) < l_539) != l_490), 0x9.E26FF9p+96)) == l_488);
    }
    return l_555;
}
int32_t func_75(int8_t p_76)
{
    int64_t l_102 = 0x48ADB298F974433FLL;
    int32_t l_114 = 0x10F8796DL;
    int32_t l_117 = (-1L);
    int32_t l_118 = 1L;
    int32_t l_120 = 0xC6B82E5CL;
    int32_t l_121 = 1L;
    int32_t l_123 = 5L;
    int32_t l_127 = (-1L);
    int32_t l_129 = 0xCF740941L;
    int32_t l_133 = 0L;
    int32_t l_134 = 0L;
    int32_t l_137 = 0xCAA66001L;
    int32_t l_140 = (-1L);
    int32_t l_146 = 0x16D46182L;
    int32_t l_152 = 0x87FF9E38L;
    int32_t l_153 = 0x38ADD527L;
    int32_t l_156 = 0xB1EAD213L;
    int32_t l_157 = 0xE5124A76L;
    const int64_t l_160 = 0x96FBAD4E8C809647LL;
    int8_t l_172 = 0x10L;
    for (g_49 = 0; (g_49 >= 7); g_49 = safe_add_func_int64_t_s_s(g_49, 3))
    {
        uint64_t l_111 = 0x8ECCDF33783651A3LL;
        int32_t l_113 = 0xDC13529CL;
        int32_t l_125 = 0x69207283L;
        int32_t l_132 = (-1L);
        int32_t l_135 = (-5L);
        int32_t l_138 = (-1L);
        int32_t l_143 = (-10L);
        int32_t l_144 = (-1L);
        int32_t l_147 = 0xB00F8C8FL;
        int32_t l_150 = 0x9CE03596L;
        int32_t l_155 = 0x5CED91ACL;
        int32_t l_158 = 0x5E5FA592L;
        g_124 = (((l_102 < 0x9.166C0Cp-41) == ((p_76 = p_76) , (((g_159 = (((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((p_76 <= g_50), 65532UL)), (((safe_div_func_uint8_t_u_u((g_20 || p_76), g_20)) > 0xFCAC8A3317083D4BLL) & l_111))), p_76)) , 0x5ED5L) , 0xE.4AF0E7p+20)) != g_154) <= 0x6.105BDFp-78))) , l_160);
    }
    l_129 ^= (safe_div_func_uint8_t_u_u(1UL, 0x1EL));
    g_122 = (-3L);
    g_173 = (g_159 = 0x5.5p+1);
    return l_114;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, print_hash_value);
    transparent_crc(g_32, print_hash_value);
    transparent_crc(g_49, print_hash_value);
    transparent_crc(g_50, print_hash_value);
    transparent_crc(g_68, print_hash_value);
    transparent_crc(g_112, print_hash_value);
    transparent_crc(g_115, print_hash_value);
    transparent_crc(g_116, print_hash_value);
    transparent_crc(g_119, print_hash_value);
    transparent_crc(g_122, print_hash_value);
    transparent_crc(g_124, print_hash_value);
    transparent_crc(g_126, print_hash_value);
    transparent_crc(g_128, print_hash_value);
    transparent_crc(g_130, print_hash_value);
    transparent_crc(g_131, print_hash_value);
    transparent_crc(g_136, print_hash_value);
    transparent_crc(g_139, print_hash_value);
    transparent_crc(g_141, print_hash_value);
    transparent_crc(g_142, print_hash_value);
    transparent_crc(g_145, print_hash_value);
    transparent_crc(g_148, print_hash_value);
    transparent_crc(g_149, print_hash_value);
    transparent_crc(g_151, print_hash_value);
    transparent_crc(g_154, print_hash_value);
    
    transparent_crc(g_163, print_hash_value);
    transparent_crc(g_164, print_hash_value);
    transparent_crc(g_165, print_hash_value);
    transparent_crc(g_166, print_hash_value);
    transparent_crc(g_167, print_hash_value);
    transparent_crc(g_168, print_hash_value);
    transparent_crc(g_169, print_hash_value);
    transparent_crc(g_170, print_hash_value);
    transparent_crc(g_171, print_hash_value);
    
    
    transparent_crc(g_246, print_hash_value);
    transparent_crc(g_251, print_hash_value);
    
    transparent_crc(g_253, print_hash_value);
    transparent_crc(g_257, print_hash_value);
    transparent_crc(g_408, print_hash_value);
    transparent_crc(g_415, print_hash_value);
    transparent_crc(g_434, print_hash_value);
    transparent_crc(g_491, print_hash_value);
    
    transparent_crc(g_515, print_hash_value);
    transparent_crc(g_517, print_hash_value);
    transparent_crc(g_521, print_hash_value);
    transparent_crc(g_660, print_hash_value);
    transparent_crc(g_707, print_hash_value);
    transparent_crc(g_769, print_hash_value);
    transparent_crc(g_915, print_hash_value);
    transparent_crc(g_929, print_hash_value);
    transparent_crc(g_1063, print_hash_value);
    transparent_crc(g_1064, print_hash_value);
    transparent_crc(g_1065, print_hash_value);
    transparent_crc(g_1081, print_hash_value);
    transparent_crc(g_1082, print_hash_value);
    transparent_crc(g_1083, print_hash_value);
    transparent_crc(g_1084, print_hash_value);
    transparent_crc(g_1228, print_hash_value);
    
    transparent_crc(g_1232, print_hash_value);
    transparent_crc(g_1395, print_hash_value);
    
    transparent_crc(g_1398, print_hash_value);
    transparent_crc(g_1400, print_hash_value);
    transparent_crc(g_1403, print_hash_value);
    transparent_crc(g_1465, print_hash_value);
    transparent_crc(g_1472, print_hash_value);
    transparent_crc(g_1476, print_hash_value);
    transparent_crc(g_1485, print_hash_value);
    transparent_crc(g_1486, print_hash_value);
    transparent_crc(g_1487, print_hash_value);
    transparent_crc(g_1488, print_hash_value);
    transparent_crc(g_1496, print_hash_value);
    transparent_crc(g_1564, print_hash_value);
    transparent_crc(g_1613, print_hash_value);
    transparent_crc(g_1614, print_hash_value);
    
    transparent_crc(g_1733, print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return (unsigned char)(crc32_context);
}
