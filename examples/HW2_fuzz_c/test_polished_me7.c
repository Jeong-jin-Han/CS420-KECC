
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

uint32_t g_11 = 0xC79E672CL;
int32_t g_29 = 0x405CEFD0L;
uint64_t g_56 = 0x47A332A5B4D633C6LL;
uint64_t g_62 = 0UL;
uint64_t g_72 = 18446744073709551614UL;
uint16_t g_73 = 0xFC58L;
uint32_t g_78 = 3UL;
int64_t g_83 = 1L;
uint16_t g_84 = 65529UL;
uint8_t g_85 = 0xF2L;
uint8_t g_86 = 0xACL;
float g_93 = 0xF.4251D1p-9;
int64_t g_98 = (-10L);
uint8_t g_103 = 0x94L;
uint32_t g_165 = 18446744073709551615UL;
uint16_t g_177 = 0UL;
int32_t g_228 = 1L;
uint32_t g_229 = 0xBDA22505L;
uint16_t g_234 = 1UL;
int32_t g_237 = 0xE4F3F740L;
uint32_t g_240 = 0xC827C01AL;
int8_t g_242 = 4L;
int32_t g_244 = (-1L);
uint32_t g_245 = 0xA2C154B2L;
int8_t g_246 = 8L;
uint32_t g_252 = 0xF397C00CL;
int16_t g_253 = 1L;
int8_t g_257 = 5L;
float g_258 = 0x0.Ap-1;
uint8_t g_259 = 0xACL;
int64_t g_264 = 5L;
int16_t g_266 = 0x9452L;
float g_267 = 0x9.ED955Fp-73;
int8_t g_270 = 0x4BL;
uint16_t g_272 = 1UL;
uint32_t g_293 = 0x699354FBL;
uint16_t g_294 = 65529UL;
int8_t g_295 = 4L;
int32_t g_296 = 0xCD2030A4L;
int32_t g_297 = (-1L);
int32_t g_299 = 1L;
int32_t g_300 = 0L;
uint32_t g_301 = 0x1DE62A75L;
int16_t g_303 = (-1L);
int64_t g_304 = (-1L);
uint32_t g_305 = 0x26486C13L;
int64_t g_306 = (-1L);
int8_t g_311 = 0x64L;
int16_t g_317 = (-1L);
int32_t g_318 = 4L;
int32_t g_321 = 0x59EF32C1L;
int32_t g_323 = 0L;
int64_t g_325 = (-1L);
int8_t g_330 = (-4L);
uint8_t g_331 = 255UL;
uint64_t g_336 = 0x7B3A4D1CBB092B10LL;
int32_t g_338 = 0x959F2637L;
uint32_t g_342 = 0UL;
uint8_t g_344 = 8UL;
uint64_t g_349 = 0xAC27B40A8872ADFBLL;
uint64_t g_351 = 0x6563EE52D58216C1LL;
uint64_t g_352 = 9UL;
uint32_t g_353 = 0x1C2317E4L;
int16_t g_354 = 0x8B1CL;
int32_t g_355 = 0xBBE3BBB7L;
uint64_t g_357 = 18446744073709551615UL;
int32_t g_358 = (-10L);
int8_t g_359 = (-8L);
uint16_t g_360 = 0x6CC9L;
uint32_t g_361 = 0xAC53C360L;
int32_t g_365 = (-1L);
int64_t g_368 = 6L;
int32_t g_371 = 0xE669C13BL;
uint8_t g_372 = 1UL;
uint32_t g_373 = 0UL;
uint32_t g_376 = 0xC6E20C94L;
uint16_t g_377 = 0x4CDAL;
int32_t g_381 = (-7L);
uint8_t g_382 = 0xF4L;
int64_t g_383 = 0x3BB65FF730B3DA9CLL;
int32_t g_386 = 0xE4248502L;
int16_t g_387 = 0x7212L;
uint64_t g_391 = 0xC43A748A06586DAFLL;
float g_393 = 0x0.1E1E6Fp+36;
int32_t g_436 = 0x8A10EE6AL;
float g_437 = (-0x1.6p-1);
int64_t g_439 = 0x0F8876A3BFE583E0LL;
uint16_t g_440 = 0x5FE1L;
int32_t g_443 = 0xDBAF204EL;
uint8_t g_450 = 246UL;
int16_t g_451 = 0xBA1AL;
uint8_t g_452 = 0x29L;
uint64_t g_454 = 18446744073709551606UL;
uint8_t g_455 = 0UL;
float g_457 = 0x1.8p+1;
uint16_t g_489 = 65535UL;
uint32_t g_515 = 4294967287UL;
uint32_t g_606 = 0UL;
int8_t g_645 = (-1L);
float g_649 = 0x3.8p-1;
uint32_t g_650 = 0x3BCFAC44L;
int8_t g_700 = (-1L);
int64_t g_702 = 0x4ECC75241B77E60ALL;
uint8_t g_706 = 0x3FL;
uint32_t g_708 = 0UL;
float g_712 = 0x9.708442p-71;
int16_t g_806 = 0x24FAL;
int8_t g_808 = 0x6EL;
uint32_t g_896 = 0xEBF0865AL;
float g_1115 = 0x8.Bp+1;
uint16_t g_1117 = 4UL;
int8_t g_1160 = 0xBBL;
uint32_t g_1161 = 0x7852D5F3L;
float g_1187 = 0x0.9p+1;
int64_t g_1189 = 0xD316568EF3018C5DLL;
uint16_t g_1192 = 1UL;
int32_t g_1286 = 0xF2DB1268L;
int16_t g_1289 = 0L;
uint8_t g_1290 = 0xB6L;
uint32_t g_1293 = 4294967291UL;
int64_t g_1303 = 0xEC7E620C6D19BF99LL;
int8_t g_1304 = 1L;
int16_t g_1305 = 0L;
uint8_t g_1307 = 0xE1L;
uint8_t g_1345 = 3UL;
int32_t g_1429 = (-7L);
uint8_t func_1(void);
uint16_t func_4(int64_t p_5, const uint16_t p_6, int16_t p_7, uint32_t p_8, int64_t p_9);
uint32_t func_13(int8_t p_14, const int32_t p_15, uint32_t p_16, int16_t p_17, int8_t p_18);
uint64_t func_23(int64_t p_24, int16_t p_25, float p_26, uint32_t p_27, uint32_t p_28);
int16_t func_40(int32_t p_41, const int32_t p_42, uint64_t p_43, int32_t p_44, uint64_t p_45);
int16_t func_115(uint64_t p_116, int8_t p_117, uint32_t p_118);
uint32_t func_127(int8_t p_128, int16_t p_129, uint32_t p_130);
int8_t func_131(uint32_t p_132, int32_t p_133, int32_t p_134, const int16_t p_135);
float func_151(int32_t p_152, int8_t p_153);
int32_t func_168(int32_t p_169, int16_t p_170, uint32_t p_171);
uint8_t func_1(void)
{
    int32_t l_30 = 1L;
    int32_t l_31 = 3L;
    int32_t l_32 = 1L;
    uint8_t l_33 = 1UL;
    uint32_t l_49 = 18446744073709551611UL;
    int8_t l_50 = 0x99L;
    int32_t l_53 = 0x80F3BBA6L;
    uint32_t l_55 = 0x402AD923L;
    int8_t l_107 = 0xA6L;
    uint8_t l_1436 = 0x0DL;
    uint32_t l_1437 = 18446744073709551613UL;
    l_53 = (((l_31 = (safe_div_func_uint8_t_u_u((0x1763L > func_4((!0xE31551DAL), (g_11 , (+(((g_98 = func_13((g_29 = (safe_rshift_func_uint32_t_u_s((safe_mod_func_int64_t_s_s(((func_23((g_11 == (--l_33)), ((safe_mod_func_int32_t_s_s((g_29 & (safe_mul_func_uint16_t_u_u((g_29 == (0xE735L || func_40((~((safe_lshift_func_uint8_t_u_s(g_29, ((l_32 , 0L) && g_29))) , l_49)), g_29, g_29, l_32, l_50))), l_50))), g_29)) != (-1L)), g_29, l_32, l_53) && 18446744073709551606UL) == 0x0EL), l_31)), l_55))), l_31, g_56, g_56, g_56)) >= g_84) == g_83))), g_73, g_78, g_56)), g_73))) , 1UL) > g_73);
    for (g_73 = 6; (g_73 > 6); g_73 = safe_add_func_uint8_t_u_u(g_73, 5))
    {
        int64_t l_101 = 0x698822BDA668E547LL;
        int32_t l_102 = 6L;
        g_103--;
    }
    g_1429 = (((g_103 , 0UL) == ((safe_unary_minus_func_uint64_t_u(g_103)) & (0UL == (l_107 < (safe_sub_func_int32_t_s_s((l_1437 = (((((g_1286 |= (safe_add_func_int32_t_s_s((safe_div_func_int64_t_s_s(((+(0x0C247927L && (func_115(((g_29 = (safe_mul_func_uint8_t_u_u(l_30, ((((safe_add_func_uint16_t_u_u((l_53 = 0x407CL), g_84)) != 0L) >= 4294967291UL) , l_53)))) > 2L), g_78, l_107) || l_55))) == l_30), l_50)), 0xF7C35B07L))) < l_1436) , l_33) <= (-1L)) != (-1L))), l_107)))))) & l_50);
    return g_299;
}
uint16_t func_4(int64_t p_5, const uint16_t p_6, int16_t p_7, uint32_t p_8, int64_t p_9)
{
    g_29 = (-1L);
    return g_83;
}
uint32_t func_13(int8_t p_14, const int32_t p_15, uint32_t p_16, int16_t p_17, int8_t p_18)
{
    int32_t l_59 = (-6L);
    uint64_t l_67 = 0x75FF9B037144DB28LL;
    int32_t l_68 = 1L;
    int32_t l_69 = 0xA457AFC4L;
    int32_t l_70 = 0x9E1D6210L;
    int32_t l_71 = 0L;
    int32_t l_74 = 0L;
    uint32_t l_75 = 0x4C89AED2L;
    int32_t l_76 = (-1L);
    int32_t l_77 = 0x5DCFD1F9L;
    int32_t l_79 = 4L;
    int32_t l_80 = 0x8A82FB34L;
    int32_t l_81 = 0x6461D90BL;
    int32_t l_82 = 0x78A42286L;
    int32_t l_87 = 0xA760F2F4L;
    int32_t l_88 = 0x45D18828L;
    int32_t l_89 = 0x02733942L;
    int32_t l_90 = 0xCA2468F5L;
    int32_t l_91 = (-1L);
    int32_t l_92 = 1L;
    g_93 = (p_14 == ((safe_sub_func_uint16_t_u_u(l_59, (l_68 = ((g_56 || 0x12AEAFD71021F5EBLL) , (((safe_div_func_uint16_t_u_u(((0xC2DA50E28AB82AECLL ^ g_62) & (safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(p_17, 0L)) != p_14), l_67))), l_67)) | p_16) , 0x3674L))))) , l_68));
    l_69 ^= g_83;
    g_93 = (safe_mul_func_float_f_f((p_14 = p_18), ((-0x1.1p+1) >= ((safe_add_func_float_f_f((g_56 < (((l_71 && p_18) , (-0x9.4p-1)) <= (p_16 < (func_40(p_16, g_72, l_74, p_18, p_16) >= g_84)))), 0x1.2p+1)) < g_62))));
    return l_70;
}
uint64_t func_23(int64_t p_24, int16_t p_25, float p_26, uint32_t p_27, uint32_t p_28)
{
    int16_t l_54 = 0xFA4AL;
    l_54 = (-1L);
    return p_24;
}
int16_t func_40(int32_t p_41, const int32_t p_42, uint64_t p_43, int32_t p_44, uint64_t p_45)
{
    uint32_t l_51 = 0x9E4A0435L;
    int32_t l_52 = 1L;
    l_52 = l_51;
    return p_45;
}
int16_t func_115(uint64_t p_116, int8_t p_117, uint32_t p_118)
{
    uint8_t l_138 = 0x81L;
    int32_t l_154 = (-2L);
    int32_t l_689 = 0L;
    int32_t l_692 = 0x62F081EFL;
    int32_t l_694 = (-1L);
    uint16_t l_695 = 2UL;
    int32_t l_696 = (-1L);
    int32_t l_697 = 0x55441597L;
    int32_t l_699 = 3L;
    int32_t l_701 = 0x00141ED1L;
    int32_t l_704 = 0xC67030E3L;
    int32_t l_707 = 0x47F3B22EL;
    int32_t l_709 = 0xB4559933L;
    int32_t l_711 = 0xB55F8126L;
    int16_t l_713 = 0x7701L;
    float l_714 = 0xA.2FDAF0p+30;
    uint16_t l_801 = 1UL;
    uint64_t l_836 = 0x92D2998B6F7EEE98LL;
    uint64_t l_860 = 18446744073709551610UL;
    int16_t l_897 = 0x9B91L;
    uint32_t l_912 = 0UL;
    uint16_t l_919 = 0UL;
    const int32_t l_920 = 0x3E503E09L;
    int8_t l_940 = 5L;
    int32_t l_1040 = 0x13CD4D8EL;
    float l_1197 = (-0x1.0p+1);
    uint16_t l_1239 = 65535UL;
    int32_t l_1269 = (-1L);
    int64_t l_1370 = 0x50ADFBCCB7F28421LL;
    uint8_t l_1433 = 0x52L;
    for (p_117 = 0; (p_117 > 23); p_117 = safe_add_func_int64_t_s_s(p_117, 4))
    {
        uint8_t l_155 = 0xF2L;
        float l_514 = (-0x2.3p-1);
        int32_t l_688 = (-6L);
        int32_t l_690 = 0xD4689E1DL;
        int32_t l_691 = 0x229333FCL;
        int32_t l_693 = 0L;
        int32_t l_698 = 0xAC883CA6L;
        int32_t l_703 = 1L;
        uint32_t l_705 = 0x87FEB0DEL;
        int32_t l_710 = 0x7E080BFEL;
        int16_t l_753 = 0x6E80L;
        uint32_t l_754 = 0xD627531CL;
        uint16_t l_832 = 0x1B13L;
        l_714 = ((((g_712 = (func_127(func_131((g_103 | (safe_mod_func_int64_t_s_s((g_85 = l_138), (safe_unary_minus_func_uint8_t_u((func_4((safe_add_func_int16_t_s_s(g_11, (safe_div_func_int64_t_s_s(((0xA.06C62Cp+0 == ((safe_add_func_float_f_f((safe_add_func_float_f_f((+(0xB.2F251Bp+55 < (safe_mul_func_float_f_f(0x0.E7A368p+83, g_29)))), (func_151((l_154 = g_86), l_155) > p_118))), p_117)) <= p_118)) , 0xB7F7E1F24E963F06LL), 1L)))), p_117, l_155, l_155, p_117) || g_270)))))), g_515, p_116, g_359), g_311, g_606) , 0x0.Bp-1)) < l_690) >= l_696) <= p_116);
        if ((g_246 ^ ((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((((((((safe_mod_func_int8_t_s_s(l_696, ((2L && (safe_div_func_int8_t_s_s((g_245 = (safe_add_func_uint64_t_u_u(0x7BC20602535A3600LL, (-6L)))), (~9UL)))) , p_118))) <= (safe_sub_func_int64_t_s_s(g_451, ((l_690 |= (p_117 ^ 0xBF7E3C99L)) && g_83)))) == l_710) & l_703) && p_116) <= (-1L)) < 0UL), g_311)), l_697)) > g_246)))
        {
            int16_t l_737 = 5L;
            uint32_t l_752 = 0x6681EEB6L;
            int32_t l_802 = 0xF200BE9AL;
            int32_t l_803 = 0x91F1DAA1L;
            int32_t l_805 = 0x5252CC8EL;
            int32_t l_809 = 4L;
            int32_t l_810 = 0x4C93DE23L;
            int32_t l_835 = 0L;
            g_712 = (0xA.886B4Cp+23 > 0x6.0533C7p+44);
            l_701 ^= l_693;
            for (g_336 = 29; (g_336 != 54); ++g_336)
            {
                int16_t l_783 = 0x334CL;
                int8_t l_794 = 0L;
                int8_t l_800 = 0L;
                int32_t l_804 = 0x47961614L;
                g_258 = ((safe_add_func_float_f_f((+(safe_div_func_float_f_f((p_117 > ((safe_sub_func_float_f_f(((((((l_737 ^ (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint32_t_u_s((g_301 = ((g_259 | (l_693 = ((g_240 |= ((g_321 = (g_436 = (safe_rshift_func_uint8_t_u_u((0xDFL && (l_752 = ((safe_rshift_func_int64_t_s_u(0L, 22)) , (((safe_lshift_func_int8_t_s_u(8L, 1)) > g_244) , p_117)))), l_703)))) ^ g_650)) > 0x536E22FAL))) | g_246)), 15)), g_325)), 0xD54AL))) , 0xF.29FB61p+28) < l_713) == l_753) == l_737) > 0xE.F4DCA1p-22), l_753)) != l_688)), l_754))), 0xB.64406Bp+99)) > g_299);
                g_457 = ((safe_add_func_float_f_f((((-((-0x1.7p-1) == 0x9.D3CAF1p-82)) , (safe_div_func_float_f_f((((safe_div_func_int16_t_s_s(5L, (safe_mod_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0x36L, (l_691 = ((+18446744073709551606UL) <= ((g_330 > ((safe_add_func_int64_t_s_s((((g_342 = (g_229 = ((((((safe_add_func_float_f_f(g_165, l_737)) , (l_688 = (safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((((safe_rshift_func_int64_t_s_s((safe_add_func_uint8_t_u_u(0x37L, p_117)), 41)) >= 2UL) , p_116), l_691)) != g_296), 1L)))) , p_117) , 0xE87E4E332FD7D706LL) ^ g_295) | g_357))) ^ p_117) <= g_349), g_451)) == p_117)) && g_62))))), 0xB4BCL)) && 1UL), l_783)))) , l_737) , 0x0.Ep-1), 0x1.9p-1))) <= l_138), p_118)) == g_376);
                for (g_318 = 6; (g_318 >= (-23)); g_318 = safe_sub_func_uint8_t_u_u(g_318, 5))
                {
                    uint32_t l_788 = 0x19D7B9F8L;
                    int32_t l_799 = 0x130C3EF0L;
                    int32_t l_807 = 0x15656862L;
                    uint32_t l_811 = 0xF12D814FL;
                    l_801 = ((0xB41FA521AE30F857LL & p_118) , (safe_mul_func_int16_t_s_s((((((l_788 ^= 0xDDL) > (p_116 <= (((safe_sub_func_int8_t_s_s(0xABL, (safe_sub_func_int16_t_s_s(((!65526UL) >= (l_794 | (((!(l_799 = (!(p_118 , (safe_div_func_uint16_t_u_u((0x01A1109BFE476B1BLL >= l_783), l_794)))))) != 0x39DBB08F21F61460LL) > l_800))), 65535UL)))) <= l_783) , p_117))) ^ l_697) | p_117) != p_117), g_344)));
                    ++l_811;
                    if ((safe_mul_func_uint8_t_u_u(((p_116 = 0x5B9FE362A4A30AB1LL) | ((safe_lshift_func_int8_t_s_u(p_117, g_455)) < p_118)), (l_696 | (safe_sub_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u((((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s(g_451, ((((l_804 = ((safe_sub_func_float_f_f(((g_93 = (((safe_add_func_float_f_f((safe_mul_func_float_f_f((g_393 = (-0x6.4p+1)), ((l_794 > (l_783 >= l_832)) >= l_788))), 0x1.Ep+1)) > p_118) <= (-0x1.3p+1))) != 0x7.Dp+1), l_753)) , 65535UL)) > l_709) , l_692) != 4L))) >= 1UL) == g_78), 0xA69F2FCEL)) == 0UL) , p_118), 0L)) > p_118) & p_118), 0xD3L))))))
                    {
                        l_691 = (safe_lshift_func_uint16_t_u_u(p_118, 4));
                    }
                    else
                    {
                        return l_693;
                    }
                }
            }
            l_836++;
        }
        else
        {
            int32_t l_843 = 0x8196FD64L;
            for (g_294 = (-18); (g_294 > 24); g_294 = safe_add_func_int32_t_s_s(g_294, 5))
            {
                int32_t l_852 = 7L;
                l_696 = ((safe_mul_func_uint64_t_u_u(((g_266 ^ 0x14L) <= l_843), (safe_rshift_func_uint32_t_u_s((((safe_lshift_func_int64_t_s_s(0x04D22C09C723A1F3LL, 27)) , ((((((safe_sub_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(255UL, (l_852 <= (+(g_321 || ((((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(6L, (g_353 = (p_118 | g_451)))), l_843)) , 0xBAD5L) || 1UL) != 9L)))))) < 0x090625CD1017FB5CLL) < l_860), 0x3006DE4BL)) , 0x91CFL) && l_843) , g_325) ^ p_117) > p_116)) ^ l_693), g_360)))) , g_451);
            }
            return g_342;
        }
    }
    g_382 = ((g_436 = (l_701 = (((p_118 = (safe_rshift_func_uint16_t_u_s((g_342 = (((safe_mul_func_int16_t_s_s(g_371, (l_704 = (g_391 = g_357)))) & (safe_add_func_int8_t_s_s(l_692, (g_266 , g_515)))) ^ (0xC1A2D60493DAA7EFLL < (g_702 ^ 0xDF1ECDCDL)))), 3))) < l_697) > p_117))) , l_138);
    l_696 |= (safe_div_func_uint8_t_u_u(p_116, (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s((l_699 && ((safe_sub_func_int32_t_s_s(((l_154 = (l_709 = (safe_rshift_func_uint64_t_u_s((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int32_t_s_u((safe_mod_func_uint8_t_u_u((((g_245 |= (safe_sub_func_int8_t_s_s((p_116 ^ ((((l_704 = l_692) , ((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(p_118, (~(((((0xF615L ^ p_118) >= (safe_add_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s(6L, (p_117 ^ g_645))) | g_377) == 0x7716BC840CF9CB1ELL), g_700))) && 0UL) && p_116) , g_896)))), 0)) == g_450)) , p_117) > l_695)), 1L))) || g_78) , l_713), p_117)), l_897)) >= g_321), g_323)), p_116)))) ^ g_84), p_118)) , l_701)), g_358)), 5)) || p_116), g_305))));
    if ((safe_sub_func_uint8_t_u_u(g_78, (safe_mul_func_uint32_t_u_u((g_606 = (safe_mul_func_int32_t_s_s(((safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s(((safe_add_func_int64_t_s_s(((((l_154 = (safe_mul_func_uint64_t_u_u((0xE4BC88F1L && l_912), ((safe_add_func_int64_t_s_s(((((safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s(g_645, (l_897 == l_711))), (g_808 = g_645))) | (((l_919 , (p_117 = 0xEDL)) & p_116) | 0x27L)) >= l_920) < 0UL), 0UL)) < p_118)))) == 0x7D56L) > l_897) , l_801), p_118)) , 0x2F20CABAL), g_246)), 0xF9D61D9196074E6FLL)) , g_299), 0x01B80C79L))), p_116)))))
    {
        uint64_t l_928 = 0xC83ADDE6BAB46328LL;
        int32_t l_931 = 0x889D1834L;
        int8_t l_988 = 0x72L;
        uint64_t l_1038 = 7UL;
        int32_t l_1111 = 3L;
        int32_t l_1113 = 0xC5AC5DCDL;
        int32_t l_1114 = 0xEEAC4C70L;
        uint32_t l_1168 = 18446744073709551615UL;
        uint32_t l_1180 = 0x278A24DAL;
        int32_t l_1186 = (-5L);
        int32_t l_1191 = (-1L);
        const uint16_t l_1218 = 65535UL;
        uint64_t l_1242 = 0UL;
        uint32_t l_1245 = 0x7288B1FBL;
        float l_1282 = 0xA.EEB22Bp-43;
        uint32_t l_1372 = 0x5398601FL;
        for (g_246 = (-26); (g_246 != (-10)); g_246 = safe_add_func_uint32_t_u_u(g_246, 2))
        {
            int32_t l_927 = 3L;
            int64_t l_963 = 0x008FC8D1F61FA6C6LL;
            int8_t l_989 = 0x8EL;
            uint64_t l_1086 = 18446744073709551615UL;
            int32_t l_1112 = 0x09B3EB2CL;
            int32_t l_1116 = (-10L);
            p_118 = (safe_mul_func_int8_t_s_s((((0x6367524BDF4553E4LL != 18446744073709551610UL) != ((l_927 = (safe_rshift_func_int64_t_s_u(p_117, 57))) , 0UL)) | (l_931 |= (((g_294 , l_928) <= (0x0F128A65363E0BC4LL | ((((safe_mul_func_uint16_t_u_u(g_373, p_117)) , g_443) < (-1L)) && p_117))) == g_355))), p_116));
            g_321 = ((l_154 = ((~(safe_div_func_int8_t_s_s((l_927 = (((safe_mul_func_uint32_t_u_u(((!(safe_sub_func_uint64_t_u_u(0UL, (((l_940 == ((safe_div_func_int64_t_s_s(((l_711 > ((safe_lshift_func_int32_t_s_u(((safe_lshift_func_int32_t_s_u(p_116, (safe_add_func_int8_t_s_s(7L, (1L != p_117))))) , ((safe_add_func_uint16_t_u_u((safe_mul_func_int32_t_s_s(p_116, g_177)), 0x5BA0L)) != g_702)), l_931)) > g_808)) >= p_118), 1UL)) < g_702)) != g_344) ^ g_354)))) != (-7L)), 4294967292UL)) , g_299) && l_931)), (-6L)))) != g_700)) | g_29);
            if (((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s(((((g_515 = (safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((((safe_mod_func_uint64_t_u_u(((p_118 , l_931) || l_711), l_963)) && p_116) ^ l_963) && ((-2L) ^ 1UL)) , (0x893BE504L > p_117)), g_386)), g_360))) , 65527UL) >= l_963) ^ p_116), l_963)), p_117)) | p_116))
            {
                uint8_t l_972 = 0xFDL;
                int32_t l_987 = 0xFA9B8843L;
                if (g_708)
                    break;
                g_349 = p_116;
                l_987 = (safe_sub_func_int16_t_s_s((((safe_add_func_int64_t_s_s((l_928 && (safe_add_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u((g_454 , l_972), ((((safe_rshift_func_uint32_t_u_s((~((safe_add_func_int16_t_s_s((((safe_lshift_func_uint64_t_u_s((safe_unary_minus_func_int8_t_s(((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_116, (safe_div_func_int8_t_s_s(((l_987 != g_331) > p_116), g_323)))), (((l_927 <= l_928) , g_451) != l_927))) ^ g_650))), l_860)) ^ g_377) ^ g_304), 0x2997L)) <= l_988)), 7)) >= l_927) , 0x3527L) ^ l_989))), l_987))), l_989)) | l_989) && 0L), g_371));
                l_987 |= (g_240 < l_972);
            }
            else
            {
                int16_t l_1014 = 1L;
                int32_t l_1027 = 0x613F9497L;
                int32_t l_1039 = (-1L);
                for (g_325 = 21; (g_325 <= 4); --g_325)
                {
                    uint8_t l_1012 = 0x6DL;
                    int32_t l_1013 = 0xA84AEBBBL;
                    uint16_t l_1085 = 1UL;
                    for (l_963 = 0; (l_963 == 22); ++l_963)
                    {
                        int32_t l_1000 = 0x1DFA32D4L;
                        g_436 = (p_118 >= ((safe_mul_func_uint64_t_u_u((g_321 &= (safe_mod_func_int32_t_s_s(l_963, ((safe_rshift_func_int8_t_s_u((l_1000 < ((p_118 || (((safe_lshift_func_int16_t_s_u(p_118, 12)) != 0x175E2D86C57A732FLL) > ((safe_mul_func_uint64_t_u_u(g_266, (safe_mod_func_uint32_t_u_u(l_963, (((+(l_1014 &= (((safe_mul_func_int8_t_s_s((safe_lshift_func_int32_t_s_u((((l_1012 = (0UL && l_928)) ^ g_489) >= g_325), 10)), l_1013)) < p_117) == 1UL))) > 0UL) & p_117))))) < l_1000))) > p_118)), p_116)) ^ l_988)))), g_372)) , l_989));
                    }
                    for (l_836 = 0; (l_836 != 35); l_836 = safe_add_func_int64_t_s_s(l_836, 5))
                    {
                        uint8_t l_1041 = 255UL;
                        l_707 |= (safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((g_386 = (1UL && (safe_sub_func_uint16_t_u_u(((l_699 = ((((l_1027 = (l_928 >= (safe_lshift_func_int32_t_s_s(p_118, 16)))) , (safe_mod_func_uint64_t_u_u((l_701 <= (p_118 = (safe_lshift_func_int16_t_s_s((g_650 ^ (l_1012 != ((g_86 >= ((((safe_add_func_int32_t_s_s((~p_117), (safe_div_func_int8_t_s_s(((!0x7429L) <= l_1038), 0x37L)))) == g_73) && 255UL) < p_117)) > l_1027))), 9)))), (-2L)))) >= g_365) , g_454)) | p_116), 0xB500L)))), g_451)), l_801)), 7));
                        l_1041++;
                        g_649 = (safe_sub_func_float_f_f(((safe_add_func_float_f_f((safe_add_func_float_f_f((safe_sub_func_float_f_f((safe_sub_func_float_f_f((safe_sub_func_float_f_f(((((safe_sub_func_float_f_f((-(safe_mul_func_float_f_f(p_118, (+(g_93 = 0x7.8CEB46p+75))))), ((safe_div_func_float_f_f((!(!0xD.D88601p-69)), (safe_mul_func_float_f_f((((safe_lshift_func_uint64_t_u_u(((!(safe_add_func_uint8_t_u_u(0xCFL, ((((safe_mul_func_int32_t_s_s(0L, l_1041)) != ((safe_mul_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((l_1038 == (l_696 |= (~(((((((g_86 , (safe_unary_minus_func_int16_t_s((safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u(g_242, g_352)), 0x6A15L))))) & p_117) >= g_305) , l_1041) || l_931) | p_116) >= g_436)))) || g_377), 0xD267C304L)), p_117)) , l_1038)) < l_707) && p_117)))) <= g_382), l_1041)) , l_1041) , p_116), l_1039)))) != p_116))) >= p_117) <= l_1014) == 0x1.Ap-1), p_116)), l_707)), l_1085)), p_117)), (-0x3.7p+1))) != l_1086), g_246));
                        l_707 ^= (l_931 > (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((0xF4L != (safe_add_func_int8_t_s_s(((p_118 = (safe_mul_func_int32_t_s_s(g_297, (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((((g_228 = ((safe_mul_func_uint8_t_u_u(((p_117 | (safe_add_func_int8_t_s_s((0x4DL > (((g_344 , ((safe_lshift_func_uint64_t_u_s(((safe_unary_minus_func_uint64_t_u(18446744073709551615UL)) > 0xCAL), 42)) ^ (safe_rshift_func_int16_t_s_s(((((p_118 >= l_1013) , l_1086) , g_342) == l_689), 13)))) > 1UL) >= g_440)), l_1086))) == p_117), p_118)) != 0UL)) & p_117) > g_361) | 0UL), 0x85L)), l_928)), l_1041))))) || 0x51AE3C1DB9F9E693LL), p_117))))), 4)));
                    }
                }
                g_1117--;
            }
        }
        for (g_436 = (-1); (g_436 < 27); g_436++)
        {
            int32_t l_1135 = 0xB6EFA937L;
            int32_t l_1148 = 0x432F9166L;
            int32_t l_1151 = 0x9ED44670L;
            float l_1152 = 0x8.3p-1;
            int32_t l_1156 = 3L;
            int32_t l_1157 = 8L;
            int32_t l_1158 = 0x48BE95CCL;
            int64_t l_1190 = 3L;
            int32_t l_1288 = 0xF8F52D99L;
            if ((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint32_t_u_s(0x5E5F710FL, 25)) != (safe_div_func_int16_t_s_s((safe_mul_func_int64_t_s_s((safe_rshift_func_int64_t_s_s(((((l_154 > (safe_add_func_uint8_t_u_u(p_116, 0x2EL))) <= (p_118 = p_118)) ^ ((safe_unary_minus_func_int32_t_s(0x35B0AABFL)) != (l_707 = ((g_457 , ((1L <= ((((8UL && 65535UL) , g_62) , p_116) != g_365)) == (-1L))) , g_515)))) & l_689), 19)), 0xC25463B0D9BCC007LL)), l_1114))), l_1135)))
            {
                int32_t l_1149 = 0x19471F1EL;
                int32_t l_1150 = 3L;
                int32_t l_1153 = (-1L);
                int32_t l_1154 = 0L;
                int32_t l_1155 = 0x001CA544L;
                int32_t l_1159 = (-1L);
                float l_1173 = 0x1.A8B881p-7;
                int16_t l_1216 = 0L;
                if ((2L < ((l_1135 | 0L) , (safe_sub_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((g_228 = (safe_sub_func_uint32_t_u_u((((g_606 = (safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((l_1113 &= (((((((((g_1161--) , l_1156) ^ (((safe_rshift_func_uint8_t_u_s((l_1168 |= (g_244 ^= (safe_rshift_func_int8_t_s_s((l_689 || p_117), 6)))), ((safe_mul_func_int64_t_s_s(g_352, (4UL > (((l_1111 , l_1153) >= g_321) >= p_118)))) == g_708))) <= 0UL) == 0x8BL)) , g_300) < g_229) && 0xB2L) & l_1038) | (-9L)) ^ l_1156)) ^ 0x8E63L), l_709)), p_117))) || 0x5633D0580B4BA10CLL) >= g_86), l_1159))) , g_381), p_116)) && 0xBEF62096L), l_1111)))))
                {
                    float l_1178 = 0xD.9C7352p+86;
                    uint8_t l_1179 = 0x36L;
                    int32_t l_1184 = 0xD8C9A757L;
                    int32_t l_1185 = (-5L);
                    int32_t l_1188 = 0xABEBCD2CL;
                    uint32_t l_1217 = 0UL;
                    g_301 |= ((safe_mul_func_uint8_t_u_u(((p_117 >= (safe_add_func_uint16_t_u_u((l_1151 <= p_117), (safe_add_func_uint64_t_u_u(6UL, ((p_118 >= (l_1179 ^ g_352)) <= (l_1179 <= p_117))))))) | l_1180), g_387)) ^ g_450);
                    l_1184 |= (((((4294967295UL != p_118) & ((((((+(safe_mod_func_uint64_t_u_u((g_296 || (l_1148 , l_1154)), (((g_1192++) , ((safe_mul_func_uint8_t_u_u(l_1114, (safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(0L, (l_1111 ^= (l_1185 = (l_1216 |= ((safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((l_1149 = (l_1186 ^= ((-1L) > (l_1113 = ((safe_sub_func_int32_t_s_s((p_117 , p_116), l_1185)) , 0x5669L))))), g_244)), 0xA0L)), p_117)) , p_117)))))) || 1UL), g_708)), l_1217)), 0UL)) != p_117), p_118)))) != (-6L))) , l_1150)))) , 0x486627612FD0482DLL) <= 0xC8AF55671F7B7C0ALL) == l_154) , l_1179) ^ l_1218)) , 1UL) ^ p_116) ^ 0x84FDA0A54E4AD306LL);
                    if (p_117)
                        continue;
                }
                else
                {
                    uint8_t l_1241 = 0xD0L;
                    int32_t l_1283 = 0x982F6736L;
                    for (g_86 = 0; (g_86 == 47); g_86 = safe_add_func_uint8_t_u_u(g_86, 1))
                    {
                        uint32_t l_1240 = 0x9F6013ADL;
                        g_244 ^= 0x4C89D329L;
                        g_244 = (l_1242 = (safe_add_func_uint16_t_u_u((g_700 != (-1L)), ((safe_add_func_int64_t_s_s(((p_117 | (safe_lshift_func_int32_t_s_u((safe_lshift_func_int16_t_s_s(((0x47L ^ (65535UL != (l_1168 >= (safe_mul_func_int64_t_s_s(((((safe_mul_func_uint64_t_u_u((g_321 = ((g_85 = 0x18L) <= (safe_rshift_func_int16_t_s_u(p_117, 10)))), ((safe_lshift_func_uint32_t_u_s(((l_1240 ^= (safe_sub_func_uint64_t_u_u((g_373 , l_1239), p_117))) <= 1UL), l_1241)) , 1L))) <= g_455) | l_988) > l_1239), (-3L)))))) | 0UL), 2)), p_117))) > 0x02L), g_452)) < 65535UL))));
                        if (p_116)
                            break;
                    }
                    if (((p_117 == (l_1245 != (safe_add_func_uint64_t_u_u(g_700, ((l_1156 = l_1150) | (0xF633A3E4L | (((g_323 = (g_29 = ((1L | ((l_1111 = (safe_rshift_func_uint8_t_u_s(g_78, (safe_add_func_int16_t_s_s(g_29, ((-2L) >= g_242)))))) >= 0x9622L)) || g_358))) , l_860) >= (-5L)))))))) <= l_696))
                    {
                        if (p_118)
                            break;
                    }
                    else
                    {
                        uint16_t l_1268 = 1UL;
                        if (g_387)
                            break;
                        l_1269 = (safe_lshift_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_mul_func_uint64_t_u_u((((safe_sub_func_float_f_f(0xF.75F7AAp+53, (safe_mul_func_float_f_f(((0x4.2p+1 <= (((0xC.1E087Cp-59 > ((((~(!(((safe_mod_func_int16_t_s_s((((-1L) | l_1151) <= g_645), (g_1161 | (safe_rshift_func_int32_t_s_u(p_118, (0x1015C25BE46B317ELL > 0xF09F84E26E571E3FLL)))))) != 65535UL) <= p_116))) > l_1268) ^ g_338) , g_365)) < p_117) != g_84)) <= g_372), p_117)))) >= l_836) , 0x1483692DD8AB0698LL), g_391)), g_330)), 18));
                    }
                    for (g_331 = 24; (g_331 >= 59); g_331 = safe_add_func_uint64_t_u_u(g_331, 1))
                    {
                        uint8_t l_1278 = 246UL;
                        int32_t l_1284 = 2L;
                        int32_t l_1285 = 1L;
                        int32_t l_1287 = 0x2469FE41L;
                        l_1284 &= (((((((safe_mod_func_uint16_t_u_u(l_692, (safe_sub_func_int64_t_s_s(1L, (l_1283 = (1UL <= (safe_sub_func_int16_t_s_s(l_1278, ((g_606 > (safe_sub_func_uint16_t_u_u(((~p_116) == (p_118 | (l_1241 & 0L))), 0UL))) ^ p_117))))))))) < 1L) , (-5L)) != 0xEF8FBCE8FAA76B26LL) < g_606) && g_296) , p_118);
                        g_1290++;
                        if (g_244)
                            break;
                    }
                }
                g_1293--;
            }
            else
            {
                int8_t l_1296 = 1L;
                int32_t l_1297 = 1L;
                int32_t l_1298 = 0x322000ECL;
                int32_t l_1299 = 0x88E7BD80L;
                int32_t l_1300 = 1L;
                int32_t l_1301 = 0xEF7EBE4EL;
                int32_t l_1302 = 0x63843A48L;
                int32_t l_1306 = (-1L);
                int8_t l_1341 = 0L;
                uint32_t l_1343 = 0x49E2DBD5L;
                if (((--g_1307) || (l_1158 = (((((safe_lshift_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((4294967289UL != 4L), 2)), 12)) || g_1189) ^ (safe_sub_func_int64_t_s_s(((((-1L) >= (safe_sub_func_uint64_t_u_u((l_1299 = (((safe_mul_func_uint16_t_u_u(p_117, ((((safe_add_func_uint32_t_u_u(l_897, (safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s(g_391, (safe_add_func_uint16_t_u_u((l_1186 = ((g_452 ^ ((+((g_331 == p_118) != g_266)) <= p_116)) > p_118)), 0x0023L)))), g_708)))) , l_1288) >= g_440) ^ g_359))) >= l_1297) >= l_1191)), (-7L)))) ^ l_860) >= 0xC64FE03CC710C8BALL), 0xDB8CBA9490EE047BLL))) <= l_1157) == 0x0FL))))
                {
                    float l_1342 = (-0x1.9p-1);
                    l_1343 ^= ((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(l_928, (safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(0x8EL, (((g_246 ^= l_1296) | ((safe_rshift_func_int16_t_s_u(0x2E18L, (l_1299 = (g_702 > (p_116 < (safe_sub_func_int8_t_s_s((-1L), ((l_699 = ((g_808 = g_808) | 0L)) <= l_1341)))))))) | p_117)) || g_259))), p_118)))), 6)) <= 0UL);
                    return g_357;
                }
                else
                {
                    int64_t l_1344 = (-6L);
                    int32_t l_1371 = 0L;
                    --g_1345;
                    if ((safe_lshift_func_int8_t_s_s((((g_257 , ((safe_add_func_int16_t_s_s((l_1157 ^= (safe_div_func_uint64_t_u_u(p_116, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((l_1191 = (g_301 = (safe_sub_func_int16_t_s_s((((0x8583048C31EAA5EELL <= (g_296 <= (l_1344 && (safe_sub_func_uint32_t_u_u((l_1371 ^= (safe_sub_func_uint8_t_u_u(p_118, ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(p_118, (((g_1117 > (0xF.EECFE1p-69 != l_801)) < 0x6.4A92DBp-54) , l_1370))), p_116)), 0xDFF1L)) < g_454)))), 4294967293UL))))) < g_272) | g_295), g_84)))), 5)), l_1372))))), g_98)) || 0UL)) >= 0x8293L) != 0xD1ADL), p_117)))
                    {
                        g_352 = p_116;
                    }
                    else
                    {
                        g_386 = 0x09D405E0L;
                    }
                    for (l_1157 = 0; (l_1157 < 22); l_1157 = safe_add_func_int16_t_s_s(l_1157, 1))
                    {
                        uint32_t l_1375 = 0xA3B838D6L;
                        ++l_1375;
                    }
                    l_931 = l_1300;
                }
            }
        }
    }
    else
    {
        float l_1393 = 0x1.2p-1;
        int32_t l_1394 = 0xD52749F5L;
        const uint32_t l_1427 = 0x8E19D5B3L;
        l_1394 = ((g_806 < g_177) > (((-1L) || ((safe_add_func_int64_t_s_s((g_382 <= 4294967288UL), (!(-1L)))) != (((safe_lshift_func_int32_t_s_u((((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint32_t_u_u(l_1239, 0x92CD53CEL)) && (safe_div_func_uint16_t_u_u(((p_116 <= g_85) || p_116), 0x1307L))), g_455)), g_272)) >= p_117) >= p_117), 7)) != g_299) | l_801))) == g_244));
        for (g_338 = (-2); (g_338 >= 3); g_338 = safe_add_func_uint32_t_u_u(g_338, 5))
        {
            uint32_t l_1430 = 4294967290UL;
            for (l_713 = (-16); (l_713 <= 16); l_713 = safe_add_func_int32_t_s_s(l_713, 6))
            {
                const uint32_t l_1428 = 0x0AC972E2L;
                l_1430 &= (l_699 = ((safe_sub_func_int32_t_s_s(((g_1345 || (l_1394 ^= ((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((0xCA61D437L != ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_86, (((safe_mod_func_uint16_t_u_u((1UL ^ ((safe_add_func_int16_t_s_s((g_301 > (((safe_unary_minus_func_uint16_t_u(((((g_246 != g_706) <= ((g_242 = (safe_unary_minus_func_uint32_t_u(p_117))) >= (((!l_1427) > l_1427) < g_372))) | 4UL) != g_351))) ^ p_116) < l_1428)), 0x15A2L)) <= g_454)), g_84)) > 2L) <= 255UL))), 4)) != g_344)) && g_1429) > 0x03L), l_1428)), p_118)))), 0x398AL)), 1L)) > 0x2BB9L) | 0xFD3C3772L), g_304)), 1L)), p_117)) , p_118))) < g_318), g_354)) && p_116));
                for (g_344 = 0; (g_344 > 50); g_344 = safe_add_func_int8_t_s_s(g_344, 2))
                {
                    l_1433++;
                }
            }
        }
        return g_85;
    }
    return p_118;
}
uint32_t func_127(int8_t p_128, int16_t p_129, uint32_t p_130)
{
    uint16_t l_653 = 65535UL;
    int32_t l_658 = 0x2455BDA0L;
    int64_t l_674 = 7L;
    int32_t l_675 = 0x70FB3C66L;
    int32_t l_676 = 0xA21D270BL;
    int32_t l_677 = 0x2E78D347L;
    int32_t l_678 = 0xDD5D7F8EL;
    int32_t l_679 = (-8L);
    int32_t l_680 = 1L;
    int32_t l_681 = 0x6D391199L;
    int32_t l_682 = 0x537C5687L;
    int32_t l_683 = (-1L);
    int32_t l_684 = 0x237F5912L;
    int32_t l_685 = 0x1E90C7E0L;
    int32_t l_686 = 0x1AD50CB3L;
    int32_t l_687 = 1L;
    l_653 ^= 1L;
    g_267 = ((safe_mul_func_float_f_f((safe_div_func_float_f_f((g_246 > g_86), (g_258 = 0xF.EAA9D3p+44))), ((((safe_div_func_float_f_f(g_436, ((safe_mul_func_float_f_f(p_128, ((l_658 = (safe_div_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((((safe_div_func_float_f_f(((((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((0x91L >= ((g_338 = 1L) >= g_359)) < ((safe_div_func_uint8_t_u_u(248UL, l_658)) == g_454)), g_293)), 6UL)) == p_128) <= 9L) , l_653), l_674)) == l_674) , p_129))), p_129))) , 0x1.Dp+1))) <= p_128))) <= g_321) <= (-0x6.Fp+1)) != 0x7.Cp-1))) != l_653);
    return g_300;
}
int8_t func_131(uint32_t p_132, int32_t p_133, int32_t p_134, const int16_t p_135)
{
    float l_534 = (-0x1.Bp-1);
    int8_t l_535 = 0L;
    int32_t l_599 = (-4L);
    int32_t l_629 = 0x25399B90L;
    int32_t l_630 = 0x802A46E9L;
    int32_t l_631 = 0x44752A3EL;
    float l_632 = 0xA.9D1694p+84;
    int32_t l_633 = 0x381EB79BL;
    int32_t l_634 = 0x653E8852L;
    int32_t l_635 = 0L;
    int32_t l_636 = 0L;
    int32_t l_637 = 8L;
    int32_t l_638 = 0x80E81A89L;
    int32_t l_639 = 0xE106B63FL;
    int32_t l_640 = (-9L);
    int32_t l_641 = (-1L);
    int32_t l_642 = 0xB1C45FF2L;
    int32_t l_643 = 0xB271CF96L;
    int32_t l_644 = 0x4DBB70BCL;
    int32_t l_646 = 0x4DD836C2L;
    int32_t l_647 = 0x069A6116L;
    int32_t l_648 = 0x2F3CA0FBL;
    for (g_371 = 0; (g_371 <= 6); ++g_371)
    {
        float l_520 = (-0x8.7p-1);
        int32_t l_529 = 0x9D387A41L;
        int32_t l_627 = 0L;
        p_134 ^= (((g_244 = (p_133 ^ ((safe_mod_func_int16_t_s_s((g_323 < g_234), (g_73 ^ (safe_lshift_func_uint16_t_u_s((g_62 > (safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((-4L) < (safe_mul_func_int64_t_s_s(l_529, (safe_mul_func_uint32_t_u_u(g_98, (safe_div_func_int8_t_s_s(((g_330 , p_133) > g_252), l_529))))))) || g_450), l_535)) , g_98), l_535))), l_529))))) , l_535))) == (-9L)) >= l_529);
        if (p_132)
            continue;
        g_330 = l_535;
        for (g_303 = (-18); (g_303 < 19); ++g_303)
        {
            float l_568 = 0x1.Ep-1;
            const int32_t l_590 = (-1L);
            int32_t l_628 = 8L;
            if (g_11)
                break;
            for (g_325 = 0; (g_325 == (-4)); g_325 = safe_sub_func_int32_t_s_s(g_325, 2))
            {
                int32_t l_567 = (-7L);
                int32_t l_569 = 1L;
                for (g_359 = (-8); (g_359 == (-30)); g_359--)
                {
                    int32_t l_572 = 0L;
                    for (g_84 = 7; (g_84 > 18); ++g_84)
                    {
                        int16_t l_546 = 0x658AL;
                        l_529 ^= (safe_sub_func_int16_t_s_s((0x91F6L && (l_546 = 6L)), 5UL));
                        l_569 &= ((safe_rshift_func_int32_t_s_u((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint64_t_u_u(p_132, 2)) >= (safe_unary_minus_func_int16_t_s(0L))), (((safe_mul_func_uint32_t_u_u((p_134 | ((p_135 , (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((p_134 && (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((l_567 ^= (((g_300 = p_133) & (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((g_78 <= ((p_134 <= 0xBC534D2820C1F3F4LL) , 0xD606L)), 0x36L)), g_355))) > l_546)) , g_270) >= g_381) > l_529), 11)), l_535))))), g_323))) <= 0xC1L)), (-1L))) | p_132) >= p_133))) == 255UL) == g_228), p_134)) || p_134);
                        g_342 = (safe_mod_func_uint16_t_u_u(((l_572 = (g_321 || 0x8C59L)) , (safe_add_func_uint64_t_u_u(l_535, (((safe_rshift_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(0x08A2A7BF1E7EB242LL, 0x39A41F4893DD36EDLL)) , 1L), ((g_86 = 0x62L) <= (-9L)))) && (65527UL < g_376)) | l_567)))), g_259));
                    }
                }
            }
            for (g_85 = (-3); (g_85 <= 28); g_85 = safe_add_func_uint16_t_u_u(g_85, 4))
            {
                float l_604 = 0x5.7E2185p+33;
                int32_t l_605 = (-1L);
                g_228 = ((safe_mul_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s((safe_add_func_uint32_t_u_u(((p_132 >= 0xD165L) != (((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s(l_590, (safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((3L | ((((0x77L <= (l_599 = (safe_mul_func_uint16_t_u_u(0x2D0AL, (g_321 = l_529))))) > (safe_div_func_uint8_t_u_u(((p_134 , ((safe_mod_func_uint32_t_u_u(((0xBE8735A37D3A5E5FLL ^ 0x5D3E90FA34F1C786LL) < l_529), g_381)) <= p_135)) & 255UL), l_535))) || 18446744073709551607UL) , 0UL)) , g_85), 1UL)), g_257)), 0x2EEAC1006E64D8D0LL)))), g_177)) ^ l_605) , p_132)), 0L)))) | g_606), 0x9324EF41L)) || p_132);
                return l_590;
            }
            g_338 ^= (((p_132 , (safe_add_func_uint32_t_u_u((~p_134), (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((((1L < (((l_628 |= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(p_133, (safe_div_func_int64_t_s_s(((safe_mod_func_int16_t_s_s((l_529 = (((((g_451 != (g_321 = ((safe_lshift_func_int64_t_s_s(l_529, 5)) && ((+(p_133 ^ g_359)) , g_294)))) > l_590) > l_535) & l_529) <= 1UL)), l_627)) , p_132), p_135)))) ^ l_590), l_627)), l_627))) , l_535) >= 0x5971L)) , p_135) || l_535) ^ 0x740C8EA8L), g_299)) | 1UL), l_590))))) && p_132) < l_535);
        }
    }
    g_650++;
    return g_387;
}
float func_151(int32_t p_152, int8_t p_153)
{
    int8_t l_164 = 0xB5L;
    int32_t l_174 = 0xF6EB6F9EL;
    const int32_t l_184 = 0xF39A9842L;
    uint16_t l_185 = 0xC6A4L;
    uint32_t l_431 = 18446744073709551608UL;
    const uint64_t l_432 = 18446744073709551615UL;
    int32_t l_433 = 0xDFD22849L;
    uint8_t l_434 = 0xEDL;
    int32_t l_435 = (-1L);
    int32_t l_438 = 0x78AA8BECL;
    int32_t l_441 = 0xBAFC0776L;
    uint32_t l_442 = 0x42449FA8L;
    int32_t l_444 = (-4L);
    int32_t l_445 = (-1L);
    int32_t l_446 = 0x3DDFA3CCL;
    int32_t l_447 = (-1L);
    int32_t l_448 = 0x4F5D4FD2L;
    int32_t l_449 = 0xF0F1770DL;
    int32_t l_453 = (-1L);
    int32_t l_456 = 0L;
    int8_t l_487 = (-3L);
    int32_t l_488 = 0L;
    int64_t l_490 = 0L;
    uint8_t l_513 = 0x9DL;
    g_457 = (g_437 = ((((safe_rshift_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((l_431 = ((p_153 , (((safe_mod_func_uint64_t_u_u(g_72, p_152)) || (safe_mod_func_int64_t_s_s(l_164, (--g_165)))) & func_168((safe_sub_func_uint64_t_u_u((g_98 == (l_174 = l_164)), (safe_sub_func_int64_t_s_s((g_177 = (p_152 & l_164)), (((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0x64L, g_29)), l_184)), 10)) , g_72) | l_164))))), g_98, l_185))) >= 0xC3610736L)), p_153)), l_432)) , l_164) == p_153) != g_318));
    g_325 = ((((g_321 <= (safe_unary_minus_func_uint16_t_u(((l_447 = (l_164 >= ((safe_add_func_uint64_t_u_u(((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((g_228 = (((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int64_t_s_u((((safe_rshift_func_int32_t_s_u((l_444 = ((l_488 = ((l_431 > (safe_mul_func_int64_t_s_s((1UL & ((safe_lshift_func_uint8_t_u_s((~(p_152 > ((((+g_376) >= (((((safe_sub_func_int64_t_s_s((((l_435 = 0x5576E561L) | (g_387 < 0x623DL)) == 0L), 0x55A6491985D1017DLL)) && p_152) || p_153) != g_439) && g_351)) == l_184) != 18446744073709551608UL))), l_487)) == g_84)), l_431))) , 0L)) == g_383)), g_344)) , l_435) || 0xD1C9L), 15)), (-9L))), p_153)), 10)), p_152)), 0xB7A3L)) , 0x6E0837E19506F32ELL) != 0UL)), p_153)), 2)) == 0xDBE1A93BL) != g_489) || g_371), p_152)) & l_490))) | g_338)))) && 0x207BL) | l_487) , l_490);
    l_433 = ((safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((g_306 , (l_444 == (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int32_t_s_u((0xE57E6AA6L == ((g_457 = (safe_sub_func_float_f_f(p_152, ((safe_add_func_float_f_f(0xB.005505p+9, g_317)) < (g_267 = (safe_mul_func_float_f_f((safe_add_func_float_f_f(g_317, ((((safe_mul_func_float_f_f(((0x4.41A631p+2 > ((g_258 = (safe_add_func_float_f_f(g_321, l_431))) < 0x6.6832C6p+80)) != (-0x3.7p+1)), 0x1.0p+1)) <= l_448) > l_445) >= l_433))), g_452))))))) , g_270)), l_453)) | 0xCDL), 4)) || 0UL), g_305)))), p_152)) | l_487), l_164)) != p_152);
    g_437 = g_258;
    return l_446;
}
int32_t func_168(int32_t p_169, int16_t p_170, uint32_t p_171)
{
    uint64_t l_188 = 0x0BDBF62E6A661FA2LL;
    int32_t l_189 = 0xB1403B77L;
    int32_t l_226 = 1L;
    int32_t l_230 = 0x1EF485BCL;
    int32_t l_232 = 0x0E12151EL;
    int32_t l_238 = 1L;
    int32_t l_250 = 0x22598743L;
    int32_t l_268 = (-1L);
    int32_t l_269 = 0xC4FE3040L;
    int32_t l_307 = 0x4052702DL;
    int64_t l_308 = 6L;
    int32_t l_310 = 0L;
    int32_t l_314 = 0x395A3B43L;
    int32_t l_315 = 2L;
    int32_t l_316 = 0x84C0B326L;
    int32_t l_322 = 0x4B5BEC45L;
    int32_t l_324 = (-1L);
    int32_t l_326 = 0xFC485CD2L;
    int32_t l_328 = 0L;
    int32_t l_339 = 0x19AEFDADL;
    int32_t l_341 = (-6L);
    int32_t l_343 = 0x28C12B71L;
    int32_t l_348 = 0x41AD1FF9L;
    int32_t l_350 = 0xC9FD4B6AL;
    int32_t l_362 = 1L;
    int32_t l_366 = (-5L);
    int32_t l_374 = (-10L);
    int32_t l_375 = 0xCF659339L;
    int32_t l_378 = 0x4C425AE9L;
    int32_t l_380 = 0xA3732489L;
    uint32_t l_384 = 0x2B58F65CL;
    int32_t l_385 = 0L;
    int32_t l_388 = (-8L);
    uint8_t l_430 = 247UL;
    if (p_170)
    {
        int64_t l_221 = (-4L);
        int32_t l_227 = 1L;
        int32_t l_231 = 0xAFDC62DBL;
        int32_t l_233 = 0L;
        int32_t l_235 = 0x7510376AL;
        int32_t l_239 = 0xA92DAE4FL;
        int32_t l_241 = 0x741B6539L;
        int32_t l_243 = 0x9BFD98B4L;
        int32_t l_254 = 0xE21D6552L;
        int32_t l_255 = (-1L);
        int32_t l_256 = 7L;
        l_189 &= ((safe_mul_func_uint64_t_u_u(1UL, (l_188 = ((-6L) >= (-9L))))) > 255UL);
        for (l_188 = 0; (l_188 == 40); l_188 = safe_add_func_int64_t_s_s(l_188, 2))
        {
            uint32_t l_192 = 0x7F8BE070L;
            int32_t l_236 = 0x96E21E60L;
            int32_t l_247 = (-1L);
            int32_t l_248 = 4L;
            int32_t l_249 = 0L;
            int32_t l_251 = 0xF025D121L;
            l_192 = g_86;
            g_258 = ((-0x1.Fp+1) != (safe_div_func_float_f_f((safe_sub_func_float_f_f((safe_div_func_float_f_f(g_29, (safe_div_func_float_f_f((safe_add_func_float_f_f(g_177, 0xA.6D21B0p+85)), (((safe_sub_func_float_f_f(g_84, (safe_sub_func_float_f_f((g_93 = (((((p_170 >= (safe_mul_func_float_f_f((((safe_mul_func_float_f_f((safe_sub_func_float_f_f((safe_sub_func_float_f_f((safe_mul_func_float_f_f((safe_mul_func_float_f_f((-((((-(l_221 <= (safe_div_func_float_f_f(0x2.Dp-1, ((safe_div_func_float_f_f(((0xB42ED1920081CEE7LL != l_189) , p_170), p_170)) <= p_171))))) > g_84) < 0x5.Ap+1) < p_169)), 0x5.9225F1p+91)), l_221)), 0x6.647E6Cp+84)), g_72)), g_93)) < g_86) < l_226), 0x3.A523A5p+91))) <= l_221) > g_56) != 0x8.Ap-1) <= (-0x7.Fp+1))), 0x9.FA99CDp-94)))) >= l_189) <= p_169))))), 0xA.E51160p-45)), l_192)));
            ++g_259;
        }
    }
    else
    {
        int16_t l_262 = 9L;
        int32_t l_263 = 1L;
        int32_t l_265 = 0L;
        int32_t l_271 = 3L;
        int32_t l_292 = 2L;
        int32_t l_298 = 4L;
        int32_t l_302 = 0xF2D70274L;
        int32_t l_309 = 0xFC757FEEL;
        int32_t l_312 = 1L;
        int32_t l_313 = 0L;
        int32_t l_319 = 0x724E0543L;
        int32_t l_320 = 1L;
        int32_t l_327 = 0xF4C982E6L;
        int32_t l_329 = 0x8ABBA1DCL;
        int32_t l_332 = 0x5383916AL;
        int32_t l_333 = 0x29F83BD3L;
        int32_t l_334 = 1L;
        int32_t l_335 = 0L;
        int32_t l_337 = 0x334F404DL;
        int32_t l_340 = 0xFCB35627L;
        int32_t l_345 = 0xDB9C433BL;
        int32_t l_346 = 0xF24154FCL;
        int32_t l_347 = (-4L);
        int32_t l_356 = 0xFF088BA0L;
        int32_t l_363 = 1L;
        int32_t l_364 = 5L;
        uint64_t l_367 = 1UL;
        int32_t l_369 = (-2L);
        int32_t l_370 = 0xE0C5CD07L;
        int32_t l_379 = (-3L);
        uint32_t l_389 = 0x7E2E7F7AL;
        int32_t l_390 = 0x7E94529BL;
        int32_t l_392 = 0x5AAAE065L;
        uint16_t l_399 = 0UL;
        g_272++;
        l_250 = ((safe_lshift_func_uint64_t_u_s(g_259, (1UL && (safe_sub_func_uint32_t_u_u(p_169, g_257))))) ^ ((1L || g_86) ^ 0x69L));
        l_189 = (((p_169 | ((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(g_264, (4294967295UL && (safe_sub_func_int32_t_s_s((((0x9.Cp-1 == (((g_93 = ((g_86 , p_169) == (+0x2.3p+1))) < (safe_add_func_float_f_f((((g_393 = (((safe_mul_func_float_f_f((0x4.07840Ep+21 == ((((l_271 = ((g_258 = (((g_267 = ((safe_div_func_float_f_f(p_171, g_84)) < g_259)) != p_170) > 0x1.DDD8C5p-21)) , l_269)) <= 0x0.0CD518p-65) >= l_265) <= p_169)), 0x0.9p+1)) < 0x0.1p+1) == l_263)) < g_240) < 0x6.213B6Cp+31), 0x6.25BB90p+4))) >= (-0x4.Cp+1))) , g_86) & g_242), p_171))))), 1UL)) <= l_319)) || g_305) != g_342);
        g_342 &= (safe_rshift_func_int32_t_s_s((safe_mul_func_int32_t_s_s((((safe_unary_minus_func_uint32_t_u(l_399)) , ((((l_309 > (safe_mul_func_int64_t_s_s(((((g_321 = ((l_362 < ((-4L) ^ (safe_lshift_func_uint32_t_u_s((safe_lshift_func_uint32_t_u_s(l_384, (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((~((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((((~(safe_lshift_func_uint8_t_u_s(l_350, ((safe_sub_func_uint16_t_u_u((safe_mul_func_int64_t_s_s(((safe_add_func_int16_t_s_s(l_350, ((safe_mul_func_float_f_f((((l_392 = ((safe_rshift_func_int64_t_s_s(((((p_169 ^ ((g_323 ^= (safe_sub_func_int16_t_s_s(g_29, l_345))) && (-7L))) | p_170) ^ g_29) , l_375), g_98)) , g_368)) == l_262) <= 0xB.E982E7p-32), p_170)) , p_171))) == p_171), (-8L))), 0xB493L)) == l_292)))) < p_169) > p_171), p_170)), 0UL)) == l_302)) , p_170), p_170)), g_373)))), g_371)))) <= 0UL)) != g_228) || g_229) , 0x730DD10957E85835LL), p_169))) , p_171) | p_169) && l_232)) && 0xBA9483A5459D30CCLL), g_336)), l_430));
    }
    return p_171;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, print_hash_value);
    transparent_crc(g_29, print_hash_value);
    transparent_crc(g_56, print_hash_value);
    transparent_crc(g_62, print_hash_value);
    transparent_crc(g_72, print_hash_value);
    transparent_crc(g_73, print_hash_value);
    transparent_crc(g_78, print_hash_value);
    transparent_crc(g_83, print_hash_value);
    transparent_crc(g_84, print_hash_value);
    transparent_crc(g_85, print_hash_value);
    transparent_crc(g_86, print_hash_value);
    
    transparent_crc(g_98, print_hash_value);
    transparent_crc(g_103, print_hash_value);
    transparent_crc(g_165, print_hash_value);
    transparent_crc(g_177, print_hash_value);
    transparent_crc(g_228, print_hash_value);
    transparent_crc(g_229, print_hash_value);
    transparent_crc(g_234, print_hash_value);
    transparent_crc(g_237, print_hash_value);
    transparent_crc(g_240, print_hash_value);
    transparent_crc(g_242, print_hash_value);
    transparent_crc(g_244, print_hash_value);
    transparent_crc(g_245, print_hash_value);
    transparent_crc(g_246, print_hash_value);
    transparent_crc(g_252, print_hash_value);
    transparent_crc(g_253, print_hash_value);
    transparent_crc(g_257, print_hash_value);
    
    transparent_crc(g_259, print_hash_value);
    transparent_crc(g_264, print_hash_value);
    transparent_crc(g_266, print_hash_value);
    
    transparent_crc(g_270, print_hash_value);
    transparent_crc(g_272, print_hash_value);
    transparent_crc(g_293, print_hash_value);
    transparent_crc(g_294, print_hash_value);
    transparent_crc(g_295, print_hash_value);
    transparent_crc(g_296, print_hash_value);
    transparent_crc(g_297, print_hash_value);
    transparent_crc(g_299, print_hash_value);
    transparent_crc(g_300, print_hash_value);
    transparent_crc(g_301, print_hash_value);
    transparent_crc(g_303, print_hash_value);
    transparent_crc(g_304, print_hash_value);
    transparent_crc(g_305, print_hash_value);
    transparent_crc(g_306, print_hash_value);
    transparent_crc(g_311, print_hash_value);
    transparent_crc(g_317, print_hash_value);
    transparent_crc(g_318, print_hash_value);
    transparent_crc(g_321, print_hash_value);
    transparent_crc(g_323, print_hash_value);
    transparent_crc(g_325, print_hash_value);
    transparent_crc(g_330, print_hash_value);
    transparent_crc(g_331, print_hash_value);
    transparent_crc(g_336, print_hash_value);
    transparent_crc(g_338, print_hash_value);
    transparent_crc(g_342, print_hash_value);
    transparent_crc(g_344, print_hash_value);
    transparent_crc(g_349, print_hash_value);
    transparent_crc(g_351, print_hash_value);
    transparent_crc(g_352, print_hash_value);
    transparent_crc(g_353, print_hash_value);
    transparent_crc(g_354, print_hash_value);
    transparent_crc(g_355, print_hash_value);
    transparent_crc(g_357, print_hash_value);
    transparent_crc(g_358, print_hash_value);
    transparent_crc(g_359, print_hash_value);
    transparent_crc(g_360, print_hash_value);
    transparent_crc(g_361, print_hash_value);
    transparent_crc(g_365, print_hash_value);
    transparent_crc(g_368, print_hash_value);
    transparent_crc(g_371, print_hash_value);
    transparent_crc(g_372, print_hash_value);
    transparent_crc(g_373, print_hash_value);
    transparent_crc(g_376, print_hash_value);
    transparent_crc(g_377, print_hash_value);
    transparent_crc(g_381, print_hash_value);
    transparent_crc(g_382, print_hash_value);
    transparent_crc(g_383, print_hash_value);
    transparent_crc(g_386, print_hash_value);
    transparent_crc(g_387, print_hash_value);
    transparent_crc(g_391, print_hash_value);
    
    transparent_crc(g_436, print_hash_value);
    
    transparent_crc(g_439, print_hash_value);
    transparent_crc(g_440, print_hash_value);
    transparent_crc(g_443, print_hash_value);
    transparent_crc(g_450, print_hash_value);
    transparent_crc(g_451, print_hash_value);
    transparent_crc(g_452, print_hash_value);
    transparent_crc(g_454, print_hash_value);
    transparent_crc(g_455, print_hash_value);
    
    transparent_crc(g_489, print_hash_value);
    transparent_crc(g_515, print_hash_value);
    transparent_crc(g_606, print_hash_value);
    transparent_crc(g_645, print_hash_value);
    
    transparent_crc(g_650, print_hash_value);
    transparent_crc(g_700, print_hash_value);
    transparent_crc(g_702, print_hash_value);
    transparent_crc(g_706, print_hash_value);
    transparent_crc(g_708, print_hash_value);
    
    transparent_crc(g_806, print_hash_value);
    transparent_crc(g_808, print_hash_value);
    transparent_crc(g_896, print_hash_value);
    
    transparent_crc(g_1117, print_hash_value);
    transparent_crc(g_1160, print_hash_value);
    transparent_crc(g_1161, print_hash_value);
    
    transparent_crc(g_1189, print_hash_value);
    transparent_crc(g_1192, print_hash_value);
    transparent_crc(g_1286, print_hash_value);
    transparent_crc(g_1289, print_hash_value);
    transparent_crc(g_1290, print_hash_value);
    transparent_crc(g_1293, print_hash_value);
    transparent_crc(g_1303, print_hash_value);
    transparent_crc(g_1304, print_hash_value);
    transparent_crc(g_1305, print_hash_value);
    transparent_crc(g_1307, print_hash_value);
    transparent_crc(g_1345, print_hash_value);
    transparent_crc(g_1429, print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return (unsigned char)(crc32_context);
}
