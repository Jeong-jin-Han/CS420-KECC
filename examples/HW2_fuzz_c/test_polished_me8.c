
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

uint16_t g_10 = 0UL;
uint64_t g_13 = 18446744073709551611UL;
int32_t g_26 = 7L;
int8_t g_33 = 0L;
uint8_t g_35 = 0xCBL;
int8_t g_66 = 0x01L;
float g_95 = (-0x1.8p-1);
int8_t g_96 = 0x7CL;
int16_t g_97 = 0x04A8L;
uint64_t g_98 = 18446744073709551615UL;
uint16_t g_99 = 0x0479L;
int32_t g_100 = 0xE4BBA6C1L;
int64_t g_108 = 4L;
int32_t g_116 = 0x37083F7AL;
int16_t g_117 = 0xD273L;
int32_t g_118 = (-5L);
uint32_t g_119 = 0x2FFB46D8L;
int16_t g_123 = (-9L);
int16_t g_124 = (-5L);
uint16_t g_126 = 65533UL;
int32_t g_128 = (-4L);
int32_t g_131 = 0x0F9CC38DL;
int64_t g_134 = 0xE0D2C3DA88E9DE53LL;
float g_135 = 0x1.1p+1;
uint64_t g_136 = 1UL;
float g_157 = 0x2.F5F243p-16;
float g_184 = 0xF.83A3BBp+53;
uint8_t g_186 = 248UL;
uint32_t g_201 = 4294967295UL;
float g_257 = 0x6.913B2Dp-56;
int32_t g_276 = 0x1B04E518L;
int32_t g_277 = (-1L);
int8_t g_337 = 0xF3L;
uint16_t g_404 = 0x1FDEL;
uint32_t g_409 = 4294967295UL;
uint32_t g_424 = 0xDD1DF32BL;
uint64_t g_430 = 18446744073709551615UL;
uint64_t g_431 = 0x3C457DBA2C76FC8CLL;
uint32_t g_435 = 0x21759F23L;
uint32_t g_457 = 0x25E5609EL;
uint64_t g_502 = 18446744073709551609UL;
uint32_t g_543 = 18446744073709551615UL;
int16_t g_549 = 0L;
uint16_t g_550 = 1UL;
float g_643 = 0xB.A45FD2p+56;
int16_t g_644 = (-1L);
uint8_t g_645 = 0xB4L;
uint16_t g_689 = 2UL;
int64_t g_723 = 1L;
uint64_t g_724 = 18446744073709551615UL;
int32_t g_730 = 0x601E663EL;
uint32_t g_731 = 0xFAC87BC3L;
uint16_t func_1(void);
int32_t func_2(int16_t p_3);
int16_t func_4(float p_5, uint32_t p_6, float p_7, uint8_t p_8, uint16_t p_9);
const int32_t func_20(int64_t p_21, uint32_t p_22);
uint8_t func_23(uint8_t p_24, uint8_t p_25);
uint16_t func_27(const uint32_t p_28, uint16_t p_29, int32_t p_30, uint8_t p_31, uint64_t p_32);
float func_40(int32_t p_41, uint32_t p_42, int16_t p_43, uint8_t p_44, int64_t p_45);
int16_t func_46(int64_t p_47, int32_t p_48, int16_t p_49, float p_50, uint16_t p_51);
int32_t func_61(int32_t p_62, int32_t p_63, uint16_t p_64);
uint32_t func_68(uint16_t p_69);
uint16_t func_1(void)
{
    uint8_t l_16 = 0UL;
    int32_t l_34 = 0xC37FC054L;
    int32_t l_648 = 0xA044F6C3L;
    int32_t l_649 = 7L;
    int32_t l_650 = 0xD4E721EEL;
    int32_t l_651 = (-1L);
    int32_t l_789 = 0x3923E125L;
    int32_t l_796 = (-1L);
    l_789 = func_2(func_4((g_10 < ((safe_mul_func_float_f_f(0xE.923E64p+65, g_13)) == (g_13 <= (safe_add_func_float_f_f((l_16 , (safe_sub_func_float_f_f((g_643 = (-(((l_34 = ((func_20((func_23(g_26, ((func_27(g_26, (--g_35), g_13, (safe_rshift_func_uint8_t_u_u(0xF7L, 1)), l_34) , l_34) & 0x54L)) | g_134), g_430) == g_13) == g_131)) , (-0x9.Cp-1)) <= 0x0.7p-1))), 0xA.AE1C52p-9))), 0x0.2p-1))))), g_66, l_650, g_66, g_33));
    g_26 = (safe_rshift_func_uint64_t_u_s(((l_16 & 0x27A0L) != ((l_648 ^= g_404) || (g_730 &= (((l_789 <= (-9L)) ^ (safe_sub_func_int8_t_s_s(((g_550 & g_543) < (0xA5881E4023C49BBFLL && (l_796 = (safe_add_func_int8_t_s_s((g_457 | l_649), g_550))))), 1L))) | g_116)))), 63));
    l_651 ^= g_724;
    return g_119;
}
int32_t func_2(int16_t p_3)
{
    uint32_t l_668 = 0xD51959D5L;
    int32_t l_671 = 0x0A4BCEEDL;
    int32_t l_674 = (-3L);
    int32_t l_676 = 0xB4262B5AL;
    int32_t l_677 = (-3L);
    int32_t l_679 = 0x12527B86L;
    int32_t l_681 = 0xA34895A3L;
    int32_t l_682 = (-5L);
    int32_t l_683 = 0x9EE99867L;
    int32_t l_685 = 0L;
    int32_t l_687 = (-1L);
    int32_t l_688 = (-2L);
    int32_t l_718 = 0x2E0DD547L;
    int32_t l_719 = (-5L);
    int32_t l_720 = 0xBC118406L;
    int32_t l_721 = 0xF3D744F4L;
    int32_t l_722 = 0x22E193FDL;
    if ((safe_mod_func_int16_t_s_s((p_3 < ((safe_sub_func_uint16_t_u_u(1UL, g_118)) || (((((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((l_668 == (safe_lshift_func_int8_t_s_u(p_3, g_33))), ((g_35 ^= 1UL) <= (l_671 = (l_668 ^ 0xDB1415F5C9099C72LL))))) != l_668), g_431)) , l_668))) != l_668) > 0x32L) ^ l_668) < 0x8EL))), l_668)))
    {
        int32_t l_672 = 0x8D7AFBBAL;
        int32_t l_673 = (-1L);
        int32_t l_675 = 2L;
        int32_t l_678 = (-1L);
        int32_t l_680 = 1L;
        int32_t l_684 = 3L;
        int32_t l_686 = 0x6E6279D0L;
        int32_t l_717 = 0x15D77AFFL;
        int32_t l_729 = 1L;
        int32_t l_743 = 0x18AAB17EL;
        l_672 = (l_672 < (g_117 = p_3));
        l_686 |= (((--g_689) == ((safe_add_func_float_f_f((safe_div_func_float_f_f((l_672 , (0x0.Cp-1 == ((safe_add_func_uint64_t_u_u((p_3 > (safe_mod_func_int8_t_s_s(p_3, (l_685 = 0xDBL)))), 0x26322E899FC98202LL)) , ((((safe_mod_func_uint8_t_u_u(g_136, 9UL)) , (safe_mul_func_float_f_f((((l_672 ^= ((((0x4782L == g_66) >= 0x1259L) ^ g_96) , 0xB6D265F06879AC1DLL)) , p_3) , p_3), p_3))) > l_673) <= g_117)))), g_257)), 0x6.E4D21Dp+23)) , 4L)) != g_186);
        l_675 = (safe_sub_func_uint32_t_u_u((l_683 = ((safe_sub_func_float_f_f((safe_mul_func_float_f_f((safe_mul_func_float_f_f(((l_679 &= ((safe_mod_func_uint8_t_u_u((~((safe_mul_func_uint64_t_u_u(l_678, ((l_722 = (--g_724)) || (((safe_rshift_func_uint16_t_u_s((++g_731), ((safe_div_func_uint64_t_u_u(18446744073709551614UL, (safe_rshift_func_uint8_t_u_s((g_116 = (l_682 &= (l_675 ^ (safe_div_func_uint32_t_u_u((!((0xD.98A75Dp-86 == (safe_add_func_float_f_f(((l_743 >= ((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0x74B7L, (l_675 || (((safe_rshift_func_int64_t_s_u((-1L), (((l_673 |= (safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((l_684 = (safe_mod_func_uint16_t_u_u((((~0L) != (-7L)) ^ 0x16122E8AL), g_644))), 18446744073709551608UL)), 0x16L)), 0xBA7972F4141430C2LL)), 0xEB66L))) != l_672) | 0x96D1L))) <= 0x3CL) || l_686)))), 0xCBAB417EL)) , g_108)) >= 0x5.5C419Fp-91), p_3))) , 1UL)), l_688))))), g_136)))) && l_717))) > 0x810907D4L) || p_3)))) | l_678)), p_3)) & l_717)) , l_717), l_668)), g_543)), 0x1.Ep-1)) , 0x86334285L)), l_729));
        for (l_673 = 17; (l_673 > 7); l_673 = safe_sub_func_int64_t_s_s(l_673, 3))
        {
            uint32_t l_772 = 3UL;
            int32_t l_773 = 0x898ECB90L;
            l_773 = ((safe_mod_func_int8_t_s_s((+0x18B5L), ((((p_3 , ((safe_div_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((g_131 > ((safe_rshift_func_int8_t_s_s(l_685, (g_117 , (g_33 | 0xD6A43AA1151E71A0LL)))) < p_3)) <= ((-10L) && 18446744073709551607UL)), l_671)), g_424)) || p_3)) & p_3) > l_772) ^ (-4L)))) ^ 0xA9A606DFF315E9DFLL);
        }
    }
    else
    {
        g_431 = g_724;
    }
    g_97 = (safe_unary_minus_func_int64_t_s(((safe_lshift_func_uint32_t_u_u(((p_3 | (safe_lshift_func_int64_t_s_s((g_116 = (g_26 , (l_671 = ((l_677 = (safe_add_func_int64_t_s_s((p_3 ^ (l_679 = (safe_sub_func_uint64_t_u_u(g_123, (l_719 &= (g_13 < (((((g_96 == 0x6E539DC1L) ^ (safe_div_func_uint16_t_u_u((l_676 = ((((safe_mul_func_int64_t_s_s((safe_mul_func_int8_t_s_s((p_3 , (255UL ^ p_3)), g_723)), l_722)) > 0x9253L) , (-1L)) , 0x924EL)), g_108))) , 3UL) | g_424) | 4294967287UL))))))), (-7L)))) < l_688)))), p_3))) ^ 0x52109849912EF268LL), 27)) , p_3)));
    return p_3;
}
int16_t func_4(float p_5, uint32_t p_6, float p_7, uint8_t p_8, uint16_t p_9)
{
    uint32_t l_656 = 1UL;
    for (g_424 = 0; (g_424 > 4); g_424++)
    {
        float l_654 = 0x5.0EE5D1p-37;
        int32_t l_655 = 0x3C34119EL;
        g_276 = (-5L);
        l_656 = l_655;
        if (g_136)
            break;
        for (g_435 = 0; (g_435 <= 2); g_435 = safe_add_func_uint32_t_u_u(g_435, 3))
        {
            return g_118;
        }
    }
    return l_656;
}
const int32_t func_20(int64_t p_21, uint32_t p_22)
{
    uint32_t l_555 = 4294967295UL;
    int32_t l_601 = 1L;
    int32_t l_616 = 0x1A02E465L;
    const uint32_t l_624 = 0x97BF2BF7L;
    int32_t l_633 = 0x2A5830FCL;
    int32_t l_634 = 0x7112E2E4L;
    int32_t l_638 = (-9L);
    int32_t l_639 = 0xFCAD8F4FL;
    for (g_409 = 0; (g_409 < 49); g_409 = safe_add_func_int16_t_s_s(g_409, 4))
    {
        uint32_t l_558 = 0x2C2F74A8L;
        if (((g_126 & ((l_555 = (g_98 = 1UL)) && (1UL && (safe_sub_func_int8_t_s_s(((p_22 |= (l_558 = l_555)) & ((p_21 <= (p_21 < (((safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((g_118 || 1L), (safe_lshift_func_int16_t_s_u(((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((g_431 && p_21), p_21)), p_21)) , g_276), g_550)))) > g_337), l_555)) < 255UL) & p_21))) , 0xD4L)), g_98))))) > p_21))
        {
            int16_t l_602 = 1L;
            const uint32_t l_605 = 1UL;
            int32_t l_625 = (-1L);
            int32_t l_626 = 0x185FE07AL;
            if (g_116)
            {
                g_457 = p_22;
            }
            else
            {
                uint8_t l_603 = 255UL;
                int32_t l_604 = 0x1300C77BL;
                int8_t l_623 = (-1L);
                g_276 &= (((((safe_sub_func_int64_t_s_s(((g_337 &= ((((l_604 &= (safe_lshift_func_int16_t_s_u((((1L != (((safe_div_func_float_f_f((safe_add_func_float_f_f((p_21 == (!((!(safe_rshift_func_int16_t_s_s((((((l_601 = ((((safe_add_func_int16_t_s_s((p_22 = (safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint64_t_u_s((safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(g_100, (safe_lshift_func_int32_t_s_u(g_118, ((safe_add_func_uint8_t_u_u(p_21, 6L)) < (safe_div_func_int64_t_s_s(((-1L) && (p_22 && (((safe_sub_func_uint8_t_u_u(0UL, p_22)) ^ 1UL) > p_22))), g_131))))))) , 0x2FL), 251UL)), 15)), g_35)), g_123))), l_558)) > 255UL) >= l_558) <= 0x38A2L)) , l_558) ^ 0x812A08DDL) | 3UL) > l_602), 7))) , l_603))), (-0x4.5p-1))), p_21)) == p_21) , g_118)) <= p_21) , l_603), g_131))) , 0xE221L) & p_21) , 0x05L)) == l_605), l_558)) || l_558) , p_22) | l_555) == g_424);
                g_95 = (safe_sub_func_float_f_f(g_124, ((((-0x1.7p-1) <= ((((g_431 || (l_602 <= (l_604 = ((safe_sub_func_uint16_t_u_u(0x1E21L, (safe_add_func_uint8_t_u_u(((l_558 == (safe_sub_func_uint16_t_u_u((~l_616), (((g_128 && (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((p_21 , p_21), p_21)) >= l_558), g_116)), l_603))) != l_623) >= 0L)))) == (-3L)), g_430)))) && l_624)))) , l_555) > g_134) != g_337)) != g_124) > p_21)));
            }
            return p_22;
        }
        else
        {
            int8_t l_627 = 0x76L;
            if (p_22)
                break;
            l_627 = l_555;
        }
    }
    g_26 |= (l_601 = 0xC3FE8413L);
    for (g_35 = 22; (g_35 != 28); g_35 = safe_add_func_int8_t_s_s(g_35, 1))
    {
        uint64_t l_630 = 1UL;
        int32_t l_631 = 1L;
        int32_t l_632 = 0x2BA4AD7BL;
        int32_t l_635 = 5L;
        int32_t l_636 = 0x6370B6D1L;
        int32_t l_637 = 0x3B92CE79L;
        int32_t l_640 = 0xA4A9FB64L;
        int32_t l_641 = 4L;
        int32_t l_642 = (-4L);
        g_457 = p_22;
        g_98 = l_630;
        g_645--;
        p_22 = p_22;
    }
    return g_131;
}
uint8_t func_23(uint8_t p_24, uint8_t p_25)
{
    int32_t l_546 = (-7L);
    int32_t l_547 = 0x1B23CF24L;
    int32_t l_548 = 0x07919059L;
    g_550++;
    return g_457;
}
uint16_t func_27(const uint32_t p_28, uint16_t p_29, int32_t p_30, uint8_t p_31, uint64_t p_32)
{
    int64_t l_65 = (-6L);
    int32_t l_67 = 0x1D66BD5DL;
    int32_t l_410 = 0xA1B3B349L;
    int32_t l_411 = (-1L);
    int32_t l_412 = (-1L);
    int32_t l_413 = 4L;
    int32_t l_414 = 0xA5E16FDFL;
    int32_t l_415 = (-5L);
    int32_t l_416 = 0x51857221L;
    int32_t l_417 = 0L;
    int32_t l_418 = 1L;
    int32_t l_419 = 0x1F864230L;
    int32_t l_420 = 0x1929B636L;
    int32_t l_421 = 0xEAAE325CL;
    int32_t l_422 = 0x8A4525A2L;
    int32_t l_423 = 0x53742271L;
    int32_t l_425 = 0x12D52900L;
    int32_t l_426 = (-1L);
    int32_t l_427 = 0x02B8A2F4L;
    int32_t l_428 = 0xF67FCAB5L;
    int32_t l_429 = (-1L);
    int32_t l_432 = 0xEA17FF4DL;
    int32_t l_433 = 0x2292E40CL;
    int32_t l_434 = 0x0EAC941AL;
    int32_t l_436 = 0x1DF90D58L;
    float l_437 = (-0x4.9p-1);
    int8_t l_545 = 0x90L;
    l_437 = ((0x4.Bp+1 != func_40(g_13, p_28, func_46(g_33, (0x7F3C88FED6C34F1DLL == ((+(safe_mod_func_uint64_t_u_u((4UL | (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_32, func_61(l_65, (l_67 = (((0xC.FB656Dp+43 == p_31) , 0UL) < g_66)), g_13))), 12))), g_35))) ^ 0L)), l_65, g_117, l_65), p_28, g_100)) > l_65);
    if ((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0x06C5L, (safe_add_func_int16_t_s_s((l_417 > g_119), ((((safe_rshift_func_uint32_t_u_s(((safe_unary_minus_func_uint8_t_u(((g_124 < (((g_424 , (safe_lshift_func_int8_t_s_u((safe_lshift_func_int64_t_s_s(((((g_457 = (safe_div_func_uint8_t_u_u(((g_276 |= (g_116 = ((safe_rshift_func_int16_t_s_u(g_123, 7)) <= (safe_mul_func_uint32_t_u_u((l_416 & (p_30 < ((((l_415 = ((l_433 , 0x3D30L) < p_28)) && g_431) >= g_124) , 0xB6E6L))), l_413))))) && g_66), 1L))) & p_32) > 0x09L) , l_428), p_30)), l_413))) | p_32) , p_28)) < p_32))) & p_29), l_411)) && p_31) , l_418) || p_30))))), g_100)))
    {
        uint64_t l_478 = 18446744073709551612UL;
        float l_481 = 0xF.ACCB90p-86;
        g_276 &= ((safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(0x03AEA3D496635388LL, p_29)), (safe_lshift_func_int8_t_s_u((g_277 >= (l_412 |= p_31)), (safe_mod_func_uint16_t_u_u((safe_mul_func_int32_t_s_s(l_416, ((((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_int64_t_s_u(p_28, 39)), (l_478 &= 65529UL))), 255UL)), (safe_sub_func_int64_t_s_s(((((p_28 < p_32) || g_136) >= l_423) ^ p_29), (-10L))))), l_426)) , 0x523AFE7CL) < 0x5ABB7801L) && g_201))), g_118)))))) <= 249UL);
    }
    else
    {
        uint64_t l_482 = 0UL;
        int32_t l_510 = 0xC616B5F8L;
        uint32_t l_539 = 6UL;
        l_482++;
        if ((g_409 = (safe_lshift_func_int64_t_s_u(g_186, (g_134 | (~(~g_430)))))))
        {
            int32_t l_497 = 0x2DB2D0B9L;
            int32_t l_509 = 0L;
            if ((0x3AA8L > (safe_lshift_func_int64_t_s_s((l_482 && (safe_sub_func_int8_t_s_s((safe_mul_func_uint32_t_u_u(((g_502 |= (safe_mod_func_uint64_t_u_u(l_497, (safe_mul_func_uint8_t_u_u(8UL, (safe_rshift_func_int32_t_s_s(g_431, 16))))))) | (safe_sub_func_uint32_t_u_u(p_32, (18446744073709551611UL ^ (l_423 = (l_497 > (((safe_lshift_func_uint64_t_u_u((l_410 ^= p_32), p_29)) > p_32) ^ l_482))))))), l_414)), p_31))), 14))))
            {
                return p_29;
            }
            else
            {
                for (l_423 = 0; (l_423 < 29); l_423 = safe_add_func_int16_t_s_s(l_423, 6))
                {
                    uint32_t l_513 = 0x1758533DL;
                    l_510 |= (l_509 = (-6L));
                    g_116 |= l_509;
                    for (g_123 = 0; (g_123 >= 14); g_123 = safe_add_func_int32_t_s_s(g_123, 4))
                    {
                        l_513++;
                    }
                }
            }
            g_276 = 0x22F857C4L;
        }
        else
        {
            return l_510;
        }
        for (l_421 = 0; (l_421 != (-2)); l_421 = safe_sub_func_int16_t_s_s(l_421, 1))
        {
            int64_t l_524 = 0x6596DC5A1780E172LL;
            int32_t l_544 = 0x7C9B5BF3L;
            g_276 = ((p_29 = ((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((l_524 |= (safe_lshift_func_uint16_t_u_s(g_276, 14))), (l_482 && (safe_div_func_int16_t_s_s(((g_116 = (((0xD5A3L || ((g_157 , ((safe_sub_func_uint64_t_u_u(g_116, (((safe_rshift_func_uint64_t_u_s((safe_add_func_int64_t_s_s((-1L), ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_539, (safe_mod_func_uint64_t_u_u((g_543 = (p_32 <= (!g_123))), p_28)))), 3)), 4294967295UL)) ^ l_544))), 38)) > p_31) && g_277))) && l_544)) > 0x2CB063ADL)) == l_544) == p_32)) || (-10L)), l_544))))), 3UL)) , p_29)) || 0xEBL);
            return l_436;
        }
    }
    return l_545;
}
float func_40(int32_t p_41, uint32_t p_42, int16_t p_43, uint8_t p_44, int64_t p_45)
{
    int32_t l_210 = (-9L);
    int32_t l_222 = 0x9F2CFB6CL;
    int32_t l_228 = (-4L);
    int32_t l_229 = 0xB8C6AB63L;
    int32_t l_230 = (-1L);
    float l_307 = 0x8.343CC9p-76;
    int64_t l_364 = 0L;
    int32_t l_398 = 0x043710CCL;
    int32_t l_399 = 0x29F4713CL;
    int32_t l_400 = 8L;
    int32_t l_401 = 0L;
    int32_t l_402 = 0x2F847630L;
    int32_t l_403 = 0x19451B64L;
    g_201++;
    g_116 ^= (safe_sub_func_int8_t_s_s(0L, (safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint32_t_u_u((l_210 |= 0xC7B78FF2L), (l_230 |= (((safe_lshift_func_int32_t_s_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_229 = (0L < (!(g_98 , ((p_41 && ((safe_mul_func_uint8_t_u_u(g_134, ((safe_mod_func_int16_t_s_s(((l_222 != ((safe_mod_func_int64_t_s_s((~(((((g_26 >= (g_184 = ((((g_135 = (safe_mul_func_float_f_f(l_222, 0xC.7221F8p+34))) < l_222) >= 0x1.Dp-1) <= l_228))) > 0xE.429114p+71) , p_41) >= l_228) > l_228)), g_186)) > 0xBEAA374F6BAD65AALL)) < l_229), g_186)) , p_41))) < l_228)) , g_13))))), 1UL)), 0L)), p_42)) >= g_131) | g_136)))) < l_222) & g_201) , l_229), 0))));
    for (p_44 = 0; (p_44 <= 41); ++p_44)
    {
        uint8_t l_233 = 0xA5L;
        int32_t l_236 = 0x7EE25915L;
        int16_t l_365 = (-10L);
        int32_t l_368 = 1L;
        int8_t l_373 = 0L;
        if (l_233)
            break;
        l_222 = g_35;
        for (l_210 = (-3); (l_210 >= 3); l_210 = safe_add_func_uint16_t_u_u(l_210, 5))
        {
            uint32_t l_258 = 18446744073709551615UL;
            uint16_t l_336 = 1UL;
            int32_t l_338 = 0x380B90F0L;
            l_236 = g_136;
            g_277 = (safe_rshift_func_uint64_t_u_s(((safe_rshift_func_int16_t_s_s((((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(0x92L, (safe_sub_func_uint32_t_u_u((((((g_201 &= (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((g_276 = (l_210 == (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((g_116 = (g_26 , ((((((safe_mul_func_int16_t_s_s((((++l_258) ^ (safe_rshift_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint64_t_u_s(0x4F71C144FEC2E3E7LL, 25)) , g_66), (-1L))) & g_99) && g_35), 3))) > ((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(((safe_div_func_int16_t_s_s((-2L), g_99)) | 0x5104L))) , 8L), 8UL)), l_233)), g_186)) >= 1UL)), l_233)) < g_98) , p_45) <= 1UL) >= p_43) <= 9L))), l_210)), 0x7FEA7280L)))), 1UL)), 0x57EEL))) & g_119) && l_258) < 0x1C73L) > g_99), l_228)))), g_128)) && p_44) , 4L), 11)) != 5L), 5));
            l_222 = ((((safe_add_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u((!(safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_123, 2)), (safe_sub_func_int8_t_s_s(l_229, ((safe_div_func_float_f_f((p_43 , ((safe_sub_func_float_f_f((safe_add_func_float_f_f((g_257 = (((g_26 , (g_184 = (p_43 > ((safe_sub_func_float_f_f((safe_add_func_float_f_f((safe_add_func_float_f_f(((safe_mul_func_float_f_f(((safe_add_func_float_f_f(((((l_307 = (g_157 = 0x0.2p-1)) <= ((g_119 &= 9UL) , (((l_236 == ((safe_add_func_float_f_f((g_135 <= 0x0.3p-1), g_134)) >= (-0x7.Ep+1))) < l_230) > p_44))) != (-0x6.7p+1)) > 0x1.9p+1), g_118)) <= 0x2.4p-1), p_43)) > g_257), 0x1.E04902p+53)), p_42)), p_41)) == 0x6.6F5C53p+44)))) != l_258) != l_228)), p_42)), l_258)) >= g_97)), g_136)) , 0x97L))))), l_222))), (-7L))) >= g_98) >= 255UL) && 0x5BL), 0x3544L)) , 0x1C504DF1L) && g_123) , p_45);
            for (l_233 = (-2); (l_233 != 43); l_233++)
            {
                int32_t l_339 = 5L;
                int32_t l_340 = (-1L);
                int32_t l_366 = 0x505418C0L;
                int32_t l_367 = 0L;
                int32_t l_369 = 3L;
                int32_t l_370 = 0xCEA8323AL;
                int32_t l_371 = (-1L);
                int64_t l_372 = 7L;
                p_41 = ((safe_sub_func_int32_t_s_s((l_230 = ((safe_rshift_func_uint16_t_u_s((g_97 & (g_124 > l_210)), 15)) & (safe_lshift_func_int64_t_s_u((p_42 > 1L), 41)))), ((((l_338 = (3L > (safe_div_func_uint64_t_u_u(g_134, (~((safe_mod_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(((((((!(safe_mul_func_int32_t_s_s((safe_lshift_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((g_276 , (safe_mul_func_int8_t_s_s((((safe_div_func_int64_t_s_s((((((g_186 = p_44) , 0x8E09L) , 0x9FC3L) != l_236) > p_43), p_43)) >= 0xF4L) , l_336), g_13))), p_44)), 16)), 0x0D94B26CL))) , l_236) , 0xEEF275FDL) , g_100) | 2L) && (-5L)), g_337)) >= 0UL), 0xD7985451L)) > (-1L))))))) && g_337) && g_126) , 0x154E9BBAL))) >= l_339);
                l_340 |= p_42;
                g_184 = (safe_add_func_float_f_f(((g_95 = ((((safe_mul_func_float_f_f((0x5.BAD86Dp-0 >= (((!l_228) > p_44) >= ((0xB.75B0D0p-46 <= (g_257 = (-0x1.Dp+1))) >= ((safe_add_func_float_f_f((((safe_div_func_float_f_f(((g_116 = (safe_lshift_func_uint8_t_u_u((((((l_236 = l_230) , (((l_338 & l_338) , (safe_div_func_float_f_f(((safe_div_func_float_f_f((((safe_mul_func_float_f_f((g_157 = (safe_sub_func_float_f_f((g_135 = (safe_div_func_float_f_f((safe_sub_func_float_f_f(((g_97 >= 0x2.Fp-1) == p_44), l_364)), g_337))), 0x9.5BC61Ep-72))), p_43)) != 0x1.9FAFEBp-63) != l_228), p_41)) > l_365), p_42))) , p_45)) < 0x0DL) > 0xA3L) && p_44), 3))) , g_118), g_117)) > p_45) >= p_44), l_340)) > g_98)))), 0x0.C40897p-73)) != l_340) <= 0x6.FB3F3Ep-98) == l_258)) >= l_365), l_372));
                l_370 = 1L;
            }
        }
    }
    l_400 &= (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((l_229 |= ((((safe_div_func_uint8_t_u_u((((0x0D765C34L ^ (l_228 &= l_210)) & (((safe_sub_func_int8_t_s_s(1L, (1L <= ((safe_lshift_func_int64_t_s_s((((safe_mul_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s(g_201, (safe_mul_func_int16_t_s_s((g_337 , (safe_div_func_int64_t_s_s(8L, (g_13 && (((g_409 = (((--g_404) != (safe_rshift_func_int8_t_s_u((0x707C22DAAB47B460LL != g_186), l_398))) ^ 18446744073709551609UL)) == p_42) & g_118))))), g_119)))), 5UL)), g_116)), 1L)) && l_210) & p_42), g_117)) >= 0x7EL)))) ^ 2UL) < g_108)) && g_123), p_44)) < g_13) , l_399) && p_41)) && g_134), g_66)), 8L)), l_222));
    return l_228;
}
int16_t func_46(int64_t p_47, int32_t p_48, int16_t p_49, float p_50, uint16_t p_51)
{
    int32_t l_164 = 0x5BCAC180L;
    int32_t l_179 = 0x8FBA5D09L;
    int32_t l_180 = 0x6DB0F719L;
    int32_t l_181 = 0x293FB7CDL;
    int32_t l_185 = 6L;
    int16_t l_189 = 1L;
    int16_t l_190 = (-4L);
    const uint32_t l_195 = 18446744073709551613UL;
    uint16_t l_196 = 65534UL;
    l_181 ^= (l_180 = (safe_mul_func_int64_t_s_s((6UL != (l_164 > (p_47 <= (((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_int16_t_s_u(p_48, 2)) && ((((((g_118 | (((((((l_164 == (safe_mod_func_uint32_t_u_u(l_164, (l_179 ^= ((safe_lshift_func_int32_t_s_u((safe_rshift_func_int32_t_s_s((-1L), (safe_add_func_uint64_t_u_u(p_47, l_164)))), l_164)) , p_48))))) || 0xBD97L) ^ p_51) || (-2L)) & 0xE5F115DAL) , g_66) == (-2L))) & p_47) <= 8L) || g_33) | p_48) != p_47)) ^ l_164) || (-9L)), 13)) >= g_108) , 5L)))), g_119)));
    l_179 = g_13;
    g_118 ^= g_100;
    l_181 = ((safe_add_func_int16_t_s_s((l_180 = (((0x6990D6E1A5D364E0LL < ((g_186++) | (l_189 |= 1UL))) >= l_190) || (safe_rshift_func_int8_t_s_s((safe_rshift_func_int32_t_s_u((l_195 , ((((g_98 , l_196) ^ (safe_lshift_func_int16_t_s_s(g_131, 13))) == (safe_div_func_int32_t_s_s((l_179 >= ((p_47 <= p_48) > 0x64L)), l_185))) & 0x02L)), 25)), 4)))), 0UL)) , 0L);
    return p_48;
}
int32_t func_61(int32_t p_62, int32_t p_63, uint16_t p_64)
{
    uint32_t l_158 = 0x3853DC63L;
    int32_t l_159 = 5L;
    l_159 = (((((-1L) >= g_35) >= g_66) != (func_68(g_33) , p_63)) , l_158);
    return g_33;
}
uint32_t func_68(uint16_t p_69)
{
    uint8_t l_76 = 0x33L;
    int8_t l_82 = 0x15L;
    int32_t l_89 = 0x572DBE42L;
    int32_t l_90 = 0x20AFD326L;
    int32_t l_91 = (-10L);
    uint8_t l_92 = 0x4EL;
    int32_t l_93 = 0xDD9CEC61L;
    int32_t l_94 = 0L;
    int32_t l_101 = 0x415AEE23L;
    int32_t l_102 = 0x6BE80DA3L;
    int32_t l_103 = 0xC7C59AE0L;
    int32_t l_104 = 0xC4949F72L;
    int32_t l_105 = 1L;
    int32_t l_106 = 0x4478C2BAL;
    int32_t l_107 = 0xA25E9F1FL;
    int32_t l_109 = 0xB3D01D8AL;
    int32_t l_110 = 0x46355D69L;
    int32_t l_111 = 9L;
    int32_t l_112 = 0x6282DC26L;
    int32_t l_113 = 0xE53ADD1EL;
    int32_t l_114 = 8L;
    int32_t l_115 = 1L;
    int32_t l_120 = 1L;
    int32_t l_121 = 0xC86549E1L;
    int32_t l_122 = (-1L);
    int32_t l_125 = (-3L);
    int32_t l_127 = 0xD211A92BL;
    int32_t l_129 = 0x5E195D31L;
    int64_t l_130 = 6L;
    int32_t l_132 = 0x93945F7EL;
    int32_t l_133 = 2L;
    int8_t l_155 = 0L;
    uint32_t l_156 = 9UL;
    g_135 = (safe_sub_func_float_f_f((g_95 = ((((safe_mul_func_float_f_f(0xC.8B6976p+55, (g_66 <= (((safe_sub_func_float_f_f((0x0.6AB81Dp+62 >= l_76), l_76)) == (((((!(safe_rshift_func_int64_t_s_u((safe_lshift_func_uint64_t_u_u(l_82, 34)), (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((l_82 != g_33) <= 1L), (-5L))), p_69)), p_69))))) , p_69) ^ g_26) , g_13) <= g_26)) == p_69)))) <= p_69) <= 0x1.9E4E41p-74) <= g_66)), p_69));
    --g_136;
    l_121 |= ((((safe_mod_func_int8_t_s_s(((((((((p_69 == 0x0C98L) , l_105) <= (safe_mul_func_uint32_t_u_u(((g_116 = ((p_69 & ((safe_mul_func_int64_t_s_s((l_111 = 1L), ((((safe_div_func_uint16_t_u_u(65528UL, 0x06D4L)) || (safe_mul_func_int8_t_s_s(g_26, ((safe_rshift_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(((((((safe_lshift_func_uint8_t_u_s(p_69, l_155)) ^ 2L) || 0x1000L) < 0x99L) != p_69) ^ 1L), g_99)) >= 0L), 33)) > g_128)))) || l_127) | l_105))) || 0L)) || l_156)) | 0xE2L), p_69))) , g_136) > 0xE.D30483p-66) <= 0x0.5p+1) < p_69) , g_131), g_119)) <= 1UL) | l_92) & p_69);
    return l_102;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, print_hash_value);
    transparent_crc(g_13, print_hash_value);
    transparent_crc(g_26, print_hash_value);
    transparent_crc(g_33, print_hash_value);
    transparent_crc(g_35, print_hash_value);
    transparent_crc(g_66, print_hash_value);
    
    transparent_crc(g_96, print_hash_value);
    transparent_crc(g_97, print_hash_value);
    transparent_crc(g_98, print_hash_value);
    transparent_crc(g_99, print_hash_value);
    transparent_crc(g_100, print_hash_value);
    transparent_crc(g_108, print_hash_value);
    transparent_crc(g_116, print_hash_value);
    transparent_crc(g_117, print_hash_value);
    transparent_crc(g_118, print_hash_value);
    transparent_crc(g_119, print_hash_value);
    transparent_crc(g_123, print_hash_value);
    transparent_crc(g_124, print_hash_value);
    transparent_crc(g_126, print_hash_value);
    transparent_crc(g_128, print_hash_value);
    transparent_crc(g_131, print_hash_value);
    transparent_crc(g_134, print_hash_value);
    
    transparent_crc(g_136, print_hash_value);
    
    
    transparent_crc(g_186, print_hash_value);
    transparent_crc(g_201, print_hash_value);
    
    transparent_crc(g_276, print_hash_value);
    transparent_crc(g_277, print_hash_value);
    transparent_crc(g_337, print_hash_value);
    transparent_crc(g_404, print_hash_value);
    transparent_crc(g_409, print_hash_value);
    transparent_crc(g_424, print_hash_value);
    transparent_crc(g_430, print_hash_value);
    transparent_crc(g_431, print_hash_value);
    transparent_crc(g_435, print_hash_value);
    transparent_crc(g_457, print_hash_value);
    transparent_crc(g_502, print_hash_value);
    transparent_crc(g_543, print_hash_value);
    transparent_crc(g_549, print_hash_value);
    transparent_crc(g_550, print_hash_value);
    
    transparent_crc(g_644, print_hash_value);
    transparent_crc(g_645, print_hash_value);
    transparent_crc(g_689, print_hash_value);
    transparent_crc(g_723, print_hash_value);
    transparent_crc(g_724, print_hash_value);
    transparent_crc(g_730, print_hash_value);
    transparent_crc(g_731, print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return (unsigned char)(crc32_context);
}
