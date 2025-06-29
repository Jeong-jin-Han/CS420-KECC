
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

int32_t g_2 = (-1L);
int32_t g_3 = (-1L);
int32_t g_4 = (-8L);
int32_t g_12 = 0x3E64F147L;
int32_t g_13 = 5L;
int32_t g_16 = 0x1A4D63A8L;
int32_t g_17 = 1L;
int32_t g_18 = 0x29989D22L;
uint16_t g_30 = 3UL;
int16_t g_45 = 0x9843L;
int8_t g_46 = 0x28L;
int8_t g_79 = (-7L);
uint64_t g_111 = 1UL;
uint32_t g_120 = 0x6903F87FL;
int32_t g_150 = 1L;
uint8_t g_174 = 4UL;
uint8_t g_177 = 0UL;
uint32_t g_196 = 0xB421CF99L;
float g_206 = 0x3.8D5DD7p-90;
uint32_t g_207 = 4294967295UL;
uint32_t g_208 = 0x2A735042L;
int64_t g_209 = 0x033D0BF8AE0A268BLL;
uint32_t g_210 = 0UL;
int64_t g_211 = 7L;
int32_t g_212 = 0xA01854AEL;
int32_t g_213 = 0xF4DDFB9FL;
int32_t g_215 = 0x30DB7C70L;
uint64_t g_218 = 1UL;
uint8_t g_219 = 255UL;
int16_t g_226 = (-2L);
int32_t g_228 = 0x18E7CC0EL;
uint32_t g_229 = 18446744073709551615UL;
uint8_t g_231 = 0x6CL;
int64_t g_236 = 0x07A68DE422643F99LL;
int64_t g_240 = (-1L);
uint64_t g_241 = 0x25B5AC07EA974B99LL;
uint32_t g_246 = 0x5998005EL;
uint64_t g_247 = 0UL;
uint64_t g_249 = 0xC6EF0018B1378FC9LL;
uint16_t g_250 = 9UL;
int64_t g_252 = 0L;
int64_t g_253 = 0x2124FAB6BA350D54LL;
uint32_t g_257 = 0x50E09071L;
uint64_t g_259 = 18446744073709551615UL;
uint32_t g_261 = 0x11E6948FL;
uint8_t g_263 = 1UL;
int32_t g_266 = 6L;
uint32_t g_268 = 0x7E747D96L;
int32_t g_273 = 0x4501BE72L;
int8_t g_275 = 1L;
int64_t g_277 = 2L;
uint8_t g_279 = 0x80L;
float g_281 = 0x3.F69FC1p+14;
uint32_t g_282 = 1UL;
uint16_t g_283 = 65535UL;
int16_t g_284 = 0x88F8L;
int32_t g_285 = 0L;
uint64_t g_286 = 0x8F9B6ADA375B8AA7LL;
uint16_t g_287 = 1UL;
uint64_t g_288 = 0xBA4BFDF757B935A7LL;
int32_t g_289 = 1L;
uint32_t g_290 = 0xA1B9CCF3L;
int64_t g_291 = 0x2444A57EE634B272LL;
uint32_t g_292 = 0x8067CD44L;
int8_t g_293 = 0xE9L;
float g_294 = 0x5.1E09FDp+81;
uint32_t g_295 = 18446744073709551615UL;
float g_363 = 0xC.AB98A7p+85;
int64_t g_366 = 0xF46CB25444CFCF2FLL;
int64_t g_370 = (-9L);
int16_t g_372 = 0x75F9L;
int16_t g_373 = (-10L);
uint32_t g_374 = 9UL;
int64_t g_498 = (-1L);
uint8_t g_530 = 0x55L;
float g_662 = 0xA.150D54p+78;
int32_t g_693 = (-2L);
uint64_t g_694 = 8UL;
uint32_t g_735 = 9UL;
uint64_t g_751 = 0x16E33CF5190F697BLL;
uint8_t g_770 = 255UL;
int64_t g_866 = 0xDC4DD6A459861163LL;
uint8_t g_872 = 0x12L;
uint32_t g_884 = 0xE8EEDA4CL;
uint32_t g_905 = 0UL;
float g_1044 = 0x1.3p+1;
int32_t g_1048 = 0L;
int64_t g_1052 = 0L;
int32_t g_1057 = 0L;
float g_1105 = 0x5.BD87E2p-35;
float g_1109 = 0x2.8F9A97p-83;
uint8_t g_1110 = 8UL;
uint16_t g_1135 = 65526UL;
float g_1339 = (-0x9.4p-1);
uint16_t g_1340 = 0x59A7L;
uint8_t g_1365 = 2UL;
int32_t g_1377 = 0x107BFE38L;
float g_1428 = 0x0.5p-1;
uint32_t g_1446 = 2UL;
int16_t g_1470 = 0x7AD6L;
int32_t g_1472 = 0x3835FAE8L;
int8_t g_1473 = 0xA9L;
int16_t g_1497 = (-7L);
uint8_t g_1498 = 0x44L;
float g_1525 = (-0x4.0p-1);
int32_t g_1529 = 0x8C8977D5L;
uint64_t g_1705 = 4UL;
uint32_t g_1740 = 0x2F073E2CL;
uint16_t g_1757 = 3UL;
uint32_t g_1792 = 0xF1E5832EL;
uint8_t g_1808 = 0UL;
float g_1809 = 0x5.D23646p+87;
int64_t g_1810 = 0xEBEF8202470A170BLL;
uint16_t g_1914 = 65533UL;
int64_t g_2094 = 0x98B1BF647ACBFE71LL;
uint64_t g_2097 = 18446744073709551612UL;
int64_t g_2108 = 0L;
uint8_t g_2110 = 0xF5L;
uint64_t g_2115 = 1UL;
uint32_t g_2239 = 18446744073709551612UL;
uint32_t g_2300 = 18446744073709551615UL;
int16_t g_2332 = 1L;
int16_t g_2334 = 0x753DL;
int32_t g_2424 = 2L;
int32_t g_2425 = 0x442A2816L;
int16_t g_2426 = (-6L);
float g_2427 = 0xE.CE7811p-93;
int64_t g_2429 = 0x645EB4213BA153C8LL;
uint32_t g_2430 = 18446744073709551615UL;
uint8_t g_2488 = 0xD1L;
uint64_t g_2526 = 0xC2F7B6193BCE84F1LL;
int32_t g_2683 = (-5L);
int32_t g_2687 = 0xBEB82750L;
int16_t g_2688 = 0x92EEL;
uint32_t g_2692 = 0x7D19834EL;
uint64_t g_2704 = 0UL;
uint16_t g_2740 = 0x8BD6L;
int32_t g_2773 = 0L;
float g_2826 = 0x9.3p-1;
uint16_t g_2827 = 65534UL;
int32_t g_2851 = 0x9E32F733L;
float g_2852 = 0xE.4B5A0Cp-91;
int16_t g_2853 = (-6L);
uint8_t g_2854 = 0xF8L;
uint8_t g_2857 = 248UL;
uint32_t g_2971 = 0x246BC49DL;
float g_2992 = 0xC.06BE6Dp+98;
int32_t g_3051 = (-1L);
int16_t g_3052 = 0xCE0EL;
uint8_t g_3054 = 255UL;
uint16_t g_3184 = 65535UL;
int16_t g_3297 = 0x5666L;
uint32_t g_3351 = 0x5F1C7EA2L;
int32_t g_3365 = (-1L);
uint8_t g_3554 = 0UL;
int32_t g_3568 = 0x591CB7CDL;
uint64_t g_3569 = 0UL;
uint8_t g_3593 = 0x59L;
uint64_t g_3596 = 18446744073709551615UL;
int32_t g_3620 = 1L;
int8_t g_3622 = 0L;
int32_t g_3638 = 0xBDC97C2CL;
uint8_t g_3669 = 0xF7L;
int32_t g_3712 = (-9L);
float g_3729 = 0x0.Fp-1;
int8_t g_3841 = 0L;
int8_t g_3890 = 8L;
int64_t g_3989 = (-1L);
int64_t g_4134 = 5L;
float g_4381 = 0x7.Ap-1;
int32_t g_4386 = (-1L);
uint32_t g_4388 = 0x5593DA98L;
uint8_t g_4453 = 0xB1L;
uint8_t g_4546 = 0xA0L;
int16_t g_4618 = 0x0566L;
uint32_t g_4619 = 0xF2BF692AL;
uint32_t g_4685 = 0xB97A07D5L;
float g_4784 = (-0x1.Ap-1);
uint16_t g_4821 = 0xF46EL;
uint32_t g_4870 = 0xA8BA4DAFL;
int8_t g_4904 = (-1L);
float g_4927 = 0x0.Cp-1;
uint32_t g_5065 = 0UL;
uint8_t g_5199 = 253UL;
uint16_t g_5208 = 0x1163L;
int32_t func_1(void);
int64_t func_31(uint8_t p_32, uint64_t p_33);
int32_t func_47(int64_t p_48, uint8_t p_49);
int32_t func_56(float p_57, uint8_t p_58, const int16_t p_59);
uint8_t func_80(int64_t p_81);
uint64_t func_82(float p_83, uint8_t p_84, uint32_t p_85);
uint8_t func_96(uint16_t p_97, const int16_t p_98, int8_t p_99, int64_t p_100, uint64_t p_101);
uint32_t func_107(int32_t p_108);
int32_t func_112(int16_t p_113, int16_t p_114);
uint64_t func_117(int32_t p_118, uint8_t p_119);
int32_t func_1(void)
{
    uint16_t l_41 = 65532UL;
    int32_t l_4810 = 0xCC6E3B46L;
    int32_t l_4812 = 0x981D2018L;
    int32_t l_4815 = 0x0649A6E7L;
    int32_t l_4817 = (-1L);
    uint64_t l_4860 = 1UL;
    int8_t l_4959 = 3L;
    int64_t l_5050 = 0x4ACBDCAAF962AAA9LL;
    int32_t l_5057 = (-1L);
    int32_t l_5058 = 0xA8269020L;
    int32_t l_5059 = 0xD63EDE4FL;
    int32_t l_5060 = (-8L);
    int32_t l_5061 = 0x5AD1C486L;
    int32_t l_5064 = 1L;
    uint8_t l_5068 = 0x5FL;
    uint64_t l_5183 = 18446744073709551615UL;
    uint32_t l_5231 = 4294967293UL;
    uint8_t l_5280 = 255UL;
    float l_5283 = (-0x4.0p+1);
    uint32_t l_5284 = 0xD249ABE8L;
    float l_5285 = 0x0.8p+1;
    float l_5286 = (-0x1.6p+1);
    int32_t l_5287 = 0x8441CB97L;
    int32_t l_5288 = 1L;
    int32_t l_5289 = (-1L);
    int32_t l_5290 = 0x6E7B8F7DL;
    int32_t l_5291 = (-9L);
    int32_t l_5292 = 0L;
    int32_t l_5293 = 7L;
    uint16_t l_5294 = 65535UL;
    for (g_4 = (-11); (g_4 >= 19); ++g_4)
    {
        uint32_t l_7 = 0xECCCE1E2L;
        int32_t l_42 = 0xFF9E6B99L;
        int32_t l_4820 = 0x7E803579L;
        int32_t l_4957 = 6L;
        int16_t l_4961 = (-1L);
        float l_4985 = 0x1.848CB5p-83;
        int8_t l_4990 = (-9L);
        int64_t l_5019 = 0x60AC25D1E132B3E9LL;
        int32_t l_5051 = 0xFD05895AL;
        int32_t l_5052 = 0x37C1CC3AL;
        int32_t l_5054 = 0L;
        int32_t l_5055 = 0xEA3B35BDL;
        int32_t l_5056 = (-1L);
        int32_t l_5062 = 0x5A599F17L;
        int32_t l_5063 = 0L;
        uint32_t l_5147 = 0UL;
        int32_t l_5149 = 1L;
        float l_5160 = 0xE.B657F3p-53;
        uint32_t l_5175 = 0xFD81225FL;
        int32_t l_5181 = 0xEB1CEA2EL;
        int64_t l_5182 = 0x34ABDBA09C5BB5E2LL;
        float l_5190 = 0x0.Dp+1;
        const int16_t l_5196 = 0x1B88L;
        uint8_t l_5197 = 1UL;
        ++l_7;
        for (l_7 = (-8); (l_7 == 42); l_7++)
        {
            int16_t l_4807 = 0x18D0L;
            int32_t l_4808 = 5L;
            int32_t l_4816 = 1L;
            int32_t l_4819 = 0x0B3BC558L;
            int8_t l_4836 = 0L;
            int8_t l_4960 = 0xADL;
            uint32_t l_4997 = 1UL;
            int8_t l_5010 = 8L;
            uint8_t l_5016 = 0xD0L;
            int16_t l_5023 = (-2L);
            float l_5026 = (-0x1.Ep+1);
            int32_t l_5053 = 0x8B64081DL;
            const uint8_t l_5129 = 0x5FL;
            for (g_13 = 0; (g_13 == 28); ++g_13)
            {
                int32_t l_44 = 0xB7D4763CL;
                int32_t l_4809 = (-6L);
                int32_t l_4811 = 0x4E44671FL;
                int32_t l_4818 = 5L;
                for (g_18 = 0; (g_18 >= 28); g_18++)
                {
                    uint64_t l_21 = 1UL;
                    float l_43 = 0x5.C935CBp-28;
                    int32_t l_4806 = (-3L);
                    int16_t l_4850 = 0L;
                    if (l_21)
                        break;
                    g_3 = g_12;
                    for (l_21 = 13; (l_21 != 46); ++l_21)
                    {
                        const int32_t l_40 = 1L;
                        int32_t l_4813 = (-4L);
                        int32_t l_4814 = 0x806F540FL;
                        l_4807 &= (safe_mod_func_uint64_t_u_u(((l_4806 = (safe_add_func_int64_t_s_s((safe_rshift_func_uint32_t_u_s((((g_16 < g_18) & ((((g_30 = 0xBB489F7AL) && l_21) , g_4) != (func_31((g_45 = ((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(1L, ((l_42 = (safe_div_func_int64_t_s_s((((l_40 == (g_4 >= g_13)) , 1L) != l_41), g_13))) <= g_18))), l_44)) ^ l_7)), l_41) & g_4386))) >= l_40), 15)), 0xC145E7AEBAA08AEALL))) & l_7), 0xC65643065BB1BA46LL));
                        g_4821--;
                        g_2992 = (safe_mul_func_float_f_f(g_229, (((safe_mod_func_int32_t_s_s((g_266 == ((((safe_div_func_int16_t_s_s(g_226, (safe_lshift_func_int8_t_s_u((0x80F4AC22469E6345LL & ((safe_rshift_func_uint64_t_u_s(((safe_add_func_int64_t_s_s((l_4836 < ((safe_sub_func_int64_t_s_s(g_4453, (((safe_lshift_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u((((g_281 = (-(((g_1105 = 0x0.Bp+1) > ((safe_add_func_float_f_f((safe_add_func_float_f_f((l_21 > (safe_sub_func_float_f_f((g_2332 , l_4818), 0x1.130787p-92))), g_252)), 0x6.8p-1)) != 0x0.4p-1)) >= g_2992))) != l_4815) , g_2424), l_4814)) <= g_3054) != l_4836), g_3593)) | 1UL) , l_42))) ^ l_4815)), 8L)) > g_13), l_4836)) < l_4806)), g_770)))) <= l_4820) == l_4850) ^ l_4816)), g_18)) , g_2332) == g_1428)));
                    }
                    l_4819 = ((l_4820 == 18446744073709551613UL) | 1L);
                }
            }
            for (g_120 = 0; (g_120 == 10); ++g_120)
            {
                uint32_t l_4867 = 0UL;
                int32_t l_4873 = 1L;
                uint32_t l_5028 = 0xE4517782L;
                g_3729 = (safe_mul_func_float_f_f((-g_3669), ((safe_div_func_float_f_f((((-0x1.Ap-1) == (safe_add_func_float_f_f(((l_4808 , g_3620) , ((l_4860 != (((0xFDE9B959L ^ (((safe_mul_func_uint64_t_u_u(((0x91L > ((safe_rshift_func_uint32_t_u_s(l_4815, 24)) != ((safe_mul_func_int16_t_s_s((l_7 | l_4817), g_209)) < l_4867))) , g_289), g_282)) , g_261) == g_1810)) <= g_3297) && g_1808)) , 0x9.1F7428p+16)), l_4816))) <= (-0x1.0p+1)), 0x1.2p+1)) <= g_2826)));
                g_4381 = (g_3712 != ((((((((g_257 |= (((safe_div_func_uint64_t_u_u(g_241, l_4816)) , (g_4870 > (safe_rshift_func_int32_t_s_s((((((g_45 ^ (g_2108 | 1L)) , (-1L)) > (1L ^ g_45)) >= g_4453) >= 0xE9L), 28)))) , g_2692)) , 0xC755L) < g_231) ^ g_279) & 0xFB014583L) > 6L) > l_4808) , 0xF.4BD077p+68));
                if ((g_3365 &= (g_1914 == ((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(g_285, (l_4873 && ((safe_sub_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s(((l_4820 = ((safe_rshift_func_uint32_t_u_s(l_4860, (g_3593 != (g_693 &= (((safe_mul_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(((safe_div_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u((((l_42 = 4UL) , (safe_mod_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(g_45, (safe_sub_func_uint64_t_u_u(0UL, (((safe_rshift_func_int64_t_s_u(((((l_4873 = l_4867) && g_295) & 0x22L) < 0x68L), g_215)) <= g_3184) | 0L))))) && 2L), 0xC5L))) & g_1757), l_4807)) , g_18), g_1497)) , g_2488), l_4867)) & 0x5160L), g_3297)) == g_2334) && g_3054))))) && g_884)) || g_1110), g_2425)) & l_41), 1UL)) | l_4867)))) & g_3841), l_7)), 255UL)), 6UL)) , g_4904))))
                {
                    uint32_t l_4956 = 0xA84412CEL;
                    uint32_t l_4962 = 0x9A8B951AL;
                    int32_t l_4963 = 0L;
                    g_2852 = (safe_add_func_float_f_f((((safe_lshift_func_uint32_t_u_u(((l_4820 = (((-9L) >= 65530UL) < 0xAAL)) , (g_1340 | (l_7 != (((((l_4815 = (~(((safe_mod_func_int8_t_s_s((+(safe_mul_func_uint32_t_u_u((((((safe_mod_func_int32_t_s_s(((g_13 = (safe_mul_func_uint64_t_u_u(g_213, l_4812))) <= (((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((((g_2097 | (safe_lshift_func_uint32_t_u_s(g_213, 5))) , (-1L)) >= g_770), g_228)) || l_4815), 0xD0538200F602FFD2LL)), g_3554)) | g_241) == l_41)), g_3712)) == l_4807) <= g_1810) , 0xFB051553L) | l_4815), l_4836))), 1UL)) || 0xA257424F416C7915LL) >= l_42))) <= l_4816) >= 5UL) ^ g_4685) < l_41)))), g_2971)) && g_231) , l_4820), g_4619));
                    for (g_1914 = 0; (g_1914 == 26); ++g_1914)
                    {
                        uint64_t l_4958 = 0xD96134348459020DLL;
                        uint16_t l_4968 = 0xD17CL;
                        g_1428 = ((+((safe_unary_minus_func_int8_t_s(((((+((safe_mod_func_uint32_t_u_u(((((((!(safe_lshift_func_uint16_t_u_u((l_4873 , (((g_1472 = (l_4820 & ((l_4957 ^= (safe_rshift_func_int64_t_s_s(((safe_mul_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((g_3365 = ((((safe_mod_func_int64_t_s_s(1L, ((safe_mod_func_uint64_t_u_u((g_2687 = ((safe_sub_func_uint8_t_u_u((safe_div_func_int64_t_s_s((g_45 || (g_4685 | (0UL & (l_4816 < 0xA520A663L)))), (g_210 &= (safe_mul_func_uint64_t_u_u(0UL, l_4956))))), 0x21L)) < 0x0393L)), l_7)) && 0x7E85L))) > l_4812) | l_4815) || l_42)), g_3569)), 0L)) >= 6L), 23))) , 0xADA94931L))) >= g_2430) , l_4958)), l_7))) == l_4959) & l_4960) >= 3UL) , l_4961) && g_18), 0xEB6A3DF6L)) <= (-1L))) || 0xE28FL) < g_18) ^ 0x7274L))) , l_4956)) != l_4873);
                        g_3729 = (safe_mul_func_float_f_f((((safe_mul_func_int16_t_s_s(g_3620, l_4968)) , g_1914) <= (safe_div_func_float_f_f((((-0x1.3p-1) == (safe_mul_func_float_f_f(g_3620, (safe_add_func_float_f_f((safe_add_func_float_f_f(g_2430, ((g_2992 = (((safe_rshift_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((l_4968 & (safe_lshift_func_int64_t_s_u((((((~18446744073709551612UL) , (~(g_4619 == g_2426))) == g_373) & 8L) | 18446744073709551613UL), g_872))), g_228)), 21)) , l_4812) >= l_4817)) == l_4985))), 0x3.E42B39p+15))))) < (-0x1.Cp-1)), l_4873))), 0x9.0p-1));
                    }
                    return l_41;
                }
                else
                {
                    int32_t l_5000 = 1L;
                    int32_t l_5017 = (-1L);
                    uint64_t l_5020 = 0x3350A6B259C74228LL;
                    int32_t l_5027 = 0xB7E133D3L;
                    if ((safe_mod_func_int64_t_s_s((0UL == (l_4816 = (safe_mod_func_int8_t_s_s(l_4990, (((l_4810 = (l_4817 , (l_4808 ^= ((safe_div_func_uint8_t_u_u(((g_530 != 1UL) < ((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((--l_4997), g_2094)), ((l_4836 , ((l_5000 && 0x1481D3AEL) <= 3L)) ^ 0xF9L))) < g_3568)), g_249)) , 1L)))) , l_41) || 246UL))))), g_120)))
                    {
                        int32_t l_5009 = 0x69D390ABL;
                        int32_t l_5011 = 0x461E8734L;
                        int32_t l_5018 = 0x07F932FFL;
                        l_4819 |= ((((((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int16_t_s_s(((+(safe_sub_func_int8_t_s_s(l_4873, (safe_rshift_func_int16_t_s_s((g_866 == 0x69C359B9L), 7))))) >= l_5009), (l_5017 = ((0x73L && ((l_5011 &= ((g_2332 = (g_3297 &= 0L)) , l_5010)) ^ ((g_1740 = (safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_5009 && g_287), l_5016)), l_5009))) <= g_3568))) && l_4815)))) <= g_2424))) <= g_4618) | g_3890) , l_5011) , l_4961) != l_4820);
                        l_5018 &= g_694;
                        l_5020++;
                        l_4820 &= (-1L);
                    }
                    else
                    {
                        int32_t l_5024 = 1L;
                        int32_t l_5025 = 0x11D8C6ACL;
                        g_218 |= ((g_3989 = 0xAE18732A5DE39A07LL) , l_4860);
                        l_5028--;
                        l_4819 = (-l_7);
                    }
                    for (g_3051 = 0; (g_3051 != (-8)); g_3051 = safe_sub_func_uint16_t_u_u(g_3051, 4))
                    {
                        uint32_t l_5048 = 4294967288UL;
                        int32_t l_5049 = 0L;
                        l_5049 ^= (((safe_div_func_int64_t_s_s((safe_mul_func_uint64_t_u_u((g_866 | ((l_4817 &= ((0x609DL <= ((5UL != (g_2424 &= (safe_lshift_func_int8_t_s_s(((l_4820 >= g_2488) && (safe_add_func_int16_t_s_s((((l_4873 = (0UL == (safe_mul_func_int64_t_s_s(0L, (safe_add_func_uint16_t_u_u(((safe_mul_func_uint64_t_u_u((g_3365 = ((l_5048 && (18446744073709551610UL < 0xE6A185634BB11A24LL)) != 0x4A04L)), g_263)) != l_5027), l_4810)))))) , l_4816) <= 1L), l_4961))), 6)))) , 0x0464L)) || l_4810)) | g_1757)), 9L)), g_884)) < l_5028) , l_4873);
                        return g_3622;
                    }
                }
                g_2687 = 0xB0DC351CL;
            }
            --g_5065;
            if (l_5068)
            {
                const uint16_t l_5086 = 0x0829L;
                int32_t l_5125 = (-1L);
                int32_t l_5126 = 0xCA911E8CL;
                int32_t l_5180 = 0xE6B8493AL;
                float l_5195 = 0x1.FBAD43p-68;
                int8_t l_5198 = 0x6EL;
                if ((safe_lshift_func_uint16_t_u_s((g_735 < (((g_4927 = 0x9.8p+1) != (safe_div_func_float_f_f((safe_sub_func_float_f_f(0x8.E9D0B8p+83, ((safe_sub_func_float_f_f((((0x7.Ep+1 < ((-(g_3729 = ((((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_5016, (l_5062 = (safe_add_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((l_5086 , ((((safe_div_func_int16_t_s_s((!(safe_mod_func_int64_t_s_s(((~(safe_mul_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(0xE74BB45B9907CCD9LL)), (safe_div_func_int32_t_s_s((safe_rshift_func_uint32_t_u_u(4294967287UL, 1)), (safe_div_func_int8_t_s_s((1UL & 4L), 0x8BL))))))) < 0x9BE2FD0A80BFCA56LL), g_261))), 0xC95DL)) >= l_4812) == g_374) , l_4959)), 0L)) > 0x504D0E6EF34C69C0LL), (-4L)))))), 0x4633L)) ^ 0x5CL) , l_42) >= l_5086))) >= g_293)) < 0x1.Bp-1) >= l_5086), g_1135)) >= l_5057))), l_4957))) , 0x810B91D2L)), 3)))
                {
                    uint64_t l_5115 = 0x84BB00E6697E8791LL;
                    for (l_5051 = 25; (l_5051 <= (-28)); l_5051 = safe_sub_func_int64_t_s_s(l_5051, 1))
                    {
                        uint8_t l_5124 = 0xDCL;
                        l_5126 |= ((g_2115 ^ (safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((safe_mul_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(((((((!(-8L)) & 0xA69FFBD2464D6B13LL) , 0xFCC093965796E14BLL) & (safe_div_func_int8_t_s_s(0x2DL, 0x62L))) & (g_3569 = l_5115)) || g_287), ((safe_sub_func_int64_t_s_s((safe_rshift_func_int64_t_s_s((l_5125 = (l_5124 |= (safe_lshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s(0xCE8AL, 0x340CL)) != 0xA034D433L), g_45)))), g_693)), l_5086)) ^ 0xBAL))) || 0x5BF94676BE502DADLL), g_2688)) & 1L), l_4860)), l_5115))) <= 0xF2CCL);
                        g_2 = (safe_lshift_func_uint16_t_u_u(g_2425, 14));
                    }
                }
                else
                {
                    int32_t l_5148 = 0x55800BD7L;
                    int32_t l_5161 = 0x60F3BC4EL;
                    int32_t l_5162 = 0x628113BBL;
                    l_4957 = l_5129;
                    g_250 = ((((g_2687 < ((safe_sub_func_uint16_t_u_u((l_5162 = ((safe_unary_minus_func_int32_t_s(l_4815)) , (safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((g_1792 = (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((l_5051 == (((g_2853 , g_247) | (safe_mul_func_int16_t_s_s(l_5125, (safe_sub_func_uint32_t_u_u((g_2430 = (l_5149 = (l_5148 = l_5147))), ((safe_mul_func_int64_t_s_s(((safe_mul_func_uint32_t_u_u(((g_120 = ((safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((g_293 ^ l_4997) != l_5125) && l_7), g_18)) ^ g_1377), l_5125)), (-8L))) , g_246)) , g_79), l_5161)) , 0x4479DBC16255E325LL), g_3297)) < 0x06D042C9L)))))) ^ g_3989)) || g_45) , g_208), g_210)), g_261))), g_259)), g_866)) <= g_210) , 0xCF16L), 65535UL)))), g_207)) , 0x4FA133806077F061LL)) | 255UL) | 254UL) , l_5086);
                }
                if ((safe_div_func_uint64_t_u_u((safe_mul_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(l_5086, (g_3712 | (safe_sub_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(g_4904, (++l_5175))), (safe_rshift_func_uint32_t_u_s(((l_5125 & ((((l_5183++) > (safe_unary_minus_func_int64_t_s((+(g_2097 && 65535UL))))) <= (((safe_mul_func_uint64_t_u_u(l_4817, ((((((safe_rshift_func_int8_t_s_u((g_1472 = (((safe_add_func_uint16_t_u_u(((g_366 ^= (g_498 |= 0x4FAAE9C8BE35F4DELL)) == (g_693 , g_1135)), g_3051)) <= g_4546) != l_4960)), l_5061)) == 0x617828F6L) & g_3593) <= g_2692) > 65528UL) || g_1340))) >= g_884) , 1L)) , l_5196)) > g_693), l_4836)))) , l_4957), g_3184))))), l_5197)), g_111)))
                {
                    --g_5199;
                    if (l_4961)
                        continue;
                }
                else
                {
                    g_282 = g_290;
                    return g_2110;
                }
                g_3 = (safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(((g_5208 >= (safe_mod_func_int32_t_s_s(l_5063, (safe_div_func_uint32_t_u_u(((((g_3890 |= l_4959) > (g_3712 &= (((l_4808 && ((0xDA4E2EEA1A2C9637LL & (6UL && (((safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s(g_231, ((((((safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_uint32_t_u_u((safe_lshift_func_int32_t_s_s(g_2429, 15)), 18)), (g_2687 ^= ((((((safe_div_func_int32_t_s_s((l_5051 = (g_374 = (safe_lshift_func_int8_t_s_u((l_5060 &= (((safe_add_func_uint64_t_u_u(l_5149, l_5231)) & 0xD291L) & g_226)), g_17)))), l_41)) , g_212) & l_5019) ^ g_1498) & g_231) < l_5198)))), l_5149)) || l_5231) != g_1048) > g_2425) == l_5064) & l_5198))), 0x6E23EAB8CC7440D8LL)) < 5UL) <= g_2827))) && g_120)) , l_5086) >= g_3184))) >= 0L) | 1UL), l_5231))))) != l_5180), l_5059)) & 0x2584L), l_5126)), g_498));
            }
            else
            {
                g_363 = 0x4.1p-1;
            }
        }
        g_3729 = (g_284 <= (((g_1497 <= (((((g_3841 <= (safe_rshift_func_uint32_t_u_s(l_4817, l_5197))) & (safe_sub_func_int32_t_s_s(((~((0x57B1L || (1L | ((((safe_lshift_func_int32_t_s_u((-1L), 9)) < g_4904) & 7UL) , l_4860))) <= l_5063)) > g_1365), 0xDC4114F7L))) <= 1L) || 0x20C7573005A55A74LL) < 0xD8L)) || 0x445157BEL) , l_5063));
    }
    l_5286 = (((g_1428 = ((g_2427 = ((safe_sub_func_float_f_f((g_3729 = (-(((safe_sub_func_float_f_f((((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_253 ^ (g_4 = (~((safe_mod_func_int64_t_s_s((((l_4817 = (g_207 > (l_5060 = l_4812))) & (safe_rshift_func_int16_t_s_s(0xD8EBL, 13))) && (((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s((g_196 &= (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint64_t_u_u((((safe_mul_func_int32_t_s_s(((safe_div_func_uint64_t_u_u((!(safe_mul_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((0x1CC7DFE0L <= ((safe_rshift_func_uint32_t_u_s(((g_1810 <= (safe_add_func_float_f_f(((l_5283 = (((((((((((g_693 = (safe_lshift_func_uint32_t_u_u(((g_290 &= (+(safe_mul_func_uint32_t_u_u(g_2430, (++l_5280))))) < g_4685), l_4860))) == l_4860) != g_366) | l_5059) ^ g_2115) & 0x0E41F8BFL) | g_5199) & l_4860) , (-0x1.1p+1)) <= l_5064) < l_4810)) >= 0xB.1F85D8p-85), g_246))) , g_286), g_2488)) , 0xCBD58D39L)), g_694)) <= (-1L)), 0xC2FFL)), l_4959))), g_4870)) , g_3297), g_3593)) != g_292) , g_2971), 8)), l_5284))))), 0xB5EB6DF80263817ALL)) && g_5199) & (-1L))), l_4860)) >= g_3712)))), g_215)), g_3554)) && 1UL) , g_2526), g_1705)) > g_3568) > (-0x5.3p+1)))), 0x6.53174Ep-1)) != g_2110)) == l_5285)) > l_4860) > g_374);
    l_5294--;
    return g_1497;
}
int64_t func_31(uint8_t p_32, uint64_t p_33)
{
    uint8_t l_68 = 7UL;
    int32_t l_86 = 0x49088B53L;
    uint16_t l_3138 = 0x4BBEL;
    int32_t l_3139 = 0L;
    int32_t l_3140 = (-2L);
    int32_t l_4785 = 7L;
    uint64_t l_4802 = 18446744073709551615UL;
    int64_t l_4803 = 0xCE96AA4F085E7E28LL;
    uint16_t l_4804 = 0x6AC4L;
    int32_t l_4805 = 2L;
    g_46 ^= (0xAD46D232L || g_18);
    l_4785 |= func_47(g_13, (safe_mod_func_int8_t_s_s((safe_mul_func_int32_t_s_s((safe_sub_func_int8_t_s_s((func_56((safe_div_func_float_f_f((p_33 = ((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((1L != (((safe_rshift_func_uint64_t_u_s((l_68--), (l_3140 = ((l_3139 ^= (safe_add_func_uint64_t_u_u((safe_rshift_func_uint64_t_u_u((l_86 = (1L & (safe_lshift_func_uint16_t_u_u((g_79 = (safe_rshift_func_uint64_t_u_s(0x715623A55A41183DLL, g_13))), (((func_80((func_82(g_45, g_13, l_86) , p_33)) > g_1705) <= p_32) , l_3138))))), 59)), l_3138))) & g_2429)))) || g_210) >= l_3138)), p_32)), 0x59B1L)) , p_33)), g_498)), p_32, l_3138) < 0xD1A9FE53L), 6UL)), 4294967295UL)), g_18)));
    g_363 = (-0x1.4p+1);
    l_4805 |= ((p_32 = ((l_3139 ^ (safe_lshift_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(((((safe_mod_func_uint64_t_u_u(((((((g_292 || (l_3140 = ((safe_div_func_uint64_t_u_u((((0xA1L ^ p_32) & (safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(0x39L, 1)), ((((safe_lshift_func_uint16_t_u_s((p_32 && l_4785), ((l_4802 = p_32) == 18446744073709551615UL))) && p_32) , l_4803) & l_4804))), g_2854))) , p_32), l_3140)) | g_4134))) , p_32) , l_4802) & p_33) || 1UL) == p_32), p_32)) == g_120) < 0xCF607EA0D424D7B7LL) , 0L), p_33)) & 0xDE36BD6F2D03AF8ELL) , 0L), l_86))) , p_32)) <= 0UL);
    return p_32;
}
int32_t func_47(int64_t p_48, uint8_t p_49)
{
    int16_t l_3147 = (-8L);
    float l_3168 = (-0x1.Fp+1);
    int32_t l_3169 = 1L;
    int32_t l_3170 = (-1L);
    int32_t l_3171 = 0xC478C75FL;
    int32_t l_3172 = (-1L);
    int32_t l_3173 = 1L;
    int16_t l_3177 = 0x17E0L;
    float l_3182 = 0x3.8p-1;
    uint32_t l_3233 = 0xF8956A36L;
    int16_t l_3262 = 0x9B41L;
    uint32_t l_3396 = 0x87B4F89AL;
    int16_t l_3534 = (-1L);
    uint32_t l_3550 = 0UL;
    int32_t l_3611 = 1L;
    int32_t l_3639 = 0L;
    uint64_t l_3694 = 18446744073709551615UL;
    int32_t l_3726 = 0xCB691A26L;
    int32_t l_3875 = 0xC8D535DDL;
    int32_t l_3879 = 0x1B4B1C2FL;
    int32_t l_3883 = 0x0BF68D27L;
    int32_t l_3885 = 0L;
    int32_t l_3889 = 0xB4C01F90L;
    uint16_t l_4040 = 6UL;
    int8_t l_4060 = 0x64L;
    uint16_t l_4180 = 0UL;
    float l_4210 = 0xB.573957p+80;
    uint32_t l_4276 = 0x8AD8BABCL;
    uint64_t l_4326 = 0xD0CF3FB13B51E8F3LL;
    int16_t l_4338 = (-1L);
    float l_4435 = (-0x1.Bp+1);
    float l_4436 = 0x8.1p+1;
    int64_t l_4520 = (-9L);
    int64_t l_4537 = 0L;
    int32_t l_4584 = 0xEBB5BF99L;
    uint8_t l_4610 = 0x37L;
    int8_t l_4613 = (-1L);
    float l_4614 = 0x7.0C394Fp+26;
    l_3173 = (l_3147 & (l_3172 = (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(((1L | (l_3147 && (((((!(safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_3147, 0xF3L)), p_48))) <= (l_3171 = (+(l_3170 = (safe_mul_func_uint32_t_u_u(((g_208 = (safe_div_func_uint16_t_u_u((l_3169 &= (safe_add_func_int64_t_s_s((l_3147 == g_1757), (g_694 | 0xA2000821CD6ED8FALL)))), 0x5C1AL))) || p_48), 0x85D7916FL)))))) >= 1UL) ^ 0L) , g_79))) , 0xB9L), g_177)) , g_263) <= g_207), l_3147)) > g_226), l_3147)), l_3147))));
    for (g_2688 = 0; (g_2688 < 7); g_2688++)
    {
        int32_t l_3176 = 8L;
        int32_t l_3178 = 0xCE6E6FD0L;
        int32_t l_3179 = 1L;
        int32_t l_3180 = 1L;
        int32_t l_3181 = 0x908530A6L;
        float l_3183 = 0x5.8DD5B2p-60;
        uint64_t l_3413 = 6UL;
        uint32_t l_3423 = 0x146356CAL;
        uint8_t l_3465 = 255UL;
        int64_t l_3484 = 0L;
        int64_t l_3490 = 1L;
        uint64_t l_3502 = 0x825ADE2AAE1D4CD0LL;
        float l_3564 = 0x2.Dp-1;
        uint64_t l_3574 = 0x1C60E41766227B1FLL;
        int32_t l_3586 = 0xA34C9598L;
        int32_t l_3587 = 7L;
        int32_t l_3588 = 7L;
        if (l_3176)
            break;
        if (l_3177)
            break;
        g_3184++;
        for (g_1110 = 8; (g_1110 <= 47); g_1110++)
        {
            uint32_t l_3209 = 4294967295UL;
            int32_t l_3221 = 0xED759D94L;
            int32_t l_3222 = (-10L);
            const uint32_t l_3295 = 0x7F9EEC95L;
            int16_t l_3298 = 0x7450L;
            uint32_t l_3357 = 0x3C25CB18L;
            int32_t l_3411 = 0L;
            int32_t l_3412 = 0x2B367BA6L;
            int8_t l_3422 = 0L;
            int32_t l_3562 = 0x82B4DEE2L;
            int32_t l_3661 = 0x06FE6DE7L;
            if ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint64_t_u_u(((((g_292 || 0x63F0AAAAL) > (((safe_mul_func_float_f_f(((((g_2097 != ((safe_div_func_float_f_f((safe_mul_func_float_f_f((safe_div_func_float_f_f(p_49, (((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(p_48, ((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((l_3209 & (4294967295UL < l_3177)) || (((safe_lshift_func_uint8_t_u_u((g_252 = p_48), g_372)) ^ g_263) , g_905)), g_18)), 0xBEBC72DBL)) ^ 0L))), g_2094)) | 0xC6CEL) , p_49))), 0x1.Bp+1)), g_288)) <= 0x4.7C2B1Cp-19)) != (-0x1.Fp-1)) != l_3170) != p_48), l_3178)) > p_48) , g_2773)) , l_3176) == 0xF7L), l_3179)), 0xD79750A0L)))
            {
                uint32_t l_3223 = 18446744073709551612UL;
                int32_t l_3232 = (-4L);
                int32_t l_3259 = 0x4CA9F2F1L;
                uint16_t l_3299 = 0x3777L;
                uint64_t l_3313 = 18446744073709551607UL;
                if (g_246)
                    break;
                if ((l_3233 ^= (safe_add_func_int16_t_s_s(((((g_872 = 255UL) >= (g_530 <= ((g_2687 = (safe_mul_func_int32_t_s_s(p_48, (p_49 , ((safe_lshift_func_int64_t_s_s(((+(l_3221 ^= (((g_372 & (((l_3178 = g_150) & g_366) & (++l_3223))) != (safe_add_func_int8_t_s_s(((safe_mul_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u(((l_3176 |= ((((l_3180 , g_2426) < p_49) <= l_3177) > g_45)) >= p_49), l_3180)) ^ p_49), l_3179)) & l_3222), p_49))) >= 0x45L))) , 1L), g_2857)) && l_3223))))) || p_49))) | l_3232) <= l_3209), (-1L)))))
                {
                    uint8_t l_3257 = 0xF1L;
                    int32_t l_3258 = 0x1A2F488AL;
                    int32_t l_3263 = 0xA706DDE0L;
                    if (p_48)
                    {
                        int32_t l_3234 = 0L;
                        int32_t l_3260 = 0L;
                        int32_t l_3261 = (-3L);
                        l_3173 &= l_3234;
                        if (g_1914)
                            break;
                        l_3263 |= (l_3262 ^= (l_3232 = (safe_mul_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(g_2426, (p_48 & ((safe_sub_func_float_f_f((safe_add_func_float_f_f((g_866 < (((((l_3258 = (((safe_lshift_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s((0x05753ADC9CD6665DLL >= (65535UL > ((safe_sub_func_int32_t_s_s((l_3171 |= 4L), ((g_252 |= ((g_363 = ((safe_mul_func_float_f_f(((safe_div_func_uint16_t_u_u((g_2239 &= g_884), (safe_div_func_uint8_t_u_u((1UL && ((l_3234 & g_2773) , l_3257)), p_49)))) , l_3147), g_290)) != g_253)) , p_48)) ^ 0x585BEE51L))) < g_2692))), g_2688)), l_3257)) & l_3257), 16)) & g_292) && p_49)) >= p_49) || p_48) , p_49) <= l_3170)), l_3172)), g_3051)) , 0xCBDB6057C198DC75LL)))) , 0xDB7262A4L) >= 1UL), 65535UL))));
                        l_3173 = g_1446;
                    }
                    else
                    {
                        l_3263 = 0L;
                    }
                    l_3263 ^= (safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(g_120, (safe_rshift_func_int32_t_s_s(((p_48 == (l_3259 &= 9UL)) ^ (safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((((safe_mul_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_int64_t_s_s((l_3221 &= (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_3173 = (safe_lshift_func_int8_t_s_u(p_49, 0))), (65533UL && ((+((l_3222 , (g_240 | ((l_3181 = (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((l_3295 < (+(0xCB914684L || g_3297))), g_292)), g_372)) , l_3298), 0x7DL)), p_49))) <= p_49))) >= p_49)) < l_3257)))), 0xA706L))), p_49)), 7)), p_48)) ^ g_249) , l_3299), p_49)) != g_2683), l_3298))), g_372)))) == 0L), 0x206CL));
                }
                else
                {
                    int64_t l_3304 = 0x28B75ED543DA161FLL;
                    g_2424 &= (((l_3169 = 1UL) && (safe_lshift_func_uint8_t_u_s(g_2827, (0xA25AL >= ((l_3304 |= (g_79 = (-2L))) , (g_212 = (p_49 != (safe_sub_func_int16_t_s_s((g_4 < (((((g_366 = (l_3221 &= ((((p_49 && ((safe_add_func_uint64_t_u_u(g_46, ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((3UL ^ p_48), g_275)), g_208)) >= 0x55L))) && p_48)) == p_48) < l_3313) , (-8L)))) | p_49) && g_120) && (-1L)) <= 0x2BE4BE8EL)), p_48))))))))) < g_2430);
                }
                if (l_3221)
                    continue;
                for (g_208 = (-1); (g_208 > 38); ++g_208)
                {
                    int32_t l_3330 = 1L;
                    int32_t l_3354 = (-1L);
                    for (g_2115 = 21; (g_2115 != 55); g_2115 = safe_add_func_int8_t_s_s(g_2115, 1))
                    {
                        int8_t l_3352 = 1L;
                        int32_t l_3353 = 0x2714EBA6L;
                        int32_t l_3355 = 3L;
                        int32_t l_3356 = 0x73F270F6L;
                        g_2852 = (safe_div_func_float_f_f(((-0x6.655450p-91) >= (+p_48)), (safe_add_func_float_f_f((0x7.F6A27Ap-7 > ((0UL != (((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_3221 = ((((((l_3330 = g_209) < ((safe_mul_func_uint64_t_u_u(g_79, ((((safe_sub_func_float_f_f(((+(safe_mul_func_float_f_f((g_257 , ((-0x2.Fp+1) != (safe_mul_func_float_f_f(((safe_add_func_float_f_f((safe_sub_func_float_f_f((safe_div_func_float_f_f((safe_mul_func_float_f_f((g_3351 = (!(g_2992 = (safe_add_func_float_f_f((0x0.A1C587p-53 < (-0x1.7p-1)), p_49))))), p_49)), g_282)), p_49)), p_49)) >= (-0x5.Cp-1)), g_1497)))), l_3180))) != l_3352), 0x7.51F5B5p-18)) != p_48) , 1L) , 0x2FD91F33EAC9C0CCLL))) & 0L)) | p_48) && g_1529) >= 0UL) , 1L)), 11)), l_3180)) | 0x6164CBDF59D1DD9CLL) < l_3259) , 65535UL) , l_3179)) , l_3172)), p_48))));
                        l_3357 = l_3176;
                        l_3171 &= 0x177667F2L;
                        l_3353 = ((~(safe_div_func_uint32_t_u_u((safe_lshift_func_int32_t_s_u(p_48, 1)), g_530))) <= (safe_add_func_int8_t_s_s((g_3365 , ((safe_div_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(0x9040L)), 0xE4L)) <= (-4L))), l_3232)));
                    }
                }
            }
            else
            {
                uint32_t l_3369 = 4294967287UL;
                int32_t l_3370 = 0xC441CF99L;
                uint32_t l_3397 = 0x5A74C78AL;
                int32_t l_3398 = 0xC6BCE4B3L;
                int32_t l_3399 = (-9L);
                l_3370 = l_3369;
                g_210 = (+((((l_3172 = l_3177) , (l_3172 | (((((g_1377 = l_3179) >= 0x29D6560EL) != ((l_3222 = (l_3370 = p_48)) || ((g_261 = (safe_lshift_func_uint32_t_u_s(g_694, 9))) >= (safe_lshift_func_uint64_t_u_s((safe_rshift_func_uint16_t_u_s((l_3221 = l_3298), 15)), 11))))) && (p_49 | ((((l_3221 = (safe_sub_func_int64_t_s_s(0xF1D3D0BD14553EB2LL, g_209))) >= p_49) < p_49) <= 65527UL))) | g_3365))) , l_3369) & l_3180));
                g_1529 = (safe_sub_func_int8_t_s_s(l_3173, ((l_3169 ^= ((((p_48 || (((g_693 = ((safe_lshift_func_uint32_t_u_s(((l_3178 < g_2426) < ((safe_rshift_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(l_3178, ((safe_unary_minus_func_int64_t_s((l_3399 = ((p_49 >= g_18) != (((l_3222 |= ((l_3398 = (~(safe_rshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_3370 ^= (safe_sub_func_int64_t_s_s((l_3396 = (p_48 != (l_3171 && 1L))), l_3177))), g_207)) < l_3397), 3)))) ^ g_3054)) < 247UL) , 0xAF5918F077529430LL))))) , 0x18788EE032DBAEF7LL))), 31)) > 4294967291UL)), 6)) | g_498)) , p_49) > p_49)) >= p_48) > 0UL) , p_48)) != 0L)));
            }
            g_1809 = (safe_mul_func_float_f_f(((0x1.5p-1 != ((((safe_mod_func_uint64_t_u_u(((-8L) < (safe_mod_func_int16_t_s_s(p_48, ((~0x988EE105L) , (l_3298 & (g_288 < l_3396)))))), (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((--l_3413) , (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(1L, ((l_3422 = (safe_rshift_func_int8_t_s_s((g_252 || g_2300), 4))) && g_263))), l_3357))), l_3396)), l_3209)))) , l_3423) != p_48) < l_3412)) == l_3178), 0x0.7p-1));
            if ((((l_3169 = (-1L)) & (((((safe_div_func_uint16_t_u_u((p_49 , 1UL), 0x0355L)) == (((safe_sub_func_uint8_t_u_u(g_1135, (-3L))) <= ((p_49 ^ (safe_mod_func_int64_t_s_s((((((((((safe_mul_func_int64_t_s_s(p_48, 0x5CCCE2649B752A19LL)) < p_49) , g_295) <= 1UL) & 0x6B601BB8L) || 4294967295UL) >= g_177) , g_3054) <= l_3221), g_2687))) || g_2857)) >= l_3295)) < 0xDA31L) < g_905) ^ 1L)) , l_3221))
            {
                int8_t l_3432 = (-5L);
                int32_t l_3447 = 0x463661C1L;
                l_3432 = (-8L);
                g_1044 = (g_1135 == ((0x0.0p-1 >= (safe_div_func_float_f_f((safe_div_func_float_f_f((g_1525 >= l_3262), (g_1428 = 0xE.CF0C3Ap+45))), ((0xE.686BCEp-94 < (safe_sub_func_float_f_f((safe_sub_func_float_f_f((p_48 = p_48), (safe_div_func_float_f_f((-0x9.9p-1), (((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(9L, g_2704)) & g_1446), g_2108)) , 0x4.7D3D97p-25) <= g_219))))), 0xE.0C5F6Ap+39))) < p_49)))) > 0xC.F4A500p-3));
                l_3221 |= (p_49 = g_2110);
            }
            else
            {
                int32_t l_3464 = 0x39A834C5L;
                int32_t l_3491 = 0x825B1DDDL;
                int32_t l_3495 = 0x51E9C4D9L;
                int32_t l_3496 = (-3L);
                int64_t l_3548 = (-9L);
                int32_t l_3561 = 2L;
                int32_t l_3566 = 1L;
                int32_t l_3584 = 0x97DC384CL;
                int32_t l_3585 = 0x8436CBDAL;
                int32_t l_3589 = 1L;
                int32_t l_3591 = (-1L);
                int16_t l_3621 = (-7L);
                uint16_t l_3640 = 0x001DL;
                if ((((g_207 , (0x40B2L != (g_241 | (safe_rshift_func_uint64_t_u_s((((safe_lshift_func_int64_t_s_s(0xD6ACF8061DF6896FLL, 58)) && (g_247 | (safe_add_func_int8_t_s_s((((0L | (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((l_3412 = ((l_3413 & p_49) & (((g_212 = ((l_3464 = (safe_sub_func_uint64_t_u_u((l_3221 &= p_48), p_48))) < g_284)) & g_373) , 65528UL))) < 250UL), 6)) == p_48), p_49)), p_48)), l_3176))) , 0x6577L) >= g_372), p_49)))) != l_3465), p_48))))) > 65534UL) , 1L))
                {
                    int32_t l_3485 = 0xE91CB7A7L;
                    int32_t l_3553 = 9L;
                    int32_t l_3563 = 1L;
                    int32_t l_3567 = 0xE5E91501L;
                    if ((safe_div_func_int32_t_s_s((((((((l_3170 = 0x41643AEAL) == (safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((p_48 = p_48) ^ (safe_unary_minus_func_int16_t_s((l_3180 = (((l_3412 = (l_3171 = ((((safe_mul_func_uint16_t_u_u((g_1529 & (((safe_unary_minus_func_int8_t_s((safe_rshift_func_int64_t_s_s(g_3052, l_3464)))) || p_49) ^ (((g_212 = (g_1472 = (safe_rshift_func_uint32_t_u_u(((~(safe_div_func_uint32_t_u_u(g_2115, l_3179))) > (safe_rshift_func_uint64_t_u_u(l_3169, g_212))), g_498)))) > 0xF527C51CL) & 0x4128L))), l_3484)) >= 0xF20DBE5D78E272F0LL) || g_1498) , 0x5AL))) , 0xA312L) ^ g_13))))))), 0x37L))) , p_48) || l_3485) ^ 7UL) == p_49) | g_2425), l_3221)))
                    {
                        uint8_t l_3492 = 0x47L;
                        l_3490 = (safe_mod_func_uint16_t_u_u(1UL, (safe_add_func_uint16_t_u_u((((-1L) >= (0xE5ED51F8L ^ l_3411)) ^ g_694), l_3222))));
                        if (g_231)
                            continue;
                        ++l_3492;
                    }
                    else
                    {
                        uint32_t l_3497 = 18446744073709551615UL;
                        --l_3497;
                        l_3502 |= (safe_rshift_func_int64_t_s_s(l_3179, 0));
                    }
                    if ((p_48 && ((g_120 , g_1048) , (safe_div_func_int16_t_s_s(((safe_lshift_func_uint64_t_u_s((p_48 & (safe_sub_func_int32_t_s_s(((((safe_div_func_uint16_t_u_u(p_48, 0x696AL)) <= (safe_mod_func_int32_t_s_s((-1L), p_48))) == (safe_div_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((safe_rshift_func_uint64_t_u_s((safe_add_func_int32_t_s_s((l_3485 | p_48), 0xE596401CL)), l_3485)) == g_273) , 0x118333325B16B920LL), l_3209)), p_49))) != p_49), 3L))), g_2688)) > p_49), 0x34BCL)))))
                    {
                        uint16_t l_3547 = 0xC28BL;
                        int32_t l_3549 = 0xDE28CD5FL;
                        int32_t l_3551 = 0x4FD2E11CL;
                        int32_t l_3552 = 0L;
                        g_2826 = (g_294 = ((safe_sub_func_float_f_f((0x9.FA27B0p+57 <= 0xE.77E163p+94), p_49)) >= ((safe_div_func_float_f_f((safe_add_func_float_f_f(((safe_mul_func_float_f_f(((+(safe_div_func_float_f_f(g_372, l_3485))) == ((g_1105 = ((safe_sub_func_int32_t_s_s((l_3534 &= g_111), (-5L))) , ((safe_div_func_float_f_f(p_49, ((l_3411 ^= (safe_mul_func_uint32_t_u_u((safe_lshift_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((g_289 = (+((!(((safe_mul_func_float_f_f((g_2857 = (l_3547 = p_49)), p_48)) , g_259) , 0xF9FDL)) < p_49))), 0x2C71L)), 11)), 0xB7851EBAL))) , l_3495))) < l_3548))) < p_48)), p_48)) <= l_3549), l_3485)), l_3298)) != l_3550)));
                        g_3554++;
                    }
                    else
                    {
                        float l_3557 = (-0x6.8p-1);
                        int32_t l_3558 = 0x2ADC767AL;
                        int32_t l_3559 = 0x39F7D8F8L;
                        int32_t l_3560 = (-1L);
                        int32_t l_3565 = (-1L);
                        g_3569++;
                        g_2992 = ((safe_mod_func_uint16_t_u_u(p_49, p_49)) , (0x1.Fp+1 != 0x9.7D5427p+66));
                        l_3574 ^= 0x90B25D3AL;
                    }
                    for (g_770 = 0; (g_770 < 43); g_770 = safe_add_func_uint8_t_u_u(g_770, 6))
                    {
                        g_363 = 0x0.6p-1;
                    }
                }
                else
                {
                    uint32_t l_3577 = 0x770969A6L;
                    int32_t l_3582 = (-1L);
                    int32_t l_3623 = 0xDD7A7BD2L;
                    int32_t l_3637 = 0L;
                    l_3577++;
                    if (g_231)
                        continue;
                    for (g_1377 = 0; (g_1377 > 2); g_1377 = safe_add_func_int32_t_s_s(g_1377, 5))
                    {
                        int16_t l_3583 = 0x8CF0L;
                        int32_t l_3590 = (-1L);
                        int32_t l_3592 = 9L;
                        g_3593--;
                        l_3411 = (((l_3623 = (g_3596 , (0x8487E752047AAAB3LL != (!(safe_sub_func_uint64_t_u_u((safe_lshift_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u((((p_49 && (safe_add_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((((safe_add_func_int8_t_s_s((l_3582 = (safe_div_func_int64_t_s_s((l_3562 <= (l_3611 || p_49)), ((safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(l_3465, (0x40759475538ABAA2LL | (((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((p_49 & 0xEF8868A6652AD47ALL), p_49)), p_48)) , l_3582) != g_2827)))), 0x8955D0CE7DB19BEBLL)) , g_3620)))), 0L)) && p_49) >= p_49))), l_3550))) , p_49) | g_1792), p_49)) && p_48) < l_3490), l_3621)), g_3622)))))) == g_290) ^ 0xADEF7162L);
                        g_287 &= (((g_2108 = ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((safe_div_func_int64_t_s_s((l_3221 = (g_207 &= (~(g_3351 = (safe_sub_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u(18446744073709551612UL, 18446744073709551608UL)) && (((l_3640--) & g_3054) , (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((p_49 && (safe_mul_func_int8_t_s_s((l_3179 = ((safe_add_func_uint16_t_u_u(0x72F8L, 0UL)) != (safe_div_func_int8_t_s_s((safe_rshift_func_uint64_t_u_s(0xE90F94AB45990415LL, p_49)), ((safe_div_func_uint16_t_u_u(l_3222, l_3592)) , l_3661))))), g_370))), l_3484)), g_111)) <= g_218) , 0xD7L), l_3590)) , g_210), g_1529)))) == 0UL), 9UL)))))), 0xE3D7335D5AC17421LL)), l_3623)) || g_2526), p_49)) , p_48)) > g_229) , g_283);
                    }
                }
                l_3588 = l_3221;
                if (g_1497)
                    break;
            }
            l_3221 = (p_48 != g_1472);
        }
    }
    if (((((((0UL ^ (~(safe_div_func_int16_t_s_s(((((((safe_rshift_func_uint32_t_u_s(g_770, 7)) & p_48) , g_3669) <= p_48) && (((((l_3173 = 1UL) == (g_211 = 0x0B5E893578FE058CLL)) != ((g_2687 = ((p_48 < p_49) <= g_290)) , l_3147)) == l_3172) != 65528UL)) < 0x3BL), l_3639)))) , p_49) || p_49) , 18446744073709551608UL) | g_268) || g_211))
    {
        int8_t l_3672 = 0xC9L;
        uint64_t l_3689 = 0x3F2C34FF4E89B7F6LL;
        int32_t l_3695 = 0x3B2CEBD0L;
        int32_t l_3713 = 0x8226459FL;
        int32_t l_3714 = 6L;
        int32_t l_3715 = 0x753130DEL;
        int32_t l_3716 = 0x25B9C285L;
        uint32_t l_3747 = 0x6E536B41L;
        int8_t l_3815 = (-1L);
        uint64_t l_3892 = 0x46FAC5ADF6F6D779LL;
        uint16_t l_3905 = 65535UL;
        int8_t l_4004 = 4L;
        uint64_t l_4181 = 7UL;
        uint64_t l_4252 = 0x8BA4317E70857673LL;
        int32_t l_4379 = (-2L);
        int32_t l_4385 = 0xE2AFE838L;
        int32_t l_4387 = 0L;
        g_2687 |= (0x2BFAL || ((l_3672 = (safe_lshift_func_int8_t_s_s(p_48, 0))) || 0x0F8F8B3A6FBEA03ALL));
        if ((((safe_div_func_int64_t_s_s((safe_rshift_func_int64_t_s_s(l_3177, 8)), (((g_253 , (safe_sub_func_int16_t_s_s(((((safe_mul_func_int32_t_s_s(p_49, (safe_add_func_uint32_t_u_u((((((g_3568 &= (safe_div_func_int32_t_s_s((g_1377 |= ((g_3620 = (safe_lshift_func_int64_t_s_u((p_48 == ((((safe_div_func_int64_t_s_s((g_240 ^= (l_3689 = g_211)), (((g_530 == (((((safe_add_func_int32_t_s_s((g_282 = (0xA0L ^ 7UL)), (safe_sub_func_int16_t_s_s(((g_286 = 0UL) < l_3694), 0x6219L)))) , g_2692) <= (-1L)) | p_48) && 0x73A4L)) > p_48) ^ 1L))) ^ g_374) ^ g_2740) , l_3694)), 14))) || p_49)), l_3672))) >= l_3672) && l_3534) < (-9L)) , 0x480E6AFDL), 8UL)))) , l_3550) ^ (-6L)) | g_2425), p_48))) == g_246) , g_46))) >= l_3672) == p_49))
        {
            uint8_t l_3717 = 0xA3L;
            int32_t l_3725 = 0xCA9EFE04L;
            int32_t l_3738 = (-1L);
            uint64_t l_3739 = 0x2CAA24A84B41B82ALL;
            int32_t l_3744 = (-1L);
            int32_t l_3745 = 0L;
            int32_t l_3746 = 0L;
            float l_3769 = (-0x3.0p+1);
            l_3695 = 0xA46906E6L;
            if ((g_1792 &= (safe_sub_func_int32_t_s_s((p_48 & (((safe_sub_func_uint64_t_u_u((g_2692 > (((4294967295UL != (-1L)) , (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint64_t_u_s(((g_905 = l_3550) || (((safe_div_func_int32_t_s_s(((((safe_mod_func_uint8_t_u_u(0xCAL, (((--l_3717) | (((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((((((g_240 | p_49) , (l_3725 > g_287)) != l_3233) <= l_3611) , 4294967295UL) || p_49))), p_48)), 4)) , g_2429) >= 0x2690L)) & 0x77A5B804L))) && 0x78C3L) && l_3715) , l_3726), 9UL)) || g_735) == p_48)), 18)), g_215)) ^ l_3173), 65532UL))) , l_3695)), g_207)) , g_366) <= 1UL)), 0x4003C9A8L))))
            {
                uint16_t l_3730 = 0xDF70L;
                g_2687 &= (((l_3725 ^= ((safe_mod_func_int32_t_s_s(p_49, p_49)) <= 0x467B7D7DL)) | (g_2108 |= (-1L))) >= ((l_3730 & (+p_49)) ^ ((l_3716 & ((l_3171 = (safe_rshift_func_int64_t_s_s(0x994822D5BCF97D76LL, ((safe_div_func_int16_t_s_s(0L, p_48)) || p_49)))) && p_49)) >= 0L)));
                l_3714 = l_3170;
            }
            else
            {
                g_693 = 0xD1D9F2C5L;
                l_3173 = g_2426;
            }
            if ((p_48 <= (++l_3739)))
            {
                float l_3742 = (-0x1.2p-1);
                int32_t l_3743 = (-1L);
                int16_t l_3812 = 0x447AL;
                int32_t l_3878 = 0x8F57F54AL;
                int32_t l_3880 = 0x79038991L;
                int8_t l_3882 = 1L;
                int32_t l_3886 = (-6L);
                int32_t l_3888 = 4L;
                ++l_3747;
                for (l_3170 = 2; (l_3170 == (-2)); l_3170--)
                {
                    float l_3766 = (-0x10.6p-1);
                    uint32_t l_3768 = 0x2F8FE211L;
                    int32_t l_3770 = 0x615532DCL;
                    int32_t l_3873 = 0L;
                    int32_t l_3874 = 0x5EF13550L;
                    int32_t l_3881 = (-3L);
                    int32_t l_3884 = (-4L);
                    int32_t l_3887 = 0L;
                    int32_t l_3891 = (-2L);
                    l_3770 &= (~(0x5DB77A13L <= (safe_mul_func_uint8_t_u_u(0x67L, (safe_mul_func_uint16_t_u_u(((((safe_mul_func_float_f_f((+g_1740), (g_366 , ((safe_mul_func_float_f_f((safe_div_func_float_f_f((safe_add_func_float_f_f((-0x1.Cp+1), l_3766)), (g_1809 = (-((p_48 > ((0x3.2p-1 == g_250) , g_2425)) > p_49))))), p_48)) == p_48)))) > 0xE.801117p-6) <= l_3768) , p_48), g_196))))));
                    if ((((safe_add_func_uint64_t_u_u((safe_lshift_func_uint64_t_u_s(g_374, 29)), ((safe_mul_func_int16_t_s_s((((l_3171 = (g_2688 , ((+p_48) , 0x74L))) & p_48) && ((((g_2300 ^ ((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(0x91FE11F1L, (((0x6.6E4410p-67 > (-0x1.2p-1)) <= (-0x6.5p+1)) , g_1914))) || 0L), 0x7EE07D62L)) | 6L)) | 0x8CF2DB6BL) & p_49) < 3UL)), g_770)) < 0x6ECAL))) >= 0x26L) <= g_292))
                    {
                        uint64_t l_3810 = 0xF88A6504BDE4EDCCLL;
                        int32_t l_3811 = (-3L);
                        l_3743 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(0x44F650C8FEE9019CLL, ((safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(l_3745, g_174)) > (safe_mul_func_int16_t_s_s(((l_3812 = ((safe_rshift_func_int16_t_s_u(((0x16C5A354L && (safe_div_func_uint64_t_u_u((p_49 != (((safe_unary_minus_func_int32_t_s(((g_2424 = (p_48 < (!(safe_add_func_int8_t_s_s(1L, ((l_3811 = ((~(l_3770 = (+(safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((g_240 , (p_49 , l_3810)) == 9UL), l_3746)), 41)) == l_3743), l_3695))))) , p_48)) < 0xF3L)))))) > g_284))) ^ 0x1BL) | g_284)), 7L))) <= g_213), g_273)) <= p_48)) > p_48), 0x10A6L))), l_3810)) >= p_48))) | p_49), 5)), 2));
                        if (l_3739)
                            break;
                        g_1529 = (1UL < p_49);
                        g_2826 = (l_3745 < p_48);
                    }
                    else
                    {
                        l_3815 = (safe_add_func_uint32_t_u_u(l_3746, (p_49 == g_373)));
                    }
                    for (g_1048 = 9; (g_1048 > (-25)); g_1048 = safe_sub_func_uint32_t_u_u(g_1048, 6))
                    {
                        int8_t l_3824 = (-2L);
                        int32_t l_3871 = 0x50FA8FADL;
                        int32_t l_3872 = 0x3747C914L;
                        int32_t l_3876 = 0x75123020L;
                        int32_t l_3877 = 0xADCAB391L;
                        l_3716 &= (safe_mul_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(l_3743, 0x116B6E6857D2BEC6LL)) & (safe_div_func_uint32_t_u_u((l_3824 || ((g_3712 ^= ((((l_3770 = (-8L)) < (((safe_mod_func_int64_t_s_s(((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((p_49 , 0x3EE1L), 2)) & (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((((g_3596 | ((p_48 < (safe_sub_func_uint64_t_u_u((0L == p_49), 0xA0FFA58060842A1FLL))) <= 255UL)) ^ 1L) , p_48) , l_3717), l_3746)), 0xCCC0L)), 7UL))), g_3622)), 0x30FBA5C2F8D4FA10LL)) > 0xD8A5L), 0x3062BF8FE2FBD40BLL)) , l_3739) , l_3768)) , (-1L)) == l_3170)) > 0x47B3L)), p_48))), g_3841));
                        g_3712 |= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(0x20L, ((l_3714 = ((safe_add_func_int8_t_s_s(l_3768, (((safe_add_func_uint32_t_u_u((~((safe_sub_func_int64_t_s_s(l_3824, (l_3716 = (((g_3365 ^= ((g_693 = ((((safe_rshift_func_int32_t_s_u((safe_add_func_uint32_t_u_u(((g_3568 = ((0xEB1AL & ((((safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s(0xDA8E97EEDE0B4074LL, (l_3745 &= (safe_add_func_int32_t_s_s(p_49, (safe_mul_func_int16_t_s_s(((l_3177 && ((safe_div_func_uint32_t_u_u(g_2851, ((p_49 ^ 4294967292UL) ^ p_48))) , l_3714)) >= p_49), g_366))))))), 3L)) , g_1446) || p_48) && g_3669)) < 0x0EC3203BD6525681LL)) & l_3739), 0x0A9B27FAL)), p_48)) != l_3173) < 0xD7F1912530A9BCA7LL) == 0xCF1CL)) >= l_3716)) >= 0xEE491BA6L) | l_3743)))) & p_49)), 0x653B1DABL)) | p_49) < 4294967295UL))) && g_1135)) , l_3770))), 3));
                        l_3884 ^= ((safe_mod_func_int64_t_s_s((((l_3739 && (safe_mod_func_uint8_t_u_u((l_3892--), (g_268 && (l_3883 = (safe_div_func_int32_t_s_s((p_48 > (l_3744 > (safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(g_884, (safe_sub_func_int64_t_s_s((l_3715 = (safe_add_func_uint16_t_u_u(((l_3876 && ((g_2826 = 0x8.64B91Bp-53) , (l_3639 = 0x27FA52E9L))) , (l_3770 != l_3871)), p_49))), g_291)))) <= l_3717), l_3744)))), l_3726))))))) & g_1472) != 0x3C48L), p_49)) && (-8L));
                        l_3872 = g_2115;
                    }
                    if (p_48)
                    {
                        l_3725 = l_3905;
                        if (g_1473)
                            continue;
                        l_3714 &= ((0x1EL | (((g_2687 = ((((!((0x5FE6EE091E6DCF67LL & 0xF656345D18A93828LL) > ((safe_mul_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint64_t_u_s((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((g_2488 != (((p_48 ^ (g_3712 &= (g_735 , ((((((l_3695 = (safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((4294967288UL == (safe_mul_func_int32_t_s_s((l_3639 , (safe_sub_func_uint32_t_u_u((p_49 <= l_3882), 1L))), (-1L)))), l_3891)), 0UL))) , 1UL) == 0xA95E7740L) < 1UL) , 0x9EC1828E342BA517LL) && 0x6F73136105796D0ALL)))) == l_3892) > l_3744)), 0x99L)), 0x1E6FL)), 32)) > l_3889), l_3891)), l_3689)) , p_49))) >= 4294967290UL) >= p_49) != l_3873)) > g_2424) , g_226)) > l_3815);
                        g_1525 = (-0x3.6p-1);
                    }
                    else
                    {
                        uint64_t l_3931 = 0UL;
                        int32_t l_3934 = 0x6A136180L;
                        int16_t l_3935 = 0L;
                        l_3738 = (safe_sub_func_uint16_t_u_u((((((safe_lshift_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u((l_3639 = 0x0EEAL), p_49)) , (g_3620 > l_3931)) , (0x01AB19369D4055D0LL > p_48)), 21)) != ((((l_3931 && ((g_2300 <= ((g_3351 ^= (l_3934 = (safe_add_func_int16_t_s_s((l_3714 < 0xF7L), l_3739)))) > 253UL)) ^ l_3931)) , l_3934) , g_207) != l_3935)) ^ l_3689) < p_49) , g_3841), 0x57FBL));
                        l_3715 = l_3745;
                        l_3887 &= (safe_mod_func_int16_t_s_s(((p_49 != l_3695) > (safe_div_func_uint16_t_u_u((safe_rshift_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((g_1497 ^ (l_3934 = l_3738)), l_3891)) != 0x6BA71674L), g_250)) , ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(0x868DL, 14)), (safe_mod_func_uint32_t_u_u((g_370 , l_3171), p_48)))) && 0xF5DDL)), 16)), 0xD077L))), l_3815));
                        l_3874 ^= (((safe_lshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((p_48 >= (safe_div_func_int16_t_s_s(1L, 0x9833L))) , (((safe_rshift_func_int32_t_s_s((g_228 = g_2683), 3)) == (safe_rshift_func_uint8_t_u_s(p_49, 0))) != ((safe_mul_func_uint8_t_u_u(((g_226 , (((((g_261 = (g_1740 = ((l_3934 = ((((l_3881 && p_48) , (g_1365 |= 0xB2L)) , 0x80L) > g_253)) ^ p_49))) > l_3887) ^ g_1792) < g_18) <= g_226)) | g_241), l_3770)) | 254UL))), p_49)) | 255UL), g_884)) || g_247) <= l_3746);
                    }
                }
            }
            else
            {
                uint16_t l_3992 = 0x9F3CL;
                int32_t l_4003 = 9L;
                int32_t l_4021 = 0x8CDBBAE0L;
                uint16_t l_4026 = 0xEC01L;
                for (g_2429 = (-19); (g_2429 >= (-6)); g_2429 = safe_add_func_int8_t_s_s(g_2429, 5))
                {
                    int32_t l_3988 = 4L;
                    int32_t l_3990 = 0L;
                    int32_t l_3991 = 0x8907D73FL;
                    uint8_t l_4005 = 1UL;
                    int32_t l_4006 = 8L;
                    if (((((l_3889 & ((l_4006 = ((g_246 != l_3173) ^ ((((l_3990 = (g_770 = ((p_48 & (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((g_282 = (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((g_1740 = (g_290 |= (l_3991 |= (safe_add_func_int64_t_s_s(l_3717, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint32_t_u_s((((safe_sub_func_int32_t_s_s(((((p_49 = 0x4AL) >= (((safe_lshift_func_uint32_t_u_u(((g_866 = 0x0451B912C0205F72LL) & (safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((g_1377 = ((g_2688 , (((--l_3992) == ((safe_rshift_func_uint64_t_u_s((safe_add_func_int64_t_s_s(((safe_div_func_uint8_t_u_u((l_3885 |= ((safe_div_func_int16_t_s_s((p_48 , l_3745), g_3365)) , l_3717)), g_373)) == 8UL), 0xCB05F29889812E29LL)), 46)) >= p_48)) | 0xBB5F2842L)) > l_3745)), 3UL)), l_3177))), 12)) | l_4003) < g_2687)) , 9UL) < g_286), l_4003)) ^ l_3990) & 65529UL), p_48)), 5))))))), l_4004)), 11))), 7)), 3))) , l_4005))) <= p_48) == l_3725) >= g_3638))) > l_3988)) , g_196) , 0x67L) || 8L))
                    {
                        int8_t l_4020 = 0xCAL;
                        l_4021 ^= (((((safe_rshift_func_int64_t_s_u((l_4003 <= l_3744), (safe_add_func_int16_t_s_s((0x30L > (((safe_div_func_int32_t_s_s(p_48, (g_1377 ^= (g_212 |= ((safe_unary_minus_func_int8_t_s(l_3177)) <= (((g_530 = p_49) ^ ((g_290 = g_208) <= ((safe_add_func_int16_t_s_s(0x6D05L, g_372)) == g_3568))) , g_770)))))) || p_48) == 0UL)), 6UL)))) ^ p_49) == p_49) ^ l_4020) , (-9L));
                        l_3990 = (p_48 <= g_282);
                    }
                    else
                    {
                        if (g_215)
                            break;
                        if (p_49)
                            break;
                    }
                    for (g_236 = 29; (g_236 == (-15)); g_236 = safe_sub_func_int64_t_s_s(g_236, 9))
                    {
                        int16_t l_4024 = (-8L);
                        int32_t l_4025 = 0x044C0279L;
                        l_4026++;
                    }
                }
            }
            g_196 &= (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_1340, p_48)), (0x88L >= (safe_mod_func_uint16_t_u_u(g_2430, g_289)))));
        }
        else
        {
            uint64_t l_4035 = 4UL;
            l_4035++;
            l_4040 &= (safe_mul_func_int16_t_s_s(0xD365L, g_277));
        }
        if (l_3639)
        {
            uint64_t l_4045 = 8UL;
            int32_t l_4052 = 0L;
            int32_t l_4055 = 1L;
            int32_t l_4083 = 0x8155E1EFL;
            g_3351 = (safe_sub_func_uint16_t_u_u(((0x2307CD24L > (((safe_lshift_func_int16_t_s_s(p_48, 14)) >= (((++l_4045) == (safe_div_func_uint32_t_u_u(0xA29AB7E0L, ((safe_div_func_int8_t_s_s(p_49, (l_3172 |= (l_4052 & 1L)))) || (l_3695 = (l_3169 = l_3883)))))) || (p_49 , (0x9523L && 0x34F4L)))) & l_4052)) , p_49), p_48));
            l_3883 ^= (safe_mul_func_uint32_t_u_u(l_4055, (l_3715 = (safe_add_func_uint64_t_u_u((safe_lshift_func_uint32_t_u_s(((((g_3622 &= l_4060) == (-1L)) | ((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_4052 ^= l_3716), ((safe_lshift_func_int8_t_s_s((g_196 ^= (safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s(7L, 6)) , ((l_3747 != l_3169) && l_4083)) , (safe_mod_func_uint16_t_u_u(((((safe_mul_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(((-3L) || (-10L)), g_2687)) < g_120), 0x0CBB2B50047D2294LL)) & l_3747) >= 1L) && 6L), 0x9116L))), l_3147))), 3)) , 6UL))), g_292)), p_48)) && p_48), 0x223EEF5A3A185DD0LL)), g_2108)) || 0xF4EEL) > p_48), l_3815)) | l_4055) & g_3568), 6)) || l_4055) | 0xB50D92D6BAA406F6LL), 8)) != (-1L))) != l_3233), g_1497)), l_3715)))));
        }
        else
        {
            int16_t l_4094 = (-1L);
            int64_t l_4132 = 0x57C2BB77FB0FCDA9LL;
            int32_t l_4136 = 0x6231903BL;
            int32_t l_4137 = 1L;
            int32_t l_4139 = 0x1EB48717L;
            int8_t l_4140 = (-1L);
            int32_t l_4142 = 0x68D6D82EL;
            int64_t l_4179 = 1L;
            int32_t l_4368 = 0L;
            int32_t l_4376 = 0x6E50A035L;
            int32_t l_4377 = 2L;
            int32_t l_4382 = 0L;
            int32_t l_4383 = 0x61B69271L;
            int32_t l_4384 = 0xF69CD38EL;
            int16_t l_4434 = 0x208EL;
            int32_t l_4470 = (-1L);
            uint32_t l_4471 = 0x15CD8E9AL;
            for (g_872 = 9; (g_872 > 44); g_872 = safe_add_func_int32_t_s_s(g_872, 2))
            {
                const int32_t l_4109 = 0x587C03A1L;
                int32_t l_4129 = 0x50191F7DL;
                int32_t l_4135 = (-5L);
                int32_t l_4138 = 0x7F2E3D42L;
                int32_t l_4141 = 0xABC4D603L;
                uint64_t l_4143 = 1UL;
                for (l_3713 = (-12); (l_3713 > 3); l_3713 = safe_add_func_int64_t_s_s(l_3713, 2))
                {
                    int64_t l_4110 = 0x8B4F057894F7204BLL;
                    int32_t l_4111 = 0L;
                    if ((l_3879 = ((((((l_4094 ^= 65535UL) ^ ((((((~(safe_div_func_uint32_t_u_u(g_2097, (safe_mod_func_uint32_t_u_u((((65534UL < ((safe_lshift_func_uint64_t_u_u((+((((0xC75DL >= (g_284 != (safe_mod_func_int32_t_s_s(p_49, (safe_lshift_func_int64_t_s_u((-2L), (g_751 , ((safe_lshift_func_uint64_t_u_s(((p_48 == p_48) >= p_48), p_48)) && g_498)))))))) , g_2692) <= 0x5D01FEC4C8C8FA0CLL) || 0x18C2L)), g_293)) != p_49)) , 0x99BDL) ^ 0x821FL), g_3596))))) , p_48) < 1L) <= 0x172BL) && 6UL) <= l_4109)) & g_2115) & p_49) ^ p_49) > l_4110)))
                    {
                        l_4111 ^= g_228;
                    }
                    else
                    {
                        float l_4133 = 0x3.7p+1;
                        g_2826 = ((safe_add_func_int8_t_s_s(g_1740, 1UL)) , (g_2992 = (-(((l_4133 = (l_4109 <= ((safe_div_func_float_f_f(g_246, (safe_sub_func_float_f_f(((safe_sub_func_float_f_f((safe_mul_func_float_f_f((((safe_rshift_func_int16_t_s_u(p_48, 6)) , (safe_sub_func_float_f_f((safe_sub_func_float_f_f((g_662 = 0x1.7608B0p-59), (g_2488 , (l_4129 = l_4109)))), (safe_mul_func_float_f_f(p_49, p_48))))) >= l_3747), p_49)), p_48)) >= g_370), g_1377)))) > l_4132))) < g_4134) < p_49))));
                    }
                }
                ++l_4143;
            }
            if ((((safe_add_func_int8_t_s_s((g_212 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s((((l_4139 = ((safe_mul_func_uint64_t_u_u(g_3351, ((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((l_3173 = (((l_4136 = 0x4B5579BDL) , (((safe_sub_func_uint16_t_u_u((p_48 ^ p_49), ((safe_rshift_func_int32_t_s_s(((safe_div_func_int8_t_s_s(p_49, ((safe_rshift_func_int64_t_s_u(0xC5ADFD7D043DD9BALL, (l_3695 = (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_49 , (safe_add_func_uint16_t_u_u(((l_3716 = (~(((((((safe_mul_func_uint16_t_u_u(g_1705, (l_3714 = 0xBC64L))) & p_49) > 0x291A3040AC314703LL) >= 1UL) , g_286) & l_4179) && p_49))) , l_3262), (-9L)))), 3UL)), 7))))) | g_120))) && l_3883), l_4132)) > 0x0FL))) , p_49) , p_48)) && 0x96C7L)) && l_3875), 0x0D87D5FDL)), 7UL)), 6)) , 0x0FL) , l_3716) || l_4180))) , p_48)) , p_49) || 18446744073709551615UL), l_4181)) , l_3815), g_2692)), l_4140))), 0xE3L)) >= 0x25EAL) != l_4132))
            {
                uint16_t l_4184 = 0x610BL;
                int32_t l_4209 = 7L;
                uint16_t l_4327 = 0x1BE1L;
                uint32_t l_4343 = 18446744073709551615UL;
                l_4184 = (safe_div_func_uint16_t_u_u(0xBB74L, g_1446));
                for (g_2526 = 0; (g_2526 <= 21); g_2526 = safe_add_func_uint8_t_u_u(g_2526, 3))
                {
                    uint64_t l_4199 = 0x68525718F321B609LL;
                    int32_t l_4208 = 5L;
                    int32_t l_4275 = 0xC9E5FE33L;
                    if (((l_4137 = (((((safe_div_func_int8_t_s_s(l_3177, (safe_sub_func_int32_t_s_s(((l_4209 = (safe_mod_func_uint8_t_u_u((l_3713 >= (safe_sub_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_s(((+(g_1472 = (+(l_4208 = (((l_4199++) < ((safe_add_func_uint32_t_u_u(l_3639, 0x479778BEL)) , ((p_48 < (safe_rshift_func_int16_t_s_s((g_212 = (l_3715 = (g_46 == (g_1377 = (safe_lshift_func_uint16_t_u_u((l_3233 >= p_48), 2)))))), 1))) && (((l_3815 <= 0x7CL) , 0xBF2F6F7AL) & l_4184)))) >= 0x2BAFEEC5L))))) & p_49), 6)) && g_2334) < p_48), g_2688))), 255UL))) | p_49), l_4140)))) ^ l_4184) < p_49) == l_4184) >= g_2704)) < g_291))
                    {
                        uint32_t l_4211 = 0xB0BF56E5L;
                        --l_4211;
                        l_4136 = (g_1472 = (l_4137 = l_4208));
                        g_1105 = ((safe_rshift_func_uint64_t_u_u(l_4184, g_872)) , ((-(((safe_add_func_float_f_f((((0x3EL ^ ((safe_sub_func_int8_t_s_s((l_3714 = ((p_49 < (g_2094 >= ((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int32_t_s_u((+(((safe_mod_func_uint64_t_u_u(p_48, l_4137)) && (0x2D6E2AB5L ^ 0x1B588C21L)) == p_48)), l_3147)), p_49)), l_4211)) != p_48))) , 0x65L)), 1UL)) , 0x6EL)) , (-0x4.3p+1)) == g_1792), 0x0.2p+1)) < p_48) > l_4004)) > 0x1.1p+1));
                    }
                    else
                    {
                        int32_t l_4230 = (-1L);
                        int32_t l_4251 = 0x034DBA47L;
                        l_4230 |= ((0x5629A1DBL | 0xD311E035L) & 0x10F3L);
                        g_3620 = (g_120 > (l_4209 = (l_4251 |= (((safe_mod_func_int16_t_s_s(0xA178L, (g_213 | ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((l_3639 , 1UL) , 0L) == ((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((l_4137 ^= (safe_add_func_int8_t_s_s((0UL < (safe_div_func_int16_t_s_s(g_293, (safe_mul_func_int8_t_s_s(0x39L, g_751))))), 5L))), 0x06929365FE2B2CAFLL)), l_3885)) < 1UL)), 0x56329EA3L)), g_694)), 13)), l_4230)) , 0L)))) , l_3695) <= 0x7AL))));
                        if (l_4252)
                            break;
                        l_4209 = ((safe_mod_func_uint8_t_u_u(((p_48 & (safe_add_func_int8_t_s_s((((((((((safe_sub_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((((safe_mul_func_uint32_t_u_u((!(((safe_sub_func_int32_t_s_s(p_48, 0x9068FD7EL)) > 249UL) != l_3815)), ((0x70L < ((l_4230 <= (((safe_mul_func_int16_t_s_s((safe_mul_func_uint64_t_u_u(l_4251, (safe_rshift_func_int16_t_s_u((((l_3815 | g_196) > 0xBD5FL) < l_4140), l_4184)))), 0xAFD8L)) , l_3892) ^ g_2424)) || l_4251)) & l_4181))) && l_3889) == 0x7B2FL), p_49)) , (-1L)), l_4251)) == 3UL) && 0x2E1F03AAL) | g_872) <= 255UL) || l_4136) == l_4136) <= 0x9D6CCC47L) , 1L), 0x75L))) <= 9UL), 0x72L)) <= g_2239);
                    }
                    if (l_4209)
                    {
                        float l_4305 = 0x9.C8DF18p+74;
                        const int32_t l_4306 = 0x0BD4355EL;
                        l_4136 |= g_213;
                        g_1472 = ((safe_unary_minus_func_uint64_t_u(((safe_rshift_func_uint64_t_u_s((++l_4276), (safe_sub_func_int64_t_s_s((g_3054 , ((safe_div_func_uint32_t_u_u(p_49, l_4252)) || (safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((!(-1L)) && p_48), ((safe_mul_func_int64_t_s_s(((g_866 , (l_4040 <= (((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(p_48, 4)), (l_4306 ^ p_49))), p_48)), g_229)), 1)) >= g_218) , g_240) | 0UL) < g_286))) && g_2094), 0UL)) > l_3713))), (-8L))), 0x0EF8L)))) , g_2332), p_48)))), 0x844D54A62370B228LL)))) && 1L))) <= 0x37L);
                    }
                    else
                    {
                        g_1525 = 0x1.Bp+1;
                    }
                    g_1472 = (l_4275 , ((safe_lshift_func_int8_t_s_u((((l_3170 ^= (safe_div_func_int32_t_s_s(1L, (((0x587FL & (+(((((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_2687 = ((p_48 ^ (safe_add_func_uint32_t_u_u((l_4209 <= (safe_div_func_int8_t_s_s(((((-8L) < (safe_sub_func_uint32_t_u_u(((safe_mul_func_int64_t_s_s((p_49 <= p_48), (l_4040 , l_4326))) == 1UL), 0xA1EC1111L))) && 0x510BEB12974DAB2ALL) >= l_3726), g_4134))), p_48))) && 65526UL)), l_4094)), l_4209)), 0xEF4468B27A03E262LL)) , p_48) != l_4327) , g_289) != g_1377))) & l_4184) ^ 0x77L)))) | (-5L)) == g_2773), g_2332)) && 0xFFC0L));
                }
                g_1109 = (safe_add_func_float_f_f((safe_sub_func_float_f_f((safe_div_func_float_f_f((p_49 < (-0x1.9p+1)), (((0x6.3p+1 > 0x8.6CFF65p-87) <= l_4184) > (0x0.Bp+1 == 0xD.2DFCA0p+71)))), (((g_1377 >= (safe_sub_func_float_f_f((safe_sub_func_float_f_f(((((((g_1809 = 0xC.129C33p+89) == l_3815) > l_4327) <= p_48) , 0xD7L) , l_4338), 0x6.010A2Ep-97)), p_49))) != 0x3.E0D082p+15) == p_49))), 0x0.2p-1));
                l_3889 |= ((!(((g_266 ^= l_3875) > (0x5214E21D80207233LL && ((!(((((safe_div_func_int64_t_s_s(l_4343, (l_3713 = (g_236 = 0x1C5CC861F6D0D217LL)))) < (safe_div_func_uint8_t_u_u(254UL, g_290))) >= (g_291 , (((p_48 & ((safe_rshift_func_uint32_t_u_u(l_3550, 23)) != g_2239)) ^ g_249) | 0xBA46L))) >= (-1L)) & g_1340)) <= 0x1D3CL))) , p_48)) >= p_48);
            }
            else
            {
                float l_4364 = 0xA.B35379p+74;
                int32_t l_4365 = 0x2FACD6FCL;
                int32_t l_4366 = 1L;
                int32_t l_4367 = (-3L);
                int32_t l_4369 = (-1L);
                int32_t l_4370 = (-5L);
                int32_t l_4371 = 3L;
                int32_t l_4372 = 0L;
                int32_t l_4373 = 1L;
                int32_t l_4374 = 0x31EACA35L;
                int32_t l_4375 = (-1L);
                int32_t l_4378 = 1L;
                int32_t l_4380 = (-1L);
                l_3169 &= ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((((g_1792 <= (safe_lshift_func_uint16_t_u_s((p_49 & ((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((g_3554 != (safe_mod_func_int8_t_s_s(0x18L, l_4179))), g_2773)), (safe_div_func_uint16_t_u_u(0x40F1L, (p_49 & (l_4377 = (((--g_4388) & (((((0x1A2DL > l_4338) , 0x919647536DFCB97ELL) , 0UL) , g_1497) & 0x38DBBC1B4375346ELL)) && p_48))))))) | 7UL)), 8))) , g_213) ^ l_3713), g_1808)) , l_4380), l_4140)), g_1498)) ^ p_48);
                l_3639 |= (safe_sub_func_int64_t_s_s(0x94B5F1D5E67ACE2ELL, (((((safe_add_func_uint64_t_u_u(((safe_unary_minus_func_int64_t_s(p_48)) <= ((safe_mul_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((l_3695 = l_4252) && (safe_div_func_int8_t_s_s((safe_mul_func_uint32_t_u_u(p_48, (safe_lshift_func_uint32_t_u_s((safe_lshift_func_int32_t_s_s(((l_3171 &= (l_3889 &= (safe_mod_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((((((safe_sub_func_uint64_t_u_u(((((g_1792 &= (safe_rshift_func_uint8_t_u_s((((g_45 ^ (~1UL)) , (((safe_rshift_func_uint64_t_u_s(0x318F79F95C6FD6C4LL, (g_261 &= g_2971))) , (safe_div_func_uint64_t_u_u(p_49, p_49))) > g_2851)) , l_4276), g_3351))) & 0x384DC004L) , l_4366) > p_48), (-2L))) | l_3611) && l_3883) , 0xBCC51002C15D9367LL) < l_3611) == l_3885), 5L)), g_2429)))) , (-1L)), 13)), 2)))), g_3841))), p_49)), p_49)) != g_3638)), l_4387)) & g_370) ^ 0x8606CE88L) >= g_1110) & g_884)));
            }
            g_207 |= (((((((0x30L < (!(l_3716 = 0x505D92A2L))) & (l_3879 ^= (~0x88857139L))) == (safe_sub_func_int64_t_s_s(g_3841, (g_373 <= l_4379)))) ^ p_48) < ((safe_mod_func_int16_t_s_s(((~((((((safe_div_func_int32_t_s_s(l_4136, (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((0x3BAEL <= l_4434), 1)), l_3171)))) && g_884) <= l_4179) != l_3396) <= g_2857) ^ g_263)) & p_49), 0x8AD6L)) & p_48)) < g_289) | l_3689);
            l_4377 ^= (((safe_mod_func_int32_t_s_s(g_3638, (safe_lshift_func_uint8_t_u_s(((((((g_1529 == ((0x3D23AF9D73082A61LL & (((l_4383 || (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((l_4179 >= (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int64_t_s_s(g_247, ((l_3716 = ((((++g_4453) ^ (((safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((g_261 = ((((safe_lshift_func_int64_t_s_u((l_3715 = (g_1057 , (g_1377 = ((g_212 = ((safe_div_func_int32_t_s_s(((p_48 , (safe_div_func_float_f_f(((safe_div_func_float_f_f((safe_add_func_float_f_f((l_4139 = l_3726), l_4142)), g_1135)) == l_4137), 0xF.48DA1Bp-14))) , l_3169), p_49)) || l_3726)) == p_48)))), l_3695)) , g_1473) || 0x4406L) | l_3892)) || g_1810) <= 4UL), p_48)), l_4004)) && 0x6ACCB2A45821A03CLL) >= g_1135)) >= 1L) != g_289)) , (-6L)))), p_48)), g_3890))) && g_3365), 9)), p_49))) , 3UL) < g_751)) , 0x0CL)) , l_4470) , 0x13AE37CCL) | g_530) == 4294967295UL) & g_219), l_3689)))) ^ l_4471) || l_3716);
        }
        l_3714 = (l_3716 , (((l_4385 |= (safe_rshift_func_int32_t_s_s((((l_3695 == (((!(safe_mod_func_int16_t_s_s((((l_3883 = p_49) >= 0xD8D6L) <= g_1048), p_48))) & ((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((l_3262 <= 0x94870DFBL), (safe_mul_func_int16_t_s_s(p_49, p_48)))), g_2426)) <= p_48), 30)) , 0xFF6FL), 15)) , l_4180)) == 0xD22A2BCFL)) , g_231) < p_48), p_49))) <= 0x10L) & 0L));
    }
    else
    {
        int32_t l_4500 = 0xDF65F03FL;
        int32_t l_4503 = 0x74044F61L;
        int16_t l_4532 = 0x58E5L;
        int32_t l_4539 = 0x4998546EL;
        int32_t l_4541 = 0L;
        int32_t l_4543 = 0x14C782C0L;
        int32_t l_4544 = (-10L);
        int64_t l_4616 = 0x01D37402DE390F51LL;
        int32_t l_4659 = 0L;
        const uint64_t l_4660 = 0x00222A775543B0F5LL;
        uint32_t l_4712 = 0x4162E51BL;
        int32_t l_4744 = 0xA7A7C2C2L;
        if ((((p_49 || (safe_sub_func_uint16_t_u_u(((p_49 & (8L & ((g_268 , (((l_3889 ^= ((l_4503 &= ((((safe_mod_func_uint32_t_u_u((((safe_add_func_float_f_f((safe_sub_func_float_f_f((!((((0xA86694FAL <= ((0L <= ((((safe_sub_func_uint64_t_u_u(l_4500, (safe_lshift_func_int64_t_s_u(0L, 28)))) >= (1UL == 18446744073709551615UL)) && 0x7165928EBB8F8CFALL) | g_263)) | 0L)) , (-0x9.3p-1)) == g_3638) >= p_49)), p_49)), l_4500)) , 0xEC612AB8A858F69ALL) ^ 0x0FB11AE61D451BF6LL), g_261)) ^ 1L) < p_48) > l_3885)) == 3L)) != 0L) > 0xA12ED76DF1DFA212LL)) >= g_1808))) , 3UL), 0UL))) & p_49) < p_49))
        {
            g_3620 |= (l_4500 != 18446744073709551615UL);
            for (g_226 = (-4); (g_226 <= (-22)); g_226--)
            {
                return l_4503;
            }
        }
        else
        {
            uint32_t l_4516 = 0x36CB3DF0L;
            uint32_t l_4525 = 0xEA16CB68L;
            int32_t l_4527 = 0x9F0A3708L;
            int32_t l_4533 = (-1L);
            int32_t l_4535 = 0xDD253C3CL;
            int32_t l_4540 = (-9L);
            int32_t l_4545 = (-10L);
            int32_t l_4625 = 0xBE455EFEL;
            int16_t l_4642 = (-1L);
            for (g_287 = (-8); (g_287 != 48); g_287 = safe_add_func_uint8_t_u_u(g_287, 2))
            {
                float l_4510 = 0x1.00B024p+0;
                int32_t l_4517 = (-1L);
                int32_t l_4529 = 0L;
                g_212 = 0x1A50530FL;
                if ((((g_3620 = ((p_49 == ((0xD50DEDFEL > g_3054) != (((safe_rshift_func_uint16_t_u_u(((((g_252 != (safe_mul_func_uint64_t_u_u((!(safe_rshift_func_uint16_t_u_u(p_48, 13))), (g_1529 = ((0x4BL != p_48) != ((((l_4516 , (l_4517 = g_3554)) ^ g_257) || g_905) , 0x07L)))))) & 0x280F156B2362DC38LL) & 0UL) < 1L), p_48)) > g_2851) || 7UL))) && 0UL)) , g_884) == g_287))
                {
                    int32_t l_4526 = 0x7E3FEF05L;
                    g_2740 &= (((safe_mul_func_float_f_f(l_4520, (l_4517 > (g_3729 = 0x1.2p+1)))) < ((safe_sub_func_float_f_f(p_48, (((g_246 & (g_2424 &= (1L & (g_3712 & ((4294967292UL == (safe_sub_func_int8_t_s_s((l_4526 = (((((l_4525 != (-8L)) > 0x1517L) >= 1L) > 0L) <= p_48)), 0x85L))) != 255UL))))) , 1UL) , g_1498))) <= (-0x9.1p-1))) , l_4040);
                }
                else
                {
                    float l_4528 = 0x0.E65FA4p+58;
                    int32_t l_4530 = 0x6F2E29E0L;
                    int32_t l_4531 = 0x0ACE968BL;
                    int32_t l_4534 = 0x2D791D92L;
                    int32_t l_4536 = 0xDDE4A3F8L;
                    int32_t l_4538 = 0x1E966CF9L;
                    int32_t l_4542 = 0xDEA639C6L;
                    --g_4546;
                }
                g_3712 &= ((l_4529 = (l_4527 = (l_4503 ^= (l_4517 &= (safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0x06FC63C6L, (safe_rshift_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((safe_mul_func_int64_t_s_s((safe_lshift_func_int64_t_s_u((safe_rshift_func_uint32_t_u_s((((g_1792 = (safe_rshift_func_uint64_t_u_s((safe_sub_func_int64_t_s_s(0xAD10DB9160E73A5DLL, g_259)), (safe_mod_func_int16_t_s_s(((l_4540 |= (safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint64_t_u_s(l_4543, ((((l_4539 = g_3184) & ((g_2108 = ((safe_rshift_func_uint8_t_u_s((g_282 || (safe_mod_func_uint8_t_u_u((p_48 && (safe_lshift_func_uint32_t_u_u(((0x304595F1D11CD0CCLL > (((((0x94L == g_210) < p_48) , 0x7AL) != l_4541) >= p_48)) ^ p_48), 2))), p_48))), g_174)) , p_48)) , p_49)) > l_4529) & l_4584))) && p_48), 3L)))) , p_49) && 0xBA3FL), 4))) >= 253UL), 5L))))) > 8L) , l_4544), p_48)), l_4500)), p_48)) & 0xFA2DL), 0xC1L)) < 0x683DL) == p_49), g_2334)))), l_4500)) , 0xEBL), p_49)))))) && g_2971);
            }
            if ((l_3147 == ((l_4544 = (safe_mod_func_int64_t_s_s((((g_4386 & ((g_1377 ^= (0L > (safe_mod_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((l_3171 = (((safe_mod_func_uint32_t_u_u((l_3883 || l_4533), 0x09F38887L)) ^ (safe_lshift_func_uint16_t_u_u(((l_4539 &= (((g_498 | ((safe_sub_func_int8_t_s_s(p_49, (safe_sub_func_uint16_t_u_u(((l_4338 <= p_48) || 4UL), l_3534)))) > (-5L))) , p_49) ^ p_48)) < p_48), 4))) && p_49)), g_1340)) <= l_3726), 0x3206FF24L)))) , l_4541)) == l_4533) > l_4544), p_48))) == (-10L))))
            {
                float l_4611 = (-0x9.0p-1);
                int32_t l_4612 = 7L;
                int32_t l_4615 = 0L;
                int32_t l_4617 = 0L;
                l_3883 |= ((((g_287 &= 0xB024L) && g_111) && (((l_4544 ^= ((0xD415CB83L < (safe_lshift_func_int16_t_s_s(g_4386, 6))) | 0x0949B26F005E16D2LL)) ^ 1L) , (l_4610 = (~(g_273 , ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((l_3396 && g_1110) , g_1498) < g_177), 0xAFL)) , p_49), g_2687)), 1)) == p_49)))))) & g_285);
                ++g_4619;
            }
            else
            {
                int8_t l_4622 = 1L;
                int32_t l_4623 = 1L;
                int32_t l_4624 = 0xE2092C83L;
                uint16_t l_4626 = 0x35B7L;
                ++l_4626;
                l_3639 = (((l_4545 |= (((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint64_t_u_s((safe_sub_func_uint32_t_u_u(g_275, (safe_mod_func_uint16_t_u_u(p_49, p_49)))), 63)), (g_111 || (p_48 >= ((0x0118A972BF6C53EELL ^ (p_48 & (p_48 ^ (safe_mul_func_int64_t_s_s(((safe_unary_minus_func_int32_t_s(l_4642)) && g_120), p_48))))) || p_49))))), 0x85A9L)) , 0xE3L) >= g_3554)) && 0xDCFFL) & g_530);
                g_1472 = l_3879;
                g_1808 = p_49;
            }
        }
        l_3883 = ((safe_div_func_int16_t_s_s((((l_3173 = (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_1377 = (l_3889 = (((((l_4539 ^= (g_292 || ((g_266 && 0xF771L) | (l_4616 >= (safe_lshift_func_uint64_t_u_s(g_3365, 11)))))) <= (safe_div_func_int16_t_s_s(g_374, (safe_add_func_int64_t_s_s((safe_mul_func_uint64_t_u_u((0x21A7L && l_4541), l_4584)), 18446744073709551614UL))))) == l_4659) , p_49) == 0x3EL))), p_48)), (-5L))), l_4660))) && g_2108) , g_751), l_4180)) , 0xD9A370D3L);
        for (g_266 = 14; (g_266 < (-14)); g_266 = safe_sub_func_uint8_t_u_u(g_266, 6))
        {
            int32_t l_4670 = 0xBBF389CFL;
            int64_t l_4701 = 0x2C84721731D43FE8LL;
            uint64_t l_4703 = 0xC795F501CA5F23EALL;
            int32_t l_4709 = 9L;
            int32_t l_4721 = (-10L);
            int32_t l_4724 = 0L;
            for (g_277 = (-25); (g_277 >= 22); g_277++)
            {
                int32_t l_4667 = 0x4A5E9E95L;
                int32_t l_4702 = 0xC424181CL;
                for (g_3052 = 0; (g_3052 <= 15); g_3052++)
                {
                    int32_t l_4668 = 7L;
                    int32_t l_4669 = 0x249DAB1AL;
                    uint8_t l_4671 = 0xF0L;
                    if (l_4667)
                        break;
                    g_291 = p_48;
                    l_4671++;
                    if (g_282)
                        break;
                }
                if (p_48)
                    break;
                g_281 = ((((safe_div_func_float_f_f((g_4381 = 0x5.Ap+1), ((safe_mul_func_float_f_f(((g_1525 = (g_363 = (safe_sub_func_float_f_f((!(safe_sub_func_float_f_f(((-0x1.0p-1) > ((g_662 = (g_2992 = ((g_4685 = (safe_mul_func_int32_t_s_s(l_3171, p_49))) , (safe_mul_func_float_f_f((((safe_mul_func_float_f_f((safe_add_func_float_f_f((0x7.B0C3CCp-62 <= (((safe_mul_func_float_f_f(((g_1428 = (safe_sub_func_float_f_f((g_294 = 0x0.4p+1), ((((g_240 = (-1L)) || g_1498) , (((~((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((((((l_4703++) > (+(safe_div_func_int16_t_s_s(p_49, 0x4646L)))) , p_49) <= l_3147) | 0x45E03EAAL) || p_49), 9)), g_259)) | g_1135)) < g_2857) , g_236)) < g_288)))) <= p_49), p_48)) == g_872) < 0x8.AAE370p+16)), 0x1.7FD697p+57)), g_4546)) <= 0x1.Fp+1) , l_4703), 0x3.B033E1p+76))))) != (-0x8.3p+1))), g_370))), 0x0.1573C9p+87)))) > (-0x1.2p-1)), g_1377)) < l_4660))) < g_1340) < 0xE.B2BDE5p+7) != g_247);
                for (g_286 = (-29); (g_286 > 12); g_286 = safe_add_func_uint16_t_u_u(g_286, 1))
                {
                    int32_t l_4743 = 0x0829D702L;
                    uint64_t l_4765 = 4UL;
                    l_4712++;
                    g_2852 = 0xD.155A5Ap-68;
                    g_1446 |= (safe_mul_func_uint64_t_u_u(0xF4A766960DC08007LL, ((((((65529UL < ((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_231, l_4721)), (safe_div_func_uint8_t_u_u((l_4724 < (safe_rshift_func_uint8_t_u_u(g_3989, (safe_mod_func_uint16_t_u_u((((l_3172 = ((l_4709 = (safe_unary_minus_func_int64_t_s((((safe_mul_func_int16_t_s_s(g_3620, (((l_4702 = (l_3885 >= (~(safe_mod_func_uint32_t_u_u((((((g_3729 = (safe_sub_func_float_f_f((g_662 = (safe_sub_func_float_f_f((safe_add_func_float_f_f((safe_sub_func_float_f_f(l_4743, 0x1.2p+1)), g_2239)), l_4721))), g_1044))) , p_49) , l_4743) <= 0x157E1A3034DEAB7ALL) > p_48), l_4712))))) && 0xEC0CL) , p_49))) || 0x2A2C5227FEE967F1LL) < p_49)))) > 0x8D597E99L)) & l_4744) | 0xCDFE4163L), g_2773))))), p_49)))) >= 18446744073709551610UL)) == 1L) ^ p_48) >= p_49) <= l_4701) && g_2854)));
                    if (((safe_mod_func_uint32_t_u_u((3UL > (g_212 = (((((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((l_4743 & ((0xD164B01776A5BC72LL != (((safe_sub_func_uint64_t_u_u(p_48, (((g_3184 = 0x8B43L) ^ 0x22D7L) , (safe_add_func_uint16_t_u_u((~(safe_add_func_uint64_t_u_u(p_48, (safe_rshift_func_uint8_t_u_s((!0xC714B144L), 7))))), (((((((g_3620 ^= ((((safe_add_func_int8_t_s_s(g_2425, 255UL)) , 0xD20AL) <= p_49) == p_48)) | g_212) == g_111) == (-1L)) == 4294967290UL) < l_4659) & l_4743)))))) > (-4L)) >= l_4765)) >= l_4701)) != l_4765), 0xD5L)), l_3879)) == 0x5ABBC399L) != 0x4AL) <= l_4743) < 65532UL))), (-3L))) ^ 0x79L))
                    {
                        int32_t l_4783 = 0x761F8CD6L;
                        l_3879 |= ((((safe_add_func_int16_t_s_s((((g_2688 &= g_3052) && 0x09D80730L) ^ ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint64_t_u_s((p_49 <= (g_288 <= (safe_mul_func_uint32_t_u_u((g_277 || (+(safe_mod_func_int8_t_s_s((safe_mul_func_int32_t_s_s((0xF320E4D9L ^ (safe_div_func_int16_t_s_s(l_4743, g_694))), ((safe_mul_func_int64_t_s_s((0x15FC6E0BL != p_48), 0x4E56962F508D402ELL)) > p_48))), g_2097)))), l_3883)))), l_4783)) >= l_4667), g_4386)) >= g_1470)), l_4783)) , 8UL) && g_374) > l_3875);
                        g_263 &= p_49;
                    }
                    else
                    {
                        if (l_4765)
                            break;
                        g_281 = 0x6.Fp+1;
                    }
                }
            }
        }
        l_3885 = g_257;
    }
    return p_48;
}
int32_t func_56(float p_57, uint8_t p_58, const int16_t p_59)
{
    int64_t l_3141 = 0xDDB3607B71DECAA3LL;
    int32_t l_3142 = 0x9F86F608L;
    int32_t l_3143 = 0x120F5281L;
    uint8_t l_3144 = 1UL;
    l_3144++;
    return g_884;
}
uint8_t func_80(int64_t p_81)
{
    uint64_t l_3088 = 0x39903E75A60EE9A6LL;
    int32_t l_3091 = 0x8A3D44EAL;
    int32_t l_3117 = 0x65EFAB9CL;
    int32_t l_3118 = (-3L);
    int32_t l_3119 = 5L;
    uint32_t l_3120 = 0UL;
    l_3088--;
    g_282 = g_905;
    l_3091 = 0x41ABAA43L;
    if ((g_374 = (safe_unary_minus_func_int64_t_s((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(7UL, 3)) == 0x61L) , (((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((g_289 |= ((safe_rshift_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((l_3119 = ((l_3118 = (((((((0x92BC7A139A3937DCLL ^ (safe_sub_func_int8_t_s_s((p_81 < p_81), p_81))) , ((l_3091 = (-1L)) > ((0x53L && (safe_add_func_int64_t_s_s((l_3117 &= p_81), p_81))) <= g_1705))) != 1UL) >= 0x51L) ^ l_3088) >= 1L) != g_2094)) , g_1473)), l_3088)) != g_2430), p_81)) >= 0x3EEC66CCL)) ^ g_2740) > g_1473), l_3120)), g_373)) & p_81) , l_3117)), (-4L))), l_3088)) && p_81), p_81)), g_751))))))
    {
        return p_81;
    }
    else
    {
        uint8_t l_3127 = 255UL;
        int32_t l_3136 = 0x74916984L;
        g_2992 = ((safe_sub_func_int16_t_s_s((l_3091 ^= (safe_rshift_func_uint16_t_u_u(l_3120, (safe_rshift_func_uint64_t_u_u(((0xD0L < (-6L)) < l_3127), 33))))), 9L)) , ((safe_add_func_float_f_f((g_2826 = (0xA.77373Cp-80 != (safe_div_func_float_f_f(p_81, (safe_mul_func_float_f_f(((g_1044 = (safe_add_func_float_f_f((-0x10.9p-1), (g_530 == 0x0.Ep-1)))) >= 0x7.Bp+1), 0x4.E69982p-38)))))), l_3127)) < p_81));
        g_1052 = (+p_81);
    }
    return p_81;
}
uint64_t func_82(float p_83, uint8_t p_84, uint32_t p_85)
{
    int32_t l_87 = 0x2DBE4212L;
    int32_t l_2116 = (-1L);
    int32_t l_2135 = (-1L);
    uint64_t l_2205 = 0xD99700D67F267159LL;
    int32_t l_2324 = 0xA99DB717L;
    int32_t l_2325 = 0xD7D6BED1L;
    int32_t l_2326 = 0x244220F2L;
    int32_t l_2327 = 0x62E497D4L;
    int32_t l_2329 = (-9L);
    int32_t l_2330 = 9L;
    int32_t l_2335 = 0L;
    int64_t l_2371 = 0xC16F63DF46A13CE6LL;
    int16_t l_2423 = (-1L);
    int16_t l_2486 = 0L;
    float l_2508 = 0x1.Cp-1;
    int32_t l_2548 = (-8L);
    int32_t l_2591 = (-7L);
    float l_2623 = 0xF.D9C544p-12;
    uint32_t l_2659 = 0x6B9FEC91L;
    uint8_t l_2810 = 253UL;
    uint64_t l_2838 = 18446744073709551615UL;
    int32_t l_2998 = 0L;
    uint8_t l_3016 = 1UL;
    p_84 = p_84;
    if ((l_87 = 0L))
    {
        return p_84;
    }
    else
    {
        const int32_t l_104 = 2L;
        int32_t l_1807 = 0x97B96C3CL;
        l_2116 = (safe_sub_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((g_2115 ^= (safe_rshift_func_uint8_t_u_u(func_96((safe_lshift_func_int16_t_s_u(l_104, 7)), p_84, ((safe_add_func_uint32_t_u_u((func_107(p_85) , (p_84 > g_257)), 4294967295UL)) >= (g_1810 = (((safe_lshift_func_int64_t_s_u((((safe_lshift_func_int32_t_s_u(((safe_add_func_int64_t_s_s((g_1808 = (l_1807 = ((p_84 <= ((safe_lshift_func_int32_t_s_u((((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((g_1497 < g_1705), p_84)), 8L)) || g_1705) && g_18), p_84)) | g_770)) , l_104))), (-1L))) | g_257), 28)) && l_1807) <= p_84), 48)) , l_1807) ^ p_84))), g_279, l_87), l_104))) || l_87), p_85)), 0x5AEAL)) <= 0L), 0x15A01B381D34BD6ELL));
    }
    if (l_87)
    {
        const uint8_t l_2134 = 0xA0L;
        int32_t l_2167 = 0xA6266C4EL;
        uint64_t l_2208 = 18446744073709551606UL;
        int32_t l_2232 = 0x267CFF88L;
        int32_t l_2233 = 0x65670A15L;
        int32_t l_2234 = 1L;
        int32_t l_2236 = (-8L);
        uint8_t l_2261 = 0xCCL;
        int8_t l_2421 = 1L;
        int32_t l_2523 = (-1L);
        int32_t l_2546 = 0x9F70EEBFL;
        uint8_t l_2549 = 2UL;
        for (g_268 = 0; (g_268 != 17); g_268++)
        {
            uint32_t l_2125 = 4UL;
            int32_t l_2139 = 0L;
            uint16_t l_2166 = 0x910DL;
            int32_t l_2170 = 4L;
            int32_t l_2263 = 0xD7C57CCFL;
            uint64_t l_2369 = 0xA5F5BE155424F4BELL;
            int8_t l_2420 = (-1L);
            int32_t l_2428 = 0xE3E8E8F7L;
            uint8_t l_2443 = 0xD0L;
            int8_t l_2547 = 0xE5L;
            uint32_t l_2580 = 0x8D011C84L;
            l_2135 &= ((0xA34AF237L < (((safe_add_func_uint8_t_u_u((g_1470 > ((safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((--l_2125) , (-1L)), (safe_rshift_func_int64_t_s_s((safe_rshift_func_uint64_t_u_s(3UL, (l_2116 = ((safe_sub_func_uint64_t_u_u(g_1757, p_85)) == (p_85 >= (((((l_87 | (g_111 , 0UL)) , l_2134) & p_85) <= 0x19362638A19A5F6ALL) || 65535UL)))))), 57)))) | g_275), g_212)) >= g_884)), g_1498)) > 0x3364L) <= l_87)) , p_84);
            if ((l_2116 |= g_259))
            {
                float l_2138 = 0xD.FFF88Ep-23;
                int32_t l_2176 = 0L;
                uint64_t l_2192 = 0UL;
                int32_t l_2206 = 3L;
                float l_2237 = 0x1.1p-1;
                int32_t l_2328 = 0x7C978BCBL;
                int32_t l_2331 = 0x3FB6CE15L;
                float l_2422 = (-0x1.Ap+1);
                if (((safe_div_func_int32_t_s_s(p_85, (l_2139 = p_84))) || (1L != l_2139)))
                {
                    for (g_257 = 0; (g_257 >= 27); g_257 = safe_add_func_uint32_t_u_u(g_257, 4))
                    {
                        float l_2163 = 0x3.5D0EEDp+67;
                        int32_t l_2171 = 8L;
                        p_83 = (safe_add_func_float_f_f((safe_sub_func_float_f_f((safe_sub_func_float_f_f((safe_mul_func_float_f_f(((-0x1.6p+1) <= ((!((safe_sub_func_float_f_f(((-0x1.Fp+1) != (g_363 = (safe_add_func_float_f_f(((safe_mod_func_uint32_t_u_u(((g_1792 = (l_2139 | g_283)) ^ l_2134), (safe_mul_func_int16_t_s_s((l_2135 = (((p_84 ^ (((safe_mul_func_uint32_t_u_u((safe_lshift_func_int64_t_s_s(p_84, (l_2167 = (safe_lshift_func_int8_t_s_s(l_2166, 4))))), (safe_lshift_func_uint16_t_u_s((l_2170 = l_2116), 3)))) <= l_2134) & g_209)) <= l_2134) || (-1L))), p_84)))) , l_2171), l_2116)))), l_2171)) >= 0x0.7p+1)) < (-0x3.9p-1))), g_694)), 0x0.9p-1)), p_85)), 0x6.5p+1));
                    }
                }
                else
                {
                    float l_2207 = 0xB.190084p-35;
                    l_2139 &= ((((((((g_1473 = ((((((((g_1529 <= ((safe_mod_func_uint64_t_u_u(0xE28BBFA11934B64CLL, p_85)) <= p_84)) & (l_2176 != (safe_mul_func_uint8_t_u_u(((((-1L) & 0L) & (1L >= (safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((l_2116 = (safe_mod_func_uint16_t_u_u((((!g_1340) | p_85) || p_85), 0x8AF1L))), g_2094)) , 0x18E1L) >= 0x96A9L), l_2135)))) == 0x61EF782EF3D417F8LL), p_84)))) , p_85) || g_261) > g_1472) & p_84) || l_87) , 0xE7L)) < g_249) && g_282) != 0x87238A05L) , 1L) <= p_84) != (-8L)) && p_84);
                    g_281 = ((g_206 = ((safe_mul_func_float_f_f(((l_2192--) , (g_206 < ((g_2110 = p_84) <= (l_2176 = ((safe_unary_minus_func_int16_t_s(g_905)) , g_213))))), ((g_1428 = (p_83 = (safe_sub_func_float_f_f(((((((safe_div_func_uint8_t_u_u(((((safe_div_func_int8_t_s_s((g_219 , (safe_mod_func_int64_t_s_s((-1L), (((((l_2134 <= 3L) != ((~((((2L | 0UL) , 0UL) , 0x23F8L) ^ 0x2B3EL)) < l_2205)) | l_2206) || p_85) && 0x9CCC2B4E130D3862LL)))), 0x3FL)) & 1UL) >= l_2116) ^ g_291), p_84)) , g_215) || l_2206) == g_196) , g_374) , l_2135), 0x0.Ap-1)))) > p_84))) != 0xD.84D360p-97)) >= g_694);
                }
                for (g_207 = (-3); (g_207 > 30); g_207++)
                {
                    uint32_t l_2215 = 0x1CB1F973L;
                    int32_t l_2224 = 0L;
                    int32_t l_2225 = 4L;
                    int32_t l_2226 = 0x454DF203L;
                    int32_t l_2277 = 1L;
                    int32_t l_2279 = 0L;
                    int32_t l_2280 = (-3L);
                    uint32_t l_2281 = 0xAC58BEE4L;
                    int32_t l_2323 = 0xB5E6425FL;
                    int64_t l_2333 = (-4L);
                    uint8_t l_2336 = 0xB3L;
                    int32_t l_2396 = 0x6B512160L;
                    if (((l_2226 ^= (l_2139 = (((g_1377 = l_2135) == ((((((safe_mod_func_int32_t_s_s(1L, ((g_285 , (l_2224 = ((safe_lshift_func_uint32_t_u_u(0UL, 3)) != ((--l_2215) , (l_2215 < ((safe_div_func_uint8_t_u_u(((g_905 || l_2176) & ((((l_2206 = (safe_add_func_int32_t_s_s((safe_rshift_func_int32_t_s_s(p_84, g_263)), l_2139))) | 0L) > 0xA332L) <= 9UL)), g_1473)) > 0L)))))) , g_177))) , g_1446) | l_2225) && p_85) ^ 0x9DA4C2DE18A39618LL) > g_1473)) <= p_84))) ^ g_150))
                    {
                        int64_t l_2231 = 0x2B6F056149D8E324LL;
                        int32_t l_2235 = 0xDD8A9607L;
                        int32_t l_2238 = (-1L);
                        int32_t l_2262 = 2L;
                        l_2263 = ((g_1340 <= 4294967295UL) < (((((l_2262 &= (safe_div_func_uint64_t_u_u(((safe_rshift_func_uint32_t_u_s((g_1377 = ((++g_2239) , ((safe_unary_minus_func_uint64_t_u((safe_sub_func_int64_t_s_s((safe_mul_func_uint32_t_u_u(0x9C11D65EL, p_85)), (safe_div_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((0xB10DL & (0x8436L > (safe_div_func_int8_t_s_s((l_2225 |= ((safe_lshift_func_uint64_t_u_s((safe_mul_func_int16_t_s_s(l_2238, (safe_mul_func_int64_t_s_s(0x6298B8BDDE706917LL, (!((((safe_unary_minus_func_int64_t_s(((l_2235 || 1L) || l_2135))) | p_84) >= l_2234) & p_84)))))), 19)) , g_250)), p_85)))) & 0xD142L), p_84)) == 1UL) ^ l_2176), l_2261)))))) < p_85))), 14)) & 0xC22E6016L), l_2238))) != 1L) && g_246) & p_84) <= p_84));
                    }
                    else
                    {
                        uint32_t l_2266 = 0x9E4D6E08L;
                        int32_t l_2278 = 0L;
                        l_2170 |= (((safe_rshift_func_int8_t_s_u((l_2167 |= g_4), 3)) <= (++l_2266)) || (((safe_rshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((l_2135 = (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(0xB1L, ((l_2224 = (((l_2281++) | (safe_mul_func_int8_t_s_s((p_84 , (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((safe_unary_minus_func_int64_t_s(((65528UL > (safe_div_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u((g_374 = (((safe_unary_minus_func_uint32_t_u((safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(g_292, ((((--g_2300) , (+(safe_div_func_float_f_f((((safe_sub_func_float_f_f((g_1105 = (safe_mul_func_float_f_f((safe_sub_func_float_f_f((g_206 = (g_1914 == ((((safe_rshift_func_int64_t_s_u((p_84 < (safe_sub_func_int64_t_s_s((l_2116 = (-9L)), ((+l_2278) == l_2236)))), 2)) , 0x6.1ABB9Bp-35) <= g_273) <= p_85))), g_290)), l_2232))), l_2261)) != p_84) < p_85), g_295)))) > 0x8.99B03Ep+45) , l_2192))), (-1L))))) > 0xF5A5A906L) & p_85)), 3L)), 0x1DFD1393L))) , p_85))) , l_2280) & g_1470) | p_85), l_2236)), p_85))), 0x60L))) ^ l_2224)) , (-2L)))), 0x1698987BL))), l_2263)) != g_872), 2)) <= p_85) > p_85));
                    }
                    if ((safe_add_func_int8_t_s_s(g_372, (((safe_mul_func_int32_t_s_s((safe_add_func_uint16_t_u_u((--l_2336), ((l_2325 = g_266) , (g_1470 ^= 0L)))), (safe_lshift_func_int8_t_s_u((l_2139 = 1L), 6)))) >= (safe_rshift_func_uint64_t_u_u(g_208, 35))) > g_241))))
                    {
                        int32_t l_2370 = 0x61899DE4L;
                        p_83 = ((g_1365 > ((l_2125 > (((safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((((((safe_mul_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((g_212 & ((g_1529 = ((l_2263 |= 65535UL) <= (l_2167 |= g_1757))) | (g_257 && (l_2369 |= (safe_lshift_func_uint16_t_u_u(g_1135, ((safe_mod_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((((g_209 < (safe_mul_func_int32_t_s_s((safe_div_func_int8_t_s_s(g_13, g_120)), l_2233))) & 250UL) > 0x441AL), 1L)) || g_2239) , l_2206), l_2232)) != p_85))))))), l_2280)) < l_2370) , l_2371), g_370)), p_84)) > p_84) & 0xF8L) && 0x0108E6C16B003677LL) || 0xCCL) != l_2331) < 0UL), g_177)), g_46)), g_212)), l_2125)) && l_2167), p_85)) , l_2327) , g_498)) , g_228)) == p_83);
                        l_2206 = (l_2263 = ((safe_lshift_func_uint32_t_u_u(0x26141B88L, (safe_lshift_func_int16_t_s_u(0x8659L, (safe_mod_func_uint8_t_u_u(255UL, (safe_mul_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((l_2135 = ((l_2330 = l_2205) <= p_85)) , (6L < ((((l_2116 |= (safe_rshift_func_int8_t_s_s(p_84, 2))) <= (safe_lshift_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((((l_87 , (safe_rshift_func_int16_t_s_u((((safe_mul_func_int32_t_s_s(((((g_231 ^ p_85) , p_85) && 0x127E089BL) , g_226), g_218)) , l_2331) != l_2134), 5))) , p_85) , g_1365) && 0x536835C5EEC826D3LL), g_177)), l_2331)), p_85))) & 0xE467281AL) != 1L))), g_1110)) , g_120), p_84)), g_279)))))))) >= l_2396));
                        l_2370 |= g_275;
                        return g_1914;
                    }
                    else
                    {
                        uint32_t l_2397 = 18446744073709551610UL;
                        uint16_t l_2400 = 0UL;
                        ++l_2397;
                        l_2400++;
                        if (g_287)
                            continue;
                    }
                }
                g_1377 = (p_85 , ((safe_mul_func_uint16_t_u_u((g_1529 = ((safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(0x3C28273AL, g_1470)), (((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_2261, 3)) == g_905), ((l_2325 = (l_2328 | ((~(0x95A8L ^ l_2420)) , ((g_288 >= 0L) == g_226)))) >= p_85))) | l_2331) && 0x0CD511A5L))), p_84)), g_286)), p_85)) >= l_2232)), l_2421)) , l_2331));
                g_2430++;
            }
            else
            {
                int32_t l_2452 = 0x86A38E80L;
                int32_t l_2477 = 0x216E99DCL;
                int32_t l_2484 = (-1L);
                if (((safe_mul_func_float_f_f(g_215, ((l_2421 > (((((p_84 <= p_84) > ((((safe_div_func_float_f_f(0x4.DAC3D4p+25, (g_1044 = ((+0UL) , (-((safe_div_func_float_f_f(((safe_add_func_float_f_f(l_2236, p_84)) != (g_374 >= p_85)), l_2134)) != l_2335)))))) , 0x318AL) , l_2325) , 65532UL)) , l_2327) > l_2421) == l_2166)) == p_83))) , p_85))
                {
                    float l_2475 = 0x2.28E8AEp+33;
                    int32_t l_2476 = 0xB0B66DD8L;
                    int32_t l_2482 = 0x1B6B656AL;
                    int32_t l_2483 = 0xBF270317L;
                    int32_t l_2485 = 0xE65E6EC9L;
                    int32_t l_2487 = 0x507A4B7FL;
                    int32_t l_2509 = (-6L);
                    g_363 = (safe_sub_func_float_f_f((safe_sub_func_float_f_f(((safe_mul_func_float_f_f((safe_sub_func_float_f_f((((((((l_2452 , (g_1809 = ((safe_mul_func_float_f_f((safe_mul_func_float_f_f(((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int64_t_s_s((l_2452 = (safe_add_func_int32_t_s_s((((safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((safe_div_func_uint8_t_u_u(0x25L, ((p_84 || 7UL) , (((0xB.081C1Ap-61 < (safe_sub_func_float_f_f(l_2369, (safe_div_func_float_f_f((safe_mul_func_float_f_f(g_1809, 0x3.020F7Cp-8)), l_2475))))) > (-0x1.Dp+1)) , l_2371)))) != 0xFFD7F767L) , p_84), l_2476)), p_84)) > l_2476) > p_85), (-1L)))), l_2477)) | 0x73F02DEBC40C3D9ALL), l_2420)) , p_85), g_1105)), 0x4.5D03C4p-23)) == l_2208))) > g_207) >= p_83) > g_2115) > p_83) > (-0x10.1p-1)) < l_2477), 0x0.5702CCp+44)), 0x3.98AF0Ep-69)) > 0x0.3p-1), p_85)), p_84));
                    g_1472 = ((p_84 & (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(g_1810, (l_2476 ^ g_287))), 1))) > ((((--g_2488) ^ ((safe_div_func_int64_t_s_s((safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_int64_t_s_u(((((p_84 && ((0x5FL ^ ((safe_lshift_func_uint16_t_u_u(l_2167, (l_2324 = (safe_sub_func_uint64_t_u_u(l_2484, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((!l_2487) < l_87) , l_2484), p_85)), 3))))))) & p_84)) == p_85)) != p_85) , l_2476) , g_286), l_2234)), l_2423)) <= 4294967295UL), g_284)), l_2421)) && l_2509)) >= 1L) , g_45));
                    l_2523 = (safe_lshift_func_uint8_t_u_u(0x60L, ((safe_add_func_uint16_t_u_u(0UL, (safe_sub_func_int32_t_s_s(((-1L) & ((safe_lshift_func_int16_t_s_s((!p_85), 1)) <= (l_2452 = (1L < p_84)))), (l_2477 |= ((g_289 = ((safe_mod_func_uint32_t_u_u(l_2523, 0xF403AD20L)) <= ((safe_mul_func_int8_t_s_s(((p_84 & 0x76L) , p_85), 0xC9L)) | (-8L)))) == 18446744073709551615UL)))))) == 0L)));
                    g_2526--;
                }
                else
                {
                    uint8_t l_2539 = 0xDEL;
                    uint32_t l_2550 = 1UL;
                    int32_t l_2581 = 0x51376A0AL;
                    g_1809 = ((safe_add_func_float_f_f(((0x1.7C597Cp+70 < g_291) >= ((g_2300 < (safe_mul_func_float_f_f(((g_1428 = (g_693 != (((((l_2428 = ((g_1740 = (safe_add_func_int32_t_s_s(((safe_sub_func_float_f_f(((safe_sub_func_float_f_f(l_2539, 0xA.61CC03p-14)) > 0xB.D2A2D7p-0), ((((l_2234 > (((!(!(p_83 = ((safe_add_func_float_f_f(((safe_add_func_uint64_t_u_u((l_2539 >= l_2546), g_1057)) , p_85), 0x4.6A85A4p-48)) , 0x3.51B524p-93)))) <= p_85) != p_85)) == l_2116) < l_2329) == 0x1.6p+1))) , g_174), 0xF10B76C8L))) , l_2539)) == 3L) , l_2261) > 0x1.0p+1) > 0x0.1p-1))) > p_85), l_2549))) <= 0x8.7F34BAp+90)), l_2550)) != (-0x1.9p-1));
                    l_2484 = (safe_sub_func_uint16_t_u_u((((l_2581 |= (((safe_sub_func_int32_t_s_s((safe_rshift_func_uint32_t_u_s((p_85 || (safe_add_func_uint64_t_u_u((((l_2325 ^= l_2546) , g_288) < (~(safe_sub_func_int32_t_s_s((l_2116 &= ((~(safe_div_func_int32_t_s_s(l_2550, (safe_lshift_func_int32_t_s_s(0xD5702451L, (safe_div_func_uint16_t_u_u(((p_85 || (safe_add_func_int64_t_s_s(((safe_rshift_func_int32_t_s_u(0L, (~((((safe_mod_func_uint64_t_u_u(((safe_mul_func_int64_t_s_s((((l_2549 > ((l_2335 = ((l_2236 = (((safe_rshift_func_uint8_t_u_u(0x50L, l_2523)) , 0xDC5E1A223884EFCBLL) == 0x1A7717D675D0871DLL)) == l_2486)) >= l_2452)) , l_2580) || g_268), l_2369)) , p_84), (-1L))) , g_45) && l_2477) > p_84)))) & p_85), p_84))) || p_85), l_2550))))))) ^ 1L)), 0UL)))), g_2334))), p_85)), 0xE387638EL)) | l_2549) == l_2477)) & 1UL) , g_273), p_84));
                    if (g_212)
                        continue;
                }
            }
        }
    }
    else
    {
        const int64_t l_2586 = 0x919CD197A8E9F680LL;
        int8_t l_2595 = 0L;
        int32_t l_2596 = (-9L);
        uint32_t l_2660 = 7UL;
        int32_t l_2670 = (-1L);
        int32_t l_2675 = 0x19BD4478L;
        int32_t l_2736 = 0x5962659EL;
        int32_t l_2737 = 0x748E29DCL;
        int32_t l_2738 = 0L;
        int32_t l_2739 = 0xA7652BE4L;
        float l_2753 = 0x2.AE6CF2p-26;
        int16_t l_2814 = 0x51FFL;
        uint64_t l_2897 = 0x5411EF1B584C65BALL;
        uint32_t l_3066 = 0x723EA8B5L;
        uint64_t l_3086 = 18446744073709551612UL;
        g_1472 = l_2327;
        l_2329 = g_253;
        g_289 |= g_212;
        if (g_2430)
        {
            float l_2607 = 0xA.C49BB1p-31;
            int32_t l_2618 = 0L;
            g_1377 &= (((65529UL ^ (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_2596 = (((((g_2115 | l_2586) & p_85) >= ((((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(0x23L, l_2116)), l_2591)) < ((!(0xA2B304B4A0A11D31LL <= (((safe_sub_func_uint8_t_u_u(p_85, 0xCBL)) != p_85) || 0L))) || 18446744073709551615UL)) , 1UL) , 0x0DFEB224L)) > l_2486) ^ l_2595)), p_85)), l_2205))) & 0x0388173AL) , l_2596);
            l_2596 = (safe_sub_func_uint64_t_u_u((p_85 < (safe_div_func_uint64_t_u_u(((l_2325 = (safe_rshift_func_int32_t_s_s((g_1529 = (safe_sub_func_int8_t_s_s(l_2595, (l_2548 != ((((safe_mul_func_float_f_f(l_2607, ((safe_sub_func_float_f_f((safe_sub_func_float_f_f(((safe_mul_func_float_f_f(p_85, (p_85 > (safe_add_func_float_f_f((((p_84 , 0xC2DA9726CB758EF9LL) , (g_1044 = (safe_div_func_float_f_f(g_2425, g_250)))) < g_366), (-0x1.6p-1)))))) != l_2205), 0x1.Bp-1)), 0x1.031152p-84)) >= l_2618))) == p_84) <= l_2371) , g_2239))))), 13))) | (-10L)), 4L))), p_84));
        }
        else
        {
            uint32_t l_2637 = 4294967295UL;
            int32_t l_2638 = 1L;
            int32_t l_2668 = (-4L);
            int32_t l_2671 = 0x87B239A8L;
            int32_t l_2673 = (-1L);
            int32_t l_2677 = 7L;
            int32_t l_2684 = (-7L);
            int32_t l_2691 = (-1L);
            int8_t l_2725 = 1L;
            int64_t l_3046 = 1L;
            int8_t l_3047 = 0L;
            l_2638 ^= (g_174 , ((safe_lshift_func_uint64_t_u_u(((((g_1705 | (g_905 &= ((safe_sub_func_uint16_t_u_u((l_2596 ^= ((((g_770 = p_84) < g_207) , (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u((+0x0AL), 11))))) | 0UL)), (((safe_mul_func_uint16_t_u_u((l_2324 < (safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s(p_84)), (safe_lshift_func_int8_t_s_s(g_1446, 6)))), g_263))), g_1914)) > 18446744073709551610UL) || l_2637))) & p_85))) < p_84) > 0UL) , p_85), 31)) < p_84));
            if ((g_1135 && g_2526))
            {
                uint8_t l_2657 = 0x5BL;
                int32_t l_2669 = 0x3579489DL;
                int32_t l_2674 = 0x865DE507L;
                int32_t l_2676 = 7L;
                int32_t l_2680 = 0L;
                int32_t l_2681 = 0xE7DE8209L;
                int32_t l_2685 = 0x55C3D168L;
                int32_t l_2686 = 0x19060499L;
                int32_t l_2689 = 1L;
                int32_t l_2813 = 0x8804B2B7L;
                if (((safe_div_func_int64_t_s_s((((safe_unary_minus_func_int8_t_s((l_2660 ^= (safe_lshift_func_uint64_t_u_s((255UL ^ ((((((-1L) & (g_211 = l_2586)) <= (l_2596 = (((l_2335 |= (~((g_246 != ((l_2327 ^= ((safe_mul_func_int32_t_s_s(((g_1914 ^= 0x142DL) != (safe_div_func_int16_t_s_s((((+((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int64_t_s_u(((~(0xA6L || ((safe_mul_func_int32_t_s_s((p_84 ^= l_2657), (0xC5FAL && (~p_85)))) != g_236))) <= g_2108), 9)), 2)) <= p_85) || p_85) != l_2659)) , l_2638) || g_266), p_85))), g_1110)) >= g_215)) <= g_293)) >= g_2334))) ^ l_2116) >= l_2657))) & l_2595) , 0xF.92F628p+24) , (-3L))), 10))))) || 0xD7L) | l_2657), g_275)) | l_2637))
                {
                    float l_2662 = (-0x1.Cp-1);
                    int32_t l_2667 = 0xA0A87489L;
                    int32_t l_2672 = 0L;
                    int32_t l_2678 = 4L;
                    int32_t l_2679 = 0x6A2ECC1FL;
                    int32_t l_2682 = 0x3B470B26L;
                    int32_t l_2690 = 0xE6D7A05BL;
                    int32_t l_2754 = (-6L);
                    int32_t l_2755 = 0x4FD2E277L;
                    uint8_t l_2756 = 1UL;
                    l_2670 = ((((g_694 &= (+g_2115)) > (((safe_add_func_uint32_t_u_u((((l_2596 = 1L) | (+(+((g_236 = (g_209 = (l_2667 = 0x9F4A116FA23B824FLL))) >= 0xF799B2A8E46D00ACLL)))) <= (--g_2692)), 0x329EBB84L)) == (safe_div_func_uint16_t_u_u((safe_rshift_func_int64_t_s_s((g_207 = ((p_84 ^ p_85) & p_84)), (safe_unary_minus_func_uint16_t_u(g_2426)))), 0x938AL))) & l_2669)) | l_2681) ^ l_2689);
                    g_374 |= ((((safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((--g_2704) & (g_226 & ((safe_div_func_uint32_t_u_u((l_2135 = (safe_lshift_func_uint8_t_u_s((((safe_add_func_int64_t_s_s((l_2678 <= (safe_sub_func_int32_t_s_s((((g_268 = p_85) ^ 0x6A8BL) < ((safe_sub_func_uint16_t_u_u(((((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(((0x56D9AC0ECDB54398LL && p_85) ^ p_85), (safe_add_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((((((g_236 , l_2591) > 0UL) == l_2548) , (-1L)) || 246UL), g_266)) != p_85) , l_2678), g_1740)))), p_84)) , 1UL) > g_1340) ^ g_257), g_210)) && l_2670)), 0x050F2234L))), p_85)) & 5UL) || l_2725), g_196))), l_2672)) > 0x756CL))), g_884)), (-1L))) , l_2638) & p_85) & 1L);
                    p_83 = (g_1428 = (g_662 = (safe_sub_func_float_f_f(0x0.13F1EFp-0, (g_363 = (safe_sub_func_float_f_f((safe_add_func_float_f_f((safe_div_func_float_f_f(((safe_add_func_uint32_t_u_u((((g_253 || (l_2326 < (((g_2740++) <= (+((safe_sub_func_int16_t_s_s((l_2738 = ((safe_add_func_uint32_t_u_u((((!(safe_rshift_func_uint8_t_u_u(((4294967292UL ^ (((((4L || (p_85 & l_2679)) <= ((l_2756++) > p_84)) >= (safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_int8_t_s((2L != p_84))) || 0xA345FFEEL), 15))) | 0x68A3C4D6L) < p_84)) & 9L), g_2115))) | g_2425) >= p_84), l_2739)) , g_13)), 0x23BDL)) != (-1L)))) >= l_2684))) < p_85) | g_1498), l_2691)) , g_213), 0xA.61D962p-28)), p_83)), p_84)))))));
                }
                else
                {
                    uint32_t l_2764 = 0UL;
                    for (g_2425 = 0; (g_2425 != (-18)); g_2425 = safe_sub_func_int16_t_s_s(g_2425, 3))
                    {
                        uint64_t l_2774 = 1UL;
                        int32_t l_2785 = 0xBC56E172L;
                        ++l_2764;
                        l_2638 ^= (g_1110 = p_84);
                        g_374 = (((safe_rshift_func_uint32_t_u_s(l_2676, 5)) <= (((safe_mul_func_uint64_t_u_u(p_85, (safe_sub_func_int16_t_s_s((1UL && p_85), g_213)))) , g_2332) | (l_2785 |= (((--l_2774) == (l_2691 ^= ((0x2DL > (((((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s(((-3L) ^ (l_2677 = (((safe_rshift_func_uint32_t_u_u((l_2326 = (((safe_rshift_func_uint64_t_u_s((p_84 != (-1L)), p_85)) == (-1L)) | g_1498)), 2)) >= 0UL) ^ 0x94AEEAE2L))), p_84)), p_85)) > 4UL) != p_84) && l_2685) < 0x3CL)) < 0xBDD8L))) > 9L)))) | p_84);
                    }
                    if ((safe_rshift_func_int32_t_s_u((g_289 = ((safe_lshift_func_uint64_t_u_s(((safe_div_func_uint64_t_u_u((l_2680 || ((safe_rshift_func_int8_t_s_u(((((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(p_85, (p_84 <= ((safe_lshift_func_uint16_t_u_u((~((l_2684 >= ((safe_div_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_u((l_2810 , ((((((((p_84 != p_85) , ((safe_add_func_int8_t_s_s(0xC4L, p_84)) != l_2684)) > 0xECF8DFB8A2743AF4LL) ^ l_2669) & l_2681) > p_85) , g_285) > 247UL)), l_2813)))), 0x47690A32L)) != 0xF90D930A9F64E16ALL)) , g_236)), g_46)) , l_2814)))), 7)), 4294967286UL)) & g_2108), 2)) >= p_85) > l_2737) || g_196), g_1377)) > 1L)), l_2657)) , 0xE4D8746BD879CA08LL), l_2675)) == l_2659)), p_85)))
                    {
                        uint8_t l_2817 = 0xD0L;
                        g_196 = (~(safe_unary_minus_func_uint8_t_u(((l_2764 | g_2425) & ((l_2817++) == (l_2764 == 0x294068716807C2C7LL))))));
                        return p_85;
                    }
                    else
                    {
                        return g_285;
                    }
                }
                g_2424 = (safe_mod_func_uint32_t_u_u(((safe_mul_func_int64_t_s_s((l_2676 ^= ((safe_rshift_func_int64_t_s_u((((--g_2827) <= 0xDA77L) , (((g_293 || ((safe_lshift_func_uint16_t_u_s(l_2689, 14)) , ((((safe_lshift_func_uint16_t_u_s((p_85 , l_2657), 12)) , (safe_div_func_uint64_t_u_u((l_2737 = (((++l_2838) == (((safe_div_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s(((safe_add_func_uint64_t_u_u(g_1498, ((p_85 && l_2657) != (safe_add_func_uint64_t_u_u(((((g_1529 = (((safe_unary_minus_func_uint8_t_u(1UL)) >= 3L) > 0xCCFBL)) >= 0x26350EECL) ^ g_2526) ^ 0UL), l_2637))))) || l_2671))) || l_2637), p_84)) <= 0xB1FFFC11CDE045C1LL) , 9UL)) , 18446744073709551611UL)), p_84))) , p_84) < l_87))) & 0xD3L) >= p_85)), 11)) != l_2675)), l_2810)) > (-6L)), l_2596));
                g_2854++;
                --g_2857;
            }
            else
            {
                int32_t l_2876 = 0xFDECDAE4L;
                int32_t l_2920 = 0x0D57F163L;
                int32_t l_2921 = (-1L);
                uint16_t l_2928 = 1UL;
                int32_t l_2999 = 1L;
                uint64_t l_3000 = 0x98FC99D745358E81LL;
                int8_t l_3087 = 0x07L;
                if (((l_2691 = 0x938CFEFE1AF5B43FLL) , ((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_2671, (l_2691 = (((safe_sub_func_uint8_t_u_u(l_2325, (l_2677 > p_85))) | 0x70DDL) ^ (safe_lshift_func_int16_t_s_s(((((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((p_85 > l_2876) < (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((((l_2737 = (l_2739 = ((safe_lshift_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((g_2740 ^= g_1757), 8L)), p_84)) || g_2688))) , l_2738) ^ l_2814) , l_2637), g_250)) & p_85), 0xA4L)) & g_866), g_1052)), g_219)) | 0x39E4F0B3L), p_84))), g_498)) < 0L), g_905)) && 0L) >= l_2671) >= p_84), l_2327)))))), 0x13L)), l_2327)) ^ g_2115)))
                {
                    int16_t l_2896 = 0x9A4CL;
                    g_2852 = (safe_sub_func_float_f_f((((((safe_sub_func_int8_t_s_s((((safe_unary_minus_func_int8_t_s((l_2896 = 0xE7L))) == 5UL) > (p_85 && ((l_2897++) >= (g_2425 || (((safe_sub_func_uint16_t_u_u((l_2921 = ((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_int32_t_s_s(((l_2920 = ((safe_mul_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((0x5B9EL & (safe_sub_func_uint8_t_u_u(((l_2876 = (g_2488 != ((safe_div_func_int64_t_s_s((safe_lshift_func_uint32_t_u_u((((((0x1D20L | g_2300) , (safe_rshift_func_int16_t_s_s((l_2335 = (g_240 < p_85)), g_2688))) != g_2110) || l_2371) || g_150), 27)), p_85)) , l_2736))) , 0xFFL), g_287))), 0UL)), p_84)) < 0UL)) | l_2659), l_2637)), l_2638)), g_1740)) <= 0UL)), 9UL)) , g_1110) == 0x1C99E6E9A57C1E8DLL))))), p_84)) >= 0x423FL) & 0x8F05058E93D7E55CLL) < l_2736) , l_2371), 0xC.447AFAp-42));
                }
                else
                {
                    int8_t l_2933 = (-6L);
                    uint32_t l_2936 = 0x444120CCL;
                    int32_t l_2956 = 0x8EE04F05L;
                    int32_t l_2997 = 0xA8A5126BL;
                    int32_t l_3017 = 0x1A0A1B82L;
                    int32_t l_3044 = (-2L);
                    int32_t l_3045 = 0xF0072688L;
                    int32_t l_3048 = 9L;
                    int32_t l_3049 = 0L;
                    int32_t l_3050 = 0x53AC0E5FL;
                    int32_t l_3053 = (-10L);
                    int16_t l_3057 = 9L;
                    if (((g_2300 >= 1UL) ^ p_84))
                    {
                        int32_t l_2923 = 0x3C56C705L;
                        int32_t l_2955 = 0x6C69E2CEL;
                        g_1472 = (l_2923 = (+l_2920));
                        g_210 = (safe_add_func_int32_t_s_s(p_84, ((((((safe_sub_func_uint8_t_u_u(l_2928, (((((((-0x4.2p+1) < (safe_sub_func_float_f_f((((((((((g_1472 = (safe_mul_func_int32_t_s_s(g_1529, l_2725))) , ((((l_2920 < l_2933) | (safe_mod_func_uint32_t_u_u(((g_2424 = (((0x1D487708L <= ((0x83L ^ 0x67L) != l_2936)) | p_84) > g_2300)) && 0x079E88FFL), l_2897))) ^ l_2897) ^ g_2108)) != 0xB9446C15BBE763C1LL) != g_240) <= p_85) || g_196) ^ g_1377) || g_1705) , p_85), p_85))) >= p_83) >= p_85) , 0x38A1L) & p_84) & 0xD57720D2997E35B0LL))) <= l_2637) ^ l_2595) > l_2923) && (-5L)) | 0L)));
                        l_2596 = (safe_mul_func_uint8_t_u_u((g_1048 | l_2923), (l_2326 = (((g_275 | (((((safe_mul_func_float_f_f((p_83 != l_2671), ((safe_sub_func_float_f_f((g_2852 = (safe_sub_func_float_f_f((safe_mul_func_float_f_f((p_84 = p_84), ((safe_sub_func_float_f_f((l_2876 , ((g_1446 = (((((p_85 || (safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint32_t_u_u((((g_207 = (safe_add_func_uint64_t_u_u((l_2955 ^= l_2923), g_884))) <= p_85) > p_85), 3L)) && p_85) , g_259) && p_85), p_85))) != 0x9AD5L) ^ l_2677) | g_2300) , l_2936)) == g_228)), g_2488)) > g_1497))), l_2486))), l_2673)) >= g_231))) , 0L) & 255UL) < p_85) && g_693)) >= l_2956) || l_2936))));
                        l_2326 = l_2921;
                    }
                    else
                    {
                        uint16_t l_2970 = 3UL;
                        int32_t l_2972 = (-9L);
                        g_206 = ((safe_mul_func_float_f_f(((((-0x4.7p-1) >= g_1109) != (safe_add_func_float_f_f((safe_add_func_float_f_f(((+g_1809) > (0xC.BA050Fp-52 < (g_1757 < (g_363 = (((((((((safe_mod_func_int64_t_s_s((((g_2971 = (safe_sub_func_int32_t_s_s(l_2116, (g_1757 == ((((((safe_add_func_uint16_t_u_u((p_84 , ((l_2970 = 0xF8C3L) , l_2675)), 0x7041L)) & p_84) | g_2740) > g_1498) | g_275) != p_85))))) | p_84) != 0xF08B007BDE43C1D6LL), p_85)) | 0x2120L) , p_85) , g_866) , l_2920) | g_240) > g_2115) , 0x1.C2818Cp+85) <= (-0x1.3p+1)))))), 0x1.Dp-1)), l_2972))) == 0xD.EE7376p-60), l_2335)) >= p_85);
                    }
                    for (g_2692 = 0; (g_2692 >= 48); ++g_2692)
                    {
                        l_2116 |= (safe_rshift_func_int64_t_s_u(g_770, 50));
                    }
                    if (((0x7F2DB8183D37A44CLL >= (safe_mul_func_int8_t_s_s(((g_905 = ((l_2691 = ((7L >= (g_1377 = (((g_257 <= (p_84 <= (l_2920 = (safe_mod_func_int8_t_s_s((0xFE79FB75L | (((safe_lshift_func_uint64_t_u_s((0x6EL == ((safe_mod_func_uint16_t_u_u(g_1497, (~g_2332))) < (g_253 != l_2638))), 28)) & g_236) , 0xDE3483C7L)), 0x33L))))) <= 1UL) > 255UL))) != g_257)) , 0x6BD0A097L)) , g_259), 0x9FL))) && 0UL))
                    {
                        return l_2739;
                    }
                    else
                    {
                        int8_t l_2989 = 0x44L;
                        int64_t l_2993 = 0x90947A53DC18D1FDLL;
                        g_206 = ((-0x5.8p+1) > (safe_add_func_float_f_f((+p_83), ((l_2920 = ((((p_85 >= ((l_2989 && (p_85 , (0x1C12C43B0E735323LL | ((-1L) & (l_2670 = (l_2876 |= (l_2814 || (safe_sub_func_int32_t_s_s((((g_1498 = p_84) >= 1L) > p_85), l_2684))))))))) & g_219)) == 0x34A96CD3L) <= p_85) != l_2993)) , g_213))));
                    }
                    for (g_1057 = 0; (g_1057 > 9); g_1057 = safe_add_func_int16_t_s_s(g_1057, 5))
                    {
                        float l_2996 = 0x0.3p-1;
                        int32_t l_3006 = 0x02582E08L;
                        if (l_2668)
                            break;
                        l_3017 |= (((++l_3000) <= (g_1792 ^= ((safe_rshift_func_int8_t_s_u((+(l_3006 , g_2110)), ((safe_div_func_uint32_t_u_u(g_288, l_2897)) > 1L))) ^ l_2586))) | (l_2997 = ((safe_div_func_int8_t_s_s((((safe_unary_minus_func_int64_t_s((g_2332 , (g_2687 |= (l_2920 = (l_2325 = l_2691)))))) != (safe_rshift_func_int16_t_s_s(((((((safe_div_func_uint32_t_u_u((g_366 <= 0x15L), g_2827)) != g_374) <= g_219) && 0L) == g_13) ^ 0L), 4))) , g_218), l_3016)) <= l_2684)));
                        g_281 = ((safe_div_func_float_f_f(g_215, (safe_add_func_float_f_f((g_2427 = (safe_add_func_float_f_f((p_83 = (safe_mul_func_float_f_f(((g_2826 = ((p_85 & (0x0BL > (safe_lshift_func_uint8_t_u_s(p_85, 7)))) , (safe_div_func_float_f_f((safe_add_func_float_f_f(((safe_sub_func_float_f_f(0x1.Ap+1, ((safe_div_func_float_f_f((((0xC.416E47p-77 > (((((safe_add_func_int8_t_s_s(l_2997, ((safe_lshift_func_uint8_t_u_u(((((0x22B0BE6AL <= (safe_mod_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((++g_3054), 0x9367D1A0A4FD943FLL)), p_84))) > 0x47B94FA2L) & (-1L)) && 0xBD360153DB673D9FLL), 4)) | 254UL))) | g_884) > p_85) , p_84) == 0x1.0p-1)) != 0x1.9p+1) > p_84), p_85)) <= p_84))) <= g_2852), l_3057)), p_85)))) != p_83), 0x1.2p+1))), 0x0.Dp+1))), g_1470)))) > 0x8.8CCCFBp+8);
                        l_2324 ^= l_2920;
                    }
                }
                g_289 &= ((p_84 | ((l_2920 | ((((safe_mul_func_uint64_t_u_u(((l_2739 = (l_2999 = g_3054)) , (g_2424 > p_85)), (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((((l_2638 = (p_85 || (g_212 = ((l_2596 = g_295) && (g_229 < (safe_mul_func_int16_t_s_s((p_84 < 0x35D6780244C299DFLL), p_84))))))) || l_2671) > (-8L)) | g_3052), 0x57D9L)), 0x8FA0L)))) ^ p_85) , 1L) | (-1L))) && l_3066)) , (-1L));
                g_281 = ((((((((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((l_3047 , (safe_lshift_func_int64_t_s_s((((~0UL) < (((safe_lshift_func_uint32_t_u_u((g_1446 && ((((safe_mul_func_int8_t_s_s(g_884, (safe_add_func_uint32_t_u_u(((((0xA813L != (safe_rshift_func_int32_t_s_u((((((g_289 ^= (l_2739 &= (p_85 == (p_85 < ((g_1472 < (safe_add_func_uint8_t_u_u((((((safe_sub_func_uint8_t_u_u((p_85 ^ p_84), l_2329)) , 9UL) || 0x98E06D610BB43C22LL) | g_2740) <= l_2999), 0xA6L))) < l_2591))))) ^ g_2094) | (-1L)) >= l_2999) , 0x0FC7ED5CL), 0))) == p_85) ^ p_84) <= l_2999), (-5L))))) ^ p_84) , l_3047) && p_85)), 7)) < 0x03B314AFL) == p_85)) , p_84), 37))) <= p_85) != g_259), 1UL)), l_2999)) && g_1705) == 0L) , 0x9.59099Cp+62) < g_284) >= l_3046) , l_3086) <= g_209);
            }
            return p_85;
        }
    }
    return l_2659;
}
uint8_t func_96(uint16_t p_97, const int16_t p_98, int8_t p_99, int64_t p_100, uint64_t p_101)
{
    float l_1811 = 0x0.Bp-1;
    int32_t l_1822 = 1L;
    uint64_t l_1823 = 1UL;
    int32_t l_1826 = 0x3DCEA735L;
    uint64_t l_1855 = 0x9D2F41C9A073E681LL;
    uint8_t l_1901 = 255UL;
    int32_t l_2050 = 1L;
    uint64_t l_2056 = 0x9846C764C18493EELL;
    int32_t l_2062 = 0xD3F585A0L;
    int32_t l_2083 = 1L;
    int32_t l_2084 = 0L;
    int32_t l_2085 = (-3L);
    int32_t l_2086 = 1L;
    int32_t l_2087 = 0x6C331896L;
    int32_t l_2088 = 0xD8977695L;
    int32_t l_2089 = 0x5F67AADFL;
    int32_t l_2090 = 0xA2FE6BF0L;
    int32_t l_2091 = 0xD7349686L;
    int32_t l_2092 = 0L;
    int32_t l_2093 = 1L;
    int32_t l_2095 = 0x08C30B6CL;
    int32_t l_2096 = (-6L);
    int32_t l_2109 = 5L;
    l_1826 = (((((p_98 != (l_1822 = (safe_sub_func_uint32_t_u_u(((((safe_mul_func_int64_t_s_s(g_284, (safe_sub_func_uint8_t_u_u((1UL < p_99), (+(g_247 & (g_210 = (safe_mul_func_int16_t_s_s(p_97, 7L))))))))) | ((+(l_1823 &= l_1822)) < (safe_sub_func_int32_t_s_s(g_694, l_1822)))) , g_1808) , 0xA4DABA44L), l_1822)))) && (-9L)) , p_97) , g_120) >= g_1365);
    for (g_370 = 27; (g_370 < (-4)); g_370 = safe_sub_func_uint16_t_u_u(g_370, 5))
    {
        uint8_t l_1838 = 249UL;
        int32_t l_1857 = 7L;
        int32_t l_1877 = (-3L);
        int8_t l_1878 = 1L;
        int32_t l_1879 = 1L;
        const int32_t l_2036 = (-1L);
        float l_2049 = (-0x5.Ap+1);
        l_1822 = g_284;
        for (p_100 = 0; (p_100 <= 11); p_100 = safe_add_func_int8_t_s_s(p_100, 6))
        {
            uint32_t l_1846 = 0xAEB4E84AL;
            int32_t l_1851 = 0xA5E8683DL;
            int32_t l_1858 = 0x7217D18FL;
            int64_t l_1861 = 0L;
            int32_t l_1876 = (-4L);
            uint8_t l_1985 = 0x8CL;
            uint32_t l_2015 = 0x843A72E4L;
            uint32_t l_2037 = 4294967294UL;
            int32_t l_2052 = 0x14D6A821L;
            int16_t l_2055 = 0xE49CL;
            if (g_1365)
                break;
            for (p_101 = (-24); (p_101 <= 26); p_101 = safe_add_func_int16_t_s_s(p_101, 8))
            {
                uint16_t l_1852 = 0x88BAL;
                int32_t l_1856 = 0x6A4CE9A9L;
                int32_t l_1859 = 1L;
                int64_t l_1860 = 0x9F8A39762DBD0578LL;
                uint32_t l_1862 = 4294967286UL;
                uint8_t l_2038 = 7UL;
                g_1740 &= (safe_div_func_uint32_t_u_u((l_1862 ^= ((g_694 < ((!(safe_sub_func_float_f_f(0x3.F2A3D7p+61, l_1838))) , ((-((p_100 >= (g_1428 = (safe_add_func_float_f_f((-0x1.9p-1), ((safe_lshift_func_uint32_t_u_s(((p_100 > ((safe_sub_func_uint32_t_u_u((((l_1846 == 0x3AL) , (((l_1855 = ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((--l_1852), g_215)), l_1838)) <= (-8L))) , l_1846) != 0UL)) > l_1856), 8UL)) && p_98)) && 0xA78DL), p_99)) , p_98))))) == l_1861)) > p_98))) , p_97)), l_1856));
                l_1879 = (safe_add_func_int64_t_s_s(0xFFD3C29DDE4AA7FDLL, (0x6FL & ((!(safe_add_func_int64_t_s_s(p_99, (safe_rshift_func_uint8_t_u_u(((l_1857 = 0x261BB8A9L) <= (safe_mod_func_int32_t_s_s((l_1877 = (safe_div_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((7UL > ((p_100 != (l_1852 && (l_1858 = (-1L)))) || (l_1856 = 0x55036B6BADF36D4CLL))), l_1876)) , g_208) == (-1L)), p_101))), l_1878))), 5))))) , 0x3DL))));
                if (p_99)
                {
                    uint64_t l_1902 = 18446744073709551615UL;
                    int32_t l_1903 = 0x45F2148FL;
                    int32_t l_1904 = 6L;
                    uint32_t l_1905 = 5UL;
                    g_1525 = 0x0.Dp+1;
                    if ((safe_lshift_func_int32_t_s_u((l_1876 = (l_1905 = (safe_rshift_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((((255UL < ((l_1904 &= ((+g_1340) <= (((safe_rshift_func_int32_t_s_s(l_1838, 27)) < (g_1470 = 0x08C2L)) || (l_1822 ^= (safe_mul_func_uint64_t_u_u((~(l_1877 |= (((((g_1757 & (safe_lshift_func_uint32_t_u_s((safe_sub_func_uint32_t_u_u((+((0xFDE9050A82475C4ALL | (((((l_1902 = (l_1901 = (safe_add_func_uint8_t_u_u((g_228 || (safe_add_func_int16_t_s_s(p_98, 0xD437L))), 0x19L)))) == 0L) , 0xAC8D3EFFL) , l_1903) | 18446744073709551615UL)) , (-1L))), p_98)), g_287))) | 0xA6E0F086L) <= g_866) && (-6L)) <= 1L))), 0x70872B6FBA32D2C2LL)))))) , 0x0EL)) || 0x51L) < 0x11L), g_370)) >= g_498), g_905)))), l_1823)))
                    {
                        int8_t l_1912 = 9L;
                        int32_t l_1913 = (-1L);
                        g_289 |= (l_1877 = ((((safe_lshift_func_uint64_t_u_s((l_1904 = (safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s(0L, g_1705)), (++g_1914)))), (0xA254L || (safe_sub_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((-3L), (safe_div_func_int32_t_s_s(((p_100 ^ (g_374 >= p_99)) , (((p_99 = l_1912) || 0xEDL) & g_275)), p_98)))), g_1470)), 65535UL)) <= 0xFF70C1AB148D1721LL), g_279))))) == g_275) , g_236) || l_1851));
                    }
                    else
                    {
                        int32_t l_1927 = 0x4D7619CBL;
                        int32_t l_1933 = 0x625A0BB5L;
                        g_283 = ((((l_1858 || (g_693 = (l_1927 ^= g_289))) && (+(safe_rshift_func_int8_t_s_u(p_99, 2)))) < (safe_mod_func_int16_t_s_s((l_1933 || (safe_div_func_uint16_t_u_u((g_240 , (~((-1L) & ((((1L >= g_1757) , (((((safe_mul_func_uint32_t_u_u(g_13, l_1933)) <= 0xB50670CCL) , 1L) , l_1878) >= p_98)) != p_100) & g_219)))), p_101))), 0xD74AL))) , g_1340);
                        l_1904 ^= (safe_lshift_func_int32_t_s_u(((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((((((((safe_add_func_uint64_t_u_u((((g_289 ^= (0xCC9CL || ((g_1377 = ((p_97 , (safe_div_func_uint64_t_u_u((((~(safe_rshift_func_int32_t_s_u((((safe_mul_func_int16_t_s_s((p_99 > p_97), (((l_1859 = 0x8B8BC0BEL) , (safe_mul_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_int64_t_s_s(g_253, 28)), (((((safe_add_func_int16_t_s_s(((g_290 |= (safe_mul_func_int32_t_s_s(g_694, (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_249, ((((safe_lshift_func_uint8_t_u_u(p_100, 1)) , 0xDCBBL) <= l_1823) >= l_1822))) >= 18446744073709551611UL), p_97)), 0x28A8A0E7L))))) , l_1855), 65535UL)) < g_287) > 4294967295UL) <= 0x317FED59L) == 0xFDECA9649CD2AE43LL))), p_97))) >= 4L))) > 0x2270127B4FFB9ECELL) ^ p_101), 18))) & l_1933) , g_211), 0xEEDFEC0AD06A1FF4LL))) < p_98)) <= 1UL))) & l_1856) || g_219), 5L)) == p_101) <= g_1497) | p_100) & g_241) ^ g_45) && 0x04BD8ED0L), 15)) ^ l_1846), 4294967295UL)) , l_1877), 14));
                    }
                }
                else
                {
                    uint16_t l_1984 = 0x4D10L;
                    uint64_t l_1988 = 0UL;
                    int32_t l_2034 = 0x413756A7L;
                    int32_t l_2035 = (-10L);
                    int32_t l_2051 = 1L;
                    int32_t l_2053 = 4L;
                    int8_t l_2054 = 1L;
                    l_1879 = (safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s((((l_1985 = (safe_mod_func_int8_t_s_s(l_1877, (safe_mod_func_uint8_t_u_u((l_1822 = 0xA0L), (0xF1L & l_1984)))))) > (-10L)) > (((safe_add_func_uint16_t_u_u(0xB747L, g_282)) >= (l_1988 <= ((((safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s(((l_1876 &= ((((safe_div_func_uint16_t_u_u(0x1DDAL, g_693)) == 0x50L) | g_285) , 0xA09DB32DL)) >= 0x1210002EL), l_1851)), g_196)) != 0x306AEF729F63DBA3LL) >= 0UL) & p_99))) & p_100)), 0xC6L)) > (-9L)), p_100)) != l_1826), 1UL)), 0xD9L));
                    l_2038 = ((safe_mod_func_uint16_t_u_u((0x92F11A1F1D23220BLL < (safe_lshift_func_uint64_t_u_s(((1UL < (safe_mod_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s((g_290 & 1L), ((g_693 = ((((((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((p_97 = p_97), (safe_mul_func_uint8_t_u_u(((((l_2015 || (l_1857 = (l_1879 &= (safe_mod_func_int32_t_s_s(((((g_177 = g_1365) != ((safe_mod_func_uint8_t_u_u(l_1862, (safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u((l_2034 &= (safe_rshift_func_int64_t_s_u((safe_mul_func_int64_t_s_s((safe_add_func_int64_t_s_s(((((safe_add_func_uint32_t_u_u((safe_div_func_int64_t_s_s((5L >= p_101), g_1740)), 1UL)) >= g_207) < 0x7F19CC77L) > l_1858), g_295)), p_99)), 38))), l_2035)), g_196)))) <= g_253)) , p_100) && p_98), 0xEAC7C430L))))) < 3L) , g_884) || l_1860), g_372)))), 0x672FL)), g_286)), l_1985)), p_100)) & 0x12D2AB00L) & p_100) < l_1988) , g_370) || l_2036)) | 1L))) | p_101), l_2037))) && 4L), 38))), g_257)) != 1L);
                    g_1428 = (safe_sub_func_float_f_f(p_101, (((safe_div_func_float_f_f((((4294967295UL >= ((l_1859 &= ((safe_mul_func_int8_t_s_s((l_1901 != g_1808), (((p_100 == (g_207 & (l_1826 = p_101))) , (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_288, ((g_1525 = (l_2049 == g_177)) , 3L))), g_4))) & g_231))) > g_273)) <= p_99)) , p_97) < p_98), 0x1.60ABAFp-26)) > l_1858) < p_100)));
                    l_1856 ^= (l_1826 == p_98);
                }
            }
        }
    }
    l_2056 = p_100;
    l_2109 = (safe_div_func_int8_t_s_s(l_1826, (g_1377 = (~((l_1822 = (safe_lshift_func_int32_t_s_s((1L >= 0x9A3D59B8L), 21))) > (((l_2062 = g_209) > (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_int32_t_s_s((l_2089 = (safe_add_func_int64_t_s_s((((safe_rshift_func_uint32_t_u_s((((safe_mod_func_uint64_t_u_u(((p_99 , (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_2050, p_97)), (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((g_2097--), (safe_lshift_func_uint16_t_u_u(l_2086, 0)))), 4))))) != (safe_add_func_uint8_t_u_u((safe_lshift_func_uint64_t_u_s(((safe_lshift_func_uint16_t_u_s((--g_2110), 7)) , ((safe_mod_func_int16_t_s_s(p_97, 65528UL)) && 3L)), p_99)), p_100))), g_1470)) != 1L) ^ l_2085), 29)) ^ 18446744073709551615UL) >= 0x6063L), p_101))), l_2093)), 246UL)), p_98))) > l_2095))))));
    return l_2095;
}
uint32_t func_107(int32_t p_108)
{
    uint8_t l_109 = 0UL;
    int32_t l_110 = 0x390E64C7L;
    int32_t l_1779 = (-10L);
    int32_t l_1780 = 0x4FF9414AL;
    int32_t l_1781 = 0L;
    int32_t l_1782 = 0xA28BE1FAL;
    int32_t l_1783 = 0L;
    int32_t l_1784 = 0xBA043453L;
    int32_t l_1785 = 0xAF56D1CDL;
    int32_t l_1786 = 0x6AAFE27EL;
    int32_t l_1787 = 0xE1D27DB7L;
    int32_t l_1788 = (-1L);
    int32_t l_1789 = 8L;
    int32_t l_1790 = 0xA7E3D660L;
    int32_t l_1791 = 7L;
    if ((l_110 |= l_109))
    {
        g_111 ^= 0x0A12E6C4L;
    }
    else
    {
        return p_108;
    }
    l_1779 &= func_112(((safe_add_func_int16_t_s_s((func_117(g_111, g_4) , (safe_mul_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((g_246 , (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s(((((((+(0x9.EE5FE3p-50 == (safe_sub_func_float_f_f((safe_sub_func_float_f_f((safe_mul_func_float_f_f((((safe_div_func_float_f_f(((g_1105 = (p_108 == (g_247 = g_241))) <= 0x0.8p+1), ((p_108 >= g_1365) > g_1705))) != p_108) < l_110), p_108)), 0x9.433D10p-10)), 0x0.9p-1)))) , l_110) , 0UL) < 0x38E716ACL) , 0x8AD58BF8L) & g_735))), 0xDDABC98020321D6ALL))), g_207)) <= 0x0AA58BDEDA6B4A7BLL), l_109))), g_770)) || l_110), l_109);
    ++g_1792;
    return g_213;
}
int32_t func_112(int16_t p_113, int16_t p_114)
{
    int32_t l_1778 = 0L;
    g_1377 = ((0xF4BFB243E7476E42LL != p_113) <= (-9L));
    for (g_213 = (-27); (g_213 == (-2)); g_213++)
    {
        return p_114;
    }
    return l_1778;
}
uint64_t func_117(int32_t p_118, uint8_t p_119)
{
    uint8_t l_135 = 252UL;
    int32_t l_151 = 1L;
    int32_t l_152 = 0x5C702051L;
    int32_t l_153 = 6L;
    int32_t l_154 = 0xF5C60D0FL;
    int32_t l_223 = 5L;
    int32_t l_224 = 0x209D23E5L;
    int32_t l_225 = 0x957D00FEL;
    int32_t l_233 = 1L;
    int32_t l_235 = 0L;
    int32_t l_239 = 0L;
    int32_t l_242 = 0L;
    int32_t l_254 = 0L;
    int32_t l_258 = 4L;
    int32_t l_269 = 9L;
    int32_t l_276 = 0L;
    int32_t l_278 = 0x3E7599D4L;
    int32_t l_577 = 8L;
    int16_t l_594 = 0x84BFL;
    int32_t l_748 = (-6L);
    uint32_t l_1040 = 4294967295UL;
    int64_t l_1084 = (-4L);
    int8_t l_1186 = 0xCFL;
    int32_t l_1292 = 0x98801DA7L;
    uint64_t l_1443 = 0xDE20CE79F1734C49LL;
    uint32_t l_1482 = 1UL;
    int32_t l_1630 = 0x99A9C856L;
    uint8_t l_1653 = 255UL;
    int32_t l_1692 = (-9L);
    const uint8_t l_1720 = 0xBFL;
    --g_120;
    if (((safe_mul_func_uint8_t_u_u(((l_154 = (safe_rshift_func_uint32_t_u_s(((safe_add_func_uint64_t_u_u((g_46 = g_46), (safe_div_func_uint32_t_u_u((18446744073709551614UL > (((l_153 ^= (safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(l_135, (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_118, ((g_13 == (safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((((l_152 = (safe_rshift_func_uint64_t_u_s(((p_119 = l_135) , (((l_151 = (((((((safe_mod_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((g_150 && l_135) < p_118), g_13)), 2UL)) , 1L) == 3UL) ^ p_118) , p_119) && p_118) || g_4)) || l_151) >= p_119)), g_4))) || 0x01F9L) ^ 0UL), l_135)) >= g_4), p_118))) != l_135))), g_18)))) >= 0x402E0EFCL), l_135))) || 0xB0E876F31F8A0258LL) <= 0x81EE239CA810D894LL)), 0xF8D07FB1L)))) || 4UL), 9))) && 0xCE4CL), g_4)) || l_151))
    {
        int32_t l_164 = 0xF126ED30L;
        int32_t l_188 = 0L;
        int32_t l_191 = 0x68067CFBL;
        int32_t l_192 = 0xB2B73F0FL;
        int32_t l_237 = 0xCE53CA36L;
        int32_t l_243 = (-5L);
        int32_t l_244 = (-1L);
        int32_t l_251 = 0xEA19F92DL;
        int32_t l_256 = 0L;
        int8_t l_262 = 5L;
        int32_t l_264 = 1L;
        int32_t l_265 = 3L;
        int32_t l_272 = 1L;
        if (g_111)
        {
            int32_t l_161 = (-10L);
            int32_t l_205 = 0xB20C3971L;
            int32_t l_214 = (-3L);
            int32_t l_216 = 0L;
            int32_t l_221 = 0x8FFA70ABL;
            int32_t l_232 = (-7L);
            int32_t l_234 = 0L;
            int32_t l_255 = 1L;
            int32_t l_267 = 9L;
            int32_t l_274 = 0x4C8DAE2FL;
            for (g_111 = 21; (g_111 <= 27); g_111++)
            {
                g_174 |= ((((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_161, (safe_rshift_func_uint16_t_u_u(l_164, 8)))), 15)) < 1UL) != ((0x26C73D51CD1B9B51LL ^ (safe_rshift_func_int16_t_s_u(((((+((g_45 , (((l_161 ^ ((l_151 == (safe_mod_func_uint32_t_u_u((l_164 && (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((((-1L) != 0L) , 0xCD4103A8L), g_18)), 0x0BB767B3L))), g_46))) , p_119)) > 0xA1L) >= g_111)) > p_118)) , g_46) , l_154) | p_119), 4))) == 0x977D5910F19133D4LL)) && g_18);
            }
            for (g_111 = 0; (g_111 != 12); g_111 = safe_add_func_int16_t_s_s(g_111, 1))
            {
                int8_t l_180 = 9L;
                int32_t l_189 = 0xC019F83AL;
                int32_t l_190 = 0x01D493DCL;
                int32_t l_217 = 0x97F9317DL;
                int32_t l_220 = 0xAEA437ACL;
                int32_t l_222 = 0xAB8C6AB6L;
                int32_t l_227 = 0x8CD85757L;
                int32_t l_230 = 7L;
                int32_t l_238 = 0L;
                int32_t l_245 = 0L;
                int32_t l_248 = 0xCE57EE25L;
                uint16_t l_260 = 0UL;
                int32_t l_270 = 0xC086913BL;
                int32_t l_271 = (-5L);
                int32_t l_280 = 0L;
                l_192 &= (l_191 = (g_177 , (l_151 = ((1UL && p_119) < ((safe_sub_func_uint8_t_u_u((l_180 || ((((l_190 = (safe_div_func_uint8_t_u_u(g_45, ((l_189 &= (safe_unary_minus_func_uint32_t_u((safe_mul_func_int16_t_s_s(((l_161 || ((l_188 |= ((0x5AL != (((((g_177 ^= p_119) && (l_164 ^= (l_161 = (safe_sub_func_uint16_t_u_u((p_119 , g_46), p_119))))) | 4L) != g_174) >= 248UL)) , 0xA2031C69L)) > l_180)) == 4294967295UL), 0x8811L))))) | g_45)))) , l_180) , l_164) < 0xFE3E8DDC735B24D1LL)), p_119)) | 4UL)))));
                if (l_191)
                    continue;
                g_294 = (g_281 = (((((+(g_120 == (safe_sub_func_float_f_f((g_196 = g_13), 0x7.Cp+1)))) == p_119) != g_13) > (safe_sub_func_float_f_f((l_161 < (safe_sub_func_float_f_f((safe_mul_func_float_f_f((p_119 < ((g_18 <= (g_206 = ((safe_lshift_func_uint32_t_u_u(p_118, p_119)) , 0x1.Cp+1))) < l_191)), p_118)), l_135))), l_189))) == 0xF.230733p-41));
            }
            ++g_295;
        }
        else
        {
            int32_t l_298 = 0L;
            int32_t l_299 = 9L;
            int32_t l_300 = 0xC7C84F3AL;
            uint32_t l_301 = 1UL;
            --l_301;
        }
        l_272 = (l_269 = 0L);
        return l_233;
    }
    else
    {
        int8_t l_310 = 0xC1L;
        int32_t l_311 = (-8L);
        int32_t l_312 = 0x2E098D1BL;
        int32_t l_313 = 7L;
        uint32_t l_360 = 4UL;
        int64_t l_371 = 1L;
        int64_t l_529 = (-3L);
        int32_t l_842 = (-1L);
        float l_847 = 0x0.Bp+1;
        int32_t l_858 = 0L;
        int8_t l_880 = 0x73L;
        int32_t l_881 = (-2L);
        const uint32_t l_991 = 4294967295UL;
        int64_t l_1268 = 8L;
        uint32_t l_1395 = 1UL;
        uint32_t l_1560 = 0x4297A381L;
        uint16_t l_1604 = 65529UL;
        uint32_t l_1737 = 0xEAF0DFECL;
        if ((((((p_118 || (((((g_240 & ((+g_283) && (((safe_rshift_func_uint8_t_u_s(l_239, (g_285 = g_213))) < g_283) && p_119))) , l_153) , (l_312 = (g_208 = (l_311 = (((+(l_310 = ((safe_mod_func_int8_t_s_s(l_269, 0x12L)) | p_118))) >= l_154) ^ g_283))))) <= l_313) , l_151)) , p_118) >= 0x0286L) <= g_196) > p_119))
        {
            int16_t l_351 = 0x763BL;
            int32_t l_361 = 0x5B5EA080L;
            int32_t l_407 = (-1L);
            uint16_t l_435 = 65535UL;
            uint8_t l_533 = 0xA4L;
            uint32_t l_559 = 0xA8B6AC57L;
            for (g_241 = 0; (g_241 != 40); g_241 = safe_add_func_int64_t_s_s(g_241, 8))
            {
                float l_324 = 0x5.445221p-67;
                int32_t l_345 = 0x543AAA62L;
                int32_t l_367 = 5L;
                int32_t l_368 = 0x23AD1BBFL;
                uint16_t l_454 = 0x759FL;
                uint16_t l_552 = 0xBEE3L;
                if (((safe_mod_func_int64_t_s_s((((l_313 = (safe_add_func_int64_t_s_s(0x0DE910D8181497D2LL, ((((safe_sub_func_uint32_t_u_u((l_235 <= ((safe_sub_func_int64_t_s_s((((p_118 != (safe_div_func_float_f_f((-0xB.5E314Ap-20), (safe_div_func_float_f_f(g_290, ((safe_div_func_float_f_f(((safe_add_func_float_f_f(0x1.7p+1, (safe_div_func_float_f_f((safe_div_func_float_f_f(((!((safe_sub_func_float_f_f((safe_mul_func_float_f_f(p_119, g_213)), p_119)) < g_282)) >= g_282), p_119)), 0x9.1CCB83p-76)))) < l_235), p_119)) == 0xC.D68DE2p+53)))))) , g_286) || l_135), (-1L))) > g_111)), p_119)) , p_119) <= 18446744073709551614UL) , 0xA8BC2D7498733808LL)))) ^ 0xC5B85297L) > l_345), 3L)) <= l_276))
                {
                    int16_t l_352 = 0x54E5L;
                    int32_t l_365 = (-1L);
                    int32_t l_369 = 1L;
                    if ((safe_div_func_int32_t_s_s((!((safe_lshift_func_uint32_t_u_u(p_118, 6)) <= (l_352 |= (l_351 |= (-9L))))), 0x0B0B8D69L)))
                    {
                        int8_t l_359 = (-1L);
                        int32_t l_362 = 0xED306EE1L;
                        int32_t l_364 = (-5L);
                        l_313 = (safe_mul_func_int32_t_s_s((((safe_lshift_func_int64_t_s_s(g_246, 59)) | (g_212 , (((l_345 = (safe_rshift_func_int16_t_s_s(((((g_212 |= (g_284 & l_345)) , l_359) != (p_119 != ((l_360 = 0x154E9BBA045BBC91LL) ^ (l_361 = g_277)))) & p_118), p_119))) ^ g_286) >= 0xCD069B10L))) >= g_228), 1UL));
                        g_374--;
                        g_289 &= (((l_362 = (safe_rshift_func_uint64_t_u_s(((safe_lshift_func_int64_t_s_s((safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((safe_rshift_func_int64_t_s_u((safe_mod_func_int64_t_s_s(0xDE7C2BC51397EB43LL, ((safe_lshift_func_uint8_t_u_s(l_361, ((((safe_mod_func_int64_t_s_s(g_210, l_312)) >= (1UL == (l_407 = (safe_add_func_int64_t_s_s(l_352, ((safe_mul_func_int64_t_s_s((((safe_sub_func_int32_t_s_s((5UL & ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s(p_119, (((safe_lshift_func_uint32_t_u_s((safe_div_func_uint16_t_u_u(((g_210 >= p_119) || l_235), l_351)), 9)) || (-5L)) , 1L))) && l_310), 5UL)) <= p_118)), g_253)) & g_261) ^ 0x51L), p_119)) & p_118)))))) > g_279) , p_119))) , p_119))), g_210)) && 1UL), l_362)) > 7UL), g_211)), 31)) | l_239), g_288))) < 0xF8L) > p_118);
                    }
                    else
                    {
                        uint8_t l_434 = 0xE1L;
                        l_368 |= ((safe_sub_func_uint64_t_u_u(0x7DA083C917601D9BLL, ((g_229 ^ ((safe_rshift_func_int8_t_s_s(9L, ((safe_lshift_func_uint64_t_u_s(((g_257 , ((g_374 = (safe_mul_func_uint64_t_u_u(0xCCECD1D29F4713C0LL, ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(p_119, ((((safe_rshift_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint64_t_u_u(g_370, p_119)), (((l_407 = 0x038BL) < 0x8FB4L) == g_285))) | 6UL), (-4L))), g_295)) ^ 0xDEL) && 4294967295UL) < p_118))), 0x2E8BE2C4E97EC47DLL)) != g_253), 0x2084L)), 1)), 0x99L)) ^ l_367)))) >= l_434)) & 1UL), 23)) && 0xDA1B3B349EF4A7C9LL))) | l_435)) == l_313))) && p_118);
                    }
                    if (l_278)
                        continue;
                    for (l_351 = (-13); (l_351 > (-24)); --l_351)
                    {
                        l_367 |= g_212;
                        g_226 &= (g_45 = (l_351 , g_45));
                    }
                    if ((((g_283 > (safe_mul_func_float_f_f((g_206 = 0xE.AAE325p-14), (-0x4.5p+1)))) , (l_407 = (safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(0xF530L, (safe_lshift_func_int16_t_s_s((((g_289 = l_367) && 0x427AFAB585A91757LL) >= ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((4294967288UL >= (((l_454 = 0x1AL) , (safe_div_func_int64_t_s_s((l_313 = ((((safe_add_func_int16_t_s_s((~(!(-1L))), p_118)) <= l_365) & l_235) ^ l_454)), l_407))) == 0xCC5C8237L)), p_119)), p_118)), 2L)) && 18446744073709551611UL)), 3)))), 1L)) == g_120), g_293)))) < g_259))
                    {
                        l_369 = ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(g_279, ((safe_sub_func_uint16_t_u_u((g_293 >= 0xEA19C42E012E5895LL), (p_118 , (((g_252 < g_253) ^ (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint64_t_u((((g_229 == (safe_add_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((l_365 ^= (safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_lshift_func_int32_t_s_u(g_290, 23)), 10)) , g_213), (-1L)))) > 0L), 1)) != g_211), l_369)) < p_118) <= p_118) >= p_118), 0x1733L))) || p_119) && p_118))), 3))) <= g_374)))) && p_119))), 8)) , 18446744073709551607UL) || g_247), 4)), p_119)) | g_261);
                    }
                    else
                    {
                        uint32_t l_486 = 0x9B088932L;
                        uint8_t l_503 = 253UL;
                        l_486--;
                        l_368 |= g_210;
                        l_407 = (!(((safe_div_func_int32_t_s_s((((safe_add_func_int16_t_s_s((l_225 = g_253), ((g_212 &= 0xB111EF7BL) , (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int64_t_s_u((g_498 > (safe_div_func_uint64_t_u_u(((((safe_rshift_func_int64_t_s_s((p_119 >= l_503), (l_367 = (safe_lshift_func_int32_t_s_s((safe_add_func_int64_t_s_s((((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s(0L, ((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((safe_sub_func_int8_t_s_s(0L, (4294967295UL && ((g_250 = l_454) && l_368)))) > 0x3895L) && g_249), 4)), g_13)), l_503)) < p_118), g_289)) | g_277))) && l_454) <= p_118) < p_119), g_252)) <= 0x23L) > g_226), (-1L))) > l_486) , (-7L)), 0xE838CCD62B2E0209LL)), g_247))))) ^ l_310) , l_368) >= g_218), g_45))), g_285)) >= p_119), l_152))))) == 18446744073709551613UL) >= 18446744073709551615UL), 0x1D9EB6B4L)) , p_119) && p_119));
                        l_345 = (l_369 &= 0x4D222F85L);
                    }
                }
                else
                {
                    int16_t l_528 = 6L;
                    uint8_t l_544 = 255UL;
                    l_544 = (safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(p_118, 0x74A3021AL)) || (((((g_247 && ((g_530++) ^ 0L)) , (l_367 &= (l_533 ^= (l_313 ^= 1UL)))) >= ((g_210 = (((l_224 | ((safe_rshift_func_uint32_t_u_s(((safe_rshift_func_int8_t_s_u((((safe_add_func_int8_t_s_s((safe_rshift_func_uint64_t_u_u((p_118 & (safe_mod_func_uint64_t_u_u((l_311 |= (p_118 > (-1L))), l_368))), 41)), 4L)) , l_311) | 0x1C0FAB3579C4F052LL), p_118)) ^ 0xF18263FFD70F741CLL), g_120)) < p_118)) == 0x12L) & g_218)) , 0x675DL)) || 0x7E6054026ABD1094LL) & 1UL)), 255UL));
                    if (g_288)
                        break;
                }
                g_206 = ((safe_div_func_float_f_f((g_236 > (safe_mul_func_float_f_f(g_293, (((safe_sub_func_uint32_t_u_u((!((l_552 != ((l_577 = (((safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((l_559 |= 0UL) <= (safe_add_func_uint64_t_u_u((((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_add_func_int8_t_s_s((p_118 ^ (safe_add_func_uint16_t_u_u(p_119, (((safe_mul_func_uint16_t_u_u((1L | (safe_sub_func_int8_t_s_s(l_368, ((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((g_174 = p_119) != 0x88FBL), p_119)), 0xA4L)) , 0x82L)))), g_273)) , l_368) , 0xDEE7L)))), 1UL)) , 1UL))), 0x066023E1L)) , g_268) > 1UL), g_372))), 0L)) > 4UL), g_236)) , l_345), p_118)) > 9UL) || 9UL)) < g_292)) && g_257)), p_119)) , 0x0.Dp-1) == p_118)))), l_371)) == p_118);
                l_368 ^= p_119;
            }
            l_407 = 0L;
            g_281 = (((safe_div_func_float_f_f((safe_mul_func_float_f_f(p_119, (safe_add_func_float_f_f(((safe_mul_func_float_f_f(0x1.C5DBEEp+73, ((safe_add_func_float_f_f(p_118, ((l_235 < ((g_363 = ((g_363 , (p_119 == (g_219 = l_533))) == (g_294 = ((safe_add_func_float_f_f(((safe_div_func_float_f_f((((safe_add_func_uint8_t_u_u(((((p_118 >= (l_254 == l_529)) && p_118) & g_373) , l_311), g_231)) > 0xD5B11FA2226192EBLL) , 0x0.Cp-1), p_119)) == g_275), 0x4.C0010Bp+15)) <= 0xF.185931p-51)))) < p_119)) < l_224))) >= g_150))) > 0x6.9963ADp-28), p_119)))), 0x6.66FD07p-80)) < (-0x3.Ap+1)) < g_281);
            if (l_594)
            {
                g_210 = g_261;
            }
            else
            {
                float l_597 = 0xA.03AF1Ep+89;
                int32_t l_598 = 0xE760DDEFL;
                for (l_559 = (-10); (l_559 == 33); ++l_559)
                {
                    return l_598;
                }
            }
        }
        else
        {
            const int8_t l_601 = 0xAAL;
            int32_t l_618 = 4L;
            int32_t l_641 = 0xB8B4CFB0L;
            int64_t l_750 = 1L;
            g_206 = (safe_mul_func_float_f_f(g_498, l_601));
            for (g_219 = 0; (g_219 <= 13); g_219 = safe_add_func_int8_t_s_s(g_219, 2))
            {
                uint32_t l_642 = 4UL;
                int32_t l_649 = (-2L);
                int32_t l_661 = 0xC1FC9202L;
                int32_t l_663 = 0xBB652462L;
                int32_t l_794 = 7L;
                g_208 = g_196;
                if (g_268)
                    continue;
                if ((p_119 || p_118))
                {
                    uint32_t l_645 = 0xE04096C0L;
                    int32_t l_690 = (-1L);
                    int32_t l_692 = 1L;
                    l_258 = (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint64_t_u_s(((0x106AA308L | (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((l_618 = (safe_add_func_uint32_t_u_u(3UL, (safe_add_func_uint32_t_u_u(g_226, 3UL))))), g_120)) || ((safe_mod_func_uint16_t_u_u(l_601, ((((l_618 != ((((((safe_rshift_func_uint16_t_u_u((0L > p_118), g_263)) > p_119) >= g_293) && 9L) , 0x488AL) == 8L)) && (-6L)) > p_118) || 0L))) ^ p_119)), g_259))) || g_13), 43)), p_119)), g_290));
                    if (((((safe_mod_func_int32_t_s_s(((((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((g_212 = (safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((((g_263 &= p_119) <= (0UL & (((((~(~(safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((l_645 = (l_642--)) , (((((l_642 ^ (p_118 != (l_641 = p_118))) | (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(((l_661 ^= ((l_649 |= 4294967288UL) , ((safe_unary_minus_func_uint32_t_u((g_289 = (safe_mul_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(1L, (((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((l_618 && ((safe_lshift_func_int32_t_s_s(p_118, l_310)) & g_13)), 6)), 0x32F9L)) ^ g_218) , l_618))), l_371))))) & p_119))) ^ g_250))), 7))) == 0xE2F5L) == p_118) | 0x7CL)), l_663)) & p_119), g_295)) , p_118), p_118)))) == p_119) == l_371) == 0x81BAD5A2L) , l_649))) > p_118), l_663)), p_119))), p_118)), p_119)) <= p_118) ^ l_663) | 0x32158CED8E74AD22LL), p_118)) ^ p_118) ^ 3L) ^ 0xBA91ADDBL))
                    {
                        int32_t l_691 = 0x9FC98202L;
                        g_206 = (safe_div_func_float_f_f((g_662 = (safe_add_func_float_f_f((safe_mul_func_float_f_f((safe_div_func_float_f_f(((safe_add_func_float_f_f((safe_add_func_float_f_f(l_645, g_250)), (safe_mul_func_float_f_f((g_281 = ((g_372 < 0x2.0ECE37p-31) == 0x7.B866AFp-14)), (-0x1.9p-1))))) <= (safe_div_func_float_f_f((p_118 < (g_212 , (safe_sub_func_float_f_f((((safe_div_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((g_289 = (l_690 = (safe_add_func_uint16_t_u_u((g_285 = p_118), p_118)))) > 0xCDF5559F4D5C4391LL), l_269)), 0L)) | p_119), 8L)) , g_211) , l_691), 0x1.4p+1)))), l_691))), (-0x7.8p+1))), 0xD.777133p-40)), 0x1.D74782p-5))), p_118));
                        g_694++;
                    }
                    else
                    {
                        int16_t l_712 = (-1L);
                        l_242 = (g_261 = (safe_mul_func_uint32_t_u_u(((l_313 | ((safe_rshift_func_int64_t_s_s(l_663, 30)) && g_226)) ^ (l_690 = 18446744073709551615UL)), ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((0x0DD72868L || (safe_add_func_uint8_t_u_u((+((p_119 <= g_211) > (safe_div_func_uint8_t_u_u((safe_lshift_func_int32_t_s_u(((p_119 < p_118) == 3L), 31)), p_118)))), 0x9AL))) ^ p_118), 0x118406DDL)), p_118)) <= 0xF3L))));
                        g_212 = 0L;
                        l_712 = g_257;
                    }
                    for (g_212 = 10; (g_212 < 9); g_212--)
                    {
                        g_275 = l_601;
                        return p_118;
                    }
                    for (g_290 = (-19); (g_290 > 58); g_290 = safe_add_func_int32_t_s_s(g_290, 5))
                    {
                        uint16_t l_732 = 0x32C5L;
                        int32_t l_749 = 1L;
                        g_212 = ((p_119 , ((!(((safe_div_func_float_f_f((((l_577 = (g_277 = (g_211 = (((safe_unary_minus_func_int32_t_s((l_748 = (safe_mod_func_uint64_t_u_u(l_311, (~((((((((safe_lshift_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0xB5L, p_119)), l_692)), (0x29L < 9UL))), 29)) ^ (l_224 = ((((g_735 &= (l_732++)) & (safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((0xC0L != p_118) > l_641), 0xDCL)), 6UL)), p_119)), 0x516122E8A3756B5BLL)), 0xD1L)), 2L))) , g_208) | (-7L)))) ^ 0UL) && 0UL) >= 0xA3BCL) == p_118) , l_371) >= g_263))))))) || g_213) , g_366)))) > p_119) < l_258), 0x0.5p+1)) < g_231) <= 0x0.8p+1)) , 0x3A18L)) <= l_749);
                        g_751--;
                    }
                }
                else
                {
                    int16_t l_765 = 0xC229L;
                    int32_t l_771 = 0xB54069D9L;
                    l_771 = (safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(0x3E0B7A3847072663LL, (((!l_224) , (safe_lshift_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int32_t_s_u((((((l_765 <= ((g_735 < (l_765 < l_765)) || (safe_lshift_func_int8_t_s_u((((l_649 = (g_240 = g_291)) < p_118) , (safe_lshift_func_int16_t_s_s(0L, g_196))), p_119)))) , 4L) >= g_770) > p_118) , g_266), 4)), 7)), 17))) == p_119))), g_228));
                    return g_45;
                }
                l_223 ^= (safe_mul_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(l_663, 1)) != (0UL >= ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint64_t_u_s(g_219, 51)), g_373)) <= (safe_div_func_int32_t_s_s((l_794 = (l_360 & (((safe_rshift_func_uint64_t_u_u(((((safe_mod_func_int8_t_s_s(((~(l_312 |= (safe_rshift_func_int64_t_s_s(g_279, (safe_lshift_func_uint64_t_u_s((0x54L & (safe_unary_minus_func_int16_t_s(((g_212 = 8L) || (safe_lshift_func_uint8_t_u_u(l_618, g_249)))))), g_275)))))) , g_693), p_118)) , 0x61D6DC17AE839DA0LL) != l_529) | l_794), 18)) & (-1L)) != g_211))), 1L))))), p_118));
            }
        }
        if ((((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((~g_366))), ((safe_rshift_func_int64_t_s_s((0x25L && ((0x0984L == (safe_mod_func_int32_t_s_s(l_313, (g_212 || (g_250 || (-4L)))))) ^ (((safe_add_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(g_209, (9UL == 0x7DL))) != g_290), g_530)) < p_118) & g_366))), l_154)) | 0xBEL))) || 0x08F47CF580B91C37LL) > l_254))
        {
            uint8_t l_827 = 0x86L;
            int32_t l_846 = (-1L);
            int32_t l_868 = (-1L);
            int32_t l_870 = 1L;
            int32_t l_883 = 0x3E613897L;
            uint32_t l_925 = 0UL;
            uint64_t l_1041 = 1UL;
            int32_t l_1045 = 0x652EFAAFL;
            int32_t l_1046 = (-1L);
            int16_t l_1050 = 2L;
            int32_t l_1051 = 0x41E41225L;
            int32_t l_1055 = 0x53F75B02L;
            int32_t l_1058 = 0x1B1EF5C0L;
            int32_t l_1098 = 8L;
            int32_t l_1131 = 0x4868DAC1L;
            uint64_t l_1184 = 18446744073709551606UL;
            int16_t l_1343 = (-10L);
            int16_t l_1376 = (-8L);
            float l_1468 = (-0x1.1p-1);
            int32_t l_1471 = 0xF77DFD9CL;
            uint32_t l_1505 = 1UL;
            uint32_t l_1538 = 4294967295UL;
            if ((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_mul_func_int64_t_s_s((2UL != ((safe_add_func_uint16_t_u_u(0UL, 1UL)) ^ (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((l_312 = p_119), (safe_mod_func_int8_t_s_s((l_842 ^= (g_212 = ((safe_rshift_func_int64_t_s_s(l_827, g_735)) && (safe_rshift_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((((l_313 &= (l_276 = (safe_add_func_uint16_t_u_u(l_311, (((((~(l_235 |= (((!(-1L)) | ((((safe_mul_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(p_118, 0)), g_293)) , p_118) & g_693) || 65528UL)) > p_118))) == p_119) | p_118) , l_225) | 0L))))) <= g_291) | g_231), 0xEF07L)), 18))))), g_253)))) , 0xA2A28B6EL), 9)), g_279)), l_152)))), p_119)) >= l_258), p_119)), p_118)))
            {
                uint64_t l_859 = 0x76E81FCC08141940LL;
                int32_t l_864 = (-1L);
                int32_t l_865 = (-5L);
                int32_t l_871 = 0xF8349A52L;
                int32_t l_882 = 0xE4CA5F5CL;
                int32_t l_955 = 2L;
                const uint32_t l_990 = 0x046F770AL;
                uint32_t l_1097 = 0x231FA8B6L;
                uint16_t l_1106 = 0xE48EL;
                if (((!(0x5660L <= ((safe_mul_func_uint64_t_u_u(18446744073709551611UL, ((0xCCE5L | (l_846 = (l_313 ^ 1UL))) > (p_119 != ((safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u(((safe_div_func_float_f_f((p_118 != (((safe_mul_func_float_f_f((g_281 = 0x1.5p-1), (safe_mul_func_float_f_f(l_312, g_218)))) == p_119) < g_735)), l_313)) , l_827), 0xA11A9A1BL)), l_233)) || p_119))))) < g_13))) > l_858))
                {
                    float l_867 = (-0x9.7p-1);
                    int32_t l_869 = (-10L);
                    int32_t l_920 = 0x115CE5C1L;
                    int32_t l_922 = (-8L);
                    l_153 = p_118;
                    l_859 = g_282;
                    g_150 = g_228;
                    if (((safe_mul_func_uint16_t_u_u((((g_289 = (safe_mul_func_uint16_t_u_u((g_872++), (safe_unary_minus_func_int8_t_s(((((l_827 < (((safe_div_func_int8_t_s_s(((((1L || p_119) <= ((safe_div_func_uint64_t_u_u(p_118, (l_868 | (g_884++)))) != ((safe_lshift_func_int8_t_s_u(p_119, 5)) | l_869))) >= (safe_div_func_int64_t_s_s((g_282 & (safe_mod_func_int8_t_s_s((((l_865 = ((g_284 <= l_881) < 65535UL)) < g_257) == g_241), l_869))), l_871))) , l_869), p_119)) && g_150) > 18446744073709551611UL)) , 3L) ^ 0x23A53F8282706BBDLL) , 0L)))))) && p_119) & l_310), l_869)) >= 1L))
                    {
                        uint64_t l_921 = 7UL;
                        g_281 = (-(((((g_363 = (safe_div_func_float_f_f((safe_div_func_float_f_f(g_252, ((((safe_unary_minus_func_int32_t_s((p_119 > (safe_add_func_uint8_t_u_u((safe_lshift_func_uint32_t_u_u(((safe_mul_func_uint64_t_u_u(l_312, (g_905++))) , ((safe_mul_func_int8_t_s_s(p_118, (safe_add_func_int8_t_s_s((0x7E0F9BE5L != (safe_lshift_func_int32_t_s_u(((((safe_sub_func_uint32_t_u_u((safe_mul_func_int64_t_s_s(g_249, p_118)), (safe_rshift_func_uint16_t_u_s((0x02L || 0x56L), 8)))) ^ p_119) , l_869) | p_119), 22))), g_277)))) ^ 1UL)), g_257)), l_869))))) , l_870) == (-0x6.2p-1)) < 0x1.Ep-1))), 0xD.EA1243p-62))) < 0x9.D5DE03p-88) < l_310) == p_118) >= p_118));
                    }
                    else
                    {
                        g_693 &= ((g_246 < (l_925 == 0xD5C0L)) , ((g_289 = (g_212 = (l_922 , ((((safe_mul_func_int16_t_s_s(p_119, g_284)) ^ g_208) || ((-6L) >= ((!p_119) <= (-1L)))) && p_119)))) >= g_240));
                        g_281 = (g_210 <= l_870);
                        g_281 = (safe_add_func_float_f_f(0x9.4p-1, (p_118 = ((((safe_div_func_int32_t_s_s(l_827, ((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((p_119 == ((l_360 || g_290) & (g_212 = ((safe_div_func_uint64_t_u_u((((l_920 = 1UL) <= ((safe_div_func_uint8_t_u_u(p_119, ((((safe_sub_func_int8_t_s_s(((l_154 = (safe_sub_func_uint64_t_u_u((safe_mul_func_int64_t_s_s((safe_lshift_func_int64_t_s_u(p_119, (((safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u(0x44L, 0x16L)) , l_865) <= 6L) , 65531UL), 0UL)) , l_871), p_119)) , p_119) , g_196))), l_859)), (-3L)))) , l_312), 0x07L)) <= g_285) , p_119) || g_259))) || 65534UL)) <= g_150), l_859)) > 5L)))) , p_119), p_118)), g_530)) == 0x8BL) != l_955) | g_207))) <= 0xA8DC9678F4E005F0LL) ^ p_118) , p_118))));
                    }
                }
                else
                {
                    uint64_t l_985 = 0xB383FC3BAB70BA5DLL;
                    int32_t l_992 = 0x9BD68ABEL;
                    int32_t l_1047 = 0x20FFCCBAL;
                    int32_t l_1049 = 0x63D1E2D2L;
                    int32_t l_1053 = 2L;
                    int32_t l_1054 = 4L;
                    int32_t l_1056 = (-3L);
                    uint32_t l_1059 = 0x9DD5EEA5L;
                    if (g_872)
                    {
                        int8_t l_993 = 0x1EL;
                        uint32_t l_994 = 0x67615DECL;
                        g_212 = (safe_add_func_int32_t_s_s((((p_118 ^ l_371) != ((safe_add_func_uint32_t_u_u((((l_993 = (safe_add_func_int16_t_s_s((safe_lshift_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s(l_269, ((((safe_mul_func_int16_t_s_s((g_289 = (!(safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_119, p_118)), (safe_mul_func_int64_t_s_s((-10L), ((safe_lshift_func_int32_t_s_u(((l_992 = ((safe_add_func_uint64_t_u_u(1UL, (safe_div_func_uint8_t_u_u((l_985--), (safe_sub_func_uint64_t_u_u(((((p_118 , ((g_282 , g_694) , l_990)) >= l_991) > g_289) , g_250), g_46)))))) == p_119)) > 0xCD2D4205L), p_118)) && 0L))))))), l_135)) >= l_371) , g_288) != p_119))) == g_263) > 1L) == g_209) != 0xAC8091E1L), g_250)) , l_827) == l_925), p_119)), 2)), p_118))) <= p_119) > p_118), 0UL)) >= p_119)) < 1L), l_276));
                        l_994++;
                        g_286 = l_985;
                        l_992 = (l_224 = (((safe_div_func_int32_t_s_s((65535UL | ((g_289 = (((((safe_lshift_func_uint16_t_u_u(((g_212 = ((65535UL | p_118) , (((safe_div_func_uint16_t_u_u(((0x361D75EEL == p_118) <= p_119), g_241)) >= (safe_lshift_func_uint8_t_u_u((((-0x7.5p+1) >= g_247) , 3UL), g_366))) < p_119))) , g_866), p_119)) == 1UL) && p_119) && 0xD57EE092L) > g_261)) ^ g_291)), p_119)) && 0xDE09C0F0935256FALL) , l_870));
                    }
                    else
                    {
                        g_289 = ((safe_div_func_int32_t_s_s(l_313, (p_118 && l_312))) > ((l_864 && 1UL) | 65535UL));
                    }
                    p_118 = ((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((((l_258 = g_288) , (((safe_rshift_func_uint64_t_u_s((safe_mod_func_uint8_t_u_u(p_118, (safe_mul_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((((l_154 = l_871) | 0xFF56L) , 255UL), 0L)) , ((!((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint64_t_u_u(18446744073709551615UL, l_990)) ^ (safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint64_t_u_s((l_870 && l_985), 42)), 0x2FL)), p_119)) | g_288), 6)) ^ 5L), g_372)) <= p_118), l_827)) <= p_119), l_1040)), p_119))), p_119)) ^ g_693)) , g_231)), l_846)))), 30)) , l_992) < p_118)) >= 0xDBA6L) < p_118) && p_119), l_1041)), g_247)) , p_118);
                    l_269 = (((l_868 &= (safe_mod_func_uint32_t_u_u((--l_1059), (p_119 || g_13)))) < p_118) != (!((((((safe_mul_func_float_f_f(l_529, (((0x7.7p+1 == (safe_mul_func_float_f_f(0x8.8646A3p-81, (safe_sub_func_float_f_f(((!(l_276 = 0x5366A14FL)) , (p_118 < (safe_div_func_float_f_f((!(safe_add_func_float_f_f((l_864 = ((g_207 = ((((+g_498) && g_1057) > p_119) | p_119)) , g_18)), p_118))), g_45)))), g_363))))) <= g_259) > p_118))) <= g_13) , g_282) ^ p_118) , g_530) != 0xD0BA9D59L)));
                }
                l_312 = (((1UL < (safe_mul_func_uint16_t_u_u(0xADE3L, ((safe_mod_func_int64_t_s_s((l_313 = (g_530 > ((((l_1051 && (safe_lshift_func_uint8_t_u_u(0UL, 3))) <= (p_118 >= ((safe_div_func_int16_t_s_s((g_289 = ((g_293 || p_119) || g_196)), 0xA697L)) == 0xE8L))) != l_313) , p_119))), l_864)) < l_1084)))) <= p_118) | p_119);
                if (g_1057)
                {
                    int32_t l_1099 = 0x1FF4A8F0L;
                    int32_t l_1101 = 0L;
                    int32_t l_1103 = 0x308E50A0L;
                    int32_t l_1104 = 0x29736F8EL;
                    for (g_241 = 14; (g_241 == 37); g_241 = safe_add_func_int16_t_s_s(g_241, 6))
                    {
                        uint16_t l_1087 = 0x3597L;
                        uint16_t l_1094 = 1UL;
                        int32_t l_1100 = (-10L);
                        int32_t l_1102 = 8L;
                        l_1098 = ((((p_119 || (l_842 = (p_118 , ((l_1087 < (-1L)) >= 0xBE864C560E43CBD8LL)))) , (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((safe_div_func_int8_t_s_s(((p_118 || (g_208 = (g_373 , (l_1094 | ((((safe_rshift_func_int16_t_s_s(g_259, g_247)) <= g_208) != 0UL) < g_268))))) < g_498), l_594)) , p_118) != l_1097), l_881)), 3L))) && 1UL) > g_905);
                        l_1106--;
                    }
                    g_1110--;
                    g_289 = 0L;
                }
                else
                {
                    for (l_859 = 0; (l_859 != 21); l_859++)
                    {
                        return g_530;
                    }
                }
            }
            else
            {
                const uint32_t l_1118 = 0x67D747CFL;
                for (g_231 = 17; (g_231 <= 42); ++g_231)
                {
                    uint16_t l_1117 = 65529UL;
                    int32_t l_1132 = 0xA7E3FAB7L;
                    if (l_1117)
                    {
                        l_311 = l_1118;
                        if (l_258)
                            continue;
                    }
                    else
                    {
                        l_1132 = ((g_211 < (safe_sub_func_int8_t_s_s(g_249, g_219))) , (safe_sub_func_uint32_t_u_u((p_118 , p_119), ((-6L) & (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((l_1131 = (((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_119 == (l_311 = 1L)), p_119)), p_118)) | p_118) , l_1118)) >= p_119) , p_119), 11)), p_119))))));
                        l_312 = l_1117;
                    }
                    g_206 = 0xA.1AF24Ap+26;
                }
            }
            if (l_529)
            {
                int32_t l_1133 = 0xFD07CF2CL;
                int32_t l_1134 = 7L;
                int16_t l_1217 = 0x4133L;
                int32_t l_1297 = (-1L);
                int32_t l_1333 = 0x36F00386L;
                int32_t l_1335 = 0x7BE048E2L;
                int32_t l_1336 = 0L;
                int32_t l_1338 = 0L;
                int32_t l_1396 = 0L;
                int8_t l_1461 = 9L;
                g_1135--;
                for (p_118 = 10; (p_118 <= 2); p_118--)
                {
                    g_1057 = (~g_266);
                    return g_1110;
                }
                for (l_1050 = (-14); (l_1050 == (-24)); l_1050--)
                {
                    uint32_t l_1155 = 0x58D91F41L;
                    uint8_t l_1185 = 3UL;
                    int32_t l_1210 = 0x7196F73FL;
                    if (((safe_mul_func_uint32_t_u_u(0xE85F38D2L, (safe_sub_func_int64_t_s_s(p_118, (~(g_289 = (l_1131 = (((-1L) && (safe_add_func_uint32_t_u_u((((0xBED3D1AEL == ((l_276 != ((l_846 |= (((0x65E9A54AL & ((p_118 <= 2L) != (safe_mul_func_int16_t_s_s((((((!(l_1055 = l_1045)) || p_119) , l_991) < p_118) ^ g_229), g_250)))) <= g_247) | l_1155)) == l_223)) ^ p_118)) && l_858) != p_119), l_991))) , l_1134)))))))) == p_119))
                    {
                        int32_t l_1168 = (-1L);
                        l_1134 = (safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((((((3L >= 0L) > p_118) != g_241) && (safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(0x7D160AF23B3553FBLL, (g_295 && (l_1134 <= ((l_311 = (((l_1155 <= ((g_286 & l_1134) | g_253)) < 0x56F80C6D87223ABBLL) >= l_842)) < p_118))))), l_881))) == g_241), 0xB1CCL)), l_529));
                        l_1186 = ((l_1168 ^= (safe_div_func_uint16_t_u_u(p_118, l_360))) , (((((safe_rshift_func_int32_t_s_u(((safe_lshift_func_uint32_t_u_s(g_295, 30)) <= (l_1184 ^= (((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((l_883 = (l_1133 || ((safe_rshift_func_uint64_t_u_u((((g_295 ^ (safe_mul_func_int16_t_s_s(0x7DB5L, ((p_118 & g_866) >= ((safe_unary_minus_func_uint16_t_u((((0xD02DB66EL <= p_118) < p_118) , l_1050))) >= p_118))))) == 0x43EFL) != g_275), 55)) < l_1133))), l_1168)), l_1131)) == p_119) && g_4))), 7)) || g_1048) <= 0x3CL) , l_883) | l_1185));
                    }
                    else
                    {
                        uint16_t l_1195 = 0UL;
                        g_212 = (253UL == ((safe_div_func_int32_t_s_s(0xA7F5730DL, (safe_mul_func_uint32_t_u_u(((safe_mul_func_uint64_t_u_u(((l_1195 = (safe_div_func_uint64_t_u_u((0xD913L > 0x47B2L), (l_1134 = l_1041)))) , ((l_1134 | ((((~(0xAA634F81F9EAA710LL > 4L)) , g_174) & g_4) || 65530UL)) , g_231)), p_119)) , 0xDE5519ACL), 1L)))) & (-1L)));
                        g_662 = ((safe_div_func_float_f_f(0x9.Cp-1, (-(safe_sub_func_float_f_f((safe_div_func_float_f_f(((safe_rshift_func_int8_t_s_u(l_577, (0xCFL || (g_872 &= p_119)))) , (safe_mul_func_float_f_f((0x1.57397Ep+83 != (((safe_add_func_int8_t_s_s(8L, (((((((((p_119 || (((((5UL > p_119) <= g_249) > 8L) >= 1UL) < 255UL)) && p_119) >= 0xCE1032BAL) , p_118) , l_1134) , p_118) >= l_1055) < 18446744073709551611UL) || g_283))) <= 18446744073709551608UL) , l_235)), 0xF.666B21p+32))), g_1105)), g_289))))) > 0x9.Fp-1);
                    }
                    l_1210 |= (g_289 = 5L);
                    if ((safe_div_func_int64_t_s_s(p_119, (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(l_1217, (g_210 ^= (safe_add_func_int32_t_s_s(((((safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_int32_t_s_u((0x13L > (g_207 = (safe_div_func_uint64_t_u_u(l_1185, ((g_212 = ((l_880 < (safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int64_t_s_s(l_1210, 7)), (-6L))), (((g_229 = (l_242 = g_735)) >= ((0xF0F5L && l_881) == l_870)) < g_282)))) >= 0x4325242F361DA9C3LL)) , p_118))))), 30)) > 0x4849F931C275EBF0LL), 1L)), l_311)) , l_1210) || g_240) , 0x72A78F19L), 4294967287UL))))), 18446744073709551607UL)))))
                    {
                        uint8_t l_1236 = 8UL;
                        int32_t l_1267 = 0xFD2C7323L;
                        int32_t l_1269 = 0x5AE77E72L;
                        g_231 = l_1185;
                        l_846 = g_751;
                        g_206 = (safe_div_func_float_f_f(((0xD.F0C11Fp-17 > ((l_1236 <= ((safe_lshift_func_int8_t_s_u((g_283 ^ (((g_289 ^= (((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_1269 = ((safe_mod_func_int64_t_s_s((safe_rshift_func_int32_t_s_s((+((l_233 |= (((l_868 = ((safe_lshift_func_uint64_t_u_s((safe_sub_func_int64_t_s_s((((!(safe_add_func_int8_t_s_s((l_1045 &= ((safe_lshift_func_int64_t_s_u((((l_1267 = ((0L > (65527UL <= p_119)) != (l_313 &= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0xADL, (safe_mod_func_int32_t_s_s((-2L), l_1185)))), g_373)), 0UL))))) , g_291) && g_208), 27)) <= g_1110)), 0L))) <= l_577) | l_1236), l_1236)), l_1236)) | l_1268)) == g_250) > l_1185)) && 8UL)), g_286)), g_884)) & 0x8C96F7087D81399FLL)), 0xE5L)), p_119)) & 0xB5519F59L) , g_18)) && p_119) ^ l_1236)), g_231)) , 0x7D6F195AL)) , p_118)) >= 0x6.6BD1D9p-47), l_1210));
                    }
                    else
                    {
                        uint32_t l_1296 = 1UL;
                        g_662 = (safe_div_func_float_f_f(p_119, ((safe_sub_func_float_f_f((g_1044 = (safe_mul_func_float_f_f((((g_289 , (safe_rshift_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(p_118, (((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((0x97L != (safe_add_func_uint64_t_u_u((g_770 | (safe_sub_func_uint64_t_u_u((safe_rshift_func_int64_t_s_s((l_1050 | (l_1292 = g_884)), 55)), ((g_275 || ((((l_881 = (safe_sub_func_int8_t_s_s(((~(0xAF62056F3D11DD64LL >= 0x9569E125820CF77ALL)) || g_218), 0UL))) >= 0x3BL) >= 5UL) & l_1268)) == g_208)))), p_118))) | 0x9EL), 0xF1L)), 6)) | 0L) | 0xC0L) > g_884) || g_263))), g_226)) != 0xE3L), 14))) > 18446744073709551608UL) , p_118), p_118))), l_1297)) <= l_1185)));
                    }
                    g_212 = ((safe_lshift_func_int16_t_s_s(0x673EL, g_282)) & (safe_sub_func_uint32_t_u_u(l_278, (+(safe_rshift_func_uint64_t_u_u((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((-6L), (-7L))), (((safe_sub_func_int32_t_s_s(((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u((((((l_1055 = (safe_add_func_int32_t_s_s((l_1134 = g_372), p_118))) < (safe_lshift_func_int32_t_s_u((((safe_div_func_int32_t_s_s(((l_258 = p_118) == ((safe_div_func_uint16_t_u_u(((-6L) == g_374), l_154)) > 0xC318L)), 8UL)) == 0x4ACAL) , g_693), g_266))) > p_118) | p_118) , g_373), g_287)) != 0x16A5L) ^ p_118), l_858)), p_118)) && g_241), p_119)) >= g_261) || l_154))), 55))))));
                }
                for (g_1052 = 5; (g_1052 >= (-25)); g_1052--)
                {
                    int32_t l_1334 = 0xF96B6D1AL;
                    int32_t l_1337 = 0xAF95FD31L;
                    l_870 ^= (((l_842 |= ((g_208 = (safe_mul_func_int16_t_s_s(g_240, 0UL))) > ((0x0A95D040A9C7755BLL || (safe_sub_func_int32_t_s_s(p_118, ((safe_lshift_func_uint16_t_u_s((g_884 == (l_223 |= (g_1340++))), 3)) && l_1343)))) | (safe_lshift_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(p_119, (safe_lshift_func_int32_t_s_u((~(l_1098 ^ (safe_div_func_uint64_t_u_u(((safe_lshift_func_uint32_t_u_s(((0xDE30D8F6L || l_1098) , 4294967295UL), 28)) || p_118), p_118)))), p_118)))), g_259))))) ^ p_118) ^ p_119);
                    if (g_259)
                        continue;
                    g_1377 = (((g_13 > g_530) && (safe_add_func_uint64_t_u_u(p_119, (((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint64_t_u_u(l_1337, 60)), ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int64_t_s_s((g_275 = (g_1365 = g_46)), 58)), 10)) == (6UL >= (safe_div_func_int32_t_s_s((((((safe_lshift_func_int32_t_s_u((safe_mul_func_uint64_t_u_u((g_212 &= (1L != (safe_sub_func_uint8_t_u_u(((0x81A3DAE5L <= (safe_mod_func_int64_t_s_s(((0xF5FA9065DAFA221ELL || l_1134) == 247UL), p_118))) | l_1045), g_253)))), 0x3DDA9F23357B2C12LL)), p_118)) >= g_290) , p_119) == l_1376) ^ g_13), g_279)))))) != p_118) , 0x7EC063DAL) == g_370) && g_250)))) , g_46);
                    if ((safe_mul_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((((((safe_mod_func_uint16_t_u_u((0x0974074CL == (((safe_add_func_uint32_t_u_u((l_1334 |= (((safe_unary_minus_func_int64_t_s((g_1377 = ((g_1377 , (((safe_mod_func_uint16_t_u_u(6UL, g_261)) , g_219) && ((safe_div_func_uint16_t_u_u(((p_119 , (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((l_842 &= l_1337) | (l_1297 |= p_119)) < (p_118 < g_872)) ^ (-8L)), 0L)), 0xDAL))) || 0x785BL), 0xCD66L)) >= 1UL))) != 0xA0A8L)))) < g_293) > g_241)), p_118)) <= l_1395) <= l_224)), p_119)) & p_118) >= l_858) > l_1337) >= g_289) == l_1396), g_211)) > p_119), l_312)))
                    {
                        uint32_t l_1403 = 0x6CCB1107L;
                        int32_t l_1427 = 1L;
                        uint16_t l_1429 = 0xDE0DL;
                        int32_t l_1444 = 0x71F17379L;
                        int32_t l_1445 = 0x91A70530L;
                        g_1105 = (g_1109 = (safe_div_func_float_f_f(p_118, ((safe_div_func_float_f_f((-0x1.3p+1), (((l_269 <= ((safe_sub_func_float_f_f(l_1403, (safe_sub_func_float_f_f((+(safe_add_func_float_f_f(((g_662 = (safe_div_func_float_f_f(((g_1110 || (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(0x51L, 0)) < ((-1L) | g_287)), (((safe_rshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((+((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int64_t_s_u((((((((safe_rshift_func_int64_t_s_s((~0xE9B6C033L), p_119)) < l_1051) ^ l_925) < g_209) < g_1052) > (-7L)) , g_693), l_1335)) >= g_218), g_259)) > 0L)), 255UL)) & 4294967295UL), 4)) == p_118) == p_118)))) , g_241), g_4))) != g_283), p_119))), g_1428)))) != p_118)) >= l_748) != (-0x1.0p-1)))) > l_1427))));
                        g_212 = ((((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_uint64_t_u((safe_rshift_func_int64_t_s_u((safe_div_func_uint32_t_u_u(((safe_mul_func_uint32_t_u_u(((((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(l_1427, (l_1268 , g_241))) ^ (g_229 > p_119)), 0x62L)) ^ ((g_284 && (l_1337 = 4UL)) & 1L)) < g_275) , p_118), g_1110)) && l_1040), (-1L))), l_1334)))) , g_218), l_1443)) | p_119) >= l_594) | 5L);
                        g_1446--;
                        g_662 = ((g_373 > ((g_498 > g_263) != (((safe_div_func_float_f_f(((g_1109 = (safe_mul_func_float_f_f(((safe_add_func_float_f_f((safe_mul_func_float_f_f((safe_mul_func_float_f_f(((((((((((l_1396 = 0x11571DDC17B69147LL) && 0xD71012B9EE5EFF2ALL) <= (safe_lshift_func_uint8_t_u_u(l_360, 0))) == ((g_45 = (g_226 = l_1217)) , (0x0971L & l_1338))) , l_1395) == l_313) , (-0x1.2p+1)) <= g_250) > (-0x7.0p-1)) != l_1461), p_118)), g_288)), 0xA.4C2274p+26)) > l_1427), g_249))) == 0x9.77F387p-41), p_118)) >= 0x6.A2E764p-48) > 0xC.7EC887p+12))) < g_373);
                    }
                    else
                    {
                        g_206 = (p_118 == ((safe_div_func_int8_t_s_s((8L <= g_229), g_370)) , l_269));
                    }
                }
            }
            else
            {
                float l_1469 = 0x8.D69C47p+56;
                uint32_t l_1474 = 0UL;
                int32_t l_1491 = 0xE22271DDL;
                int32_t l_1495 = 0L;
                int32_t l_1496 = 3L;
                g_249 &= g_259;
                if ((safe_mul_func_uint64_t_u_u((((l_1474++) > (((safe_lshift_func_int16_t_s_s(g_228, 10)) , (~((g_291 = 0x0A03EEE7A757CA2ELL) < ((g_1340 = g_283) <= 8L)))) >= (safe_add_func_uint64_t_u_u(l_1482, (safe_lshift_func_uint8_t_u_s((safe_mul_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((6L < (l_1491 == ((safe_div_func_uint8_t_u_u((!(g_1498--)), (safe_add_func_uint16_t_u_u((((g_1377 ^= ((safe_lshift_func_int16_t_s_s((g_372 = g_372), g_226)) >= l_1050)) , 0L) & g_286), l_223)))) || 0x52945149762F8090LL))), g_261)) , 65533UL), p_119)) != l_1058) ^ 8L), l_1055)), g_259)))))) <= p_118), l_1505)))
                {
                    uint64_t l_1519 = 1UL;
                    int32_t l_1522 = (-5L);
                    int32_t l_1526 = (-1L);
                    l_151 |= (l_311 = (safe_mod_func_uint32_t_u_u(p_118, (((((safe_div_func_uint64_t_u_u((p_119 && (g_1052 , (safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((!((252UL | p_119) ^ (safe_add_func_int8_t_s_s(p_118, 0x29L)))) > (l_1522 ^= ((++l_1519) | 0L))) , (safe_add_func_int16_t_s_s((-5L), (-10L)))), g_279)), l_313)))), (-7L))) != 0x8BF6L) || 0x84FCF501L) | l_1526) ^ 0x8C31F67474C247A5LL))));
                    g_206 = ((g_1339 = (g_196 <= ((g_1044 = (p_118 > (safe_div_func_float_f_f((g_1525 = ((g_289 = g_1529) <= (0x4.441AB2p+36 >= (g_872 = (l_1496 = ((((safe_sub_func_uint32_t_u_u(((((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(18446744073709551615UL, (65535UL && (safe_mod_func_uint8_t_u_u(((g_735 & (-1L)) & p_119), l_1538))))), l_135)) , p_118) >= 0xA5L) , g_257), p_119)) <= 246UL) <= g_196) , p_119)))))), l_1526)))) < p_118))) == g_1109);
                    l_1522 = ((safe_div_func_int8_t_s_s((l_1522 & ((p_119 && l_239) <= ((l_1526 |= (safe_div_func_uint8_t_u_u(((g_285 = ((safe_rshift_func_int8_t_s_s((~((g_1472 = (((((((((p_119 , (l_153 = ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((l_1055 | ((g_288 < (p_119 | 0xE7F05282L)) | (safe_lshift_func_int32_t_s_s(((safe_lshift_func_int64_t_s_s((-6L), l_1041)) <= 0xEE453B4E58E0086FLL), 4)))) < l_1522) > g_229), l_1045)), g_226)) < 1L))) == 0xEA65L) ^ g_287) , g_295) , g_284) >= p_118) ^ 0x94L) ^ (-1L)) <= p_119)) == l_1474)), p_119)) , p_118)) | 0x91L), g_1529))) && p_119))), g_735)) >= l_883);
                }
                else
                {
                    uint8_t l_1554 = 0x59L;
                    --l_1554;
                    g_1529 = l_1055;
                    return p_119;
                }
                l_1045 = g_372;
                for (l_1131 = (-27); (l_1131 == (-6)); ++l_1131)
                {
                    int16_t l_1559 = 1L;
                    l_1560++;
                }
            }
            g_1446 = (safe_rshift_func_uint64_t_u_u(3UL, (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_1045 = ((l_312 = (g_289 = (safe_mod_func_int64_t_s_s(g_1048, l_1045)))) != (!l_1538))), (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int64_t_s_u((safe_mul_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(p_118, 2)), ((safe_sub_func_uint8_t_u_u((g_290 = ((safe_unary_minus_func_int32_t_s(0L)) , (safe_mul_func_int64_t_s_s(g_196, (((((safe_add_func_uint32_t_u_u((g_45 <= ((((safe_add_func_int16_t_s_s(l_258, l_278)) != 65531UL) <= p_119) > l_925)), g_219)) | 0xAA08D496L) && 0x46B3EFDFDB6EFB56LL) | l_225) != p_119))))), g_1472)) > 1UL))), p_119)) == p_119), 10)))), p_118))));
        }
        else
        {
            int32_t l_1593 = 1L;
            int16_t l_1594 = 0xF41CL;
            float l_1597 = 0x3.C911C2p-93;
            for (g_210 = (-15); (g_210 < 31); g_210++)
            {
                uint32_t l_1598 = 18446744073709551606UL;
                l_1594 ^= ((g_219 = g_1110) , ((safe_mul_func_int8_t_s_s(g_735, l_1593)) != 65532UL));
                for (g_228 = 29; (g_228 > (-6)); g_228 = safe_sub_func_int8_t_s_s(g_228, 1))
                {
                    return l_880;
                }
                l_1598--;
                g_1472 |= (safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_u(0x452BL, 1))));
            }
            g_363 = (g_1525 = (g_1044 = (p_118 > (g_1339 = (l_1604 >= p_118)))));
        }
        if ((((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_118 > (safe_unary_minus_func_int16_t_s((safe_lshift_func_int64_t_s_u(((g_252 ^ ((safe_rshift_func_uint32_t_u_u((((l_225 = ((((0x1FL | (0x94E851C1L && (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(l_842, (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_uint64_t_u_u((((g_751 = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_215, 65535UL)), ((((((-1L) ^ ((((safe_rshift_func_int32_t_s_s((p_118 & l_1040), p_118)) <= p_119) >= g_530) ^ g_196)) , g_212) != 9L) >= g_1473) | 0x4EL))) , 1UL)) , 18446744073709551615UL) != l_1084), 0xF042AE447CCED541LL)), l_269)), g_240)))) , 0UL), 1L)))) | l_881) , 6L) == 0x1C8C4410D5318241LL)) >= l_1443) >= l_311), 27)) & g_252)) > (-2L)), 6))))), l_1630)), p_118)) , l_881) >= 0L))
        {
            uint8_t l_1654 = 0x6DL;
            int32_t l_1661 = 0xEA970D3CL;
            for (g_215 = 0; (g_215 != (-18)); g_215--)
            {
                float l_1644 = 0xE.7229A1p-94;
                l_276 = (l_153 = (l_312 ^= (safe_lshift_func_int32_t_s_u((safe_sub_func_uint32_t_u_u(0xA4511B18L, (safe_mul_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(((l_1630 ^= l_224) < 1UL), (g_530 != (0xBD763CCDL >= (((((g_1529 |= ((g_250 != ((p_119 , (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s(l_313)) == g_120), p_118))) , p_119)) | 0x356AL)) < g_1135) == g_1365) >= g_366) | 9L))))) ^ 5UL), (-1L))))), 31))));
                for (l_1292 = 0; (l_1292 < 0); l_1292++)
                {
                    int16_t l_1668 = 1L;
                    for (g_289 = (-28); (g_289 < (-8)); g_289 = safe_add_func_uint32_t_u_u(g_289, 5))
                    {
                        int8_t l_1667 = 0xF3L;
                        l_269 &= ((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((((l_1653 = (0xC046L | 1UL)) != ((l_1654 = (g_174 = p_119)) < (((safe_mod_func_uint8_t_u_u(g_215, ((safe_div_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u(l_1661, (((safe_mul_func_uint8_t_u_u((g_289 & (+((safe_div_func_uint16_t_u_u(g_291, p_118)) && (((g_210 != 0xBC94L) && g_268) && l_360)))), l_1604)) == g_373) >= g_290))) >= (-1L)) >= l_1667), p_119)) , 0x01L))) <= p_119) , l_313))) , g_253), l_1668)) < g_273), l_1186)) <= g_370);
                        if (l_1654)
                            break;
                    }
                }
            }
            for (l_1653 = 27; (l_1653 != 22); --l_1653)
            {
                uint64_t l_1675 = 0x51FFB770CE2F1851LL;
                g_1428 = ((safe_mul_func_float_f_f((-0x7.4p-1), (g_294 = (safe_div_func_float_f_f(l_1675, g_1044))))) == ((g_281 = ((((p_119 == (safe_sub_func_float_f_f((-0x8.1p+1), (-0x2.Bp-1)))) > (g_1109 = (safe_sub_func_float_f_f((g_1472 = l_276), (safe_add_func_float_f_f(((safe_div_func_float_f_f(0x8.C341E7p+71, ((!(-(((safe_div_func_float_f_f((((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s(((p_118 | p_118) , p_119), l_1654)), g_285)) != p_118) , (-0x4.6p-1)), 0x1.Fp+1)) <= p_119) >= l_1630))) == l_1692))) < (-0x1.Ap+1)), p_118)))))) != 0x7.C18929p-94) >= 0x0.35CE2Ap-20)) != (-0x1.Bp+1)));
                if (g_266)
                    continue;
                g_1048 ^= p_118;
            }
        }
        else
        {
            int32_t l_1708 = 0L;
            int32_t l_1738 = (-6L);
            int32_t l_1739 = 0x1F823D2FL;
            g_905 = (l_313 |= ((p_118 ^ (safe_div_func_uint64_t_u_u((((((((!((safe_sub_func_float_f_f(((((safe_sub_func_float_f_f((((safe_div_func_float_f_f((safe_div_func_float_f_f(((((0x0.Dp+1 > 0x9.29D765p-78) == 0x1.7B78FAp-35) != ((!g_210) != (g_1044 = ((g_294 = (g_1705 , ((l_842 = ((g_174 ^ (l_233 > (safe_sub_func_uint64_t_u_u(p_118, 0x3591AA0009A0A1F2LL)))) , p_118)) == g_770))) <= g_285)))) < p_119), 0x3.D8E90Dp+74)), l_223)) != g_275) > 0xA.F86B19p+93), l_1443)) != 0x9.7p+1) != l_1708) <= p_119), 0x1.4p-1)) != 0x2.8A6A6Bp+62)) >= (-0x1.1p-1)) , g_530) , 1UL) > g_374) < l_1708) | g_1340), 0x40122C758DEA2040LL))) | p_119));
            l_225 |= (l_1630 , ((p_119 && p_119) == ((g_261 = (safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_unary_minus_func_int64_t_s(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(l_577, 0x543BL)) , (l_1268 < (p_119 <= (p_118 & g_266)))) & p_118), l_276)) > l_1708), l_1560)) | l_1720))), l_880)), p_118))) ^ l_153)));
            for (g_209 = 0; (g_209 == 22); g_209++)
            {
                uint8_t l_1725 = 0xDDL;
                int32_t l_1729 = 7L;
                int32_t l_1736 = 1L;
                g_289 = ((l_880 || (((safe_mul_func_uint8_t_u_u((l_1725 &= g_498), (l_1729 = (+((safe_div_func_int16_t_s_s(0x2D7AL, p_118)) == ((l_1729 & g_247) == ((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((((l_1736 = g_872) , (g_1340 , ((g_259 | l_1720) == p_118))) > 0xCDA2FC35L), g_1498)), p_118)) <= l_223) > g_211), l_1737)) , l_276))))))) < p_119) ^ l_1395)) & p_118);
            }
            g_1740--;
        }
        l_881 |= (safe_add_func_uint64_t_u_u(18446744073709551611UL, ((1UL <= p_119) || ((g_1446 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint64_t_u_u(0xA0CE24F8F1BDC661LL, (((safe_sub_func_uint32_t_u_u(p_118, l_310)) ^ (safe_rshift_func_int8_t_s_s(p_119, 2))) , (safe_mul_func_uint32_t_u_u(4294967295UL, (safe_div_func_uint8_t_u_u(g_770, g_120))))))), l_254))) >= l_310))));
    }
    ++g_1757;
    return p_118;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, print_hash_value);
    transparent_crc(g_3, print_hash_value);
    transparent_crc(g_4, print_hash_value); // fail
    // transparent_crc(g_12, print_hash_value);
    // transparent_crc(g_13, print_hash_value);
    // transparent_crc(g_16, print_hash_value);
    // transparent_crc(g_17, print_hash_value);
    // transparent_crc(g_18, print_hash_value);
    // transparent_crc(g_30, print_hash_value);
    // transparent_crc(g_45, print_hash_value);
    // transparent_crc(g_46, print_hash_value);
    // transparent_crc(g_79, print_hash_value);
    // transparent_crc(g_111, print_hash_value);
    // transparent_crc(g_120, print_hash_value); // fail
    // transparent_crc(g_150, print_hash_value); // fail
    // transparent_crc(g_174, print_hash_value); // fail
    // transparent_crc(g_177, print_hash_value); // fail
    // transparent_crc(g_196, print_hash_value); // fail
    
    // transparent_crc(g_207, print_hash_value);
    // transparent_crc(g_208, print_hash_value);
    // transparent_crc(g_209, print_hash_value);
    // transparent_crc(g_210, print_hash_value);
    // transparent_crc(g_211, print_hash_value);
    // transparent_crc(g_212, print_hash_value);
    // transparent_crc(g_213, print_hash_value);
    // transparent_crc(g_215, print_hash_value);
    // transparent_crc(g_218, print_hash_value);
    // transparent_crc(g_219, print_hash_value);
    // transparent_crc(g_226, print_hash_value);
    // transparent_crc(g_228, print_hash_value);
    // transparent_crc(g_229, print_hash_value);
    // transparent_crc(g_231, print_hash_value);
    // transparent_crc(g_236, print_hash_value);
    // transparent_crc(g_240, print_hash_value);
    // transparent_crc(g_241, print_hash_value);
    // transparent_crc(g_246, print_hash_value);
    // transparent_crc(g_247, print_hash_value);
    // transparent_crc(g_249, print_hash_value);
    // transparent_crc(g_250, print_hash_value);
    // transparent_crc(g_252, print_hash_value);
    // transparent_crc(g_253, print_hash_value);
    // transparent_crc(g_257, print_hash_value);
    // transparent_crc(g_259, print_hash_value);
    // transparent_crc(g_261, print_hash_value);
    // transparent_crc(g_263, print_hash_value);
    // transparent_crc(g_266, print_hash_value);
    // transparent_crc(g_268, print_hash_value);
    // transparent_crc(g_273, print_hash_value);
    // transparent_crc(g_275, print_hash_value);
    // transparent_crc(g_277, print_hash_value);
    // transparent_crc(g_279, print_hash_value);
    
    // transparent_crc(g_282, print_hash_value);
    // transparent_crc(g_283, print_hash_value);
    // transparent_crc(g_284, print_hash_value);
    // transparent_crc(g_285, print_hash_value);
    // transparent_crc(g_286, print_hash_value);
    // transparent_crc(g_287, print_hash_value);
    // transparent_crc(g_288, print_hash_value);
    // transparent_crc(g_289, print_hash_value);
    // transparent_crc(g_290, print_hash_value);
    // transparent_crc(g_291, print_hash_value);
    // transparent_crc(g_292, print_hash_value);
    // transparent_crc(g_293, print_hash_value);
    
    // transparent_crc(g_295, print_hash_value);
    
    // transparent_crc(g_366, print_hash_value);
    // transparent_crc(g_370, print_hash_value);
    // transparent_crc(g_372, print_hash_value);
    // transparent_crc(g_373, print_hash_value);
    // transparent_crc(g_374, print_hash_value);
    // transparent_crc(g_498, print_hash_value);
    // transparent_crc(g_530, print_hash_value);
    
    // transparent_crc(g_693, print_hash_value);
    // transparent_crc(g_694, print_hash_value);
    // transparent_crc(g_735, print_hash_value);
    // transparent_crc(g_751, print_hash_value);
    // transparent_crc(g_770, print_hash_value);
    // transparent_crc(g_866, print_hash_value);
    // transparent_crc(g_872, print_hash_value);
    // transparent_crc(g_884, print_hash_value);
    // transparent_crc(g_905, print_hash_value);
    
    // transparent_crc(g_1048, print_hash_value);
    // transparent_crc(g_1052, print_hash_value);
    // transparent_crc(g_1057, print_hash_value);
    
    
    // transparent_crc(g_1110, print_hash_value);
    // transparent_crc(g_1135, print_hash_value);
    
    // transparent_crc(g_1340, print_hash_value);
    // transparent_crc(g_1365, print_hash_value);
    // transparent_crc(g_1377, print_hash_value);
    
    // transparent_crc(g_1446, print_hash_value);
    // transparent_crc(g_1470, print_hash_value);
    // transparent_crc(g_1472, print_hash_value);
    // transparent_crc(g_1473, print_hash_value);
    // transparent_crc(g_1497, print_hash_value);
    // transparent_crc(g_1498, print_hash_value);
    
    // transparent_crc(g_1529, print_hash_value);
    // transparent_crc(g_1705, print_hash_value);
    // transparent_crc(g_1740, print_hash_value);
    // transparent_crc(g_1757, print_hash_value);
    // transparent_crc(g_1792, print_hash_value);
    // transparent_crc(g_1808, print_hash_value);
    
    // transparent_crc(g_1810, print_hash_value);
    // transparent_crc(g_1914, print_hash_value);
    // transparent_crc(g_2094, print_hash_value);
    // transparent_crc(g_2097, print_hash_value);
    // transparent_crc(g_2108, print_hash_value);
    // transparent_crc(g_2110, print_hash_value);
    // transparent_crc(g_2115, print_hash_value);
    // transparent_crc(g_2239, print_hash_value);
    // transparent_crc(g_2300, print_hash_value);
    // transparent_crc(g_2332, print_hash_value);
    // transparent_crc(g_2334, print_hash_value);
    // transparent_crc(g_2424, print_hash_value);
    // transparent_crc(g_2425, print_hash_value);
    // transparent_crc(g_2426, print_hash_value);
    
    // transparent_crc(g_2429, print_hash_value);
    // transparent_crc(g_2430, print_hash_value);
    // transparent_crc(g_2488, print_hash_value);
    // transparent_crc(g_2526, print_hash_value);
    // transparent_crc(g_2683, print_hash_value);
    // transparent_crc(g_2687, print_hash_value);
    // transparent_crc(g_2688, print_hash_value);
    // transparent_crc(g_2692, print_hash_value);
    // transparent_crc(g_2704, print_hash_value);
    // transparent_crc(g_2740, print_hash_value);
    // transparent_crc(g_2773, print_hash_value);
    
    // transparent_crc(g_2827, print_hash_value);
    // transparent_crc(g_2851, print_hash_value);
    
    // transparent_crc(g_2853, print_hash_value);
    // transparent_crc(g_2854, print_hash_value);
    // transparent_crc(g_2857, print_hash_value);
    // transparent_crc(g_2971, print_hash_value);
    
    // transparent_crc(g_3051, print_hash_value);
    // transparent_crc(g_3052, print_hash_value);
    // transparent_crc(g_3054, print_hash_value);
    // transparent_crc(g_3184, print_hash_value);
    // transparent_crc(g_3297, print_hash_value);
    // transparent_crc(g_3351, print_hash_value);
    // transparent_crc(g_3365, print_hash_value);
    // transparent_crc(g_3554, print_hash_value);
    // transparent_crc(g_3568, print_hash_value);
    // transparent_crc(g_3569, print_hash_value);
    // transparent_crc(g_3593, print_hash_value);
    // transparent_crc(g_3596, print_hash_value);
    // transparent_crc(g_3620, print_hash_value);
    // transparent_crc(g_3622, print_hash_value);
    // transparent_crc(g_3638, print_hash_value);
    // transparent_crc(g_3669, print_hash_value);
    // transparent_crc(g_3712, print_hash_value);
    
    // transparent_crc(g_3841, print_hash_value);
    // transparent_crc(g_3890, print_hash_value);
    // transparent_crc(g_3989, print_hash_value);
    // transparent_crc(g_4134, print_hash_value);
    
    // transparent_crc(g_4386, print_hash_value);
    // transparent_crc(g_4388, print_hash_value);
    // transparent_crc(g_4453, print_hash_value);
    // transparent_crc(g_4546, print_hash_value);
    // transparent_crc(g_4618, print_hash_value);
    // transparent_crc(g_4619, print_hash_value);
    // transparent_crc(g_4685, print_hash_value);
    
    // transparent_crc(g_4821, print_hash_value);
    // transparent_crc(g_4870, print_hash_value);
    // transparent_crc(g_4904, print_hash_value);
    
    // transparent_crc(g_5065, print_hash_value);
    // transparent_crc(g_5199, print_hash_value);
    // transparent_crc(g_5208, print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return (unsigned char)(crc32_context);
}
