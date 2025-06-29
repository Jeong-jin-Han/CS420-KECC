
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

const uint32_t g_8 = 0x0F7A73D2L;
uint32_t g_9 = 18446744073709551607UL;
uint16_t g_17 = 0x2D56L;
int32_t g_43 = (-2L);
int32_t g_53 = 0L;
int64_t g_54 = (-1L);
uint16_t g_57 = 0x00EBL;
uint64_t g_115 = 18446744073709551615UL;
uint32_t g_126 = 0xF1CC41D5L;
uint32_t g_127 = 7UL;
uint16_t g_130 = 65528UL;
int32_t g_133 = 0xE4BF81B7L;
uint32_t g_175 = 1UL;
uint32_t g_230 = 18446744073709551615UL;
int64_t g_245 = 0x05883206272B9DD1LL;
uint8_t g_323 = 1UL;
uint32_t g_327 = 0xFFD4BF9CL;
int32_t g_335 = 0x7C1DA217L;
int64_t g_337 = 0x28610EFDCEB63D19LL;
int64_t g_338 = 0x1F9110C65574E9D4LL;
uint32_t g_340 = 5UL;
uint32_t g_342 = 0xF329CA2BL;
int32_t g_344 = (-4L);
int8_t g_350 = (-3L);
int8_t g_354 = 0xE3L;
int8_t g_355 = 8L;
uint32_t g_356 = 0UL;
uint64_t g_359 = 18446744073709551615UL;
uint8_t g_361 = 0x54L;
int8_t g_368 = 0x99L;
uint32_t g_369 = 0UL;
int32_t g_370 = 0L;
uint32_t g_371 = 5UL;
uint16_t g_372 = 0x9026L;
int32_t g_374 = 0L;
int8_t g_376 = 0x30L;
uint64_t g_377 = 0x1B89557B5D56E283LL;
uint32_t g_379 = 0xB41BA907L;
int32_t g_380 = 0x3D43504BL;
int16_t g_381 = 0x4C57L;
int32_t g_382 = 0xB9B188DAL;
uint16_t g_383 = 1UL;
uint32_t g_385 = 0x835E58A2L;
uint8_t g_386 = 0xBAL;
uint16_t g_387 = 0xD5BAL;
uint64_t g_388 = 0xD79E2B91921AB92CLL;
uint64_t g_390 = 18446744073709551611UL;
int32_t g_392 = 0xCB01487BL;
uint8_t g_393 = 7UL;
int64_t g_395 = (-1L);
int16_t g_396 = 0x63C8L;
int32_t g_402 = 0xBF8A4469L;
uint8_t g_404 = 0x63L;
uint16_t g_406 = 0x7CF2L;
float g_410 = 0x8.7p-1;
float g_411 = 0x0.Fp+1;
int8_t g_412 = 1L;
int8_t g_435 = 0xF6L;
uint32_t g_461 = 0x30052219L;
uint32_t g_479 = 18446744073709551615UL;
uint16_t g_480 = 1UL;
int32_t g_535 = 0xC121777AL;
int32_t g_537 = 1L;
uint64_t g_539 = 18446744073709551615UL;
int16_t g_560 = 0x6883L;
int32_t g_572 = 0x26654060L;
uint32_t g_574 = 0x2BA41123L;
int8_t g_610 = 1L;
uint8_t g_612 = 0x77L;
int32_t g_613 = (-1L);
int32_t g_614 = 0xFBA2126EL;
int32_t g_615 = 0x6B556262L;
int32_t g_616 = 0x7B325E37L;
float g_619 = 0xE.5B3455p-91;
uint8_t g_620 = 0xBAL;
uint64_t g_621 = 18446744073709551615UL;
int64_t g_622 = (-6L);
int32_t g_623 = (-1L);
int32_t g_624 = 0L;
int16_t g_625 = 0x7318L;
uint32_t g_626 = 6UL;
int64_t g_627 = (-7L);
uint16_t g_628 = 1UL;
int8_t g_629 = 0x49L;
uint16_t g_631 = 0x5961L;
int16_t g_635 = 0x2291L;
uint16_t g_637 = 0UL;
int16_t g_640 = (-10L);
int32_t g_641 = 9L;
float g_645 = (-0x10.1p-1);
uint32_t g_847 = 4294967295UL;
const uint32_t g_921 = 0UL;
uint32_t g_1044 = 4UL;
const uint32_t g_1047 = 4294967287UL;
uint64_t g_1113 = 8UL;
int16_t g_1186 = 7L;
uint32_t g_1293 = 4294967288UL;
int32_t g_1302 = 0xC4F921CDL;
uint32_t g_1303 = 0x9BC32231L;
uint16_t g_1500 = 1UL;
int32_t g_1578 = 0x582A9AA4L;
int16_t g_1579 = (-1L);
int32_t g_1649 = (-1L);
int32_t g_1652 = 2L;
float g_1656 = (-0x9.3p+1);
int8_t g_1660 = (-1L);
int16_t g_1661 = 0x3260L;
int8_t g_1664 = 0xCDL;
uint32_t g_1667 = 18446744073709551607UL;
int8_t g_1746 = 0xBEL;
float g_1747 = (-0x4.3p-1);
uint32_t g_1748 = 0UL;
uint8_t g_1906 = 0xBEL;
int8_t g_1918 = (-8L);
uint32_t g_1922 = 1UL;
int8_t g_2073 = 1L;
float g_2074 = (-0x1.7p+1);
int32_t g_2076 = (-7L);
int16_t g_2078 = 0x0CA0L;
uint16_t g_2082 = 0x52E1L;
int32_t g_2109 = 0L;
uint32_t g_2140 = 0xDE93AEDFL;
int32_t g_2192 = (-5L);
int32_t g_2197 = (-7L);
int64_t g_2198 = (-1L);
int32_t g_2201 = 0x87C55A90L;
int16_t g_2203 = 0x2BA6L;
int8_t g_2204 = (-1L);
int32_t g_2205 = (-6L);
uint32_t g_2207 = 4UL;
uint8_t func_1(void);
const uint64_t func_11(int16_t p_12, uint32_t p_13, uint16_t p_14, uint32_t p_15, int64_t p_16);
const int32_t func_20(int8_t p_21, uint32_t p_22, uint8_t p_23, float p_24);
float func_25(uint32_t p_26, uint64_t p_27, uint8_t p_28, uint64_t p_29, int32_t p_30);
uint8_t func_41(int64_t p_42);
int16_t func_72(uint32_t p_73, int16_t p_74, uint8_t p_75);
uint8_t func_76(uint8_t p_77, uint8_t p_78);
int8_t func_79(uint32_t p_80, uint32_t p_81, int64_t p_82);
int32_t func_88(float p_89, int16_t p_90, int64_t p_91, uint32_t p_92);
int8_t func_97(uint16_t p_98, uint8_t p_99);
uint8_t func_1(void)
{
    uint32_t l_6 = 4294967295UL;
    int32_t l_10 = 0x6C3F0BC5L;
    uint64_t l_2028 = 18446744073709551614UL;
    int32_t l_2236 = (-5L);
    l_2236 = (safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(l_6, (l_10 = (g_9 = (+(g_8 >= 0UL)))))), (func_11(l_6, (g_17 |= 0xDBDF7CD9L), (((safe_mod_func_int32_t_s_s(((l_6 , (l_6 < g_8)) <= func_20(l_6, g_8, l_6, l_6)), l_6)) != l_6) , 1UL), l_6, l_2028) | g_387)));
    g_2201 = (safe_rshift_func_int64_t_s_u(((safe_mod_func_uint16_t_u_u(((0x3CC9168564F38E72LL <= g_574) , ((g_2073 = (g_1746 = 4L)) >= l_10)), (safe_mod_func_int64_t_s_s(0x97B2BBAFD2750F53LL, (7UL && ((g_1579 || ((65535UL & 65535UL) < g_637)) , l_10)))))) && 18446744073709551614UL), l_6));
    for (g_323 = 0; (g_323 == 58); ++g_323)
    {
        l_2236 = g_612;
    }
    return l_2236;
}
const uint64_t func_11(int16_t p_12, uint32_t p_13, uint16_t p_14, uint32_t p_15, int64_t p_16)
{
    uint32_t l_2039 = 4294967291UL;
    int32_t l_2059 = 0x6B0F269DL;
    int32_t l_2060 = (-1L);
    int32_t l_2061 = (-10L);
    int32_t l_2062 = 1L;
    int32_t l_2063 = (-2L);
    int32_t l_2064 = 0xBA11CCB2L;
    int32_t l_2065 = (-1L);
    int32_t l_2066 = (-1L);
    int32_t l_2067 = (-1L);
    int32_t l_2068 = 0x63D766F6L;
    int32_t l_2069 = 1L;
    int32_t l_2070 = 0x22C5616EL;
    int32_t l_2071 = 0xBDF034CDL;
    int32_t l_2072 = (-9L);
    int32_t l_2075 = 0x738CC94FL;
    int32_t l_2077 = 4L;
    int32_t l_2079 = (-1L);
    int32_t l_2080 = 0L;
    int32_t l_2081 = 0L;
    uint16_t l_2117 = 0UL;
    int16_t l_2135 = (-4L);
    uint8_t l_2165 = 1UL;
    g_1656 = (safe_add_func_float_f_f(p_16, (((safe_div_func_int32_t_s_s(((safe_lshift_func_int64_t_s_s(((safe_div_func_uint32_t_u_u(p_15, (-1L))) && (-1L)), g_637)) & (g_624 = ((p_15 , p_16) > (((safe_rshift_func_int32_t_s_u((((l_2039 != ((safe_rshift_func_uint64_t_u_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(g_355, 6UL)), g_635)), 6)), l_2039)) == p_13)) > (-2L)) & 0UL), p_15)) > 7L) <= 0xD271DFA65C0A8322LL)))), l_2039)) , l_2039) >= g_1747)));
    l_2066 |= (((((p_16 && (l_2072 = ((((((safe_lshift_func_int16_t_s_u((!((p_13 < (g_350 & (safe_mul_func_int16_t_s_s((safe_lshift_func_int32_t_s_u(((safe_sub_func_uint32_t_u_u((++g_2082), (((safe_rshift_func_uint32_t_u_s(((p_16 > (((safe_add_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(((g_1667 &= p_15) ^ (safe_sub_func_uint8_t_u_u((l_2070 >= 0UL), l_2065))), (p_14 = p_14))) && 0xE9D349AF5DCC4A81LL), g_385)) == p_16) <= l_2059)) == (-7L)), g_356)) != p_16) | p_13))) != l_2075), 0)), p_15)))) >= l_2067)), p_15)) < 3L) || p_12) ^ g_380) | l_2069) != 1L))) , p_13) | g_539) , 4294967293UL) | g_381);
    for (l_2064 = (-25); (l_2064 >= (-10)); l_2064 = safe_add_func_int32_t_s_s(l_2064, 2))
    {
        const int32_t l_2110 = 0L;
        float l_2111 = 0x7.15BF25p-1;
        int32_t l_2174 = 8L;
        int32_t l_2178 = (-1L);
        int32_t l_2182 = (-5L);
        int32_t l_2185 = 0x94CE39EBL;
        int32_t l_2193 = (-2L);
        int16_t l_2199 = 0x2327L;
        int32_t l_2200 = 0xEA591BADL;
        g_619 = (g_411 = 0xA.1C7EF0p+92);
        if ((p_13 = (safe_add_func_uint32_t_u_u(p_16, (safe_div_func_uint16_t_u_u(((l_2062 || (0L > ((((((((l_2071 = (safe_lshift_func_int64_t_s_u(((((safe_sub_func_int32_t_s_s(((safe_rshift_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((((((g_2109 & l_2110) > g_1649) == l_2110) == ((g_245 ^ (+(l_2079 = (((safe_div_func_int64_t_s_s(((((safe_mul_func_uint16_t_u_u(g_406, l_2110)) || g_847) >= l_2117) != g_635), p_16)) >= 0xA4L) <= 0UL)))) == g_245)) , 3L) != g_620), g_17)), 27)) != 4294967295UL), l_2066)) == 4294967295UL) > l_2065) ^ l_2069), 46))) && p_13) , 0xD1C8EC1D4334F2A9LL) && 2UL) > 0x3661856BL) == g_620) & l_2039) , p_14))) & l_2110), 0x5014L))))))
        {
            uint32_t l_2120 = 0xC0DB0CD4L;
            uint32_t l_2125 = 0UL;
            int64_t l_2130 = 1L;
            uint32_t l_2136 = 18446744073709551608UL;
            int32_t l_2137 = 0x03CC8CDBL;
            int32_t l_2138 = 0x63CF57E1L;
            int32_t l_2139 = 0xC698E46DL;
            g_402 = ((safe_div_func_float_f_f(l_2110, l_2120)) , (((((g_53 ^= (((18446744073709551609UL == ((safe_lshift_func_uint16_t_u_s((l_2125++), (l_2039 && (safe_mod_func_int64_t_s_s((((g_379 = g_461) || l_2110) , l_2130), ((l_2079 |= (safe_add_func_int16_t_s_s(((((((((g_2073 <= (safe_mod_func_uint64_t_u_u((l_2120 , l_2135), p_15))) > (-8L)) || l_2110) <= g_631) == l_2136) || p_16) != p_12) < 0L), g_535))) ^ p_13)))))) || l_2075)) & 1L) , l_2110)) & 0x96EDL) , 255UL) == g_461) && 0L));
            --g_2140;
            if (g_435)
                break;
        }
        else
        {
            int32_t l_2150 = 0x71704545L;
            int32_t l_2159 = 0x2F15F0EEL;
            int32_t l_2160 = 0x5CC6DC6AL;
            int32_t l_2179 = 1L;
            int32_t l_2180 = 1L;
            int32_t l_2181 = 0L;
            int32_t l_2183 = 5L;
            int32_t l_2186 = 0L;
            int32_t l_2187 = 0xD78FA80AL;
            int32_t l_2188 = 0L;
            int32_t l_2189 = 0L;
            int32_t l_2190 = 6L;
            int32_t l_2195 = 0x72B8E536L;
            int32_t l_2196 = 0x09B1D57FL;
            int32_t l_2202 = 0x89CE3558L;
            int32_t l_2206 = 0L;
            p_13 = (safe_sub_func_int8_t_s_s(((l_2081 = (safe_add_func_uint16_t_u_u((l_2160 = (((+(l_2159 = (((safe_div_func_uint32_t_u_u(l_2150, (safe_lshift_func_int32_t_s_s((p_13 , ((~g_392) >= (-1L))), 3)))) , (g_406 & (safe_add_func_int32_t_s_s((((~1UL) || (g_1578 != (safe_add_func_uint16_t_u_u(p_15, (g_383 = p_14))))) != p_14), 4294967295UL)))) && 0L))) || 0x2B5517F9L) > 0x66532DB72F5150DBLL)), l_2059))) > p_15), 0xEAL));
            for (p_14 = 0; (p_14 < 26); p_14++)
            {
                uint16_t l_2170 = 8UL;
                int32_t l_2173 = (-2L);
                int32_t l_2175 = 0x619D7D4CL;
                int32_t l_2176 = 0x2D98E7F9L;
                int32_t l_2177 = 7L;
                int32_t l_2184 = 0xD2F12EA2L;
                int32_t l_2191 = 7L;
                int32_t l_2194 = 0xBF0BD574L;
                g_245 = p_16;
                g_1747 = (((safe_div_func_float_f_f(p_14, (g_1500 == l_2165))) != (0x0.Ep+1 == (safe_add_func_float_f_f((safe_mul_func_float_f_f(l_2170, (((((l_2075 = (safe_sub_func_uint32_t_u_u((++g_2207), ((l_2182 < (safe_unary_minus_func_uint64_t_u(l_2183))) && (safe_div_func_int64_t_s_s(((0xFD2D82B1L | (((g_1303 , g_388) > p_15) >= g_1922)) != p_12), l_2065)))))) != 65528UL) < g_2198) , 0x7.E5E3A9p-68) > 0xA.34D756p-48))), g_396)))) != l_2194);
            }
        }
        l_2062 &= (((g_392 >= (((0x1D9B45DFL == (((safe_rshift_func_int64_t_s_u((p_12 != (safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((l_2110 <= (~0L)), (safe_rshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s((((+g_623) || g_1044) == ((((safe_div_func_int8_t_s_s((((l_2077 = (safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((p_12 <= (l_2182 , p_14)), p_15)), g_386))) & l_2075) , p_12), g_622)) < p_12) & (-2L)) | p_12)))) , l_2200), l_2193)) != g_402) && l_2200), l_2193)))), l_2071))), 52)) ^ 18446744073709551612UL) || g_621)) != l_2200) > 1UL)) >= p_16) > (-1L));
        for (g_327 = 0; (g_327 <= 50); g_327 = safe_add_func_uint8_t_u_u(g_327, 2))
        {
            g_382 = l_2174;
        }
    }
    return g_57;
}
const int32_t func_20(int8_t p_21, uint32_t p_22, uint8_t p_23, float p_24)
{
    int64_t l_36 = 0L;
    int32_t l_61 = 0x6DBD8D46L;
    int32_t l_62 = 1L;
    int32_t l_1101 = 0x1617B9A9L;
    int32_t l_1108 = (-1L);
    uint16_t l_1142 = 0x7F79L;
    uint64_t l_1213 = 0x8FBA05C152BC62CALL;
    uint32_t l_1250 = 4294967295UL;
    int32_t l_1289 = (-9L);
    int32_t l_1290 = 0x49F7EDB6L;
    const float l_1367 = (-0x6.8p-1);
    uint16_t l_1407 = 1UL;
    float l_1453 = 0x7.6286A5p+34;
    uint8_t l_1468 = 0xA4L;
    int64_t l_1469 = (-3L);
    int64_t l_1489 = 0xE2328166F8A60890LL;
    int16_t l_1493 = 0L;
    int16_t l_1510 = 0x7576L;
    uint8_t l_1572 = 0x12L;
    uint32_t l_1640 = 1UL;
    int64_t l_1738 = 0xD1F20742FE494AC7LL;
    uint8_t l_1792 = 0x85L;
    uint32_t l_1899 = 18446744073709551609UL;
    int16_t l_1901 = 0L;
    uint32_t l_2018 = 0UL;
    if (p_21)
    {
        int32_t l_33 = 0L;
        int32_t l_60 = 0xCB6EA418L;
        uint64_t l_1005 = 0x546DE4E4AE1AB64BLL;
        uint64_t l_1006 = 0xF1777BF7AD285829LL;
        int32_t l_1007 = 0xFEA394D4L;
        int32_t l_1172 = 0xB26172A0L;
        uint16_t l_1212 = 0xB99CL;
        int32_t l_1275 = 0L;
        int32_t l_1280 = (-1L);
        int32_t l_1281 = 0xF99D9A9CL;
        int32_t l_1286 = 0L;
        int8_t l_1348 = 1L;
        int32_t l_1360 = 0x0FE6BE35L;
        p_24 = func_25(g_8, (safe_add_func_uint16_t_u_u(l_33, (((safe_sub_func_uint16_t_u_u(p_21, l_36)) == (safe_mul_func_uint8_t_u_u(0x2EL, g_8))) | ((safe_rshift_func_uint32_t_u_u(g_8, 10)) <= ((l_62 = (l_61 = ((l_60 |= func_41(p_22)) >= g_54))) , 0x7DD7D552B8909FF4LL))))), l_36, p_22, g_53);
        l_1007 = (((safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((g_616 = (p_23 && (0L >= ((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(p_22, 10)) ^ (safe_sub_func_int64_t_s_s(g_340, ((((g_631 != ((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((g_175 && (l_33 == l_1005)) != (((((l_60 = 1UL) > l_1005) >= 4L) == 0x02L) | p_22)) , 0x003A273AL), 0xBFECE152L)), 0x65CFL)) != g_847) , l_33) > l_1006), g_620)) , 0x1D7EL), g_355)) && 0xA702B2D7L)) | p_21) <= g_368) >= 0xB39D3FEB64B9C2C9LL)))), g_376)), 1L)) & g_383)))), p_21)), g_344)) || l_36) && g_616);
        if (((g_614 <= ((safe_mul_func_float_f_f((safe_add_func_float_f_f((((safe_div_func_int16_t_s_s(((safe_mul_func_int32_t_s_s(((safe_mul_func_uint32_t_u_u((safe_div_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u(l_62, g_385)) , ((((!(safe_unary_minus_func_uint64_t_u((((safe_mul_func_float_f_f(p_21, (g_411 = (safe_div_func_float_f_f(0x7.8ED2DDp-81, (0xA.7CB516p-66 <= (p_24 = (((((safe_mul_func_float_f_f((g_619 = ((safe_div_func_float_f_f((safe_sub_func_float_f_f((safe_sub_func_float_f_f((safe_add_func_float_f_f(((g_645 = ((safe_div_func_float_f_f(((g_623 &= (l_62 = ((safe_rshift_func_int8_t_s_s(p_21, 7)) || ((safe_lshift_func_int16_t_s_u(((0L && p_21) > g_126), 12)) ^ g_130)))) , g_406), 0x8.2C5829p+57)) >= g_627)) != (-0x6.Cp+1)), l_33)), p_23)), g_335)), g_381)) >= g_354)), (-0x2.0p+1))) < g_369) > g_612) <= l_61) == 0xA.CD494Dp+43)))))))) , l_1007) || g_57)))) & p_23) & 0x0BL) >= 0L)) || p_22), 0x1753B7B4L)), p_22)) , g_625), p_22)) | g_613), g_1044)) , g_342) <= 0x3.6B67ACp-24), g_461)), g_392)) < (-0x1.Bp-1))) , p_23))
        {
            uint16_t l_1062 = 3UL;
            int32_t l_1098 = 0xCFD23A21L;
            int32_t l_1100 = 0xDDB0A56FL;
            int32_t l_1109 = 0x70DCE3B9L;
            uint16_t l_1198 = 65526UL;
            g_645 = ((safe_mul_func_float_f_f(g_1047, (safe_add_func_float_f_f((safe_add_func_float_f_f(l_61, g_435)), (!(-0x1.1p+1)))))) > (safe_div_func_float_f_f(0x1.8p+1, (safe_sub_func_float_f_f(((!((l_33 , (((safe_rshift_func_int8_t_s_s(((((l_1007 , (-8L)) || (((safe_div_func_uint32_t_u_u(g_560, 0xC1714F3BL)) , 9UL) & p_23)) , g_133) <= l_1062), 0)) , l_62) <= p_21)) || 0x2FL)) , g_230), 0xB.89401Dp+2)))));
            if ((safe_rshift_func_int32_t_s_s((((safe_unary_minus_func_uint8_t_u(((!(p_21 | ((0xCAL ^ (g_402 |= ((l_61 ^= (safe_sub_func_int16_t_s_s((l_62 = g_622), 0xA88CL))) == p_23))) || (safe_mul_func_uint32_t_u_u(((l_60 , g_539) && l_1062), (safe_lshift_func_int8_t_s_u((-1L), 3))))))) <= (-1L)))) , g_337) <= 0xF636BC524C2F9FDELL), p_21)))
            {
                return g_613;
            }
            else
            {
                uint64_t l_1073 = 0x9D4F8DD201F806F1LL;
                int32_t l_1096 = (-1L);
                int32_t l_1103 = 0L;
                int32_t l_1104 = 0xECE06F59L;
                int32_t l_1105 = 0x80852253L;
                int32_t l_1107 = 0x5B59ACA9L;
                int32_t l_1110 = 0x79E32848L;
                int32_t l_1111 = (-5L);
                int32_t l_1126 = (-3L);
                int32_t l_1189 = 0x5C2B57B1L;
                --l_1073;
                for (g_327 = 0; (g_327 >= 51); g_327 = safe_add_func_uint32_t_u_u(g_327, 8))
                {
                    uint32_t l_1092 = 0x9138A2DAL;
                    int32_t l_1095 = (-5L);
                    int32_t l_1097 = (-2L);
                    int32_t l_1099 = 0xDA3F8B6EL;
                    int32_t l_1102 = 0xC6C349E8L;
                    int32_t l_1106 = (-1L);
                    int32_t l_1112 = (-1L);
                    if ((p_22 = ((safe_sub_func_int32_t_s_s(0xC0A17DFEL, ((l_1073 || (safe_rshift_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((l_1110 |= (safe_lshift_func_uint32_t_u_u((l_1126 = (((((((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(0x1BD40AA1L, ((l_1105 = ((((l_1092 = (safe_mod_func_int64_t_s_s(g_371, p_22))) & ((safe_lshift_func_uint16_t_u_s((--g_1113), 0)) , ((((0xB90E4415BC054495LL >= (((safe_lshift_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((g_368 = (g_376 = p_21)), (l_1095 = (safe_rshift_func_uint64_t_u_s(((safe_mul_func_uint64_t_u_u((l_33 <= (safe_sub_func_int8_t_s_s(g_574, (-2L)))), 18446744073709551615UL)) , g_539), g_621))))) >= 0xB2L), p_23)) , g_385) & g_380)) , l_1006) > 1L) && l_1111))) == g_386) & 0x712B0E81L)) & g_386))), g_612)) || g_390) , p_21) || 0xE201L) || l_1108) == l_1109) , g_396)), 14))) && p_22), 0xFC146572399CF3FALL)), 17))) > l_1112))) ^ p_23)))
                    {
                        int8_t l_1141 = (-1L);
                        l_1007 = (safe_unary_minus_func_int32_t_s((safe_add_func_int32_t_s_s(g_539, ((safe_rshift_func_uint64_t_u_s((((((+g_635) || ((l_1142 ^= (((safe_rshift_func_uint16_t_u_u(((~(safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint16_t_u_u(p_21, 0x8C70L)) < (p_23 && (safe_lshift_func_int16_t_s_u(0xE368L, g_404))))))) <= (((l_1141 || 0xBED84AFFEE3ACA8DLL) | g_622) , l_1062)), p_21)) , 0x2A5C126932644401LL) <= p_22)) | p_22)) >= p_21) != 0x69CAL) ^ l_1141), p_23)) <= 65529UL)))));
                        if (l_1092)
                            continue;
                        if (l_62)
                            break;
                        return l_1106;
                    }
                    else
                    {
                        uint32_t l_1143 = 0xFF210FA3L;
                        l_1143--;
                    }
                    for (l_1106 = 19; (l_1106 <= (-6)); l_1106 = safe_sub_func_uint64_t_u_u(l_1106, 9))
                    {
                        uint64_t l_1190 = 0x8DD99D71F3700565LL;
                        l_1104 |= ((((g_623 && (+0x405FL)) >= (p_22 = (safe_sub_func_uint64_t_u_u(g_627, p_23)))) , (l_1108 , (-1L))) , (l_1100 ^= g_614));
                        if (p_21)
                            continue;
                        g_371 = (safe_add_func_uint8_t_u_u(((l_1005 < (l_1189 = (safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int64_t_s((((l_60 = (+((safe_div_func_int8_t_s_s((safe_sub_func_int64_t_s_s((+(p_23 > (safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint32_t_u_u((g_53 , l_1172), (g_390 && (safe_lshift_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(g_370, 2)), 28))))) , ((~(((safe_add_func_uint32_t_u_u(0x3BD11860L, (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int32_t_s_u((g_1186 , (safe_rshift_func_int64_t_s_s(l_1101, 13))), 31)), (-7L))), l_1109)))) , g_370) | p_22)) >= l_1062)), 0UL)) && g_126), 2)))), l_1189)), g_635)) & 0xDAA91EB39B741556LL))) != g_616) != 0xABAD93B6698D30D4LL))) , p_21), p_22)) <= 0x9BL), l_1108)), l_1190)))) == l_1190), p_22));
                    }
                }
                for (g_369 = 11; (g_369 != 11); g_369 = safe_add_func_int8_t_s_s(g_369, 3))
                {
                    uint32_t l_1211 = 0xAF593C37L;
                    float l_1241 = 0x1.3p-1;
                    l_1213 = (p_22 = (l_1212 = ((((l_1189 = (safe_mod_func_int64_t_s_s((((((((((g_613 = (p_23 == (((p_21 >= ((l_1111 = p_23) > p_21)) == ((((((((g_382 , (safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int32_t_s_s(l_1198, 21)) , (safe_mul_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int64_t_s_s(p_21, 30)), 7)), ((safe_sub_func_int64_t_s_s(((((((safe_mod_func_int8_t_s_s((((g_1044 = (g_340 |= (safe_div_func_uint16_t_u_u(p_22, p_21)))) , l_1005) , l_60), (-7L))) < 0xE1L) | 1UL) && g_641) != l_1105) && 0xF654211ED424631BLL), p_23)) || 0xDAL))))))) >= l_1211) , p_22) && l_1006) >= p_22) > g_393) || 5L) ^ g_393)) || l_61))) < g_537) & 0xD7AD857FL) ^ 0L) , l_1110) < 1UL) >= 1L) && 0xE881F548L) , g_356), 0xCF197085EA1BBE75LL))) , l_1098) , 3UL) | g_395)));
                    l_1100 = ((g_342 |= (l_62 | (safe_mod_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((~p_21), (safe_lshift_func_int64_t_s_s(g_847, 54)))) && ((g_1044 , (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(7UL, (((safe_add_func_uint32_t_u_u((p_23 | (safe_mod_func_int32_t_s_s(1L, (safe_sub_func_uint32_t_u_u((g_335 = (((safe_lshift_func_int8_t_s_s(((g_847 = (safe_mod_func_uint32_t_u_u((safe_mul_func_int32_t_s_s(0xB59374E1L, (safe_lshift_func_uint8_t_u_s((g_356 ^ p_22), 5)))), 4294967292UL))) || l_1211), 3)) , l_1213) == g_435)), l_1111))))), l_1211)) || 0x81L) , g_1047))), g_412))) && 0L)), p_23)), 0x36L)))) > l_1062);
                }
            }
            g_535 &= (p_21 || (safe_lshift_func_int64_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int64_t_s_s((((-3L) <= l_1250) , ((g_1044 = (safe_add_func_int8_t_s_s((g_1186 & (((((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((((((safe_div_func_int8_t_s_s(9L, (p_21 ^ (((l_1100 ^ (safe_mul_func_uint8_t_u_u(6UL, (safe_add_func_int32_t_s_s((g_323 < p_22), l_1172))))) ^ 1L) | l_62)))) || 1UL) , p_22) , l_1250) && l_1098) != g_480), g_335)), l_36)) >= l_1108) ^ g_612) , g_480) <= g_622)), 0x9EL))) & 0L)), p_23)), 9)), p_23)), p_21)));
        }
        else
        {
            uint32_t l_1269 = 0x97AAF151L;
            int32_t l_1278 = 0x8DB2D74BL;
            int32_t l_1347 = 1L;
            int32_t l_1372 = 0x26C6F8C5L;
            int32_t l_1373 = 0L;
            l_60 ^= (safe_lshift_func_int32_t_s_s(0x995D39D3L, 28));
            for (g_340 = 17; (g_340 == 53); g_340 = safe_add_func_int64_t_s_s(g_340, 5))
            {
                int16_t l_1282 = 0xE0B8L;
                int32_t l_1284 = 1L;
                int32_t l_1292 = (-1L);
                for (g_616 = 0; (g_616 != (-2)); g_616--)
                {
                    float l_1274 = 0x2.6p-1;
                    int32_t l_1276 = 0x5ED3FD08L;
                    int32_t l_1279 = 0x3331B8AFL;
                    int32_t l_1283 = 4L;
                    int32_t l_1285 = 0x0AB94229L;
                    int32_t l_1288 = (-1L);
                    if (l_1269)
                    {
                        int32_t l_1277 = 0x29B6C2D9L;
                        int32_t l_1287 = 4L;
                        int32_t l_1291 = 0xCFF0BE3AL;
                        uint16_t l_1318 = 1UL;
                        g_1303 = (safe_add_func_int8_t_s_s((l_1278 = ((((-3L) ^ (safe_add_func_uint8_t_u_u(g_480, (((g_1293++) < ((g_354 || ((l_1286 = ((g_406 = g_372) > (l_62 = ((safe_mul_func_uint32_t_u_u((((0x55A067A2L & ((safe_div_func_uint8_t_u_u(l_1281, ((l_1280 >= (p_23 & (safe_mul_func_uint64_t_u_u(g_335, 0x5F14DB6128F15DA8LL)))) ^ g_629))) , g_379)) > p_23) && 1L), 4294967295UL)) || (-6L))))) , g_613)) <= g_1302)) , l_1292)))) || l_1278) >= g_388)), 0x4AL));
                        g_1293 |= (safe_mod_func_int8_t_s_s(0x3CL, ((g_435 , (g_574 < g_53)) & (safe_mod_func_uint16_t_u_u((l_1287 | (safe_div_func_uint32_t_u_u((0xCFC3L ^ (g_54 <= (safe_lshift_func_int8_t_s_u(((safe_mul_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((l_1318 < 0x034977EEL), g_622)), 8UL)), g_388)) && l_1289), l_1101)))), p_22))), p_23)))));
                    }
                    else
                    {
                        uint32_t l_1321 = 0x54C19AE9L;
                        int32_t l_1329 = 6L;
                        p_24 = (safe_sub_func_float_f_f(0x7.1p-1, (((p_23 == 0x8.E0E5DFp-74) < l_1321) <= (safe_sub_func_float_f_f((-0x9.Bp+1), l_1279)))));
                        g_371 = (safe_div_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((((l_1329 = (!(l_1279 = (g_847 = p_22)))) || (safe_lshift_func_int32_t_s_s((p_23 > ((g_410 = ((l_1286 , g_627) , (safe_div_func_float_f_f((p_22 < g_628), ((g_411 = ((safe_mul_func_float_f_f((safe_add_func_float_f_f((safe_add_func_float_f_f(((((safe_sub_func_float_f_f(0x0.4p-1, (safe_div_func_float_f_f(((p_24 = ((((safe_add_func_int64_t_s_s((p_23 < (~0x34L)), g_614)) <= g_1113) | p_23) , 0x1.5E54EAp-2)) == g_368), l_1172)))) > p_23) > 0xD.93175Fp-59) >= l_1321), p_21)), 0x8.C48460p+17)), 0xD.73F705p-44)) < l_1347)) != l_1292))))) , g_335)), 19))) , 65535UL) < g_1186), l_1347)), 0xF794C98070873085LL));
                        g_350 = p_21;
                        l_1373 = (safe_div_func_int32_t_s_s((((+65526UL) & ((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((l_1372 = (0x01L || ((l_1278 &= l_1360) <= ((safe_sub_func_uint16_t_u_u(g_361, (safe_mod_func_int64_t_s_s((safe_lshift_func_uint32_t_u_s(((g_621 != (l_1284 > 65535UL)) > l_60), (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(p_22, 3)), 1UL)))), g_381)))) ^ 65531UL)))) || g_127) < 0L), p_23)), p_22)) <= g_57)) ^ 1L), g_54));
                    }
                    l_1288 = p_23;
                }
            }
            return p_22;
        }
    }
    else
    {
        int64_t l_1376 = 0xD36779BF6056A990LL;
        int32_t l_1378 = 0L;
        int16_t l_1410 = (-1L);
        int32_t l_1411 = 0x247C6073L;
        p_24 = (safe_mul_func_float_f_f(p_23, ((g_410 != l_1376) != (-(l_1378 = g_621)))));
        g_1303 = (((safe_rshift_func_uint32_t_u_s(0xAF1DF6ADL, (g_335 &= ((safe_mul_func_uint8_t_u_u(g_610, (safe_lshift_func_int64_t_s_u((safe_sub_func_uint32_t_u_u(((g_629 = (g_435 = (g_412 = g_368))) | (safe_mul_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_s(l_1108, 9)))) == ((safe_mod_func_int8_t_s_s((+4294967295UL), (~(p_21 , ((p_22 = (safe_add_func_int8_t_s_s(((((safe_lshift_func_uint64_t_u_s((l_1411 = (safe_mul_func_uint8_t_u_u((((l_1378 = ((safe_rshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((l_1410 |= (p_21 | ((g_1044 || ((safe_unary_minus_func_uint64_t_u((l_1407--))) , g_323)) <= g_395))), l_1108)) && p_22) <= l_1378), l_1378)) > 0x9B6158EB4DA4E2D7LL)) < p_22) != p_22), l_1376))), g_54)) > g_54) != 0x0F89L) & l_1376), g_127))) >= g_404))))) <= 9UL)) | 0x00CDL), g_350))), g_372)), 52)))) == 0L)))) >= g_1113) | p_23);
        for (p_23 = (-6); (p_23 == 36); p_23++)
        {
            int8_t l_1450 = 1L;
            int32_t l_1451 = 0xBC1A6145L;
            int32_t l_1452 = 0x33E13D42L;
            uint32_t l_1454 = 0x85F17D94L;
            l_1452 = ((((-0x2.2p-1) == p_22) , (((((safe_sub_func_uint16_t_u_u(((l_1290 = (((safe_add_func_int64_t_s_s((((0x8A25E886L || (l_1411 = (((safe_add_func_int16_t_s_s((((safe_add_func_uint64_t_u_u(((((safe_mul_func_uint8_t_u_u((g_1293 |= (safe_div_func_int8_t_s_s((0x8CL >= (((safe_rshift_func_int32_t_s_u(g_629, 9)) | ((safe_mod_func_int8_t_s_s(((~(safe_mod_func_int16_t_s_s((((safe_rshift_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((((l_1451 = (safe_rshift_func_int16_t_s_s((l_1378 = (safe_mul_func_int8_t_s_s(((!0x412CL) > ((((safe_mul_func_int64_t_s_s((g_627 && (((0xBCL == (safe_div_func_int8_t_s_s(g_620, l_1410))) > (-2L)) && 0xDEL)), p_22)) & 0L) ^ 0UL) , l_1290)), l_1450))), g_350))) && 0UL) , 0UL), g_435)), p_21)) | 0L) >= g_392), l_1450))) >= l_1450), l_1376)) || (-8L))) < p_22)), p_22))), p_21)) > g_435) < 0UL) | p_22), p_23)) != l_1289) && g_342), l_36)) & l_1450) > p_22))) <= g_127) ^ p_22), 0x6B3BD5EB49742558LL)) | g_130) != p_23)) , p_22), p_21)) > p_23) || 65535UL) < 1UL) <= p_22)) & l_61);
            l_1454--;
        }
    }
    if (((l_36 > (safe_rshift_func_uint16_t_u_u(((g_43 & ((+((((p_21 , (l_1108 |= (safe_rshift_func_int64_t_s_u((((p_22 , (l_61 = l_61)) > (((((((((safe_rshift_func_uint16_t_u_u((l_1290 , g_350), (safe_mul_func_uint64_t_u_u(((p_22 || (((safe_div_func_int64_t_s_s(l_1142, p_21)) | p_21) == p_22)) <= 0xCB59F380ABEC01EBLL), l_1468)))) != p_23) & 0x44EBL) <= 0x3BB1L) , g_8) < l_1469) == g_572) , 4294967295UL) < (-5L))) == p_23), 41)))) <= l_1213) || l_1469) <= g_385)) != l_1469)) == l_1407), 6))) == g_337))
    {
        uint32_t l_1470 = 4UL;
        int32_t l_1490 = 0x2D31CF77L;
        int32_t l_1491 = (-8L);
        int32_t l_1494 = 0xD5FCA2E0L;
        int32_t l_1495 = 6L;
        int32_t l_1499 = 1L;
        int8_t l_1723 = 0x2DL;
        uint32_t l_1941 = 6UL;
        int64_t l_1998 = (-1L);
        uint8_t l_1999 = 1UL;
        l_1289 = g_406;
        l_1470 = g_175;
        for (g_615 = 6; (g_615 > 5); g_615 = safe_sub_func_int16_t_s_s(g_615, 4))
        {
            uint8_t l_1473 = 0xA5L;
            int32_t l_1492 = 1L;
            int32_t l_1496 = 0xCF7F8522L;
            int32_t l_1497 = 0x75C1F434L;
            int32_t l_1498 = 0x05A43887L;
            l_1473 ^= ((-3L) == p_23);
            l_1289 &= ((safe_div_func_uint32_t_u_u((safe_lshift_func_int32_t_s_u(p_22, 27)), (safe_div_func_uint64_t_u_u((safe_rshift_func_int32_t_s_u((g_356 &= (((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(p_21, 0x58L)), ((+1UL) , (l_1470 >= p_21)))), (--g_1500))) < (((safe_lshift_func_int8_t_s_s((((p_22 < (p_23 = ((safe_sub_func_uint32_t_u_u(((((safe_unary_minus_func_uint64_t_u(((((0L <= (safe_add_func_uint16_t_u_u((0xFCL != 0x03L), l_1499))) & 0UL) && 1L) & l_1510))) && p_21) <= l_1496) , g_479), 1UL)) , g_386))) , l_1250) , p_21), 3)) | 0x8553L) ^ l_1499)) | g_377)), p_21)), l_1473)))) == 2UL);
            l_1491 = (p_21 , ((safe_sub_func_uint32_t_u_u((l_1496 >= (safe_mod_func_int16_t_s_s(2L, p_23))), (l_1499 > (g_1044 = (safe_mul_func_int8_t_s_s((p_23 == g_133), (g_340 , p_23))))))) && 18446744073709551613UL));
            g_369 = g_1047;
        }
        for (g_1044 = 0; (g_1044 < 47); g_1044 = safe_add_func_uint8_t_u_u(g_1044, 6))
        {
            uint32_t l_1524 = 0x323F8488L;
            const uint64_t l_1549 = 4UL;
            int32_t l_1604 = 0x6D0F2528L;
            int32_t l_1623 = 0xC20B2B5EL;
            int8_t l_1648 = 0x2DL;
            int32_t l_1653 = 0xC1D4A37AL;
            int32_t l_1658 = 0x1F506548L;
            int32_t l_1665 = 1L;
            uint32_t l_1739 = 0x45D2E612L;
            uint8_t l_1793 = 253UL;
            int8_t l_1825 = 0L;
            int32_t l_1853 = (-1L);
            uint16_t l_1876 = 0UL;
            int32_t l_1916 = 0x721DFAC2L;
            int32_t l_1917 = 0L;
            int32_t l_1920 = 0x5E05B4CBL;
            int64_t l_1985 = 0L;
            if ((((safe_mod_func_int64_t_s_s(((p_23 && (l_62 ^= (p_21 , (p_21 , (g_613 = 1L))))) || (p_23 != ((+((g_371 = l_1524) | ((p_23 < p_23) , g_640))) ^ g_614))), 0x78C62BA2EB094760LL)) > g_1044) != 0UL))
            {
                uint32_t l_1575 = 3UL;
                uint16_t l_1576 = 0x5CE0L;
                int32_t l_1577 = 4L;
                int32_t l_1646 = (-9L);
                int32_t l_1654 = 0xFDCB904DL;
                int32_t l_1655 = 0x0EC69282L;
                int32_t l_1662 = 0L;
                int32_t l_1663 = 7L;
                uint32_t l_1734 = 0xDBD75391L;
                int32_t l_1786 = 0x4EE7C90DL;
                uint16_t l_1794 = 0x012AL;
                int32_t l_1959 = 0xD9D0510DL;
                int16_t l_1984 = (-1L);
                if ((l_61 ^= (((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint8_t_u_u(((g_1113 <= p_22) & (((((0x1052491FL || (safe_sub_func_uint16_t_u_u(p_22, (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((l_1495 = ((safe_rshift_func_uint32_t_u_u(((!((safe_mod_func_uint64_t_u_u(((((safe_div_func_int8_t_s_s(p_22, p_22)) != ((safe_lshift_func_uint32_t_u_s((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(l_1213, g_396)) != ((safe_mul_func_float_f_f((((-0x6.0p-1) != p_23) < g_372), l_1494)) , l_1213)), g_1293)), 17)) | p_21)) & (-1L)) >= 0x2AD12D6B2F941FB1LL), 8UL)) && l_1549)) || g_383), 4)) || l_1524)) & 0xD9B46493082B3496LL) <= 0x1E45L), 0x9DC05BE2L)), l_1470))))) != l_1101) || 0xF7L) , 1UL) >= l_1494)), 0)))) && 0xC244CA3F8ECE3CB7LL) && l_1491)))
                {
                    uint32_t l_1603 = 0xFA8A9F6DL;
                    p_24 = (safe_div_func_float_f_f(g_387, ((safe_add_func_uint64_t_u_u((g_847 ^= (safe_mul_func_uint16_t_u_u((!((safe_lshift_func_uint64_t_u_u((p_22 = ((~((l_1495 = (safe_sub_func_uint32_t_u_u((l_1510 != (safe_rshift_func_int32_t_s_s((safe_mul_func_int16_t_s_s((g_323 == (65535UL > (safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((l_1572 == (safe_sub_func_uint16_t_u_u(0xFF09L, ((((p_23 & p_22) > ((l_1577 = (((l_1289 |= l_1575) | g_628) == l_1576)) >= g_396)) < g_1578) != g_323)))) | 1UL), 0xCC4FB5A669532B9ALL)), g_383)) > g_1579), p_22)))), 1UL)), 22))), p_23))) <= p_23)) & 0x486FL)), 43)) & l_1491)), 1UL))), (-8L))) , l_1142)));
                    if (g_396)
                        break;
                    p_24 = (safe_mul_func_float_f_f(((safe_mul_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(g_385, ((safe_rshift_func_int16_t_s_s(((g_616 = (0L & ((safe_mod_func_uint32_t_u_u(((~l_1576) ^ ((p_22 < g_127) , ((((safe_rshift_func_uint64_t_u_u((p_23 = g_323), (((safe_div_func_int8_t_s_s((l_1491 = ((p_21 , (safe_rshift_func_uint16_t_u_s(((l_1108 ^= p_21) < (safe_mul_func_int32_t_s_s((((0xF2A7L < 0UL) <= 0x4872L) != p_21), l_1577))), 5))) || p_21)), g_1302)) && l_1577) ^ p_22))) && l_1510) == 0L) <= g_1303))), g_342)) <= l_1576))) >= l_1524), g_641)) || l_1576))) , l_1575), 0xB6ABL)) , g_635), l_1603));
                }
                else
                {
                    int32_t l_1647 = (-1L);
                    int32_t l_1666 = 0L;
                    l_1623 = ((~((g_53 = 0L) , (((safe_mul_func_int64_t_s_s(g_377, (0x9DD23ECDL <= (l_62 &= (l_1604 = (safe_mul_func_uint64_t_u_u(0UL, 0UL))))))) | (g_402 > (safe_mod_func_uint8_t_u_u(g_338, ((safe_rshift_func_int32_t_s_s((l_1250 < (safe_unary_minus_func_int8_t_s(((safe_mul_func_uint32_t_u_u((safe_lshift_func_uint32_t_u_s(((safe_sub_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((p_22 , p_21), (-1L))) || g_43) ^ l_1575), g_368)) && 0L), 29)), 0xEF9023E8L)) < (-1L))))), p_23)) , p_23))))) >= l_1549))) & g_616);
                    if (((g_350 >= ((safe_mul_func_uint16_t_u_u(0xEA08L, (0x87F0EA76L && ((safe_add_func_uint64_t_u_u((((safe_mul_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(0x69409EAA05FCB9E9LL, 0x830550C088541975LL)), (l_1604 ^ ((safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int64_t_s_s((0L >= 65528UL), (((safe_add_func_int8_t_s_s(((g_1293 , p_22) <= p_21), l_1576)) || 0x0516L) >= g_637))), l_1290)), g_629)) ^ p_21)))) || p_21) > g_537), p_23)) , p_23)))) != l_1640)) || p_22))
                    {
                        float l_1641 = 0x1.BA7001p-3;
                        int32_t l_1642 = 0xBE3F6281L;
                        int32_t l_1643 = 0x489666C2L;
                        int32_t l_1644 = (-3L);
                        int32_t l_1645 = 0x3E589A7DL;
                        int32_t l_1650 = 5L;
                        int32_t l_1651 = 0x53CCF7ACL;
                        float l_1657 = 0x1.3p-1;
                        int32_t l_1659 = 0L;
                        ++g_1667;
                        g_392 ^= ((safe_rshift_func_uint8_t_u_s(((0L >= 0L) == (1L && (g_380 <= (((p_23 , (((safe_mul_func_uint32_t_u_u(0xBA4F812DL, (safe_add_func_int32_t_s_s((safe_lshift_func_uint32_t_u_u(4294967287UL, 1)), 0x754FDA73L)))) ^ (~(safe_div_func_uint16_t_u_u((p_23 & 0xC1E1L), p_22)))) || l_1572)) > 0x125DF1E0L) , g_1293)))), g_115)) , 0xEA71166FL);
                        l_1604 |= (safe_mul_func_int64_t_s_s((p_23 <= l_1640), (((safe_rshift_func_uint32_t_u_u((safe_lshift_func_int32_t_s_u(g_1578, 20)), (safe_lshift_func_int16_t_s_s(g_622, 13)))) && (l_1643 = 0xA1C9L)) || ((((safe_unary_minus_func_uint16_t_u((((safe_add_func_int16_t_s_s((p_22 ^ (0L > (((safe_rshift_func_uint8_t_u_s(((g_402 = (0x5710CF2A95D10335LL & (l_1651 = l_1647))) || g_560), p_22)) && 5UL) & 0UL))), l_1648)) , l_1524) && g_359))) >= g_614) ^ p_23) != 5L))));
                        if (p_21)
                            continue;
                    }
                    else
                    {
                        if (l_1577)
                            break;
                    }
                }
                if (((safe_add_func_int32_t_s_s((((((safe_mul_func_int16_t_s_s((g_402 = ((safe_rshift_func_uint16_t_u_s(l_1499, g_628)) >= l_1524)), p_21)) >= (safe_add_func_int16_t_s_s(l_1108, (safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(g_1113, g_380)), l_1499)), l_1576))))) <= p_22) | l_1489) || 0x78C452FAL), 0x354AF5CFL)) > (-3L)))
                {
                    int8_t l_1708 = (-10L);
                    uint32_t l_1717 = 6UL;
                    int32_t l_1735 = 0x4944A796L;
                    float l_1736 = 0x6.0p+1;
                    int32_t l_1737 = 0xBC42FD71L;
                    g_390 = g_539;
                    l_1708 = 7L;
                    if ((safe_mod_func_int64_t_s_s(l_1524, ((safe_mul_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((g_340 != ((0x94L != p_21) < (safe_add_func_int8_t_s_s((l_1717 ^= l_1646), (0xA5L <= 249UL))))) | (l_61 ^= (safe_lshift_func_uint32_t_u_u((+l_1653), 6)))) == (safe_sub_func_uint16_t_u_u(((l_36 == p_23) , 1UL), l_1723))), l_1708)), g_626)) | l_1708))))
                    {
                        l_1735 = (((g_847 < (g_356 ^ ((g_359 || (safe_add_func_int32_t_s_s(l_1490, ((0xEAL ^ ((1L <= (safe_rshift_func_uint16_t_u_u(p_21, g_621))) , (+(l_1654 = (safe_lshift_func_int64_t_s_s((~(((safe_mod_func_int8_t_s_s(g_376, (-2L))) > p_23) && p_23)), g_624)))))) != p_23)))) || l_1623))) >= l_1734) == p_22);
                    }
                    else
                    {
                        return g_57;
                    }
                    l_1739--;
                }
                else
                {
                    int16_t l_1742 = 0x7B93L;
                    int32_t l_1743 = (-1L);
                    int32_t l_1744 = 0x171FA015L;
                    int32_t l_1745 = 0xCC6EFB31L;
                    l_1744 = ((++g_1748) ^ (safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s((l_1665 = ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((safe_mul_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_1469 <= ((safe_div_func_int16_t_s_s(((((-4L) <= ((safe_div_func_uint64_t_u_u(((((safe_lshift_func_uint64_t_u_u((((safe_add_func_float_f_f((l_1604 != (safe_div_func_float_f_f((safe_div_func_float_f_f((safe_sub_func_float_f_f(((-((l_61 = 0x445BDB61301E07C3LL) , (((safe_rshift_func_int16_t_s_u((l_1786 = 0x9F6CL), (safe_lshift_func_int32_t_s_u(p_21, ((safe_mul_func_int8_t_s_s((+((((g_377 ^ 1UL) & p_22) , p_21) >= g_354)), g_350)) == p_21))))) < 9L) , l_1745))) < p_21), 0xA.7CDF57p-82)), l_1792)), 0xF.568DC2p+78))), l_1793)) , 0x9669L) && 0x8C3EL), g_245)) < 0xB262L) < 0x60E3L) >= p_22), g_635)) == 0x7AL)) , 0xE36A30D0L) , g_350), 65527UL)) < 4UL)), p_21)), l_1794)) || (-1L)), g_377)), 0x29L)) >= g_340) <= g_126), l_1745)) , l_1744), g_1578)) > 4294967291UL), g_1303)) | p_22)), g_535)), l_1743)));
                }
                for (l_1792 = 4; (l_1792 > 51); l_1792 = safe_add_func_int64_t_s_s(l_1792, 2))
                {
                    uint64_t l_1810 = 0UL;
                    int32_t l_1824 = 1L;
                    float l_1848 = 0x6.7A8A2Dp+41;
                    if ((((l_1499 = ((safe_add_func_int16_t_s_s((p_21 , ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_21 , ((safe_mod_func_int16_t_s_s((safe_rshift_func_int32_t_s_s((l_1494 ^= (~(g_612 = p_23))), (p_21 , ((l_1290 = 0x2B8BA286F04DC355LL) && ((safe_div_func_uint16_t_u_u((++l_1810), (safe_rshift_func_int16_t_s_u((+(safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((l_1577 &= p_21), p_22)), g_635))), (((safe_rshift_func_int8_t_s_s((safe_mul_func_int64_t_s_s((g_8 != l_1824), p_22)), p_22)) <= p_21) < l_1663))))) <= 0x4F5BL))))), l_1825)) & 1L)), 1L)), 0x4D9EL)) >= g_1500)), g_8)) != p_23)) , g_395) || l_1470))
                    {
                        float l_1849 = 0x1.Ep+1;
                        l_1499 = g_1746;
                        p_22 ^= (l_1658 &= (safe_mul_func_uint16_t_u_u(l_1824, ((safe_div_func_uint8_t_u_u(l_36, 253UL)) & (0x02F9FF821B38402FLL >= (safe_mul_func_int16_t_s_s((((safe_mul_func_float_f_f((safe_div_func_float_f_f(g_572, (safe_add_func_float_f_f((safe_add_func_float_f_f(p_23, (((g_1656 = p_24) > ((g_340 &= (safe_rshift_func_int8_t_s_s(g_8, 4))) , (safe_add_func_float_f_f((safe_mul_func_float_f_f((safe_add_func_float_f_f((((g_619 = l_1848) > l_1849) == g_622), p_24)), 0xE.5AD3E5p-55)), 0xF.9CE966p-93)))) == 0xA.F1A9E8p-23))), 0x2.7365EEp+28)))), 0xC.22F5D1p-53)) , l_1640) <= (-1L)), 1L)))))));
                    }
                    else
                    {
                        g_382 = (l_1495 = 0x805A855AL);
                        l_1853 &= (~((((l_1623 &= ((g_327 & g_624) && (g_54 || (safe_rshift_func_uint16_t_u_s(1UL, (l_1549 == (0x02EBL | 1L))))))) <= g_126) , 2L) <= l_1490));
                        l_1495 |= p_21;
                    }
                }
                if ((safe_mod_func_int16_t_s_s((l_1494 = g_631), (safe_sub_func_uint8_t_u_u(0UL, (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(250UL)), (((l_1665 , ((safe_lshift_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((((safe_mul_func_int64_t_s_s(l_1825, (((l_1786 | ((l_1658 &= (safe_sub_func_int64_t_s_s((((l_1654 = ((p_22 >= ((safe_add_func_int8_t_s_s((g_379 <= (safe_unary_minus_func_uint32_t_u(0UL))), 1L)) , g_560)) <= 1L)) <= 0xBD286203L) && 0x36L), g_640))) , 0UL)) == l_1786) && p_22))) ^ 0xCB1DL) | l_1646), 0xAE80L)) != 3L) >= g_614), 13)) == g_1746)) , l_1623) != g_355))))))))
                {
                    float l_1882 = (-0x4.4p-1);
                    const int32_t l_1900 = 0x98D904AEL;
                    int32_t l_1915 = (-1L);
                    int32_t l_1919 = 0xC55E3D88L;
                    int32_t l_1921 = 0xE7616065L;
                    uint16_t l_1962 = 2UL;
                    int64_t l_1972 = (-1L);
                    p_22 = (safe_mul_func_uint32_t_u_u((((safe_div_func_int16_t_s_s((l_1876 != (safe_unary_minus_func_uint64_t_u(((l_1658 = ((g_621 <= ((safe_rshift_func_uint64_t_u_u(((g_355 ^= ((safe_mod_func_int16_t_s_s((l_1794 == (g_616 &= ((((((safe_mul_func_int16_t_s_s((safe_mul_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(l_1792, (p_22 , (((+(safe_mod_func_int32_t_s_s((((safe_div_func_float_f_f(g_612, (l_1662 = (-(l_1640 , ((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((p_23 ^ (65532UL < l_1577)) , l_1899) != p_21), l_1734)), p_22)) , l_1653)))))) , 0xFF1CFC67L) == 1UL), 0x309AC51FL))) | l_1900) , p_21)))), g_1649)), g_340)) || g_613) , 9UL) ^ g_640) >= 0xD8BAL) | l_1623))), 0x75C5L)) , p_21)) , p_22), l_1663)) | g_350)) > l_1648)) | g_371)))), 65535UL)) ^ p_21) ^ 0xA6E2128369DE77A0LL), 0x408C4C06L));
                    if ((g_382 = (l_1901 & ((l_62 ^= (9L == (l_1654 != p_22))) == (g_381 = (((safe_add_func_uint8_t_u_u(((--g_1906) != (safe_mul_func_uint16_t_u_u(p_22, (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((g_1922--), 7)), 4))))), (safe_mod_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_rshift_func_uint64_t_u_s((((safe_mul_func_uint8_t_u_u(g_368, (p_22 || ((l_1919 = (safe_rshift_func_int16_t_s_s(g_344, 15))) < (safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((l_1941 > l_1491), g_359)) == l_1290), 255UL)))))) && l_1575) | g_369), g_1746)), g_323)) == p_21), l_1510)) , l_1665) & l_1915), g_1660)))) >= p_23) , 0L))))))
                    {
                        uint32_t l_1960 = 0x029781BAL;
                        int32_t l_1961 = (-6L);
                        g_43 &= (g_382 = 0xED091070L);
                        l_1490 = (g_574 == (safe_rshift_func_uint64_t_u_s((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_371, (((g_411 > g_392) <= (safe_mul_func_float_f_f(g_383, (safe_sub_func_float_f_f(((safe_mul_func_float_f_f((safe_sub_func_float_f_f((g_1656 = (p_23 >= (+((((g_1747 = (l_1646 <= (safe_add_func_float_f_f((p_22 == (g_619 = (g_410 = (p_24 = (l_1959 == g_380))))), p_22)))) >= l_1663) > p_23) == l_1572)))), g_175)), (-0x10.Fp-1))) == 0x7.2EC85Cp+54), 0x1.Dp-1))))) , 0UL))), l_1962)), 30)));
                    }
                    else
                    {
                        p_22 = (p_22 & (g_624 = g_535));
                        l_1577 = (!((safe_mul_func_int16_t_s_s((g_127 = (safe_div_func_uint16_t_u_u(65533UL, 65535UL))), g_616)) != 0x97L));
                    }
                    l_1289 = (g_342 , ((((((safe_lshift_func_int16_t_s_s(l_1646, ((l_1985 = (safe_div_func_uint64_t_u_u(l_1972, (p_22 && ((safe_mul_func_int32_t_s_s((l_1915 ^= (l_61 ^= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((g_393 && l_1734), (safe_rshift_func_uint8_t_u_s((((safe_unary_minus_func_int64_t_s((((safe_sub_func_uint8_t_u_u((((((0xCF04F28CF7E98245LL >= g_396) ^ l_1663) > l_1984) & p_21) || l_1470), (-8L))) , g_175) || p_21))) == 0x1621B35116BFED27LL) >= g_614), 1)))), 7)))), g_385)) != 0x2D30L))))) && g_368))) <= g_350) || p_22) , l_1658) ^ 0xF74F310FFA34CFAFLL) ^ g_412));
                    l_1917 &= 0xCECE42B5L;
                }
                else
                {
                    uint32_t l_1988 = 0x873F3777L;
                    for (g_615 = 0; (g_615 >= (-10)); --g_615)
                    {
                        g_627 ^= g_337;
                    }
                    l_1988--;
                }
            }
            else
            {
                for (g_371 = 0; (g_371 != 55); ++g_371)
                {
                    if (g_641)
                        break;
                    if (p_23)
                        break;
                }
            }
            for (g_355 = (-24); (g_355 != 16); g_355 = safe_add_func_uint64_t_u_u(g_355, 8))
            {
                uint64_t l_1995 = 0UL;
                --l_1995;
                ++l_1999;
                if (l_1998)
                    break;
            }
        }
    }
    else
    {
        int32_t l_2010 = 0x7F5F2586L;
        g_127 = (safe_mul_func_uint32_t_u_u(((p_22 , (+(8UL <= (!(safe_mul_func_int16_t_s_s((l_1407 != l_1792), (safe_mul_func_int16_t_s_s((l_2010 , (~(((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(((safe_mul_func_float_f_f((((++l_2018) & ((+(l_1108 = 1L)) , ((safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s(((p_21 == g_1649) < (safe_rshift_func_uint64_t_u_s(0x363DFC77675E844CLL, p_22))), g_8)), g_1578)) > p_22))) , g_43), g_1047)) , p_22), 65535UL)) != l_2010) && g_1918), 2UL)) > 1L) >= g_376))), p_22)))))))) != g_627), 0x462315D0L));
    }
    return l_1469;
}
float func_25(uint32_t p_26, uint64_t p_27, uint8_t p_28, uint64_t p_29, int32_t p_30)
{
    uint8_t l_67 = 255UL;
    int32_t l_107 = 0x71451CEEL;
    int32_t l_416 = 0xB7089B1FL;
    uint64_t l_528 = 0x6E71ABB76B37A122LL;
    int32_t l_636 = 0xA23B5A47L;
    uint32_t l_701 = 4294967291UL;
    float l_769 = 0xE.283BBBp-50;
    uint64_t l_794 = 0xDE5D15BB404D8F70LL;
    uint32_t l_811 = 0UL;
    int32_t l_822 = 0L;
    uint64_t l_829 = 0xFD2BC6D8E6DC0E97LL;
    int32_t l_970 = (-1L);
    uint64_t l_973 = 0xF11A9DC0E9536412LL;
    uint32_t l_983 = 0UL;
    int32_t l_984 = 0L;
    if ((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint64_t_u_s(0UL, 60)) >= func_41(p_30)), (g_53 == (l_67 ^ (((((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((func_72((func_76(((func_79((safe_rshift_func_uint16_t_u_u(7UL, 6)), (!(safe_sub_func_int32_t_s_s(func_88((l_416 = ((safe_rshift_func_uint16_t_u_s((((safe_div_func_int32_t_s_s((func_97(((l_107 = (+(((safe_mul_func_int16_t_s_s(((safe_lshift_func_int64_t_s_s(0x8928FFEA059E6156LL, (safe_sub_func_uint32_t_u_u(g_53, ((l_67 < 7UL) < 0x2A08D8D3L))))) , p_29), 65528UL)) , p_29) ^ 0x2F69L))) ^ 0x268A7991AD473CB3LL), g_54) || 253UL), l_67)) || g_355) == g_381), 14)) , p_30)), g_395, l_67, p_28), g_355))), g_388) >= p_28) , g_344), l_67) <= 0xC9L), p_30, p_27) ^ 0L), g_406)), l_67)) , 0xEA45L) || g_461) <= g_479) || 18446744073709551614UL))))))
    {
        uint32_t l_489 = 0x241B832FL;
        for (g_344 = (-20); (g_344 >= 27); g_344 = safe_add_func_int32_t_s_s(g_344, 2))
        {
            g_374 = g_53;
            g_402 = 0xBC099DB6L;
        }
        for (p_30 = 0; (p_30 > 28); ++p_30)
        {
            --l_489;
        }
    }
    else
    {
        uint64_t l_527 = 18446744073709551606UL;
        int32_t l_538 = 0x217EB965L;
        int32_t l_569 = (-9L);
        int32_t l_609 = (-7L);
        int32_t l_618 = 9L;
        int32_t l_630 = (-1L);
        int32_t l_633 = 0x75FFB6D1L;
        uint8_t l_634 = 0UL;
        int32_t l_639 = 0x3BAA376DL;
        uint32_t l_672 = 0xD22DDCABL;
        const int32_t l_692 = (-1L);
        int32_t l_697 = 0L;
        int8_t l_741 = 0xAAL;
        int32_t l_827 = 0x4B868BB9L;
        int32_t l_828 = 0x18C087AEL;
        uint32_t l_922 = 0UL;
        const int16_t l_938 = 0x286BL;
        int32_t l_939 = 0xD41E17ECL;
        if ((safe_mul_func_uint32_t_u_u(g_127, g_406)))
        {
            uint8_t l_494 = 0UL;
            int32_t l_529 = 0L;
            int32_t l_542 = 0x1835EFA3L;
            int32_t l_571 = (-1L);
            int32_t l_573 = (-1L);
            uint8_t l_611 = 0x17L;
            int32_t l_642 = 4L;
            int32_t l_644 = 0x29AFEC63L;
            if (l_494)
            {
                return p_28;
            }
            else
            {
                int64_t l_506 = 0L;
                int32_t l_532 = (-3L);
                int32_t l_533 = (-5L);
                l_529 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s((4294967292UL & (((((~(g_392 = (((safe_lshift_func_int64_t_s_s((l_506 ^ ((safe_add_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(l_494, (safe_mul_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint32_t_u_s(1UL, 0)) == (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((g_335 = ((g_368 ^ (g_356 = g_371)) != p_29)) ^ (safe_mul_func_uint16_t_u_u(((safe_mul_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((((((0L > 0x0EL) <= 0x60L) & 0xA69BFDA5EEBCE1E5LL) < (-1L)) <= l_67), g_480)), p_27)) > l_527), g_338))), 0x78L)), 1))) & l_107), p_28)), g_377)))) && 1L) | p_30), 0xC3L)) == p_29)), l_494)) & g_338) != p_28))) < 4294967286UL) & g_387) && g_175) == 0x0CL)), 0x9DL)) == p_29) | (-1L)), 4)) | 4UL) , l_528), l_506)), 2));
                for (p_28 = 6; (p_28 == 43); p_28 = safe_add_func_int64_t_s_s(p_28, 1))
                {
                    int64_t l_534 = 0xC13635948C765B70LL;
                    int32_t l_536 = 1L;
                    ++g_539;
                }
            }
            if (g_175)
            {
                l_542 |= l_529;
            }
            else
            {
                float l_559 = 0x3.D4BE4Ap-65;
                int32_t l_565 = (-1L);
                int32_t l_568 = 0xD84DC9F9L;
                int32_t l_617 = 0xA158D7D8L;
                uint8_t l_632 = 0x62L;
                int32_t l_638 = 0x19D763D5L;
                int32_t l_643 = 0x73B39E1AL;
                for (g_371 = 9; (g_371 != 17); g_371++)
                {
                    int32_t l_566 = 0x9751F804L;
                    int32_t l_567 = 0x5FB35C9DL;
                    int32_t l_570 = 0x069C4C5DL;
                    g_410 = (g_411 = (safe_mul_func_float_f_f(g_404, ((0x6.EA8708p-28 < ((safe_add_func_uint8_t_u_u(g_377, (safe_sub_func_int16_t_s_s((l_568 = (safe_add_func_int16_t_s_s((g_381 = 0xA738L), (l_567 |= (safe_sub_func_uint32_t_u_u((l_566 = (((safe_mul_func_uint32_t_u_u((g_560 = (safe_rshift_func_uint8_t_u_s(246UL, p_28))), (l_538 &= g_127))) < ((safe_mul_func_int32_t_s_s((safe_add_func_int32_t_s_s((l_565 = l_529), g_392)), g_382)) & l_529)) , g_43)), (-1L))))))), p_28)))) , l_494)) != p_30))));
                    g_574++;
                    if (p_27)
                        continue;
                }
                g_645 = (safe_div_func_float_f_f((safe_mul_func_float_f_f((((safe_sub_func_float_f_f(((safe_sub_func_float_f_f(0x4.9C646Ep-63, ((((safe_sub_func_float_f_f((safe_div_func_float_f_f((g_619 = (safe_sub_func_float_f_f(((safe_add_func_float_f_f((safe_div_func_float_f_f((((safe_sub_func_float_f_f(((safe_mul_func_float_f_f((((safe_add_func_float_f_f(0x0.DAD14Dp+73, (safe_mul_func_float_f_f(0x9.EEF865p-74, ((((g_411 = (safe_mul_func_float_f_f((safe_sub_func_float_f_f((-0x1.Ep+1), l_107)), 0x0.269586p-10))) > (safe_sub_func_float_f_f((g_388 = p_29), (p_26 >= (g_410 = ((l_568 = g_537) >= 0x0.3p-1)))))) <= g_387) != 0x6.6F0E95p-88))))) <= (-0x1.Cp+1)) <= l_569), p_28)) != p_26), l_569)) == 0xB.EC069Ep+52) <= p_30), 0x9.107BA0p+56)), l_528)) != g_372), 0x8.1CB72Ep+31))), (-0x3.0p-1))), 0xD.3FA88Fp+98)) <= p_30) > 0xC.A900FEp+62) >= l_527))) >= l_528), l_565)) , g_323) , p_26), l_528)), l_67));
                g_411 = (p_28 > (l_617 = ((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(0xA1B0L, 9)), (~((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((0xFAL <= (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(1L, ((((l_568 = p_29) , (safe_lshift_func_uint64_t_u_s(0xDE844E8F02211F9BLL, (safe_lshift_func_int64_t_s_s((0UL < (safe_rshift_func_uint8_t_u_u(((l_538 = (((l_638 || ((safe_sub_func_uint64_t_u_u((!(((safe_rshift_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((((1L | p_30) , p_29) , g_537), g_368)), g_479)) , 0x9503642027B5696BLL) | 7L)), p_30)) ^ 0x78CDL)) ^ l_565) > l_672)) >= 0x9C48L), 7))), 50))))) > l_527) , p_26))), 3))), g_54)), 0UL)) > (-1L))))) , l_643)));
                g_377 = p_27;
            }
            for (g_323 = 0; (g_323 >= 47); g_323 = safe_add_func_uint16_t_u_u(g_323, 3))
            {
                uint8_t l_675 = 247UL;
                int32_t l_681 = 0xB3AAE569L;
                l_675 ^= 3L;
                g_392 &= (((((l_697 = (!((l_675 < (safe_mod_func_int64_t_s_s(((((l_681 = p_26) && (safe_rshift_func_uint32_t_u_s((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((!((((~g_387) > l_692) >= ((safe_div_func_int8_t_s_s((l_681 = l_494), g_327)) , (safe_div_func_int32_t_s_s(0x0223307EL, p_28)))) & g_57)), l_644)), l_697)) > 1UL), g_631)), 17))) && g_412) ^ 0x57411B6CACAE9031LL), (-1L)))) || p_29))) & l_67) && g_640) , 4294967295UL) || 8UL);
            }
            g_411 = ((safe_mul_func_float_f_f(l_611, (!p_30))) >= ((g_410 = (l_701 == p_28)) < (safe_sub_func_float_f_f(((safe_mul_func_float_f_f(((safe_div_func_float_f_f((g_624 >= g_402), (+(((((+((safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s((-1L), g_369)), (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((~(safe_div_func_uint32_t_u_u(4294967295UL, p_26))) && 0x39933130L), 0x70940D5DL)), p_27)) == p_26), g_379)), 11)))) && l_618)) , p_27) > 0xF3L) , g_615) >= g_637)))) > p_26), 0xF.5B2466p+74)) > 0x7.86DFC6p-72), p_27))));
        }
        else
        {
            int64_t l_751 = (-9L);
            int32_t l_758 = 0x1845F096L;
            int16_t l_767 = 7L;
            int32_t l_768 = (-1L);
            int32_t l_770 = (-1L);
            int32_t l_818 = 0x2244F648L;
            int32_t l_821 = 0xC2D0CDF8L;
            int32_t l_823 = 0xA380BEEFL;
            int32_t l_824 = 0xBC29D85CL;
            uint16_t l_876 = 0x1558L;
            g_624 = ((safe_rshift_func_uint32_t_u_u((safe_rshift_func_int64_t_s_u(((((safe_div_func_int32_t_s_s(((l_538 |= (safe_add_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_416 = (((((safe_rshift_func_int32_t_s_u((((((((l_741 ^ ((+(l_770 = (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((l_751 , g_386) || (safe_add_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((l_758 = p_30), (((safe_mod_func_uint16_t_u_u(0x9BB5L, (safe_mod_func_int16_t_s_s((l_768 = (((-1L) < (g_616 = 0x76CA7786L)) < ((g_377 & ((safe_add_func_uint8_t_u_u(l_767, (-2L))) >= p_29)) && 5L))), 0x05A6L)))) > p_26) < g_379))), l_692)) ^ l_751), g_396))) | p_26), g_53)) , 1L), 0x6F32L)) ^ p_26), g_393)), 1UL)))) >= 18446744073709551610UL)) , 0x9E6BEA7046F6875BLL) >= l_697) < 8L) > 5L) <= g_613) , p_28), 15)) > l_609) | g_614) ^ p_27) | l_767)), 0x78L)), p_28)) <= 5UL), (-4L))) > g_402), p_27))) , g_327), 1UL)) > p_29) | l_569) & p_30), 7)), g_355)) < l_767);
            for (l_569 = 0; (l_569 > 10); l_569 = safe_add_func_int16_t_s_s(l_569, 7))
            {
                uint32_t l_773 = 1UL;
                int32_t l_810 = 0x26501C97L;
                int64_t l_815 = 0xFF67C84FD29E675ELL;
                int32_t l_820 = 0L;
                int32_t l_842 = 0x5A29FBA2L;
                int32_t l_843 = 0xDC202028L;
                int32_t l_844 = 0xD3699B92L;
                int32_t l_845 = 0xE5F775B7L;
                int32_t l_846 = 0xEB4C5C7AL;
                uint8_t l_863 = 0xC7L;
                l_773++;
                for (l_630 = 0; (l_630 < (-8)); l_630 = safe_sub_func_int16_t_s_s(l_630, 1))
                {
                    uint64_t l_801 = 7UL;
                    int32_t l_816 = 0x548A3C77L;
                    int32_t l_817 = (-2L);
                    int32_t l_819 = (-2L);
                    int32_t l_825 = 0x1510DC26L;
                    int32_t l_826 = 0L;
                    uint32_t l_880 = 0x22720485L;
                    g_43 = ((safe_lshift_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_uint32_t_u_u(l_634, (((safe_mul_func_uint64_t_u_u((((safe_lshift_func_int32_t_s_s((g_635 ^ (safe_sub_func_uint32_t_u_u(l_773, (((safe_add_func_float_f_f(l_773, (safe_sub_func_float_f_f((l_794 <= ((safe_add_func_float_f_f(((safe_add_func_float_f_f((safe_add_func_float_f_f((l_107 = l_801), 0x4.DC8DD5p-1)), ((((safe_add_func_int8_t_s_s((l_416 &= ((safe_lshift_func_uint8_t_u_s(((g_369 = (safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((g_381 > (l_810 ^= l_630)), g_628)) | p_27), 1L))) , p_29), g_361)) , 1L)), 0L)) >= g_8) | 0x7BL) , l_810))) > 0x9.0p-1), 0x0.Cp+1)) != p_29)), l_811)))) >= 0x8.304AC0p-38) , l_609)))), 14)) ^ g_355) > 0x71E7L), g_372)) , l_741) != p_27))), 0xB7AED088L)), g_396)) || 0x58F382BE3B456FD3LL);
                    if (((safe_lshift_func_int64_t_s_u((((~(l_829++)) || p_28) , ((p_28 >= ((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((((((g_640 , ((((safe_lshift_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((g_847++), (safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u(251UL)), 0)) ^ ((safe_add_func_float_f_f((((g_372 != 0xD.D8CA7Dp+22) >= (safe_add_func_float_f_f((safe_div_func_float_f_f((safe_mul_func_float_f_f(p_29, g_435)), 0xB.8A4E1Ap+36)), l_863))) == p_29), p_30)) , l_846)) & p_30) ^ 0x56FA69E1B1DAA927LL), p_29)))), p_28)) & p_26) , g_382) && 3UL), 14)) , 1UL) , g_623) | g_372)) , 1L) & p_26) <= 0x68B615D4L) ^ l_820) & g_539), p_30)) == 0x69L), 1L)) && 0x4D7A9253L)) | l_538)), l_751)) != 0x33BBL))
                    {
                        uint32_t l_879 = 0UL;
                        if (l_818)
                            break;
                        if (p_28)
                            continue;
                        l_818 = (g_230 == (l_768 , (((l_880 = (~((safe_mod_func_int32_t_s_s(3L, ((g_631 != (g_335 |= (((safe_lshift_func_uint64_t_u_u((g_386 <= ((safe_lshift_func_int16_t_s_s(g_369, p_29)) , ((safe_div_func_int8_t_s_s(((~((((l_876 |= (safe_rshift_func_int64_t_s_s(1L, 18))) <= ((((safe_mul_func_uint16_t_u_u(g_361, g_616)) , g_130) || g_616) , p_26)) < l_879) & l_879)) & 1UL), l_829)) , g_621))), 40)) ^ l_618) == 0x0D557E9FCBBCAAEALL))) & l_810))) , g_323))) != g_245) & 0xC83ECA7CFC120F5ALL)));
                        if (p_28)
                            break;
                    }
                    else
                    {
                        l_845 = g_356;
                        return l_818;
                    }
                }
                g_645 = ((!(safe_add_func_float_f_f(0x2.7p-1, 0xB.A09F52p-60))) <= (((0xD.F29B41p-79 == (safe_sub_func_float_f_f((safe_add_func_float_f_f((((safe_unary_minus_func_int8_t_s((safe_lshift_func_int32_t_s_s((safe_mul_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((g_392 = (safe_rshift_func_uint32_t_u_s((((p_26 & (safe_rshift_func_int64_t_s_s(0xAD8218CC2E8E6249LL, (safe_mod_func_int16_t_s_s((safe_mul_func_int32_t_s_s(((-10L) <= ((l_820 = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u((254UL < (l_609 = ((g_616 = l_818) , 0x29L))), 0)) , p_29) == l_815) , 0xDD39L), 65532UL)), g_337))) || p_26)), g_335)), l_107))))) < 0x602EL) == 0xC7D23425L), g_537))), g_369)), g_368)), 27)))) , 0x6BL) , 0x3.EF6716p-92), g_461)), p_27))) , l_843) != 0x3.B0BEACp+51));
                g_382 = ((((l_416 ^= (((((!(!(safe_sub_func_uint16_t_u_u(g_369, (safe_add_func_int64_t_s_s(0x0E072FC4A867A1B1LL, ((safe_add_func_uint16_t_u_u(p_26, (((0x786AA2D0L > (g_57 > (safe_add_func_int32_t_s_s((l_741 , (g_381 < (safe_add_func_int16_t_s_s((-1L), (0xCBE6E71BL || g_921))))), p_29)))) && (-7L)) , p_27))) , g_377))))))) > l_922) != 0xA556L) | (-6L)) | 0xACL)) , (-10L)) ^ 7UL) , l_827);
            }
            l_939 &= (safe_add_func_uint16_t_u_u(g_340, (safe_sub_func_uint64_t_u_u(0UL, (safe_mod_func_int32_t_s_s((l_827 = (((((~0x239C1E188CC9D2A0LL) == 0x9E24BBC4L) ^ (((l_767 , (safe_mul_func_int8_t_s_s(l_697, (l_768 = ((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_67, (g_380 ^ ((safe_add_func_int8_t_s_s((p_30 ^ 0UL), g_435)) , 1L)))), g_616)) != g_626))))) < 9UL) ^ g_371)) != 0xB35CFE2FL) || l_938)), g_574))))));
            g_613 &= (safe_div_func_uint64_t_u_u(p_30, (g_539 , ((250UL | 1UL) , (safe_mod_func_uint32_t_u_u(g_572, ((safe_add_func_int16_t_s_s((0x8198L != (((g_356 = (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_768 = (safe_lshift_func_int16_t_s_s(g_8, 6))), (safe_lshift_func_int8_t_s_s((((p_26 & g_374) > l_811) | g_393), g_627)))), l_528))) , g_127) || 1UL)), p_27)) , l_609)))))));
        }
    }
    l_107 = (6UL <= p_30);
    for (g_355 = (-15); (g_355 < 5); g_355 = safe_add_func_int64_t_s_s(g_355, 2))
    {
        int32_t l_971 = 0x5A801580L;
        int16_t l_972 = 0x3850L;
        g_340 = (safe_add_func_uint64_t_u_u(1UL, (((l_107 |= (safe_mul_func_int8_t_s_s((g_395 && g_344), g_613))) >= p_30) != (safe_mul_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(l_636, (g_628 , ((safe_sub_func_int64_t_s_s((((l_811 , ((((l_416 = ((((safe_rshift_func_uint64_t_u_u(l_970, l_971)) | 0xAF3BL) ^ l_972) == p_29)) != 0xBECF769ABA591206LL) <= 3L) <= 0xDA8DF4357A952117LL)) , g_404) > p_30), p_27)) > l_794)))), 0x2424E4AFBCB5D2F3LL)), p_26)))));
        g_624 = 0x91FF2FD1L;
        l_636 = (l_416 = l_973);
        g_392 = (!(safe_mul_func_float_f_f(p_30, (safe_sub_func_float_f_f(l_528, (safe_div_func_float_f_f((safe_mul_func_float_f_f(0x1.60232Dp+56, ((((l_972 == p_28) , l_107) , ((l_983 = (((p_26 != g_126) > (p_29 = p_29)) , l_971)) == l_972)) < l_984))), g_410)))))));
    }
    return g_350;
}
uint8_t func_41(int64_t p_42)
{
    int32_t l_44 = 9L;
    int32_t l_45 = (-1L);
    int32_t l_46 = 0xD2AFDDF3L;
    int32_t l_47 = 1L;
    int32_t l_48 = 0x90F95848L;
    int32_t l_49 = 0x83FB18BAL;
    int32_t l_50 = 0x3199F2DCL;
    int32_t l_51 = 0x3FA9A180L;
    int32_t l_52 = 1L;
    int32_t l_55 = 3L;
    int32_t l_56 = 0x195C588CL;
    g_57--;
    return p_42;
}
int16_t func_72(uint32_t p_73, int16_t p_74, uint8_t p_75)
{
    uint16_t l_484 = 1UL;
    g_342 = (safe_rshift_func_uint8_t_u_s((l_484 | g_388), 7));
    return l_484;
}
uint8_t func_76(uint8_t p_77, uint8_t p_78)
{
    uint16_t l_481 = 0x16E5L;
    return l_481;
}
int8_t func_79(uint32_t p_80, uint32_t p_81, int64_t p_82)
{
    int64_t l_440 = 0xCAA069C6987D5692LL;
    int32_t l_441 = 0L;
    uint16_t l_445 = 0x34E4L;
    uint32_t l_458 = 0xC792F72FL;
    int32_t l_459 = 5L;
    int32_t l_460 = 0L;
    int32_t l_462 = 0x49DFCFB0L;
    int32_t l_463 = 0x75C585E5L;
    int32_t l_464 = 1L;
    if (g_354)
    {
        return l_440;
    }
    else
    {
        uint64_t l_442 = 0UL;
        g_382 = 0L;
        g_410 = 0xC.4DDAD7p-14;
    }
    g_342 ^= g_356;
    g_410 = (safe_mul_func_float_f_f(((g_374 != (((l_441 = ((l_445 &= g_392) && (safe_rshift_func_uint8_t_u_u(g_54, 6)))) , l_445) >= (g_377 >= (safe_sub_func_float_f_f(((((safe_rshift_func_int32_t_s_u((safe_lshift_func_uint8_t_u_u(p_82, (safe_lshift_func_uint32_t_u_s((255UL & p_81), 7)))), (safe_mod_func_int64_t_s_s((p_82 != 0x99L), l_440)))) != 0x44L) < 2L) , p_80), 0x1.Fp+1))))) != l_440), p_82));
    g_392 = (l_459 = (l_462 ^= (g_480 = (((((((((p_82 != l_463) == l_440) == (0xB9L && (safe_lshift_func_uint32_t_u_u(g_368, 31)))) < (safe_mod_func_int64_t_s_s(2L, (safe_lshift_func_uint64_t_u_u((safe_rshift_func_int32_t_s_s((((((((safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((((safe_rshift_func_int64_t_s_s((l_459 | (g_479 >= (g_230 | l_459))), 1)) && 0UL) , 4294967295UL) >= l_440), g_335)) <= 0x7556L), p_81)) || l_441) , 0xCDL) > 0x3AL) ^ 0xEDL) & l_464) != 1UL), 23)), 0))))) ^ g_461) || (-6L)) | g_383) ^ 1L) < l_463))));
    return p_80;
}
int32_t func_88(float p_89, int16_t p_90, int64_t p_91, uint32_t p_92)
{
    uint8_t l_433 = 0x3AL;
    int8_t l_434 = 0L;
    float l_436 = 0x8.624562p-84;
    int32_t l_437 = 0x05C7877FL;
    g_356 = p_92;
    l_437 ^= ((p_90 , (safe_rshift_func_int32_t_s_s(g_379, 30))) < (safe_lshift_func_int16_t_s_u((g_435 = ((((safe_mul_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_92, ((g_335 >= (((safe_mul_func_int32_t_s_s(p_92, 0x50090C67L)) | l_433) | ((p_91 != (0xD1L > 0xB4L)) < l_433))) >= g_53))), (-1L))), l_433)), 0xA91BL)), l_433)) | p_92) ^ p_92) | l_434)), p_91)));
    l_437 &= (safe_lshift_func_int32_t_s_u(g_359, 3));
    p_90 = g_396;
    return g_369;
}
int8_t func_97(uint16_t p_98, uint8_t p_99)
{
    uint8_t l_110 = 1UL;
    int32_t l_113 = 8L;
    int16_t l_114 = 0xD8C0L;
    uint32_t l_134 = 0UL;
    int8_t l_172 = (-8L);
    int32_t l_223 = (-1L);
    const int32_t l_225 = 9L;
    int32_t l_299 = (-2L);
    uint16_t l_325 = 65533UL;
    int32_t l_329 = 1L;
    int32_t l_332 = 1L;
    int32_t l_333 = 0L;
    int32_t l_336 = (-1L);
    int32_t l_339 = 1L;
    int32_t l_343 = 0x379AC75BL;
    int32_t l_347 = (-2L);
    int32_t l_349 = 0x236C3EA1L;
    uint64_t l_351 = 0x023DF1D13F60D9F0LL;
    int32_t l_352 = 0xD3DB75E8L;
    int32_t l_357 = 9L;
    int32_t l_363 = (-5L);
    int32_t l_364 = 6L;
    float l_409 = 0x0.5p-1;
    uint32_t l_413 = 0UL;
    g_127 = (safe_rshift_func_uint8_t_u_u(l_110, (((safe_mul_func_uint64_t_u_u((((-1L) && (l_113 ^= (g_115++))) ^ g_54), (((0L | ((~l_110) > g_8)) , (safe_unary_minus_func_uint64_t_u((((((((((safe_add_func_uint32_t_u_u(0x88241607L, (safe_rshift_func_uint16_t_u_s(0x77B0L, (g_126 = (safe_unary_minus_func_int32_t_s((((!(l_114 < p_99)) & 0xD070B1DE00DC0F60LL) <= g_54)))))))) | 0x81E8L) >= 0xDA97B9B40DC3605ALL) <= g_53) != g_8) > g_54) && 0x81L) & l_110) != l_114)))) >= p_98))) || l_114) || l_110)));
    
    if ((((safe_div_func_uint16_t_u_u((g_130 = 0xE736L), (safe_mod_func_int32_t_s_s((g_133 ^= (l_113 = 1L)), (g_53 & ((l_134 , (((safe_mod_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s(l_134, g_54)) > (+((((safe_sub_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u((+l_110), p_98)) || (((((safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((+(g_115 , 0x5044L)), l_114)), 0x9A7CL)), 7)), l_134)), 0x01B320E232A7A6E0LL)), l_114)) && 0UL), 0UL)) || g_126) < l_134) > 0x05C4B446L) > p_99)) | l_110), g_53)) | l_134) , 0xBAL) && g_115))), 0xE7429D79668BEEE5LL)) | g_127) >= (-10L))) & 0xE2L)))))) || l_110) || g_127))
    {
        uint64_t l_171 = 0xE88D44B5E4FDE8E7LL;
        int32_t l_173 = 0xF9E42614L;
        int8_t l_174 = (-1L);
        uint32_t l_184 = 3UL;
        int32_t l_226 = 1L;
        int32_t l_278 = (-1L);
        int32_t l_279 = 0x9444261DL;
        g_175 = (((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u(((0x2BC7L != (g_130 |= p_98)) , l_114), (g_8 | p_99))) >= (((!((l_172 = (p_99 , (safe_div_func_uint32_t_u_u((l_171 = ((safe_mod_func_int16_t_s_s(0x4BE3L, g_133)) | 4UL)), 4294967286UL)))) < l_173)) != g_8) ^ 18446744073709551615UL)) && p_98), l_174)) >= p_99) != 0xE7103E2EA94D18AFLL);
        for (l_173 = 0; (l_173 >= (-17)); l_173 = safe_sub_func_uint32_t_u_u(l_173, 9))
        {
            uint32_t l_188 = 0xCAC1D9ACL;
            uint16_t l_222 = 0UL;
            int32_t l_224 = 0xC12866A8L;
            g_130 = p_98;
            if (p_98)
                break;
            for (p_98 = (-22); (p_98 >= 55); p_98++)
            {
                int8_t l_187 = 0x4EL;
                int16_t l_207 = 0x1935L;
                int32_t l_246 = 9L;
                uint32_t l_264 = 0x9140E637L;
                l_113 ^= (safe_lshift_func_int16_t_s_u(((safe_add_func_uint64_t_u_u((((((g_126 && p_99) < 65532UL) , (l_184++)) > (l_188 = l_187)) , (safe_mul_func_int8_t_s_s(l_173, (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint32_t_u_u(g_53, 2)) < (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_184, (g_126 , ((g_127 |= (((safe_rshift_func_int16_t_s_u(((((safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s((0x375AL || l_187), g_126)), 1UL)) , l_173) && 0x696FL) , 0x7467L), 1)) ^ l_187) ^ 3UL)) ^ g_8)))), g_126)), p_98))), l_207)) && 0xDE25C1C26EB79486LL) ^ 0xC4L)))), (-1L))) >= g_8), 5));
                l_226 &= (((safe_mul_func_uint32_t_u_u((((g_126 = (safe_mod_func_uint64_t_u_u(((0xF7DB7756L ^ (safe_mul_func_uint64_t_u_u((((safe_div_func_uint64_t_u_u((g_127 == (safe_div_func_int8_t_s_s(l_113, (g_175 || (safe_add_func_uint64_t_u_u((l_223 = ((p_99 ^ 0xEFC0AEFA70C1663CLL) <= (0L <= (safe_mod_func_int16_t_s_s(l_171, ((0x01C9B9BB54825C2BLL == l_222) || 0L)))))), g_115)))))), (-5L))) | l_188) ^ g_127), l_224))) | l_173), l_224))) , (-9L)) < g_127), l_207)) & p_99) == l_225);
                for (l_113 = (-15); (l_113 < (-8)); l_113 = safe_add_func_int64_t_s_s(l_113, 5))
                {
                    int32_t l_244 = 0xB1DA9A82L;
                    l_223 ^= (p_99 , ((safe_unary_minus_func_uint8_t_u((--g_230))) ^ ((safe_add_func_int16_t_s_s((g_130 & p_99), (((l_187 , (safe_div_func_int16_t_s_s(((g_245 = ((g_175 , ((((p_98 , (((safe_sub_func_uint64_t_u_u((((l_244 = ((safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((g_53 | 0UL), (l_224 ^= (safe_unary_minus_func_int16_t_s(g_130))))) < l_222), 0L)) | g_8)) <= p_98) , g_133), l_187)) && p_98) , l_188)) & g_53) & p_98) != p_98)) != g_175)) == (-2L)), p_99))) <= p_99) && g_127))) <= l_246)));
                    g_127 = (safe_mul_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((g_54 <= (p_98 ^ (((0x9FCEEBA0L < 0x3F7C1FE8L) > (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(l_246)), ((safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((p_98 | l_244), p_99)), (safe_lshift_func_uint64_t_u_u((l_223 ^= (p_98 , g_53)), 11)))) > (-1L))))) > p_99))), g_115)), p_98)) , p_98), p_99)), g_130));
                }
                return l_264;
            }
        }
        l_279 &= (((0x4C541F32L <= 4294967290UL) | (((l_278 = (safe_mod_func_int8_t_s_s((g_230 ^= ((~((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(0xCDL, ((((safe_lshift_func_int8_t_s_u((l_223 = 0xADL), 2)) , (((l_113 = ((g_115 >= p_99) >= ((p_99 >= p_99) == (safe_div_func_int8_t_s_s((l_226 = (safe_lshift_func_int16_t_s_u((l_173 = ((0xC7L & l_114) & 0x67L)), l_184))), 1UL))))) && l_110) >= 0x7B90CDC1L)) , l_226) <= g_115))), 4294967295UL)) , l_184)) , g_175)), g_127))) | p_99) , g_245)) <= g_115);
        l_299 ^= (safe_add_func_int16_t_s_s(((((safe_lshift_func_uint32_t_u_s((safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s(l_110, (1L ^ (~((safe_div_func_int32_t_s_s((((safe_add_func_int16_t_s_s((((5UL | (((safe_mul_func_int16_t_s_s((l_279 = (-1L)), (((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint64_t_u_s(l_223, l_223)), 15)) , (l_278 = ((l_172 == g_130) < ((((g_126 == p_99) ^ 0x903AEC1AL) < l_174) > 0x38L)))) > l_223) <= l_184) ^ 0x101AC126E95B7E0ELL))) >= g_133) < l_134)) == p_99) && l_278), p_98)) || 1UL) , l_184), l_113)) , l_110))))), g_230)), g_133)) >= p_99) , 1UL) < g_115), l_226));
    }
    else
    {
        uint8_t l_300 = 0UL;
        int32_t l_324 = 0L;
        int32_t l_326 = 3L;
        int32_t l_328 = (-1L);
        int32_t l_330 = 0xCA12BF3FL;
        int32_t l_331 = 9L;
        int32_t l_334 = 0x876FB9F4L;
        int32_t l_341 = 0x9BE73AF6L;
        int32_t l_345 = (-1L);
        int32_t l_346 = (-1L);
        int32_t l_348 = (-7L);
        int32_t l_353 = 0x18292663L;
        int32_t l_358 = 0x4D9010A9L;
        int32_t l_360 = 0x21270423L;
        int32_t l_362 = (-1L);
        int32_t l_365 = 0xA0845408L;
        int32_t l_366 = 0x993FB84FL;
        float l_367 = 0x1.3p+1;
        int32_t l_373 = 0x818F363EL;
        int32_t l_375 = (-1L);
        int64_t l_378 = 0x45C7B11DE14EDE75LL;
        uint32_t l_384 = 18446744073709551615UL;
        int8_t l_389 = 0x55L;
        uint16_t l_391 = 0UL;
        int32_t l_394 = 0x04E5C1EAL;
        int32_t l_397 = 0x116D0E17L;
        int32_t l_398 = 0x5FA8F663L;
        uint8_t l_399 = 255UL;
        int32_t l_400 = 2L;
        int32_t l_401 = 0x70B4B066L;
        int32_t l_403 = 0x01EE616DL;
        int32_t l_405 = 0x4695C4B0L;
        int32_t l_407 = 0xEC3F803FL;
        int32_t l_408 = 0x1561CB25L;
        g_410 = (l_300 <= (((safe_lshift_func_uint32_t_u_u((0x7784L != (safe_rshift_func_uint16_t_u_u(g_230, ((g_392 = ((((safe_sub_func_int8_t_s_s((((g_133 < (((l_347 = (safe_div_func_uint32_t_u_u(((safe_mul_func_float_f_f((((g_245 > (safe_sub_func_float_f_f((safe_sub_func_float_f_f((safe_sub_func_float_f_f(g_54, g_130)), ((l_409 = (safe_mul_func_float_f_f(0x6.4p+1, (l_367 = (safe_sub_func_float_f_f((safe_mul_func_float_f_f(0x2.BDA32Ap-76, g_133)), g_53)))))) == 0x8.3p-1))), p_98))) == 0x0.1p-1) != g_130), p_98)) , g_323), l_339))) | p_99) && 0x4649DD7CL)) & g_368) > 0L), (-5L))) & l_400) && g_386) && p_99)) & 0x0DDB8EA2144E969ELL)))), p_99)) && g_395) , p_98));
        l_349 |= (l_172 && g_381);
        return g_344;
    }
    g_402 = l_329;
    ++l_413;
    return p_98;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, print_hash_value);
    transparent_crc(g_9, print_hash_value);
    transparent_crc(g_17, print_hash_value);
    transparent_crc(g_43, print_hash_value);
    transparent_crc(g_53, print_hash_value);
    transparent_crc(g_54, print_hash_value);
    transparent_crc(g_57, print_hash_value);
    transparent_crc(g_115, print_hash_value);
    transparent_crc(g_126, print_hash_value);
    // transparent_crc(g_127, print_hash_value);
    // transparent_crc(g_130, print_hash_value);
    // transparent_crc(g_133, print_hash_value);
    // transparent_crc(g_175, print_hash_value);
    // transparent_crc(g_230, print_hash_value);
    // transparent_crc(g_245, print_hash_value);
    // transparent_crc(g_323, print_hash_value);
    // transparent_crc(g_327, print_hash_value);
    // transparent_crc(g_335, print_hash_value);
    // transparent_crc(g_337, print_hash_value);
    // transparent_crc(g_338, print_hash_value);
    // transparent_crc(g_340, print_hash_value);
    // transparent_crc(g_342, print_hash_value);
    // transparent_crc(g_344, print_hash_value);
    // transparent_crc(g_350, print_hash_value);
    // transparent_crc(g_354, print_hash_value);
    // transparent_crc(g_355, print_hash_value);
    // transparent_crc(g_356, print_hash_value);
    // transparent_crc(g_359, print_hash_value);
    // transparent_crc(g_361, print_hash_value);
    // transparent_crc(g_368, print_hash_value);
    // transparent_crc(g_369, print_hash_value);
    // transparent_crc(g_370, print_hash_value);
    // transparent_crc(g_371, print_hash_value);
    // transparent_crc(g_372, print_hash_value);
    // transparent_crc(g_374, print_hash_value);
    // transparent_crc(g_376, print_hash_value);
    // transparent_crc(g_377, print_hash_value);
    // transparent_crc(g_379, print_hash_value);
    // transparent_crc(g_380, print_hash_value);
    // transparent_crc(g_381, print_hash_value);
    // transparent_crc(g_382, print_hash_value);
    // transparent_crc(g_383, print_hash_value);
    // transparent_crc(g_385, print_hash_value);
    // transparent_crc(g_386, print_hash_value);
    // transparent_crc(g_387, print_hash_value);
    // transparent_crc(g_388, print_hash_value);
    // transparent_crc(g_390, print_hash_value);
    // transparent_crc(g_392, print_hash_value);
    // transparent_crc(g_393, print_hash_value);
    // transparent_crc(g_395, print_hash_value); // fail
    // transparent_crc(g_396, print_hash_value); // fail
    // transparent_crc(g_402, print_hash_value); // fail
    // transparent_crc(g_404, print_hash_value); // fail
    // transparent_crc(g_406, print_hash_value); // fail
    
    
    // transparent_crc(g_412, print_hash_value);
    // transparent_crc(g_435, print_hash_value);
    // transparent_crc(g_461, print_hash_value);
    // transparent_crc(g_479, print_hash_value);
    // transparent_crc(g_480, print_hash_value);
    // transparent_crc(g_535, print_hash_value);
    // transparent_crc(g_537, print_hash_value);
    // transparent_crc(g_539, print_hash_value);
    // transparent_crc(g_560, print_hash_value);
    // transparent_crc(g_572, print_hash_value);
    // transparent_crc(g_574, print_hash_value);
    // transparent_crc(g_610, print_hash_value);
    // transparent_crc(g_612, print_hash_value);
    // transparent_crc(g_613, print_hash_value);
    // transparent_crc(g_614, print_hash_value);
    // transparent_crc(g_615, print_hash_value);
    // transparent_crc(g_616, print_hash_value);
    
    // transparent_crc(g_620, print_hash_value);
    // transparent_crc(g_621, print_hash_value);
    // transparent_crc(g_622, print_hash_value);
    // transparent_crc(g_623, print_hash_value);
    // transparent_crc(g_624, print_hash_value);
    // transparent_crc(g_625, print_hash_value);
    // transparent_crc(g_626, print_hash_value);
    // transparent_crc(g_627, print_hash_value);
    // transparent_crc(g_628, print_hash_value);
    // transparent_crc(g_629, print_hash_value);
    // transparent_crc(g_631, print_hash_value);
    // transparent_crc(g_635, print_hash_value);
    // transparent_crc(g_637, print_hash_value);
    // transparent_crc(g_640, print_hash_value);
    // transparent_crc(g_641, print_hash_value);
    
    // transparent_crc(g_847, print_hash_value);
    // transparent_crc(g_921, print_hash_value);
    // transparent_crc(g_1044, print_hash_value);
    // transparent_crc(g_1047, print_hash_value);
    // transparent_crc(g_1113, print_hash_value);
    // transparent_crc(g_1186, print_hash_value);
    // transparent_crc(g_1293, print_hash_value);
    // transparent_crc(g_1302, print_hash_value);
    // transparent_crc(g_1303, print_hash_value);
    // transparent_crc(g_1500, print_hash_value);
    // transparent_crc(g_1578, print_hash_value);
    // transparent_crc(g_1579, print_hash_value);
    // transparent_crc(g_1649, print_hash_value);
    // transparent_crc(g_1652, print_hash_value);
    
    // transparent_crc(g_1660, print_hash_value);
    // transparent_crc(g_1661, print_hash_value);
    // transparent_crc(g_1664, print_hash_value);
    // transparent_crc(g_1667, print_hash_value);
    // transparent_crc(g_1746, print_hash_value);
    
    // transparent_crc(g_1748, print_hash_value);
    // transparent_crc(g_1906, print_hash_value);
    // transparent_crc(g_1918, print_hash_value);
    // transparent_crc(g_1922, print_hash_value);
    // transparent_crc(g_2073, print_hash_value);
    
    // transparent_crc(g_2076, print_hash_value);
    // transparent_crc(g_2078, print_hash_value);
    // transparent_crc(g_2082, print_hash_value);
    // transparent_crc(g_2109, print_hash_value);
    // transparent_crc(g_2140, print_hash_value);
    // transparent_crc(g_2192, print_hash_value);
    // transparent_crc(g_2197, print_hash_value);
    // transparent_crc(g_2198, print_hash_value);
    // transparent_crc(g_2201, print_hash_value);
    // transparent_crc(g_2203, print_hash_value);
    // transparent_crc(g_2204, print_hash_value);
    // transparent_crc(g_2205, print_hash_value);
    // transparent_crc(g_2207, print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return (unsigned char)(crc32_context);
}
