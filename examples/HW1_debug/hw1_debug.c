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
typedef struct  {
int __val[2];
} __fsid_t;
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
typedef void *__timer_t;
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
int __fpclassify(double __value);
int __signbit(double __value);
int __isinf(double __value);
int __finite(double __value);
int __isnan(double __value);
int __iseqsig(double __x, double __y);
int __issignaling(double __value);
double acos(double __x);
double asin(double __x);
double atan(double __x);
double atan2(double __y, double __x);
double cos(double __x);
double sin(double __x);
double tan(double __x);
double cosh(double __x);
double sinh(double __x);
double tanh(double __x);
double acosh(double __x);
double asinh(double __x);
double atanh(double __x);
double exp(double __x);
double frexp(double __x, int *__exponent);
double ldexp(double __x, int __exponent);
double log(double __x);
double log10(double __x);
double modf(double __x, double *__iptr);
double expm1(double __x);
double log1p(double __x);
double logb(double __x);
double exp2(double __x);
double log2(double __x);
double pow(double __x, double __y);
double sqrt(double __x);
double hypot(double __x, double __y);
double cbrt(double __x);
double ceil(double __x);
double fabs(double __x);
double floor(double __x);
double fmod(double __x, double __y);
int isinf(double __value);
int finite(double __value);
double drem(double __x, double __y);
double significand(double __x);
double copysign(double __x, double __y);
double nan(const char *__tagb);
int isnan(double __value);
double j0(double);
double j1(double);
double jn(int, double);
double y0(double);
double y1(double);
double yn(int, double);
double erf(double);
double erfc(double);
double lgamma(double);
double tgamma(double);
double gamma(double);
double lgamma_r(double, int *__signgamp);
double rint(double __x);
double nextafter(double __x, double __y);
double nexttoward(double __x, double __y);
double remainder(double __x, double __y);
double scalbn(double __x, int __n);
int ilogb(double __x);
double scalbln(double __x, long int __n);
double nearbyint(double __x);
double round(double __x);
double trunc(double __x);
double remquo(double __x, double __y, int *__quo);
long int lrint(double __x);
long long int llrint(double __x);
long int lround(double __x);
long long int llround(double __x);
double fdim(double __x, double __y);
double fmax(double __x, double __y);
double fmin(double __x, double __y);
double fma(double __x, double __y, double __z);
double scalb(double __x, double __n);
int __fpclassifyf(float __value);
int __signbitf(float __value);
int __isinff(float __value);
int __finitef(float __value);
int __isnanf(float __value);
int __iseqsigf(float __x, float __y);
int __issignalingf(float __value);
float acosf(float __x);
float asinf(float __x);
float atanf(float __x);
float atan2f(float __y, float __x);
float cosf(float __x);
float sinf(float __x);
float tanf(float __x);
float coshf(float __x);
float sinhf(float __x);
float tanhf(float __x);
float acoshf(float __x);
float asinhf(float __x);
float atanhf(float __x);
float expf(float __x);
float frexpf(float __x, int *__exponent);
float ldexpf(float __x, int __exponent);
float logf(float __x);
float log10f(float __x);
float modff(float __x, float *__iptr);
float expm1f(float __x);
float log1pf(float __x);
float logbf(float __x);
float exp2f(float __x);
float log2f(float __x);
float powf(float __x, float __y);
float sqrtf(float __x);
float hypotf(float __x, float __y);
float cbrtf(float __x);
float ceilf(float __x);
float fabsf(float __x);
float floorf(float __x);
float fmodf(float __x, float __y);
int isinff(float __value);
int finitef(float __value);
float dremf(float __x, float __y);
float significandf(float __x);
float copysignf(float __x, float __y);
float nanf(const char *__tagb);
int isnanf(float __value);
float j0f(float);
float j1f(float);
float jnf(int, float);
float y0f(float);
float y1f(float);
float ynf(int, float);
float erff(float);
float erfcf(float);
float lgammaf(float);
float tgammaf(float);
float gammaf(float);
float lgammaf_r(float, int *__signgamp);
float rintf(float __x);
float nextafterf(float __x, float __y);
float nexttowardf(float __x, double __y);
float remainderf(float __x, float __y);
float scalbnf(float __x, int __n);
int ilogbf(float __x);
float scalblnf(float __x, long int __n);
float nearbyintf(float __x);
float roundf(float __x);
float truncf(float __x);
float remquof(float __x, float __y, int *__quo);
long int lrintf(float __x);
long long int llrintf(float __x);
long int lroundf(float __x);
long long int llroundf(float __x);
float fdimf(float __x, float __y);
float fmaxf(float __x, float __y);
float fminf(float __x, float __y);
float fmaf(float __x, float __y, float __z);
float scalbf(float __x, float __n);
int __fpclassifyl(double __value);
int __signbitl(double __value);
int __isinfl(double __value);
int __finitel(double __value);
int __isnanl(double __value);
int __iseqsigl(double __x, double __y);
int __issignalingl(double __value);
double acosl(double __x);
double asinl(double __x);
double atanl(double __x);
double atan2l(double __y, double __x);
double cosl(double __x);
double sinl(double __x);
double tanl(double __x);
double coshl(double __x);
double sinhl(double __x);
double tanhl(double __x);
double acoshl(double __x);
double asinhl(double __x);
double atanhl(double __x);
double expl(double __x);
double frexpl(double __x, int *__exponent);
double ldexpl(double __x, int __exponent);
double logl(double __x);
double log10l(double __x);
double modfl(double __x, double *__iptr);
double expm1l(double __x);
double log1pl(double __x);
double logbl(double __x);
double exp2l(double __x);
double log2l(double __x);
double powl(double __x, double __y);
double sqrtl(double __x);
double hypotl(double __x, double __y);
double cbrtl(double __x);
double ceill(double __x);
double fabsl(double __x);
double floorl(double __x);
double fmodl(double __x, double __y);
int isinfl(double __value);
int finitel(double __value);
double dreml(double __x, double __y);
double significandl(double __x);
double copysignl(double __x, double __y);
double nanl(const char *__tagb);
int isnanl(double __value);
double j0l(double);
double j1l(double);
double jnl(int, double);
double y0l(double);
double y1l(double);
double ynl(int, double);
double erfl(double);
double erfcl(double);
double lgammal(double);
double tgammal(double);
double gammal(double);
double lgammal_r(double, int *__signgamp);
double rintl(double __x);
double nextafterl(double __x, double __y);
double nexttowardl(double __x, double __y);
double remainderl(double __x, double __y);
double scalbnl(double __x, int __n);
int ilogbl(double __x);
double scalblnl(double __x, long int __n);
double nearbyintl(double __x);
double roundl(double __x);
double truncl(double __x);
double remquol(double __x, double __y, int *__quo);
long int lrintl(double __x);
long long int llrintl(double __x);
long int lroundl(double __x);
long long int llroundl(double __x);
double fdiml(double __x, double __y);
double fmaxl(double __x, double __y);
double fminl(double __x, double __y);
double fmal(double __x, double __y, double __z);
double scalbl(double __x, double __n);
int __fpclassifyf128(double __value);
int __signbitf128(double __value);
int __isinff128(double __value);
int __finitef128(double __value);
int __isnanf128(double __value);
int __iseqsigf128(double __x, double __y);
int __issignalingf128(double __value);
int signgam;
typedef long unsigned int size_t;
void *memcpy(void *__dest, const void *__src, size_t __n);
void *memmove(void *__dest, const void *__src, size_t __n);
void *memccpy(void *__dest, const void *__src, int __c, size_t __n);
void *memset(void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
int __memcmpeq(const void *__s1, const void *__s2, size_t __n);
void *memchr(const void *__s, int __c, size_t __n);
char *strcpy(char *__dest, const char *__src);
char *strncpy(char *__dest, const char *__src, size_t __n);
char *strcat(char *__dest, const char *__src);
char *strncat(char *__dest, const char *__src, size_t __n);
int strcmp(const char *__s1, const char *__s2);
int strncmp(const char *__s1, const char *__s2, size_t __n);
int strcoll(const char *__s1, const char *__s2);
size_t strxfrm(char *__dest, const char *__src, size_t __n);
struct __locale_struct {
struct __locale_data *__locales[13];
const unsigned short int *__ctype_b;
const int *__ctype_tolower;
const int *__ctype_toupper;
const char *__names[13];
} ;
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
int strcoll_l(const char *__s1, const char *__s2, locale_t __l);
size_t strxfrm_l(char *__dest, const char *__src, size_t __n, locale_t __l);
char *strdup(const char *__s);
char *strndup(const char *__string, size_t __n);
char *strchr(const char *__s, int __c);
char *strrchr(const char *__s, int __c);
char *strchrnul(const char *__s, int __c);
size_t strcspn(const char *__s, const char *__reject);
size_t strspn(const char *__s, const char *__accept);
char *strpbrk(const char *__s, const char *__accept);
char *strstr(const char *__haystack, const char *__needle);
char *strtok(char *__s, const char *__delim);
char *__strtok_r(char *__s, const char *__delim, char **__save_ptr);
char *strtok_r(char *__s, const char *__delim, char **__save_ptr);
char *strcasestr(const char *__haystack, const char *__needle);
void *memmem(const void *__haystack, size_t __haystacklen, const void *__needle, size_t __needlelen);
void *__mempcpy(void *__dest, const void *__src, size_t __n);
void *mempcpy(void *__dest, const void *__src, size_t __n);
size_t strlen(const char *__s);
size_t strnlen(const char *__string, size_t __maxlen);
char *strerror(int __errnum);
int strerror_r(int __errnum, char *__buf, size_t __buflen);
char *strerror_l(int __errnum, locale_t __l);
int bcmp(const void *__s1, const void *__s2, size_t __n);
void bcopy(const void *__src, void *__dest, size_t __n);
void bzero(void *__s, size_t __n);
char *index(const char *__s, int __c);
char *rindex(const char *__s, int __c);
int ffs(int __i);
int ffsl(long int __l);
int ffsll(long long int __ll);
int strcasecmp(const char *__s1, const char *__s2);
int strncasecmp(const char *__s1, const char *__s2, size_t __n);
int strcasecmp_l(const char *__s1, const char *__s2, locale_t __loc);
int strncasecmp_l(const char *__s1, const char *__s2, size_t __n, locale_t __loc);
void explicit_bzero(void *__s, size_t __n);
char *strsep(char **__stringp, const char *__delim);
char *strsignal(int __sig);
char *__stpcpy(char *__dest, const char *__src);
char *stpcpy(char *__dest, const char *__src);
char *__stpncpy(char *__dest, const char *__src, size_t __n);
char *stpncpy(char *__dest, const char *__src, size_t __n);
size_t strlcpy(char *__dest, const char *__src, size_t __n);
size_t strlcat(char *__dest, const char *__src, size_t __n);
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
void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function);
void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function);
void __assert(const char *__assertion, const char *__file, int __line);
typedef struct  {
int __count;
struct  {
unsigned int __wch;
char __wchb[4];
} __value;
} __mbstate_t;
typedef struct _G_fpos_t {
__off_t __pos;
__mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t {
__off64_t __pos;
__mbstate_t __state;
} __fpos64_t;
struct _IO_FILE ;
typedef struct _IO_FILE __FILE;
struct _IO_FILE ;
typedef struct _IO_FILE FILE;
struct _IO_FILE ;
struct _IO_marker ;
struct _IO_codecvt ;
struct _IO_wide_data ;
typedef void _IO_lock_t;
struct _IO_FILE {
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
} ;
typedef __ssize_t cookie_read_function_t(void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t cookie_write_function_t(void *__cookie, const char *__buf, size_t __nbytes);
typedef int cookie_seek_function_t(void *__cookie, __off64_t *__pos, int __w);
typedef int cookie_close_function_t(void *__cookie);
typedef struct _IO_cookie_io_functions_t {
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
int remove(const char *__filename);
int rename(const char *__old, const char *__new);
int renameat(int __oldfd, const char *__old, int __newfd, const char *__new);
int fclose(FILE *__stream);
FILE *tmpfile(void);
char *tmpnam(char [20]);
char *tmpnam_r(char __s[20]);
char *tempnam(const char *__dir, const char *__pfx);
int fflush(FILE *__stream);
int fflush_unlocked(FILE *__stream);
FILE *fopen(const char *__filename, const char *__modes);
FILE *freopen(const char *__filename, const char *__modes, FILE *__stream);
FILE *fdopen(int __fd, const char *__modes);
FILE *fopencookie(void *__magic_cookie, const char *__modes, cookie_io_functions_t __io_funcs);
FILE *fmemopen(void *__s, size_t __len, const char *__modes);
FILE *open_memstream(char **__bufloc, size_t *__sizeloc);
void setbuf(FILE *__stream, char *__buf);
int setvbuf(FILE *__stream, char *__buf, int __modes, size_t __n);
void setbuffer(FILE *__stream, char *__buf, size_t __size);
void setlinebuf(FILE *__stream);
int fgetc(FILE *__stream);
int getc(FILE *__stream);
int getchar(void);
int getc_unlocked(FILE *__stream);
int getchar_unlocked(void);
int fgetc_unlocked(FILE *__stream);
int fputc(int __c, FILE *__stream);
int putc(int __c, FILE *__stream);
int putchar(int __c);
int fputc_unlocked(int __c, FILE *__stream);
int putc_unlocked(int __c, FILE *__stream);
int putchar_unlocked(int __c);
int getw(FILE *__stream);
int putw(int __w, FILE *__stream);
char *fgets(char *__s, int __n, FILE *__stream);
__ssize_t __getdelim(char **__lineptr, size_t *__n, int __delimiter, FILE *__stream);
__ssize_t getdelim(char **__lineptr, size_t *__n, int __delimiter, FILE *__stream);
__ssize_t getline(char **__lineptr, size_t *__n, FILE *__stream);
int fputs(const char *__s, FILE *__stream);
int puts(const char *__s);
int ungetc(int __c, FILE *__stream);
size_t fread(void *__ptr, size_t __size, size_t __n, FILE *__stream);
size_t fwrite(const void *__ptr, size_t __size, size_t __n, FILE *__s);
size_t fread_unlocked(void *__ptr, size_t __size, size_t __n, FILE *__stream);
size_t fwrite_unlocked(const void *__ptr, size_t __size, size_t __n, FILE *__stream);
int fseek(FILE *__stream, long int __off, int __whence);
long int ftell(FILE *__stream);
void rewind(FILE *__stream);
int fseeko(FILE *__stream, __off_t __off, int __whence);
__off_t ftello(FILE *__stream);
int fgetpos(FILE *__stream, fpos_t *__pos);
int fsetpos(FILE *__stream, const fpos_t *__pos);
void clearerr(FILE *__stream);
int feof(FILE *__stream);
int ferror(FILE *__stream);
void clearerr_unlocked(FILE *__stream);
int feof_unlocked(FILE *__stream);
int ferror_unlocked(FILE *__stream);
void perror(const char *__s);
int fileno(FILE *__stream);
int fileno_unlocked(FILE *__stream);
int pclose(FILE *__stream);
FILE *popen(const char *__command, const char *__modes);
char *ctermid(char *__s);
void flockfile(FILE *__stream);
int ftrylockfile(FILE *__stream);
void funlockfile(FILE *__stream);
int __uflow(FILE *);
int __overflow(FILE *, int);
void platform_main_begin(void){

}
void platform_main_end(uint32_t crc, int flag){

}
int8_t (safe_unary_minus_func_int8_t_s)(int8_t si){
return -(si);
}
int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2){
return (si1 + si2);
}
int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2){
return (si1 - si2);
}
int8_t (safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2){
return (si1 * si2);
}
int8_t (safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2){
return (((si2 == 0) || ((si1 == -(128)) && (si2 == -(1)))) ? si1 : (si1 % si2));
}
int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2){
return (((si2 == 0) || ((si1 == -(128)) && (si2 == -(1)))) ? si1 : (si1 / si2));
}
int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right){
return (((((left < 0) || ((int) right < 0)) || ((int) right >= 32)) || (left > (127 >> (int) right))) ? left : (left << (int) right));
}
int8_t (safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right){
return ((((left < 0) || ((unsigned int) right >= 32)) || (left > (127 >> (unsigned int) right))) ? left : (left << (unsigned int) right));
}
int8_t (safe_rshift_func_int8_t_s_s)(int8_t left, int right){
return ((((left < 0) || ((int) right < 0)) || ((int) right >= 32)) ? left : (left >> (int) right));
}
int8_t (safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right){
return (((left < 0) || ((unsigned int) right >= 32)) ? left : (left >> (unsigned int) right));
}
int16_t (safe_unary_minus_func_int16_t_s)(int16_t si){
return -(si);
}
int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2){
return (si1 + si2);
}
int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2){
return (si1 - si2);
}
int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2){
return (si1 * si2);
}
int16_t (safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2){
return (((si2 == 0) || ((si1 == (-(32767) - 1)) && (si2 == -(1)))) ? si1 : (si1 % si2));
}
int16_t (safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2){
return (((si2 == 0) || ((si1 == (-(32767) - 1)) && (si2 == -(1)))) ? si1 : (si1 / si2));
}
int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right){
return (((((left < 0) || ((int) right < 0)) || ((int) right >= 32)) || (left > (32767 >> (int) right))) ? left : (left << (int) right));
}
int16_t (safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right){
return ((((left < 0) || ((unsigned int) right >= 32)) || (left > (32767 >> (unsigned int) right))) ? left : (left << (unsigned int) right));
}
int16_t (safe_rshift_func_int16_t_s_s)(int16_t left, int right){
return ((((left < 0) || ((int) right < 0)) || ((int) right >= 32)) ? left : (left >> (int) right));
}
int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right){
return (((left < 0) || ((unsigned int) right >= 32)) ? left : (left >> (unsigned int) right));
}
int32_t (safe_unary_minus_func_int32_t_s)(int32_t si){
return ((si == (-(2147483647) - 1)) ? si : -(si));
}
int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2){
return (((((si1 > 0) && (si2 > 0)) && (si1 > (2147483647 - si2))) || (((si1 < 0) && (si2 < 0)) && (si1 < ((-(2147483647) - 1) - si2)))) ? si1 : (si1 + si2));
}
int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2){
return ((((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & ~(2147483647))) - si2) ^ si2)) < 0) ? si1 : (si1 - si2));
}
int32_t (safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2){
return (((((((si1 > 0) && (si2 > 0)) && (si1 > (2147483647 / si2))) || (((si1 > 0) && (si2 <= 0)) && (si2 < ((-(2147483647) - 1) / si1)))) || (((si1 <= 0) && (si2 > 0)) && (si1 < ((-(2147483647) - 1) / si2)))) || ((((si1 <= 0) && (si2 <= 0)) && (si1 != 0)) && (si2 < (2147483647 / si1)))) ? si1 : (si1 * si2));
}
int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2){
return (((si2 == 0) || ((si1 == (-(2147483647) - 1)) && (si2 == -(1)))) ? si1 : (si1 % si2));
}
int32_t (safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2){
return (((si2 == 0) || ((si1 == (-(2147483647) - 1)) && (si2 == -(1)))) ? si1 : (si1 / si2));
}
int32_t (safe_lshift_func_int32_t_s_s)(int32_t left, int right){
return (((((left < 0) || ((int) right < 0)) || ((int) right >= 32)) || (left > (2147483647 >> (int) right))) ? left : (left << (int) right));
}
int32_t (safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right){
return ((((left < 0) || ((unsigned int) right >= 32)) || (left > (2147483647 >> (unsigned int) right))) ? left : (left << (unsigned int) right));
}
int32_t (safe_rshift_func_int32_t_s_s)(int32_t left, int right){
return ((((left < 0) || ((int) right < 0)) || ((int) right >= 32)) ? left : (left >> (int) right));
}
int32_t (safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right){
return (((left < 0) || ((unsigned int) right >= 32)) ? left : (left >> (unsigned int) right));
}
int64_t (safe_unary_minus_func_int64_t_s)(int64_t si){
return ((si == (-(9223372036854775807l) - 1)) ? si : -(si));
}
int64_t (safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2){
return (((((si1 > 0) && (si2 > 0)) && (si1 > (9223372036854775807l - si2))) || (((si1 < 0) && (si2 < 0)) && (si1 < ((-(9223372036854775807l) - 1) - si2)))) ? si1 : (si1 + si2));
}
int64_t (safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2){
return ((((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & ~(9223372036854775807l))) - si2) ^ si2)) < 0) ? si1 : (si1 - si2));
}
int64_t (safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2){
return (((((((si1 > 0) && (si2 > 0)) && (si1 > (9223372036854775807l / si2))) || (((si1 > 0) && (si2 <= 0)) && (si2 < ((-(9223372036854775807l) - 1) / si1)))) || (((si1 <= 0) && (si2 > 0)) && (si1 < ((-(9223372036854775807l) - 1) / si2)))) || ((((si1 <= 0) && (si2 <= 0)) && (si1 != 0)) && (si2 < (9223372036854775807l / si1)))) ? si1 : (si1 * si2));
}
int64_t (safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2){
return (((si2 == 0) || ((si1 == (-(9223372036854775807l) - 1)) && (si2 == -(1)))) ? si1 : (si1 % si2));
}
int64_t (safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2){
return (((si2 == 0) || ((si1 == (-(9223372036854775807l) - 1)) && (si2 == -(1)))) ? si1 : (si1 / si2));
}
int64_t (safe_lshift_func_int64_t_s_s)(int64_t left, int right){
return (((((left < 0) || ((int) right < 0)) || ((int) right >= 32)) || (left > (9223372036854775807l >> (int) right))) ? left : (left << (int) right));
}
int64_t (safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right){
return ((((left < 0) || ((unsigned int) right >= 32)) || (left > (9223372036854775807l >> (unsigned int) right))) ? left : (left << (unsigned int) right));
}
int64_t (safe_rshift_func_int64_t_s_s)(int64_t left, int right){
return ((((left < 0) || ((int) right < 0)) || ((int) right >= 32)) ? left : (left >> (int) right));
}
int64_t (safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right){
return (((left < 0) || ((unsigned int) right >= 32)) ? left : (left >> (unsigned int) right));
}
uint8_t (safe_unary_minus_func_uint8_t_u)(uint8_t ui){
return -(ui);
}
uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2){
return (ui1 + ui2);
}
uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2){
return (ui1 - ui2);
}
uint8_t (safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2){
return ((unsigned int) ui1 * (unsigned int) ui2);
}
uint8_t (safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2){
return ((ui2 == 0) ? ui1 : (ui1 % ui2));
}
uint8_t (safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2){
return ((ui2 == 0) ? ui1 : (ui1 / ui2));
}
uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right){
return (((((int) right < 0) || ((int) right >= 32)) || (left > (255 >> (int) right))) ? left : (left << (int) right));
}
uint8_t (safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right){
return ((((unsigned int) right >= 32) || (left > (255 >> (unsigned int) right))) ? left : (left << (unsigned int) right));
}
uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right){
return ((((int) right < 0) || ((int) right >= 32)) ? left : (left >> (int) right));
}
uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right){
return (((unsigned int) right >= 32) ? left : (left >> (unsigned int) right));
}
uint16_t (safe_unary_minus_func_uint16_t_u)(uint16_t ui){
return -(ui);
}
uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2){
return (ui1 + ui2);
}
uint16_t (safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2){
return (ui1 - ui2);
}
uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2){
return ((unsigned int) ui1 * (unsigned int) ui2);
}
uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2){
return ((ui2 == 0) ? ui1 : (ui1 % ui2));
}
uint16_t (safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2){
return ((ui2 == 0) ? ui1 : (ui1 / ui2));
}
uint16_t (safe_lshift_func_uint16_t_u_s)(uint16_t left, int right){
return (((((int) right < 0) || ((int) right >= 32)) || (left > (65535 >> (int) right))) ? left : (left << (int) right));
}
uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right){
return ((((unsigned int) right >= 32) || (left > (65535 >> (unsigned int) right))) ? left : (left << (unsigned int) right));
}
uint16_t (safe_rshift_func_uint16_t_u_s)(uint16_t left, int right){
return ((((int) right < 0) || ((int) right >= 32)) ? left : (left >> (int) right));
}
uint16_t (safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right){
return (((unsigned int) right >= 32) ? left : (left >> (unsigned int) right));
}
uint32_t (safe_unary_minus_func_uint32_t_u)(uint32_t ui){
return -(ui);
}
uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2){
return (ui1 + ui2);
}
uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2){
return (ui1 - ui2);
}
uint32_t (safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2){
return ((unsigned int) ui1 * (unsigned int) ui2);
}
uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2){
return ((ui2 == 0) ? ui1 : (ui1 % ui2));
}
uint32_t (safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2){
return ((ui2 == 0) ? ui1 : (ui1 / ui2));
}
uint32_t (safe_lshift_func_uint32_t_u_s)(uint32_t left, int right){
return (((((int) right < 0) || ((int) right >= 32)) || (left > (4294967295u >> (int) right))) ? left : (left << (int) right));
}
uint32_t (safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right){
return ((((unsigned int) right >= 32) || (left > (4294967295u >> (unsigned int) right))) ? left : (left << (unsigned int) right));
}
uint32_t (safe_rshift_func_uint32_t_u_s)(uint32_t left, int right){
return ((((int) right < 0) || ((int) right >= 32)) ? left : (left >> (int) right));
}
uint32_t (safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right){
return (((unsigned int) right >= 32) ? left : (left >> (unsigned int) right));
}
uint64_t (safe_unary_minus_func_uint64_t_u)(uint64_t ui){
return -(ui);
}
uint64_t (safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2){
return (ui1 + ui2);
}
uint64_t (safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2){
return (ui1 - ui2);
}
uint64_t (safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2){
return ((unsigned long long) ui1 * (unsigned long long) ui2);
}
uint64_t (safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2){
return ((ui2 == 0) ? ui1 : (ui1 % ui2));
}
uint64_t (safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2){
return ((ui2 == 0) ? ui1 : (ui1 / ui2));
}
uint64_t (safe_lshift_func_uint64_t_u_s)(uint64_t left, int right){
return (((((int) right < 0) || ((int) right >= 32)) || (left > (18446744073709551615ul >> (int) right))) ? left : (left << (int) right));
}
uint64_t (safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right){
return ((((unsigned int) right >= 32) || (left > (18446744073709551615ul >> (unsigned int) right))) ? left : (left << (unsigned int) right));
}
uint64_t (safe_rshift_func_uint64_t_u_s)(uint64_t left, int right){
return ((((int) right < 0) || ((int) right >= 32)) ? left : (left >> (int) right));
}
uint64_t (safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right){
return (((unsigned int) right >= 32) ? left : (left >> (unsigned int) right));
}
float fabsf(float);
double fabs(double);
float (safe_add_func_float_f_f)(float sf1, float sf2){
return ((((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282346638528859811704183484516925e+38f)) ? sf1 : (sf1 + sf2));
}
float (safe_sub_func_float_f_f)(float sf1, float sf2){
return ((((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282346638528859811704183484516925e+38f)) ? sf1 : (sf1 - sf2));
}
float (safe_mul_func_float_f_f)(float sf1, float sf2){
return ((((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282346638528859811704183484516925e+38f))) ? sf1 : (sf1 * sf2));
}
float (safe_div_func_float_f_f)(float sf1, float sf2){
return (((sf2 < 1.0f) && ((sf2 == 0.0f) || (((0x1.0p-49f * sf1) / (0x1.0p100f * sf2)) > (0x1.0p-100f * (0x1.0p-49f * 3.40282346638528859811704183484516925e+38f))))) ? sf1 : (sf1 / sf2));
}
double (safe_add_func_double_f_f)(double sf1, double sf2){
return ((fabs(((0.5 * sf1) + (0.5 * sf2))) > (0.5 * (double) 1.79769313486231570814527423731704357e+308)) ? sf1 : (sf1 + sf2));
}
double (safe_sub_func_double_f_f)(double sf1, double sf2){
return ((fabs(((0.5 * sf1) - (0.5 * sf2))) > (0.5 * (double) 1.79769313486231570814527423731704357e+308)) ? sf1 : (sf1 - sf2));
}
double (safe_mul_func_double_f_f)(double sf1, double sf2){
return ((fabs(((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2))) > (0x1.0p-100 * (0x1.0p-924 * (double) 1.79769313486231570814527423731704357e+308))) ? sf1 : (sf1 * sf2));
}
double (safe_div_func_double_f_f)(double sf1, double sf2){
return (((fabs(sf2) < 1.0) && ((sf2 == 0.0) || (fabs(((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * (double) 1.79769313486231570814527423731704357e+308))))) ? sf1 : (sf1 / sf2));
}
int32_t (safe_convert_func_float_to_int32_t)(float sf1){
return (((sf1 <= (-(2147483647) - 1)) || (sf1 >= 2147483647)) ? 2147483647 : (int32_t) sf1);
}
uint32_t crc32_tab[256];
uint32_t crc32_context = 0xFFFFFFFFul;
void crc32_gentab(void){
uint32_t crc;
const uint32_t poly = 0xEDB88320ul;
int i, j;
for ((i = 0); (i < 256); (i++)) {
(crc = i);
for ((j = 8); (j > 0); (j--)) {
if ((crc & 1)) {
(crc = ((crc >> 1) ^ poly));
}
else {
(crc >>= 1);
}

}
(crc32_tab[i] = crc);
}
}
void crc32_byte(uint8_t b){
(crc32_context = (((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab[((crc32_context ^ b) & 0xFF)]));
}
void crc32_8bytes(uint64_t val){
crc32_byte(((val >> 0) & 0xff));
crc32_byte(((val >> 8) & 0xff));
crc32_byte(((val >> 16) & 0xff));
crc32_byte(((val >> 24) & 0xff));
crc32_byte(((val >> 32) & 0xff));
crc32_byte(((val >> 40) & 0xff));
crc32_byte(((val >> 48) & 0xff));
crc32_byte(((val >> 56) & 0xff));
}
void transparent_crc(uint64_t val, int flag){
crc32_8bytes(val);
if (flag) {

}

}
void transparent_crc_bytes(char *ptr, int nbytes, int flag){
int i;
for ((i = 0); (i < nbytes); (i++)) {
crc32_byte(ptr[i]);
}
if (flag) {

}

}
uint16_t g_3 = 7ul;
uint64_t g_73 = 0x172C2E8B5A47B6C4ll;
int8_t g_75 = 7l;
uint32_t g_80 = 0x8B108A66l;
int32_t g_115 = 0xEBC4FF04l;
uint16_t g_180 = 65527ul;
int16_t g_187 = 1l;
int32_t g_188 = 0x4A55526Dl;
int64_t g_193 = 0xB47A1F191750CCDAll;
int32_t g_194 = 0x27AD419Al;
int64_t g_195 = 0x4B642ED4BA02FE38ll;
uint64_t g_199 = 0x9DD34E5B83B62BC8ll;
int8_t g_200 = 0x37l;
int32_t g_202 = 0l;
uint8_t g_206 = 0ul;
uint16_t g_210 = 0x30FAl;
float g_213 = 0x0.9p+1;
uint64_t g_216 = 0x383E86663A569110ll;
int16_t g_218 = 0l;
int16_t g_219 = 7l;
uint8_t g_220 = 0x89l;
int64_t g_222 = 0xE6C43AB17D805DE6ll;
uint64_t g_223 = 1ul;
int64_t g_224 = 7l;
int16_t g_225 = 1l;
int16_t g_226 = 0x6BD7l;
uint64_t g_227 = 1ul;
int16_t g_267 = 0x138Al;
uint32_t g_268 = 18446744073709551610ul;
uint32_t g_269 = 0xBD87208Dl;
uint32_t g_270 = 4294967295ul;
int16_t g_271 = 0xB3C6l;
uint32_t g_274 = 0x88D01BA1l;
int32_t g_276 = 0l;
uint32_t g_279 = 1ul;
uint16_t g_280 = 0x14CEl;
uint8_t g_281 = 0xF1l;
uint64_t g_282 = 18446744073709551615ul;
uint16_t g_284 = 65526ul;
int64_t g_285 = 1l;
int32_t g_288 = 0xD90A4EEAl;
int8_t g_290 = 0x17l;
int32_t g_292 = 0x028DDFECl;
int16_t g_293 = -(1l);
uint32_t g_294 = 1ul;
uint16_t g_298 = 0x5402l;
int32_t g_300 = 0xC4BBD00Cl;
int32_t g_302 = 0l;
uint8_t g_303 = 0xC8l;
float g_304 = 0xF.8AFCD1p+25;
int32_t g_305 = 0x8DAF8A5Al;
int32_t g_307 = 0x9667DF84l;
uint32_t g_308 = 0xC89FACEBl;
uint8_t g_309 = 0xCBl;
int32_t g_310 = 0x956CD0C4l;
uint64_t g_311 = 0x3D2101FBCBA7642Dll;
int64_t g_312 = 0x1D21668D167BA490ll;
int32_t g_313 = 4l;
int16_t g_314 = 0x0D45l;
uint64_t g_315 = 9ul;
uint16_t g_316 = 1ul;
int32_t g_317 = 0xFDB6C3E7l;
int8_t g_318 = 8l;
uint16_t g_319 = 0x5B5Dl;
float g_320 = 0xF.3B2C59p+60;
int32_t g_321 = 8l;
int32_t g_322 = -(5l);
int64_t g_323 = 0x9D125314CBB3D9D4ll;
uint32_t g_324 = 0x220F00DCl;
uint64_t g_325 = 1ul;
int16_t g_326 = 0l;
uint8_t g_328 = 0x5Cl;
int32_t g_330 = -(1l);
int32_t g_333 = -(1l);
uint32_t g_334 = 0x36B333FFl;
int16_t g_336 = 0x4324l;
int32_t g_337 = 0xDA543B9Bl;
int8_t g_341 = -(1l);
int32_t g_342 = 7l;
uint32_t g_343 = 0xD684D458l;
uint8_t g_348 = 0x1Cl;
uint32_t g_349 = 1ul;
int32_t g_350 = -(1l);
int8_t g_351 = 3l;
int32_t g_353 = 0xB9CDFA9Al;
uint16_t g_354 = 0xC393l;
int8_t g_355 = 0xE4l;
uint64_t g_356 = 0x1CDA13B45BE34CB2ll;
float g_357 = 0xD.0E5276p+54;
int64_t g_540 = 0x8B326D28A6E83F28ll;
int8_t g_558 = 0l;
int64_t g_755 = 1l;
int32_t g_779 = 0x5AA4814Fl;
int64_t g_790 = 0x5D82D669E3CBB9D7ll;
uint32_t g_791 = 7ul;
int32_t g_835 = -(1l);
int32_t g_840 = 0l;
int64_t g_842 = -(1l);
int32_t g_844 = 6l;
int8_t g_845 = 0x09l;
int32_t g_846 = -(7l);
uint32_t g_850 = 4294967287ul;
float g_961 = -(0x1.1p-1);
int32_t g_1019 = 0x4D24D545l;
uint16_t g_1044 = 0x77E1l;
float g_1053 = -(0x1.Bp+1);
int8_t g_1057 = -(3l);
float g_1058 = 0xF.CE7A57p-67;
uint32_t g_1060 = 1ul;
int16_t g_1245 = 1l;
uint32_t g_1247 = 0ul;
int32_t g_1321 = -(7l);
uint32_t g_1327 = 0xFC17DECEl;
float g_1338 = 0x3.Cp+1;
int32_t g_1378 = 0x9E4C2049l;
int32_t g_1383 = 0x8B71A16Dl;
int32_t g_1384 = 0xC581255Al;
int64_t g_1385 = 1l;
int64_t g_1386 = 0xC58AF66F8731C519ll;
uint8_t g_1393 = 0x67l;
int32_t g_1757 = 4l;
uint8_t g_1758 = 0x4Bl;
uint16_t g_1797 = 1ul;
uint64_t g_2000 = 5ul;
uint64_t g_2079 = 8ul;
uint16_t g_2167 = 0x313Cl;
uint32_t g_2212 = 0x893C5193l;
int32_t g_2244 = 0x60541983l;
int16_t g_2329 = 4l;
int32_t g_2540 = 0x57B3DA3Cl;
uint32_t g_2690 = 0ul;
uint8_t g_2716 = 255ul;
uint16_t g_2801 = 0x6698l;
int16_t g_2856 = 0x72D0l;
uint32_t g_2857 = 0x1CAD8012l;
uint8_t g_2928 = 0x65l;
int8_t g_3179 = 0x13l;
uint16_t g_3217 = 1ul;
uint64_t g_3236 = 9ul;
int8_t func_1(void);
int32_t func_6(int64_t p_7, uint8_t p_8, int32_t p_9, int32_t p_10, uint8_t p_11);
uint8_t func_15(uint64_t p_16, uint32_t p_17, uint32_t p_18, uint32_t p_19, int64_t p_20);
uint16_t func_21(uint64_t p_22);
int32_t func_27(uint32_t p_28);
uint32_t func_29(uint32_t p_30, uint8_t p_31, float p_32, uint32_t p_33, uint32_t p_34);
uint8_t func_44(const uint8_t p_45, uint16_t p_46, uint8_t p_47, uint16_t p_48, int32_t p_49);
int8_t func_52(uint32_t p_53, float p_54);
uint32_t func_55(int64_t p_56, int32_t p_57, uint32_t p_58, int64_t p_59);
uint64_t func_65(int16_t p_66, int16_t p_67, uint32_t p_68);
int8_t func_1(void){
int16_t l_2 = -(1l);
int32_t l_2281 = 0xD68120F8l;
uint16_t l_2282 = 3ul;
int32_t l_3220 = 0x8D1BC5BDl;
uint32_t l_3229 = 18446744073709551615ul;
int32_t l_3237 = 0xB33D8A1Bl;
(g_3--);
(g_2244 &= (l_3220 = ((18446744073709551613ul == l_2) == (func_6((l_2281 &= (((safe_mod_func_uint64_t_u_u((~(((func_15((func_21((l_2 < (l_2 <= safe_mod_func_uint8_t_u_u(l_2, safe_add_func_uint8_t_u_u(3ul, g_3))))) & safe_rshift_func_uint64_t_u_u(safe_lshift_func_int16_t_s_s(~(g_222), g_844), 48)), l_2, l_2, l_2, l_2) ^ g_355), l_2)), l_2), g_1383) <= l_2), 18446744073709551613ul), l_2)), l_2282, g_218, l_2282, l_2) > g_317))));
(l_3237 &= safe_lshift_func_uint16_t_u_u((l_2281 | g_271), (((0xA4l & (safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_rshift_func_uint32_t_u_s(0x18FA9AC6l, l_2281) && l_3229) <= safe_div_func_int32_t_s_s(0x0B3C317Bl, ((safe_rshift_func_int32_t_s_u((((g_200 >= safe_div_func_uint64_t_u_u((l_3229 == l_2), l_3220)) == -(7l)) && g_844), 12), l_3220), l_2282))), g_3179) && g_227), g_3217) != 8ul)) | g_3236) && 0x13D0DFEB48FCD8E2ll)));
return g_1245;
}
int32_t func_6(int64_t p_7, uint8_t p_8, int32_t p_9, int32_t p_10, uint8_t p_11){
int32_t l_2283 = 0x9B1B4FA9l;
int32_t l_2284 = 0x0A671A25l;
int32_t l_2285 = 0x7F8F936El;
int32_t l_2286 = 0xF87601CFl;
int32_t l_2287 = 0xECAE8EDDl;
int32_t l_2288 = 0l;
int32_t l_2289 = -(1l);
int32_t l_2290 = -(6l);
int32_t l_2291 = -(9l);
int32_t l_2292 = 0xD632ED1Al;
int32_t l_2293 = 5l;
int32_t l_2294 = 0x4C104495l;
int32_t l_2295 = 0x55C03E03l;
int32_t l_2296 = -(6l);
int32_t l_2297 = -(8l);
int32_t l_2298 = 0l;
int32_t l_2299 = 0xD1E4007Fl;
int32_t l_2300 = 0x86E1F75Dl;
int32_t l_2301 = -(1l);
int32_t l_2302 = 6l;
int32_t l_2303 = 0xE054C499l;
int32_t l_2304 = 0x59ADA211l;
int32_t l_2305 = 0x0E842F95l;
int32_t l_2306 = -(9l);
int32_t l_2307 = -(1l);
int32_t l_2308 = 1l;
int32_t l_2309 = -(1l);
int32_t l_2310 = -(1l);
uint64_t l_2311 = 0ul;
int32_t l_2332 = -(1l);
uint32_t l_2360 = 0ul;
uint8_t l_2458 = 0x84l;
uint32_t l_2465 = 0x53A05BEEl;
uint32_t l_2542 = 0x245A670Fl;
const uint64_t l_2749 = 1ul;
uint8_t l_2814 = 0x18l;
uint8_t l_2877 = 252ul;
int64_t l_2898 = 0xD5C5F8E4240B4A24ll;
uint16_t l_3029 = 3ul;
int8_t l_3032 = 1l;
uint8_t l_3035 = 6ul;
int64_t l_3052 = -(7l);
const int32_t l_3073 = 0x2E811F80l;
int32_t l_3098 = 8l;
uint32_t l_3132 = 0x6B86949Al;
int32_t l_3215 = 0x7540A1C9l;
int32_t l_3216 = 0xAA198CBFl;
(l_2311++);
for ((g_194 = 25); (g_194 != 18); (g_194 = safe_sub_func_int64_t_s_s(g_194, 7))) {
return g_279;
}
for ((g_225 = -(6)); (g_225 == -(13)); (g_225 = safe_sub_func_int32_t_s_s(g_225, 3))) {
int16_t l_2319 = 0x48EFl;
int32_t l_2320 = 0x6DBF0DCBl;
int32_t l_2321 = 0x3DD6EC3Fl;
int32_t l_2322 = 0xC5F5BD8Dl;
int32_t l_2323 = 0xA0CBD1ABl;
int32_t l_2324 = 0l;
int32_t l_2325 = 0x2F49C71Al;
int32_t l_2326 = 0xAD4EE2E5l;
int32_t l_2327 = 0x1D358F83l;
int32_t l_2328 = 0l;
int32_t l_2330 = 0l;
int32_t l_2331 = 0x61249C6El;
int32_t l_2333 = 0l;
int32_t l_2334 = 0xDFB36071l;
int32_t l_2335 = 0l;
int32_t l_2336 = -(3l);
int32_t l_2337 = 0l;
uint32_t l_2338 = 18446744073709551615ul;
int64_t l_2355 = -(1l);
int32_t l_2386 = 0xBBE27AA8l;
uint16_t l_2414 = 65535ul;
int16_t l_2421 = 3l;
int32_t l_3186 = -(6l);
(l_2324 = safe_unary_minus_func_uint64_t_u((((l_2338--) && l_2287) >= l_2335)));
for ((l_2331 = 0); (l_2331 < 9); (l_2331 = safe_add_func_int16_t_s_s(l_2331, 2))) {
int32_t l_2347 = 0xB01DAF8Bl;
int32_t l_2356 = 9l;
int16_t l_2357 = 0xC894l;
int32_t l_2358 = 1l;
int32_t l_2359 = -(1l);
uint8_t l_2384 = 0x7El;
int8_t l_2385 = 0x84l;
int32_t l_2423 = 0x052AA7ADl;
(l_2292 = (safe_div_func_int32_t_s_s(safe_sub_func_int16_t_s_s(l_2347, safe_add_func_uint64_t_u_u((l_2328 > safe_rshift_func_int64_t_s_u(p_9, (((g_1321 = (p_8 < g_274)) | (safe_unary_minus_func_uint16_t_u((((((p_9 > (safe_mul_func_uint16_t_u_u(l_2355, (l_2333 | 0ul)) || g_336)), p_8), 1l) || -(1l)) != 0x92l)) | l_2300)) == 0xE92F720B08B4C8E8ll))), g_288)), g_333) < 5l));
++(l_2360);
(l_2359 = (((safe_lshift_func_uint16_t_u_u((((((((l_2299 = (safe_mod_func_uint8_t_u_u(254ul, ((((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint64_t_u_u(0x50D755B4B8A08B5Fll, safe_unary_minus_func_uint64_t_u((safe_div_func_uint8_t_u_u(g_293, safe_rshift_func_int8_t_s_u((g_353 |= (l_2356 = ((safe_add_func_uint16_t_u_u(((g_328 && 8l) > (((p_9 > (g_223 != (0xAB8Cl <= (safe_sub_func_float_f_f(safe_add_func_float_f_f((safe_div_func_float_f_f((g_357 = ((g_342 = p_10) <= g_223)), l_2384) <= 0x3.AE9EDFp-63), p_9), 0x0.Fp+1), g_288)))) || l_2291) || p_10)), p_10), -(1l)) > p_11))), p_8)), 0xD3A645E9D7529A4All))) ^ p_7) | p_10), g_284) > l_2355) == l_2357), l_2385), p_9)) > p_10)) < -(1l)) | 0x3134l) != 1l) != g_2000) < l_2386) < 5ul), 1), 0xA586l) ^ p_7) == l_2319));
for ((g_307 = 0); (g_307 < 25); (g_307++)) {
int32_t l_2411 = 0xB40E099Al;
int32_t l_2412 = 0xE7956BE8l;
int32_t l_2413 = 0x5E723F7Al;
const uint32_t l_2422 = 0x1082F5A1l;
(l_2423 |= (safe_add_func_uint16_t_u_u(((p_8, (((g_324 = ((safe_mul_func_uint64_t_u_u((((((safe_unary_minus_func_int64_t_s(safe_mod_func_int64_t_s_s((p_9, safe_lshift_func_uint16_t_u_u((((l_2358 = ((0x1A2229FFl & g_325) | (l_2325 = ((((safe_rshift_func_int32_t_s_u((l_2356 = (l_2304 = ((l_2338 != safe_div_func_int16_t_s_s(safe_unary_minus_func_int32_t_s(0xE64C3F0Al), ((l_2421 = safe_add_func_int8_t_s_s(safe_sub_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(l_2328, ++(l_2414)) || ((g_1385 >= (safe_rshift_func_uint64_t_u_s((l_2330 = (safe_mod_func_uint16_t_u_u((l_2359 = (g_324 || g_353)), l_2412) == l_2384)), 49) >= g_325)) == g_279)) <= p_10), 1l), 1ul)) || 7ul))) != p_9))), 30) == g_288) && p_11) <= p_7) == l_2413)))), p_11), 1ul), 13)), 0xBE5F1AFD3906B507ll)), l_2347) <= l_2323) ^ l_2422), p_9) ^ g_348), p_7) ^ l_2347) ^ 0ul)) < l_2327) >= 0l)), p_11), 1l) & 0ul));
}
}
if ((l_2310 &= p_9)) {
for ((g_312 = -(14)); (g_312 == 26); (g_312 = safe_add_func_uint64_t_u_u(g_312, 3))) {
float l_2426 = -(0x5.Ep-1);
int32_t l_2427 = 0x5E30BCF4l;
(g_1338 = l_2426);
for ((g_271 = 14); (g_271 >= -(12)); (g_271--)) {
for ((l_2302 = 0); (l_2302 < 12); (l_2302 = safe_add_func_uint16_t_u_u(l_2302, 6))) {
return g_1384;
}
}
}
}
else {
uint8_t l_2438 = 0xB9l;
int32_t l_2449 = 1l;
int32_t l_2459 = -(1l);
int32_t l_2460 = 0x3FAE9321l;
int16_t l_2541 = 4l;
uint32_t l_2589 = 0x0881EB4Dl;
int16_t l_2647 = 0x023Bl;
int32_t l_2648 = 0xDDAA2C81l;
int32_t l_2649 = -(4l);
int32_t l_2650 = 0x2FAA8E26l;
int32_t l_2651 = -(2l);
int32_t l_2652 = 0xAC40924Dl;
int32_t l_2660 = -(1l);
int32_t l_2664 = 0xE93383F3l;
uint8_t l_2665 = 6ul;
for ((l_2287 = 0); (l_2287 != 2); ++(l_2287)) {
int32_t l_2436 = 0x3B66D484l;
int32_t l_2437 = 0xF932E19Cl;
float l_2485 = 0xC.3C3B41p-57;
int64_t l_2490 = -(9l);
(g_961 = ((((safe_div_func_int64_t_s_s(g_210, (l_2438++)) > l_2436), ((g_354 | ((l_2436 | ((l_2322 |= safe_rshift_func_int64_t_s_u(g_2000, (safe_mod_func_uint8_t_u_u((safe_mul_func_int64_t_s_s(0xEF44B0E522E3F7FCll, safe_div_func_int8_t_s_s((l_2449 = g_336), safe_rshift_func_uint16_t_u_s(g_318, 11))) != safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((l_2297 = (safe_add_func_uint16_t_u_u(l_2437, 65535ul) >= g_274)) | -(8l)), 7) != -(8l)) ^ l_2438), l_2458)), 1l) != g_216))) < 0xFBA8C802l)) < l_2305)), p_10)) < p_8) != p_10));
if (safe_sub_func_uint64_t_u_u(safe_sub_func_int8_t_s_s((l_2386 |= l_2465), (((safe_lshift_func_int64_t_s_s((l_2355 || -(8l)), 34) >= safe_rshift_func_uint64_t_u_u((0x4E77l | (0xFC2Fl > ((safe_div_func_int32_t_s_s((((p_8 >= p_10) || safe_mul_func_int64_t_s_s(safe_div_func_uint64_t_u_u(p_10, 6l), 0x1047416F7CD0CE2Dll)) | 2ul), p_11) || 0l) > p_10))), 34)) >= 0x44l) ^ p_10)), l_2437)) {
float l_2491 = 0x1.EE7D23p-15;
int32_t l_2509 = 0xBF01A4D2l;
int8_t l_2512 = 0x39l;
int16_t l_2531 = 0x71EFl;
for ((g_2079 = 0); (g_2079 != 54); (g_2079 = safe_add_func_uint16_t_u_u(g_2079, 9))) {
uint16_t l_2513 = 0x446Al;
uint8_t l_2514 = 0x2Fl;
(g_330 = (safe_rshift_func_int16_t_s_u((g_218 &= 0x7C87l), 14) <= ~(p_11)));
(g_320 = (safe_sub_func_float_f_f(l_2485, 0x1.1p+1) < (0x5.B73B4Cp-35 <= ((((g_284 >= (l_2320 &= (8ul >= 246ul))), (safe_add_func_uint8_t_u_u(((safe_lshift_func_int64_t_s_s(g_313, (((l_2308 = p_10) != p_7), p_11)) & p_8) >= 5l), l_2490) > 0x9DC00421l)), l_2491) <= -(0x10.Fp-1)))));
(l_2459 &= safe_sub_func_int8_t_s_s((l_2300 = safe_add_func_uint32_t_u_u(safe_div_func_int32_t_s_s(safe_mul_func_int16_t_s_s(safe_div_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(((p_7 < ((!(((safe_lshift_func_int64_t_s_s((((p_10 < (l_2449 < (((p_7 > (((l_2307 = (g_310 | l_2509)) <= (g_225 ^ (p_11, safe_add_func_int8_t_s_s(g_558, l_2512)))) <= 0x2F281666l)) && 1l) > 1ul))) > 0l) > 0l), g_334) == 0xCD1E04AD09342476ll) == g_353)) && -(1l)), l_2513)) == g_324), p_10) < l_2514) & l_2437), l_2514), p_8), g_303), 0l)), p_8));
}
for ((g_202 = 0); (g_202 >= -(6)); --(g_202)) {
return p_7;
}
(l_2509 = (g_333 = (g_1060, (0x9E18D9D6l || (safe_lshift_func_int16_t_s_u(safe_rshift_func_uint32_t_u_u((g_281 ^ (p_7 || ((l_2542 = ((0xC46E88C2l > (safe_add_func_int16_t_s_s(safe_mul_func_uint8_t_u_u(safe_div_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(g_326, (l_2531 >= (l_2327 = safe_add_func_uint32_t_u_u((g_1060 & safe_div_func_uint64_t_u_u((((g_2540 = (l_2323 = safe_sub_func_uint16_t_u_u(safe_mod_func_int64_t_s_s((p_8 & g_842), l_2509), l_2437))) <= p_7) && g_1245), 0x47A9D7A2C46F8B26ll)), p_7)))) || 0x63974880D93FD66Bll) == l_2541), l_2302), 0x30l), 0ul) >= g_322)) || p_9)) ^ p_7))), 19), 11), 0x28E00984l)))));
}
else {
if (g_194) break;

}

}
(p_8 ^= g_328);
for ((g_303 = 3); (g_303 == 50); (g_303++)) {
int32_t l_2551 = -(4l);
int32_t l_2590 = 0xFEE8AE86l;
int32_t l_2608 = -(8l);
int32_t l_2646 = 0xA2681BFBl;
int32_t l_2661 = 0xB572087El;
(p_9 = ((safe_mul_func_float_f_f(safe_add_func_float_f_f((p_9, safe_mul_func_float_f_f(g_270, (g_320 = 0xD.9F9DFBp+46))), (((l_2326 = (((0x3B0B8358l | safe_sub_func_int64_t_s_s((p_8, 4l), (safe_sub_func_int8_t_s_s(1l, ~(!((g_312 = 0x77C5A6CE73E8C918ll)))) && (safe_add_func_int64_t_s_s(((l_2551 < l_2324) > l_2460), p_8) > g_1019)))), p_8) <= 18446744073709551614ul)) >= g_194), 0xB.ED1944p+74)), 0x5.D17DABp+19) != p_11), g_188));
if (l_2459) {
int8_t l_2592 = 0xA3l;
for ((g_193 = -(19)); (g_193 != 21); (g_193 = safe_add_func_uint64_t_u_u(g_193, 8))) {
uint32_t l_2591 = 18446744073709551606ul;
int32_t l_2609 = -(1l);
(g_846 = safe_mul_func_int32_t_s_s((p_8, l_2328), (g_292 = ((safe_rshift_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_div_func_float_f_f(safe_add_func_float_f_f((-(0x1.7p-1) < safe_div_func_float_f_f((((safe_div_func_float_f_f((p_10 > p_11), p_8) == (((((safe_sub_func_float_f_f(((g_279 != +(0xD.DB546Cp+8)) == (((safe_add_func_float_f_f(safe_add_func_float_f_f((safe_div_func_float_f_f(safe_add_func_float_f_f((safe_sub_func_float_f_f(((g_213 = (((l_2336 < p_9) == p_9) < l_2589)) > l_2590), l_2459) < g_224), 0x0.Ap+1), 0xE.04B0AAp+55) <= -(0x1.Dp+1)), 0x3.Cp+1), g_2540) != g_293) == l_2590) == 0xC.37714Ap+60)), 0x2.Ap-1) < 0x6.B0A4AAp+91) <= 0x0.4p-1) < 0x3.61E065p+18) > 0x6.F3FD7Cp+11) == -(0x1.Ap-1))) <= 0xB.D1F2C5p+4) >= l_2333), g_73)), l_2591), 0x8.4p+1), 8l), g_850) == l_2592), p_7) || p_11) && g_1057))));
(l_2609 ^= (l_2608 = safe_lshift_func_int32_t_s_u(((0x0C884123l || (((l_2590 = p_11), (0ul != safe_mul_func_uint8_t_u_u(safe_sub_func_int16_t_s_s(safe_mod_func_uint16_t_u_u(safe_lshift_func_int8_t_s_u((g_1384 = !(g_218)), 2), g_216), (safe_rshift_func_uint64_t_u_s(0x6BCDD598B812E20Cll, (0xDAD8BA6Bl ^ p_11)) < (g_276 = (safe_div_func_int8_t_s_s(p_10, p_10) <= 0xB6l)))), g_210))), g_180)) | g_292), p_9)));
}
}
else {
uint64_t l_2612 = 0ul;
int32_t l_2613 = 0x0A877D91l;
int32_t l_2654 = -(1l);
int32_t l_2658 = 0l;
int32_t l_2662 = 4l;
int32_t l_2663 = 0xE9E2A112l;
(l_2613 |= ((l_2306 = (l_2327 ^ (l_2612 = safe_sub_func_uint64_t_u_u((p_7 <= g_220), 0l)))) <= l_2291));
(g_304 = ((safe_sub_func_float_f_f((safe_add_func_float_f_f(0x5.8p-1, safe_div_func_float_f_f(!((l_2590 == (((l_2646 = (safe_sub_func_int32_t_s_s(safe_mod_func_uint64_t_u_u(safe_rshift_func_uint32_t_u_s((~(p_11) < safe_lshift_func_int32_t_s_s((g_1383 = (safe_div_func_int64_t_s_s((safe_rshift_func_int64_t_s_u(g_318, 40) > (safe_lshift_func_int32_t_s_u((safe_div_func_int32_t_s_s(safe_rshift_func_int64_t_s_s(((l_2608 = l_2613), safe_mul_func_uint16_t_u_u((l_2613 &= p_7), (l_2449 = (safe_rshift_func_uint32_t_u_u((((-(1l) | ((g_188, (((g_333, l_2336) || g_325) >= 0x2D83976El)) == p_9)) < p_11) < g_844), 13) < l_2319)))), 58), 1l), -(2l)), 15) >= l_2551)), p_7) || l_2590)), 18)), p_11), 0x74D3FD503E804995ll), p_7), l_2302)), -(0x1.Ep+1)) <= g_1757))), 0xC.33C7E0p+16)) != g_333), l_2612) != 0x8.7p+1) == 0x0.4p+1));
if (l_2647) {
int32_t l_2653 = 0xC8487B46l;
int32_t l_2655 = -(1l);
int32_t l_2656 = 0x638EC92Bl;
int32_t l_2657 = 0x0E9A712Al;
int32_t l_2659 = 0x955592EFl;
--(l_2665);
}
else {
return l_2662;
}

}

(g_1338 = ((g_1053 = (-(0x2.Cp-1) > (safe_sub_func_float_f_f(p_9, (g_320 = 0x4.766F47p-94)) == 0x0.4p+1))) < -(safe_mul_func_float_f_f(p_7, (g_304 = safe_sub_func_float_f_f(+((((p_7 == safe_mul_func_float_f_f(safe_add_func_float_f_f(((safe_sub_func_float_f_f(safe_sub_func_float_f_f((safe_mul_func_float_f_f(l_2306, ((((((p_11, (((((4ul & p_8) > p_11) ^ 4ul) && g_290) >= 0x1F0Fl)) != l_2650) | l_2328) > p_10) != g_218), g_213)) >= 0x1.8p+1), 0xE.20A21Ap-36), 0x2.1EDA45p-77) <= 0x0.4p+1) == -(0x7.Fp-1)), g_336), p_9)) >= g_343) < l_2458)), l_2322))))));
}
}

if (l_2304) {
float l_2709 = 0x0.Dp+1;
int32_t l_2714 = 0xDD656B6Cl;
int32_t l_2750 = 1l;
int32_t l_2783 = 0xDECDAFA6l;
int32_t l_2787 = 0x06A79C20l;
int32_t l_2788 = 1l;
int32_t l_2790 = 0l;
int32_t l_2795 = 0x3D57133Al;
int32_t l_2798 = 2l;
int32_t l_2799 = 0x2CB8D0B8l;
int32_t l_2800 = 0xF74409F3l;
uint32_t l_2845 = 18446744073709551612ul;
int32_t l_2874 = 0x5AD55A99l;
float l_2901 = 0x0.Bp-1;
(l_2335 = safe_rshift_func_int16_t_s_u((l_2297 = 0x46B8l), safe_sub_func_int8_t_s_s(1l, (g_2690--))));
for ((g_842 = -(8)); (g_842 >= 19); (g_842++)) {
int64_t l_2707 = 0l;
int16_t l_2715 = -(5l);
int32_t l_2717 = 0x479A3691l;
int32_t l_2746 = -(7l);
int32_t l_2782 = 0x87FD9500l;
int32_t l_2786 = 0xE40A47EDl;
int32_t l_2875 = -(1l);
int32_t l_2876 = 0x43428A47l;
int64_t l_2880 = 0xDBACD81701E6E7DBll;
uint32_t l_2881 = 0ul;
float l_2930 = 0x3.D77F24p-44;
int32_t l_2978 = 0xC3A85A77l;
if ((l_2458 >= (p_10, (safe_lshift_func_int32_t_s_u((safe_lshift_func_int32_t_s_u(((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((safe_div_func_float_f_f(l_2707, 0x2.823A7Dp+52), ((0xCE12D785842FD83Ell & +((((18446744073709551615ul < g_269) > safe_div_func_int8_t_s_s((((g_337 = (l_2298 = (((g_308 = safe_mod_func_uint16_t_u_u(p_7, (g_348 = p_8))) || 0x70E4l) < g_188))) | 0l) != g_325), 1ul)) & p_10))) < p_11)) == g_1247), p_10) | p_10) >= -(1l)), l_2714) && g_227), g_311) <= 0xDCl) < 0x526Al), 0) <= p_9), 10) <= l_2715)))) {
(g_1058 = 0x4.9BDB96p-16);
if (g_350) break;

}
else {
uint32_t l_2718 = 0x463AAEA8l;
int32_t l_2747 = -(1l);
int32_t l_2748 = 0l;
int16_t l_2778 = 0xC081l;
int32_t l_2784 = 0xC2084BFBl;
int32_t l_2792 = -(6l);
int32_t l_2794 = 0x08448A21l;
int32_t l_2796 = 0xA89AF474l;
if (g_2716) {
(l_2718--);
}
else {
int32_t l_2745 = 0x27AFB9ECl;
(g_961 = (0x1.Ep+1 != ((safe_div_func_float_f_f((((((((((0x0Fl ^ safe_div_func_int64_t_s_s(((((safe_mod_func_int32_t_s_s(l_2718, (safe_rshift_func_uint64_t_u_s((safe_div_func_uint8_t_u_u((l_2336 = l_2718), g_2000), l_2292), 46) ^ ((safe_mul_func_float_f_f((g_1338 = (g_1053 = ((safe_sub_func_int8_t_s_s((~((((((+(((safe_mod_func_int64_t_s_s(safe_mod_func_uint8_t_u_u((((safe_mul_func_float_f_f(((((g_284 ^ 0x76l), safe_div_func_float_f_f((g_1058 = -(0x1.7p-1)), p_9)) < l_2745) <= 0x1.Ep-1), g_226), l_2714) | 1l) | l_2715), -(1l)), p_11), g_1378) != p_10)) <= 0x8F922D15l) < l_2714) && p_8) != g_791) || p_9)) | p_11), l_2746) >= l_2326), -(0x3.3p-1)))), l_2285) < g_540), 0xF681l))) | p_9), p_10) ^ -(1l)) <= g_1378), l_2301)) >= 0x4C6F60BC50387523ll) > g_180), 0x6.FBD69Fp-91) < 0x5.11577Ap+37) != 0x0.BDBE10p+31) >= 0x3.0p-1) < l_2749) <= g_269), l_2714) == 0x9.2p-1) <= g_850)));
}

for ((l_2327 = 0); (l_2327 < 17); ++(l_2327)) {
int32_t l_2779 = 0l;
int32_t l_2780 = 6l;
int32_t l_2781 = 0xCB4B7BD2l;
int32_t l_2785 = 0x09D9AA4Fl;
int32_t l_2789 = 0xB7B8089El;
int32_t l_2791 = -(5l);
int32_t l_2793 = 8l;
int32_t l_2797 = -(3l);
(g_1338 = safe_sub_func_float_f_f(((+(p_11) >= safe_sub_func_float_f_f(0x0.Fp+1, ((safe_add_func_int64_t_s_s(p_10, (l_2748 = (safe_lshift_func_int16_t_s_s((((g_1384 > (((l_2747 &= ((l_2333 | (p_7 || safe_lshift_func_int8_t_s_s(safe_mul_func_int16_t_s_s((1l != (safe_lshift_func_uint64_t_u_s(safe_mul_func_int32_t_s_s((p_10 & safe_sub_func_uint32_t_u_u(((0x8307l ^ -(1l)) == 1ul), p_7)), g_284), 0) > p_11)), p_9), 2))) > 0x18l)) == p_10) >= -(3l))) <= 0x6E43EC234DF8B4F6ll), 0x3E7Fl), p_9) ^ g_193))) < 18446744073709551607ul), l_2311))) == p_8), -(0x5.3p+1)));
(l_2784 = safe_lshift_func_uint16_t_u_u((l_2748 == l_2750), safe_mod_func_uint64_t_u_u(++(g_2801), p_10)));
}
if (((safe_add_func_int32_t_s_s(4l, safe_sub_func_uint16_t_u_u((l_2337, (0x0Dl <= (((((4294967287ul ^ l_2795), safe_lshift_func_uint8_t_u_s(safe_sub_func_uint16_t_u_u((l_2792 == (g_307, (safe_rshift_func_uint8_t_u_s((l_2814++), 2) | (safe_lshift_func_int16_t_s_s(safe_div_func_int64_t_s_s(g_341, l_2334), 7) < p_9)))), 0xCB92l), 4)) <= g_222) != 0xCC19l), l_2718))), g_1019)) < g_274) | l_2336)) {
if (p_10) break;

}
else {
uint8_t l_2838 = 0x83l;
int32_t l_2844 = 5l;
uint8_t l_2855 = 1ul;
(g_324 = safe_add_func_uint16_t_u_u((l_2750 = safe_div_func_uint8_t_u_u(safe_lshift_func_int16_t_s_u(((g_298 > (l_2787 = safe_mul_func_int32_t_s_s((safe_mod_func_int64_t_s_s(safe_unary_minus_func_int64_t_s(g_321), safe_div_func_int32_t_s_s(6l, safe_mul_func_uint16_t_u_u((l_2838++), (((-(1l) < ~((l_2844 ^= (l_2845--)))) > (p_8 & (((g_276 |= (((g_274 || (safe_rshift_func_int64_t_s_u(((+((g_328 ^ ((l_2786 = safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(g_269, 0xC1l) & l_2855), g_280)) < l_2778))) <= 0ul) | 0l), 50) || 0xFA77l)) != g_274) | l_2715)) & p_8) ^ g_293))) == 0l)))) > 0ul), p_7))), g_227), g_2856), g_2857)), p_11));
}

}

(l_2310 = (safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(safe_rshift_func_int64_t_s_u((((((l_2782 = (-(1l) || (0ul || (l_2786 || ((l_2790 &= (((((p_8 = g_206) != p_10) == ((((0x0.9DCF62p+43 != ((safe_div_func_float_f_f(((safe_mul_func_float_f_f((((safe_add_func_float_f_f(((safe_sub_func_float_f_f(g_321, safe_sub_func_float_f_f(((((l_2386 < --(l_2877)) || g_318) && l_2386), 0x0.ED0E66p-54), 0x0.D6C6ABp+17)) != l_2874) != g_268), l_2286) == -(0x6.Ap-1)) > p_9) <= p_9), 0xA.CFC7AFp-99) >= l_2330) == g_349), l_2323) >= g_268) != 0x8.A1EDB8p-69)) < p_10), l_2292) > 0l)) != g_540) | p_7)) & l_2309))))), l_2782) && l_2319) == 0x9BD5l), l_2876), 52), 0xBDBB87F0715C310Ell) && g_336), 0x2A47F1E3F0FD39BBll) == 0xEDl));
++(l_2881);
if (((l_2799 = safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((((safe_div_func_int64_t_s_s(safe_unary_minus_func_int16_t_s(safe_unary_minus_func_int32_t_s(safe_mul_func_int32_t_s_s(l_2790, ((2l < l_2799) == p_9)))), (l_2320 ^= (l_2876 = ((l_2306 | safe_add_func_int32_t_s_s((g_300 = l_2328), ((((p_8, (p_9 < safe_mod_func_uint32_t_u_u(((g_1019 ^= (((l_2296 = (-(10l) ^ 0xFB34l)) <= 5l), p_10)) <= 0ul), l_2334))), 0xA172l) >= g_316) || p_11))) != p_11)))) & l_2287) && l_2898), 0l), l_2414) == p_11) < g_2329) >= 0xD890l), 9)) & 65535ul)) {
const uint32_t l_2904 = 0x11989991l;
int32_t l_2919 = -(9l);
int32_t l_2929 = 6l;
(l_2327 = 0x97B2C5DFl);
(g_961 = safe_mul_func_float_f_f(0xD.7D6332p+5, ((g_210 ^ safe_lshift_func_int32_t_s_s(l_2904, 22)), safe_div_func_float_f_f(safe_mul_func_float_f_f(-(0x1.2p-1), (g_1338 = ((safe_mul_func_float_f_f((safe_sub_func_float_f_f(safe_mul_func_float_f_f(safe_mul_func_float_f_f(safe_add_func_float_f_f((((((l_2919 &= 0x9El), ((g_194 == ((g_1053 = (((p_8 > safe_mul_func_float_f_f(((g_320 = ((safe_sub_func_float_f_f(safe_mul_func_float_f_f((((safe_div_func_float_f_f(((((l_2799, ((l_2904 > g_324) >= l_2715)), 0x7487C65Fl), g_227) == p_7), g_216) > p_7) != p_11) <= p_9), p_10), 0x3.1p-1) > 0x3.DCCED2p+39) != l_2321)) > 0x1.Bp-1), 0x6.4p-1)) < 0x0.0p-1) != 0x1.4p+1)) >= -(0x1.2p-1))) > l_2386)) < l_2786) <= l_2880) < l_2319), g_199), l_2336), 0x7.922DCBp-52), p_7) != l_2717), g_269) <= l_2335) != p_11))), l_2930))));
}
else {
float l_2941 = 0x1.3p+1;
int64_t l_2943 = 1l;
int32_t l_2946 = 0x48B2E047l;
uint16_t l_3005 = 0x5B93l;
for ((g_846 = 0); (g_846 == -(12)); (g_846--)) {
uint8_t l_2942 = 0x4Dl;
int32_t l_2944 = 1l;
int32_t l_2945 = 0xD8EC98B2l;
(l_2782 = ((l_2946 ^= (l_2945 |= !((g_1327 = safe_mod_func_uint32_t_u_u(~(safe_add_func_uint32_t_u_u(p_10, (l_2944 = ((l_2943 = (safe_add_func_uint8_t_u_u(3ul, p_9) == l_2942)) > 1ul)))), p_11))))) != g_279));
(g_334 = safe_mod_func_int64_t_s_s(safe_mul_func_int64_t_s_s(((g_180, (safe_add_func_uint16_t_u_u(p_10, safe_add_func_uint8_t_u_u(((((safe_rshift_func_int32_t_s_s(g_227, 6) <= p_8) || 0xD329B7CC01B133E4ll) || (safe_lshift_func_uint8_t_u_u((((((((g_267 == 18446744073709551614ul) <= safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(safe_rshift_func_uint16_t_u_u(1ul, safe_rshift_func_uint32_t_u_s((((g_2212, 0x69E3l) < p_7) ^ 0x3Bl), p_9)), 4ul) & 0x6Cl), p_10)), -(1l)) != l_2782) > g_845), p_10) ^ l_2717), 1) | p_9)), 0x8Bl), p_11)), g_341)) | l_2321), l_2814), g_307));
(g_213 = safe_sub_func_float_f_f(safe_div_func_float_f_f((safe_sub_func_float_f_f(l_2845, (l_2717 = l_2285)) > 0x9.28CF17p+59), (g_316 <= ((safe_sub_func_float_f_f(p_10, safe_mul_func_float_f_f((g_320 = ((l_2309 < !((l_2978 <= (l_2945, (((g_835 ^ p_8), g_840) < l_2750))))) > p_10)), 0x1.Cp+1)) >= p_10) != l_2319))), l_2800));
if (p_8) break;

}
for ((g_2329 = -(18)); (g_2329 > 29); ++(g_2329)) {
uint32_t l_2981 = 0x4866A936l;
(l_2981 ^= 1l);
(g_304 = 0x6.26EC25p-60);
}
if (g_288) {
return l_2750;
}
else {
uint32_t l_3018 = 0x41492F52l;
(g_1384 ^= g_353);
(l_2334 ^= (safe_lshift_func_uint32_t_u_u(((((((-(0x1.9p-1) > safe_div_func_float_f_f(((g_290 == (safe_mul_func_float_f_f(safe_sub_func_float_f_f(safe_sub_func_float_f_f((+(safe_sub_func_float_f_f(safe_mul_func_float_f_f(safe_add_func_float_f_f(((l_2303 > (g_1338 = 0x1.Ep-1)) <= safe_mul_func_float_f_f(safe_add_func_float_f_f(((safe_add_func_float_f_f(0xD.71E589p-54, (g_320 = 0x5.469CF5p+47)) > safe_sub_func_float_f_f(safe_mul_func_float_f_f((g_213 = safe_sub_func_float_f_f(-(0x1.0p-1), 0x6.1792E7p+46)), safe_sub_func_float_f_f(((safe_mod_func_int16_t_s_s((g_1383 = (((g_343 = ((safe_mul_func_uint32_t_u_u(0x314DB3AEl, l_2946) != g_290) | 5ul)), g_216), l_2286)), g_2329) && l_3018), l_2336), -(0x10.2p-1))), l_2790)) == 0x0.Cp-1), g_845), g_284)), l_2717), 0x9.35E96Dp-52), p_8)) <= 0x1.931155p-14), 0x4.Ep+1), l_3018), p_8) >= l_2297)) <= 0xD.2FE58Cp-99), l_3018)) > l_3018), l_2306) ^ p_8) && g_1757) & p_9), 22) | 0x5800A35Fl));
return g_330;
}

}

}
(g_2690 |= (g_324 = safe_mul_func_int32_t_s_s(l_2330, safe_div_func_int64_t_s_s(((((l_2321 = (safe_lshift_func_uint8_t_u_u(p_10, 6) > g_281)) | (l_2296, (0x21A0l & (l_2799 < (((l_2323 |= (g_305 = ((0xBEB83499275CEB7Ell == safe_lshift_func_uint16_t_u_s(l_2332, (g_845, g_326))) == g_193))) == l_2299) <= p_8))))) && l_2319) < p_7), 18446744073709551610ul))));
--(l_3029);
}
else {
uint8_t l_3038 = 252ul;
int32_t l_3074 = 0l;
int64_t l_3094 = 1l;
int32_t l_3182 = 0x36F51887l;
uint16_t l_3200 = 0x56CFl;
if ((l_3032 | 0x4DABEEE6CBAE3226ll)) {
int32_t l_3054 = 0xF163C4ECl;
int8_t l_3095 = 1l;
int32_t l_3102 = 0xD4F3EF79l;
int32_t l_3184 = 4l;
for ((g_1057 = 17); (g_1057 > 17); ++(g_1057)) {
(l_3035 = l_2308);
}
for ((g_351 = 0); (g_351 == 10); (g_351 = safe_add_func_int16_t_s_s(g_351, 4))) {
const int8_t l_3053 = 5l;
int32_t l_3096 = 0x212EEB4Dl;
int32_t l_3097 = 0l;
int32_t l_3099 = -(1l);
int32_t l_3100 = 0xD3E3626El;
uint32_t l_3103 = 0x398157EEl;
uint64_t l_3187 = 0x2511944F70CB15ABll;
if (((p_7 == l_3038) != safe_add_func_uint64_t_u_u(((((safe_rshift_func_int32_t_s_u((((l_3038 == (((l_3038 && ~(safe_mod_func_uint32_t_u_u(safe_lshift_func_uint16_t_u_s(safe_div_func_uint64_t_u_u((l_2465 && ((((g_305 ^= ((safe_sub_func_int64_t_s_s(-(6l), (l_2326 > 0x51l)), l_3052) || 0x0AA73DC80AB4C560ll)) | p_9) & g_282) > p_11)), 0xFEEB7C43936CB608ll), 12), l_3053))) == g_315) <= l_3053)) != g_300) | 0xF27F30C9l), p_10), g_343) ^ l_3054), 4294967295ul) < 0xEA28123El), g_2928))) {
return g_1385;
}
else {
float l_3057 = 0x0.5953A3p-15;
int64_t l_3075 = 5l;
int32_t l_3076 = 3l;
int32_t l_3101 = -(1l);
(l_3076 = (safe_rshift_func_uint8_t_u_s((((p_10 & 7l) != (l_2321 = g_1797)) <= ((safe_div_func_uint64_t_u_u(safe_mod_func_uint8_t_u_u((l_3074 = ((g_280 >= ((g_1321 |= safe_rshift_func_uint16_t_u_s(((l_2300 = (l_3038 && 0xA22Al)), (safe_rshift_func_uint16_t_u_u(safe_rshift_func_uint16_t_u_u(safe_unary_minus_func_int64_t_s(g_2329), safe_sub_func_uint32_t_u_u((safe_mul_func_int32_t_s_s(p_11, ((p_7 = (g_1385 = g_285)) && l_3073)) ^ l_2328), l_2386)), g_1019), l_3054)), 5)) & g_325)) == g_226)), g_326), l_3075) < g_307) != g_187)), l_3053) | l_2327));
(l_3097 = (((0l <= 0x331Fl) | (safe_div_func_int64_t_s_s(0x861EDD9DA7EFFC8All, safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(0x96D2231F4FD27910ll, -(3l)) > ((((l_3096 = ((((0x26F14494l && safe_mul_func_int8_t_s_s(safe_div_func_uint64_t_u_u(((((~(safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(0x69l, g_316) != safe_lshift_func_uint64_t_u_s(p_11, 21)), 14)) | g_2329) && p_11) || 6ul), p_8), g_290), g_356)) <= l_3094) < p_10) <= l_3095)) & 0x322EDB5Fl) >= l_3053) < g_1057)), g_1385)) == l_2324)) != 0ul));
--(l_3103);
}

if (safe_rshift_func_int8_t_s_u(l_2289, l_3074)) {
float l_3141 = 0x1.Ep+1;
int32_t l_3142 = 0l;
int32_t l_3180 = 0x0D4A9E41l;
(g_1384 ^= (g_1378 <= safe_rshift_func_uint8_t_u_s(l_2338, 6)));
(l_2306 |= (safe_mod_func_uint16_t_u_u((safe_add_func_float_f_f(((g_213 = safe_add_func_float_f_f(safe_div_func_float_f_f(safe_mul_func_float_f_f(((g_357 = (((g_317 >= p_8) < (l_2338 >= ((safe_mul_func_float_f_f(safe_add_func_float_f_f(0x2.9p+1, safe_div_func_float_f_f((safe_sub_func_float_f_f(safe_sub_func_float_f_f(safe_div_func_float_f_f(((l_3132 = l_3096), safe_div_func_float_f_f(0xE.C65C7Fp-43, safe_div_func_float_f_f((g_1053 = safe_sub_func_float_f_f(safe_sub_func_float_f_f((((p_7 >= (g_1797, l_3102)) < 0x8.54A0C2p-29) != p_9), 0x9.8B2314p-71), 0x4.51B03Cp-3)), p_10))), g_324), p_9), g_216) < p_8), p_10)), l_3094) == l_3095) >= p_7))) != 0x1.8p+1)) > l_3102), l_3141), 0x8.0F9B82p-92), g_268)), p_11), g_755), g_348), p_7) ^ g_2212));
(g_846 = l_3054);
(g_310 = (safe_add_func_uint16_t_u_u(+(g_308), (((safe_rshift_func_int64_t_s_s(((l_3074 &= safe_mod_func_int64_t_s_s(-(8l), g_310)) ^ p_7), 26) | (l_3142 = safe_mod_func_uint64_t_u_u(((p_7, +(safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_2307 = safe_rshift_func_int32_t_s_u(((safe_sub_func_int64_t_s_s((((((p_9 <= ((g_1058 = (safe_add_func_float_f_f(l_2421, ((safe_lshift_func_int32_t_s_s((g_1321 = (l_3096 &= safe_add_func_uint16_t_u_u((((((l_3102 && (safe_sub_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u((safe_rshift_func_uint64_t_u_u(safe_lshift_func_uint8_t_u_u(0x61l, g_2716), l_3038), l_3038), 0x3417ABE1l) >= p_11), 1l), g_348)), l_3094) != g_349) == 0x60A2DFEAl) != 0x8FD9479B3BBD2BDBll), 3l))), 19), p_7), l_2335)) >= g_3179)) > g_227)), p_10) > p_10) || p_11), g_220), 0x33DA869468D4A969ll) <= l_2814) & 0xB877l), g_282)), g_180) >= g_316), p_9), p_7), l_3102), 0x44l))) || p_10), l_3142))) & l_3038) < g_336)) <= l_3180));
}
else {
int64_t l_3183 = 0x118234AD74374008ll;
int32_t l_3185 = -(2l);
(g_1378 = !(0xB4l));
(l_3187--);
}

if (p_10) break;

if (g_199) break;

}
if (g_1757) break;

}
else {
uint64_t l_3190 = 1ul;
int32_t l_3197 = 0x66B402AFl;
int32_t l_3198 = 0xC0777701l;
int32_t l_3199 = -(1l);
(g_1058 = (g_313 > (l_3190 >= safe_mul_func_float_f_f((safe_div_func_float_f_f(safe_sub_func_float_f_f(((p_10, (-(0x1.Ep-1) <= 0x1.Cp+1)) != g_216), l_3032), (p_10 > (l_3197 = ((g_1386 || 0x00BACEC591DB6A38ll), p_8)))) < 0x5.E859AAp-97), g_1383))));
}

(l_3200++);
(g_2857 = safe_lshift_func_int8_t_s_u(safe_lshift_func_uint16_t_u_s(g_316, 12), safe_lshift_func_int32_t_s_s(safe_add_func_uint64_t_u_u((((g_336 ^ p_7) || ((0ul <= l_2386) || ((safe_lshift_func_uint8_t_u_u((l_2291 | ((g_222 >= l_3200) == ((l_2300 = (safe_add_func_uint16_t_u_u(0ul, 0x136Fl) > l_2294)) <= p_11))), 3) == p_8), 65531ul))) && l_2331), 0x245F67DAF5916855ll), g_202)));
}

}
++(g_3217);
return l_2309;
}
uint8_t func_15(uint64_t p_16, uint32_t p_17, uint32_t p_18, uint32_t p_19, int64_t p_20){
int8_t l_1809 = 1l;
int32_t l_1828 = 1l;
int32_t l_1829 = 0xC0322A30l;
int32_t l_1877 = 0l;
uint8_t l_1919 = 0x6Dl;
int32_t l_2053 = -(5l);
int32_t l_2054 = -(4l);
int32_t l_2061 = -(1l);
int32_t l_2063 = 0x42E0B19Cl;
int32_t l_2065 = 0xC6B563F8l;
int32_t l_2076 = 0xF2E574D1l;
int32_t l_2077 = 1l;
uint16_t l_2151 = 0x86E0l;
int8_t l_2166 = 0x7Bl;
int32_t l_2204 = 0l;
int32_t l_2205 = 0xB3A058E1l;
int32_t l_2206 = -(1l);
int32_t l_2207 = -(1l);
int32_t l_2209 = -(1l);
int32_t l_2211 = -(2l);
int32_t l_2245 = 0xF308C6D3l;
int32_t l_2246 = 0x53A6B346l;
int32_t l_2247 = 5l;
int32_t l_2248 = 2l;
int32_t l_2249 = -(1l);
int32_t l_2250 = 0xB513497El;
uint16_t l_2251 = 1ul;
int16_t l_2254 = 0x1F8El;
int16_t l_2255 = 5l;
(l_1829 |= (safe_lshift_func_uint64_t_u_s(safe_lshift_func_int16_t_s_s(p_16, 6), safe_add_func_uint32_t_u_u(l_1809, (((g_292 == safe_mul_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((l_1809 <= safe_lshift_func_int16_t_s_u(((~(-(1l)) & (0x0717E5F305E56D6Fll & ((safe_mod_func_uint32_t_u_u((l_1828 = (l_1809 > safe_rshift_func_int16_t_s_u(safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(safe_mod_func_int32_t_s_s(!(l_1809), (g_293 |= g_219)), 0l) > 0xABl), 6l), g_180))), g_219) & g_80) | 1ul))) >= -(1l)), 12)) == l_1809) >= g_1757), g_193) & 0xABl), p_18)) == p_16) && l_1809))) >= l_1809));
if ((l_1829 = l_1828)) {
for ((g_322 = 0); (g_322 != 0); (g_322 = safe_add_func_uint8_t_u_u(g_322, 9))) {
(g_1058 = safe_sub_func_float_f_f(-(0x9.4p-1), l_1828));
}
}
else {
const uint32_t l_1846 = 0x8BC5CDCAl;
int32_t l_1847 = 0x531E9495l;
int32_t l_1878 = 0xBC26B1B6l;
int32_t l_1920 = 0x47FBE32Cl;
int32_t l_1945 = 1l;
float l_1987 = 0x9.1p+1;
int32_t l_2068 = -(10l);
int16_t l_2072 = 8l;
int64_t l_2188 = 0x24AC4713F8A9C141ll;
float l_2200 = 0x6.ED948Ep+35;
int32_t l_2201 = -(1l);
int32_t l_2202 = 0l;
int32_t l_2203 = 0xBE067044l;
int32_t l_2208 = 0x6EED357Cl;
int32_t l_2210 = -(8l);
float l_2217 = 0x0.Fp-1;
for ((g_315 = 13); (g_315 == 48); (g_315 = safe_add_func_uint64_t_u_u(g_315, 8))) {
int32_t l_1839 = -(1l);
uint32_t l_1848 = 0x44973605l;
int32_t l_1881 = 1l;
float l_1893 = 0xF.81C8AFp+6;
if ((g_845 <= (g_314 < ((((l_1847 = (((l_1828 || (safe_div_func_uint8_t_u_u(g_218, (((~(((((((0x69E206B3l & ((l_1839 ^ safe_rshift_func_uint32_t_u_u(0ul, safe_div_func_int8_t_s_s(safe_rshift_func_uint64_t_u_s((g_1327 & l_1829), 35), p_16))) && l_1846)) != 0xC7689E9D0736C429ll) | l_1846) == l_1846) && p_17) > l_1809)) || p_18) > l_1846), 254ul)) & -(9l))) | 4l) && g_223)) != l_1848), g_321), p_17)))) {
return p_16;
}
else {
uint64_t l_1868 = 0x940C68C9706AC547ll;
(l_1878 = ((p_20 = (safe_add_func_uint64_t_u_u((l_1847 = !(safe_sub_func_int16_t_s_s(((safe_mul_func_int64_t_s_s((safe_add_func_int32_t_s_s(safe_div_func_int16_t_s_s((l_1877 = (safe_rshift_func_int8_t_s_s(g_342, 0) | ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_1828, 4) > (((safe_div_func_uint32_t_u_u((l_1868 < safe_add_func_uint64_t_u_u(((l_1809 >= (l_1839, (safe_mul_func_int16_t_s_s(safe_lshift_func_int8_t_s_s((g_341 = 0xA1l), g_343), (0x3Bl || safe_add_func_int64_t_s_s(g_193, g_343))) & p_18))), l_1839), 0xB85FA6CC79B0B0A1ll)), g_218) == p_20) || g_349) != g_334)), l_1868) || 65535ul) ^ g_310))), l_1846), p_17) == g_312), 5ul) == g_290) && 0ul), l_1809))), 0xBBC3E97D26D0E8A8ll), p_20)) >= p_19));
(p_16 = l_1868);
}

(l_1878 = 0x85A00D15l);
for ((g_321 = 0); (g_321 <= -(19)); (g_321 = safe_sub_func_uint32_t_u_u(g_321, 2))) {
uint8_t l_1882 = 0x35l;
++(l_1882);
(g_1384 &= (l_1878 &= 0x3A7B1AF9l));
if (g_355) continue;

}
(g_1058 = (safe_mul_func_float_f_f(((safe_mul_func_uint8_t_u_u(g_779, l_1846) <= safe_mul_func_int32_t_s_s(((safe_div_func_int16_t_s_s(p_16, ((p_20 > (((l_1828 = (l_1829 <= g_755)) <= ((l_1877 |= g_350) || (g_223 | safe_lshift_func_int16_t_s_u((l_1877 & 0l), g_115)))) < l_1847)) && g_271)) & 0x9Al) || l_1846), 4294967290ul)), l_1878), 0x1.Ep-1) < g_317));
}
for ((g_293 = 14); (g_293 < 22); (g_293 = safe_add_func_int32_t_s_s(g_293, 1))) {
int8_t l_1918 = -(10l);
int32_t l_1921 = 4l;
int32_t l_1962 = 0x6EC2D6C4l;
int32_t l_2051 = 0x28724635l;
int32_t l_2057 = -(1l);
int32_t l_2058 = 0l;
int32_t l_2060 = 5l;
int32_t l_2062 = 1l;
int32_t l_2066 = 0x0CB68803l;
int32_t l_2069 = 0x6C3320A4l;
int32_t l_2070 = 0l;
int32_t l_2071 = 0xFCE15AECl;
int32_t l_2125 = 3l;
if ((l_1921 |= (((l_1920 ^= safe_mod_func_int8_t_s_s((p_18 & (0x0836518Dl || ((g_180 == ((g_1384 = (((((((((safe_rshift_func_int64_t_s_u((g_333 ^= ((safe_div_func_uint64_t_u_u(l_1829, g_1057) < (((safe_mul_func_int64_t_s_s(safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(safe_div_func_int32_t_s_s((0x2419A1F6739A85D9ll >= (8ul <= safe_mul_func_int16_t_s_s((l_1847 = p_18), safe_sub_func_int64_t_s_s(1l, 2l)))), p_20), p_17) & g_1019), g_850), g_194) ^ g_779) < p_17) <= 4294967291ul)) ^ 0l)), g_325) <= l_1846) < l_1918) | l_1919) == l_1918), p_18), 0xB29Fl) && p_20) != p_17) & l_1878)), l_1918)), p_16))), g_282)), p_20) && p_17))) {
float l_1922 = 0xD.9ACB17p+52;
int32_t l_1946 = -(2l);
(g_845 &= l_1918);
for ((g_284 = 0); (g_284 >= 28); (g_284 = safe_add_func_int32_t_s_s(g_284, 3))) {
uint32_t l_1947 = 0xE30281A8l;
int32_t l_1948 = 2l;
(g_357 = ((((g_308 ^= safe_unary_minus_func_uint32_t_u((safe_lshift_func_int32_t_s_u(p_18, 20) | safe_sub_func_uint32_t_u_u(5ul, (g_353 = (l_1947 = ((safe_rshift_func_int8_t_s_u(-(1l), 6) <= ((l_1878 |= safe_mod_func_int32_t_s_s((g_269 > safe_lshift_func_int8_t_s_u((((g_354 > safe_rshift_func_int8_t_s_u(safe_rshift_func_uint64_t_u_s((((l_1920 ^ 0ul), safe_lshift_func_uint32_t_u_s(p_18, 21)), ((((((p_19 = safe_rshift_func_uint32_t_u_u((!(8l) | 0ul), p_16)), g_298) != g_333) != g_199) && l_1945) && p_17)), p_17), p_18)) != g_354) >= 0x0D614BCEC884EE49ll), l_1946)), g_276)), 0xACl)) || g_348))))))) ^ g_200), 0xA.DAB55Fp-55) < g_558));
for ((g_310 = 0); (g_310 <= 26); (g_310 = safe_add_func_uint16_t_u_u(g_310, 6))) {
uint64_t l_1951 = 0x2296E1CE066A3451ll;
++(l_1951);
}
}
for ((g_294 = 0); (g_294 < 17); (g_294++)) {
(l_1962 &= (l_1921, ((0x6869C21Cl && g_285) > (safe_div_func_uint8_t_u_u(p_19, safe_rshift_func_int8_t_s_u(safe_sub_func_int32_t_s_s(g_268, p_19), 3)) || 1ul))));
}
}
else {
int32_t l_1982 = 1l;
(p_18 = p_19);
(l_1945 = ((18446744073709551608ul == (safe_lshift_func_uint8_t_u_u(g_779, 6), ((g_334 ^= safe_mul_func_int32_t_s_s(safe_mul_func_int8_t_s_s((l_1921 = g_227), ((l_1982 = ((safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(safe_div_func_uint32_t_u_u((g_1797 > l_1918), (safe_div_func_uint64_t_u_u(safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s(l_1982, safe_sub_func_uint16_t_u_u(p_20, ((g_845 &= -(1l)) < ((((safe_add_func_float_f_f((l_1962 = p_16), 0x3.E5E75Ap-20), g_1385) < p_20), p_18) ^ 0x96D6l)))) >= g_280)), 1l), 0xF37A1730l)), p_20), l_1877), p_17) ^ 0xC02Cl) ^ 0ul)) >= 0x64A4l)), 4l)) > p_20))) < p_17));
}

if ((g_330 | (safe_mod_func_uint64_t_u_u((l_1921 |= ((((0xE94BD317l >= ((g_961 > safe_div_func_float_f_f((l_1828 > g_353), (0x0.C2954Cp-28 <= safe_add_func_float_f_f((safe_sub_func_float_f_f(((g_343 = 0x0FAF70F5l), 0x1.3p+1), safe_add_func_float_f_f(((safe_rshift_func_uint16_t_u_u(0xE1E3l, 2) != 0x23D81192l), p_18), g_226)), g_334), p_18)))), g_270)) < 0x43D90A4762058484ll) ^ g_2000), g_194)), -(2l)) ^ 0x8A0D17244FF650EEll))) {
int8_t l_2048 = 8l;
int32_t l_2049 = -(3l);
int32_t l_2064 = 1l;
for ((g_333 = -(23)); (g_333 > -(6)); ++(g_333)) {
int32_t l_2033 = 7l;
int32_t l_2050 = -(1l);
int32_t l_2052 = 0x233C55A5l;
int32_t l_2055 = 5l;
int32_t l_2056 = 0xC5BA65E6l;
int32_t l_2059 = 0xB3BBED8Bl;
int32_t l_2067 = 0x2088B520l;
int32_t l_2073 = 0l;
int32_t l_2074 = 8l;
int32_t l_2075 = 0x6EDD0E89l;
int32_t l_2078 = 0l;
for ((g_284 = 2); (g_284 > 50); (g_284 = safe_add_func_int64_t_s_s(g_284, 1))) {
uint8_t l_2046 = 0x51l;
uint64_t l_2047 = 0ul;
(g_292 &= safe_mul_func_int64_t_s_s((safe_rshift_func_uint32_t_u_s((safe_div_func_int16_t_s_s(safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(g_333, (safe_mod_func_int8_t_s_s((l_1877 >= safe_sub_func_uint16_t_u_u(safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((0x5215144A8D4A287Cll && ((safe_div_func_uint8_t_u_u(safe_div_func_uint8_t_u_u(l_2033, (((safe_lshift_func_int16_t_s_s(safe_sub_func_uint8_t_u_u(p_16, safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((1ul >= safe_mod_func_uint8_t_u_u((g_227 && l_2046), p_20)), p_18), p_20), p_19), p_20) != g_225), 246ul)), 10), 1l) == p_17), g_282)), 1l) ^ 8l) > g_322)) & g_193), 0xE1CEl), l_1962), p_17) | p_20), l_2033), p_16), g_342), l_2047)), l_1878) > l_2048)), 0x9A5Fl) < -(6l)) ^ g_790) < 6l), l_2046) == -(10l)), p_20) && -(9l)) <= 7l), g_1758), g_280) <= g_188), l_1920) != 0xF1ACl), l_2048));
return g_292;
}
++(g_2079);
}
}
else {
uint64_t l_2082 = 18446744073709551614ul;
int32_t l_2118 = 0xB2A1484Dl;
int32_t l_2121 = 0x834EA87El;
int32_t l_2123 = -(1l);
int16_t l_2127 = 0xD04Bl;
int32_t l_2128 = 0x68E74BCCl;
int32_t l_2189 = 0x7CB7C2B1l;
(p_17 = (l_2082 = p_17));
for ((g_285 = 0); (g_285 != -(15)); (g_285 = safe_sub_func_int8_t_s_s(g_285, 5))) {
float l_2122 = 0x0.4AF2BCp+8;
int32_t l_2124 = 0x2559AD3Fl;
int32_t l_2126 = 2l;
(g_1338 = (safe_mul_func_float_f_f(safe_add_func_float_f_f(safe_sub_func_float_f_f((safe_div_func_float_f_f(((g_1058 = safe_div_func_float_f_f(((((((l_1847 = safe_sub_func_uint8_t_u_u((+(((safe_sub_func_int16_t_s_s(safe_rshift_func_uint8_t_u_s((g_333 = ((safe_lshift_func_uint16_t_u_s(l_2051, 3) || (g_337 >= (((safe_div_func_uint64_t_u_u(((l_2124 |= ((((l_2123 = ((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((0xD16E50F2l < ((g_779 &= (((((l_1945 | p_16) & p_16) && safe_lshift_func_int32_t_s_s((p_18 & safe_lshift_func_uint16_t_u_s((l_2121 = (safe_add_func_uint16_t_u_u((l_2118 = (g_284 = 65527ul)), safe_mul_func_uint16_t_u_u(p_17, l_1962)) == p_19)), 6)), p_18)) | l_1919) == g_1385)) <= 0x4E6Bl)), g_322), g_341), p_16) & l_2082), l_1829)) == -(0x3.0p+1)) == p_19), g_2079)) && l_2125), p_18) & l_2126) ^ -(5l)) <= g_282))) == g_1378)), l_2062), 0x1619l) == -(6l)) != g_285)) || p_19), l_2127)) <= 0x4F9117CEA365D320ll), p_16), p_17) != g_334) == g_270), 0xF.E9639Ap-98)) >= l_2076), 0x0.5p-1) != 0x1.0p+1), g_281), 0x7.30426Bp+18), l_2082) < l_2127));
}
(g_305 = (g_292 = safe_sub_func_int32_t_s_s(0l, (safe_lshift_func_uint32_t_u_s((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((l_2128 ^= (~((((safe_rshift_func_uint32_t_u_s(((safe_mul_func_int64_t_s_s(((g_840 != safe_sub_func_uint64_t_u_u(0xB666315FFF01C8CDll, g_842)) <= (p_19, (((g_219 > (((g_315 >= ((l_1846 == ((p_17 < 0xB2133E5110EB1C1Bll) & g_351)) > l_2065)) || p_18) < g_312)) == p_20) >= p_19))), p_17) >= l_1945) == 249ul), 27), -(8l)) >= g_844), l_2118)) < g_349)), 7ul) >= g_279) > p_19), g_271) == 0ul), l_2082), 0xB303076El))));
for ((g_353 = 0); (g_353 == -(17)); (g_353--)) {
const uint64_t l_2150 = 0x32B0695A1E92FABBll;
for ((l_1829 = -(4)); (l_1829 <= -(7)); (l_1829 = safe_sub_func_uint16_t_u_u(l_1829, 1))) {
(l_2151 = (0xB7l > l_2150));
}
(g_1327 = safe_mul_func_uint8_t_u_u((g_350 & (g_1019 | l_2058)), safe_sub_func_uint8_t_u_u(((~(safe_div_func_uint16_t_u_u(p_18, +((l_2076 != (l_2123 |= (safe_div_func_int32_t_s_s(safe_unary_minus_func_int16_t_s(-(4l)), safe_div_func_int32_t_s_s(((((((!((g_2167++)) & 0xBCE2l) > g_222), ((safe_div_func_uint16_t_u_u(0x5BC0l, 1l), p_20) ^ p_19)), g_220) < l_2128), g_323), 0xA24FC613l)) > l_1878)))))) >= l_2150), p_18), g_280)));
(g_279 |= safe_add_func_uint32_t_u_u(0ul, (safe_rshift_func_uint8_t_u_u(p_17, 4) < safe_rshift_func_uint8_t_u_s(safe_add_func_uint16_t_u_u((1l != ((g_343 = safe_div_func_int16_t_s_s(((((-(4l) || g_282) < (safe_sub_func_int8_t_s_s(((safe_mul_func_int32_t_s_s(g_313, p_16) <= ((((g_337 = safe_div_func_uint16_t_u_u(l_2188, l_2123)) && p_18) ^ 0x3D37F29E84977AC3ll) || g_206)), l_2189), l_2150) || p_17)) && l_2151) == l_2051), g_2167)) && 0x1Bl)), l_2188), 1))));
}
}

}
(g_846 |= (1ul != safe_mul_func_int16_t_s_s(safe_mod_func_uint8_t_u_u((l_2209 |= ((safe_lshift_func_uint16_t_u_u(g_308, 15) > (((g_227 || (g_840 | 0xE0F3DE5Cl)), (g_779 ^= (p_16 && (safe_add_func_uint64_t_u_u(((l_1828 = ((l_1878 = (safe_rshift_func_int8_t_s_u((0l > --(g_2212)), (safe_div_func_uint32_t_u_u((l_2210 = g_73), g_333), p_20)) | l_2072)), g_216)) == 1ul), g_355), l_2211)))), l_2206)) == 9ul)), p_18), l_2072)));
}

if (((safe_mul_func_int64_t_s_s((l_2063 ^= safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(safe_div_func_int16_t_s_s(((g_846 ^= (safe_mod_func_uint8_t_u_u(l_2204, (p_18 = safe_mod_func_int16_t_s_s(safe_add_func_int16_t_s_s(l_2205, safe_mod_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((l_2204, safe_lshift_func_int8_t_s_u(((l_1877 = safe_lshift_func_int16_t_s_u((((((((-(1l) && safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_2204, (p_18 ^ --(l_2251))) ^ p_16), (p_19, g_300))) | g_1383), 0x79l) || p_20) == p_18), 0xEEE768ADl) <= g_271), 12)) || 0xDCF52DB2l), 1)), 0ul) | l_2206), l_2053) || 0xC3l), g_270)), l_2254))), g_310)) > 0x1Al), l_2255), 0ul) >= l_2207), 0xB5931195l)), p_20) > g_216), g_210)) {
uint16_t l_2256 = 0x6469l;
int64_t l_2257 = 0l;
uint16_t l_2258 = 0xEBE8l;
int32_t l_2259 = 0x11EB2632l;
int32_t l_2260 = 0x40587882l;
(g_304 = (g_320 = 0x5.4609F6p-47));
}
else {
uint32_t l_2268 = 0x50F9BE7Dl;
int32_t l_2277 = 0x601CEFF1l;
(g_850 = ((g_194 < -(1l)), (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u(g_2212, (safe_add_func_uint64_t_u_u(l_2268, l_1877), p_19)), l_2251) != ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(0xF5l, safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((((l_2277 ^= 0x6El) & l_2251) & g_324), 5) < p_18), p_18)) <= p_20), p_18) != g_290) ^ 0xD0l)) != g_348) == g_227), p_17), p_16)) & -(1l))));
for ((g_303 = 0); (g_303 == 34); (g_303 = safe_add_func_uint8_t_u_u(g_303, 1))) {
uint8_t l_2280 = 252ul;
(l_2280 &= p_18);
}
}

(p_18 |= (l_2076 = p_19));
return l_2254;
}
uint16_t func_21(uint64_t p_22){
uint32_t l_39 = 4294967287ul;
int32_t l_74 = 0l;
int32_t l_1528 = 0x5A5C33C9l;
(g_1797 &= func_27((l_1528 ^= func_29((safe_rshift_func_int8_t_s_s(p_22, safe_add_func_int32_t_s_s(l_39, safe_mul_func_int16_t_s_s(safe_sub_func_uint8_t_u_u(func_44(p_22, p_22, safe_div_func_int8_t_s_s((func_52(func_55(g_3, safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint32_t_u_s(+((func_65(l_39, (safe_mul_func_uint32_t_u_u(safe_rshift_func_uint32_t_u_u((((((g_75 = (p_22 < (l_74 |= g_73))) < (((safe_rshift_func_uint32_t_u_u((((g_73 & l_39) | p_22) ^ g_73), p_22) ^ p_22) >= p_22) & g_73)) <= g_73) || 0x6AC1DEA9l) < p_22), p_22), p_22) == 0ul), p_22) <= g_73)), l_39) == 252ul), g_73), p_22), l_39, p_22), p_22) > 0x9Al), p_22), g_328, l_39), l_39), g_290))) != l_39), l_39, p_22, p_22, g_292))));
return g_1383;
}
int32_t func_27(uint32_t p_28){
int16_t l_1542 = 0l;
int32_t l_1545 = 0xC7818EC3l;
int32_t l_1546 = 0x3EA0D8F3l;
int32_t l_1556 = 0x8070F61El;
int32_t l_1557 = 0x04D0CF85l;
int32_t l_1560 = 0xDA425B48l;
int32_t l_1564 = -(1l);
int32_t l_1566 = 0x244243DEl;
int32_t l_1567 = -(4l);
int32_t l_1568 = 0l;
float l_1656 = 0x9.A8136Fp-47;
uint64_t l_1669 = 0x9E1631BBDC7BC824ll;
uint16_t l_1681 = 0xE36Dl;
uint16_t l_1712 = 0x4E5Al;
float l_1713 = 0x3.Ep-1;
float l_1723 = 0x0.Ep-1;
float l_1724 = 0xD.42A39Fp-1;
int32_t l_1729 = -(3l);
int32_t l_1730 = 0xD49D0137l;
int32_t l_1731 = 0x4FFFCA74l;
float l_1733 = -(0x1.4p+1);
int32_t l_1739 = 0x3759A3B3l;
int32_t l_1743 = 0x1EE30F16l;
int32_t l_1746 = 0xFCF01DA8l;
int32_t l_1748 = 0x2180F296l;
int32_t l_1751 = 0xEAB15B51l;
int32_t l_1755 = -(1l);
int32_t l_1771 = 0x5F1F3F97l;
int8_t l_1785 = 0l;
for ((g_75 = 17); (g_75 < 11); (g_75 = safe_sub_func_uint64_t_u_u(g_75, 8))) {
int32_t l_1539 = 0x91E70383l;
int8_t l_1540 = 1l;
int32_t l_1544 = 0xC0ED54AAl;
int32_t l_1547 = 1l;
int32_t l_1550 = 0x870FF388l;
int32_t l_1554 = -(2l);
int32_t l_1555 = 0xBF784E54l;
int32_t l_1559 = 3l;
int32_t l_1561 = 0xD3CD2E07l;
int32_t l_1562 = -(8l);
int32_t l_1565 = 0x36F86B20l;
for ((g_322 = 0); (g_322 == 23); (g_322++)) {
int32_t l_1541 = -(4l);
int32_t l_1543 = 0xDBEF0314l;
int32_t l_1548 = 0xCFBC0762l;
int32_t l_1549 = 0x24AABF81l;
int32_t l_1551 = 0x8823333Bl;
int32_t l_1552 = 4l;
int32_t l_1553 = 6l;
int32_t l_1558 = 0l;
int32_t l_1563 = 0l;
uint16_t l_1569 = 0x32C5l;
uint32_t l_1623 = 0x2179E593l;
(l_1566 = ((safe_add_func_int8_t_s_s(safe_div_func_uint8_t_u_u(p_28, ((safe_add_func_int16_t_s_s((g_308 = ((((l_1569--) && (g_193 > g_330)) | (safe_sub_func_uint16_t_u_u(safe_div_func_uint8_t_u_u(p_28, p_28), ((g_292 |= ((((((l_1567 = safe_unary_minus_func_int64_t_s((l_1545 = safe_mul_func_int16_t_s_s(((g_779 = safe_mod_func_uint8_t_u_u((g_356 != ((0x92l && safe_add_func_uint8_t_u_u(safe_sub_func_int32_t_s_s(safe_div_func_uint64_t_u_u((safe_lshift_func_int64_t_s_s(l_1545, 27) || safe_rshift_func_int32_t_s_s((g_276 = safe_lshift_func_uint64_t_u_u(((safe_lshift_func_uint64_t_u_s(safe_add_func_uint8_t_u_u(1ul, p_28), p_28) > 0xFD18l) > 0x17l), 31)), l_1546)), l_1557), g_1383), 0x80l)), l_1548)), 0xB0l)), 0x915Fl), p_28)))), 3l) & g_202) < 18446744073709551612ul), 0xD0l) || -(1l))) < g_1383)) <= l_1548)) ^ 1ul)), l_1547) == -(6l)) || g_336)), p_28) && l_1540), g_324));
(l_1543 ^= 1l);
(l_1564 = (((safe_mod_func_uint64_t_u_u(safe_div_func_uint8_t_u_u(safe_add_func_int64_t_s_s(safe_rshift_func_int32_t_s_u((l_1557 ^= ((l_1545 | (g_845 ^ 255ul)) != ((p_28 <= (safe_mod_func_int32_t_s_s(+((+(safe_add_func_uint8_t_u_u(l_1548, (((0x9B864783l | safe_add_func_int32_t_s_s(((safe_lshift_func_uint32_t_u_s(g_180, 10) >= safe_add_func_int16_t_s_s(0x8D42l, (l_1552 ^= safe_add_func_int16_t_s_s(safe_div_func_uint16_t_u_u(((l_1560 |= safe_sub_func_uint64_t_u_u(g_199, g_1384)) ^ 8l), p_28), g_219)))), p_28), l_1563)) <= 65530ul) > 0x77BCBE02l))) == p_28)), p_28) == 0l)) > 0x9B64l))), g_303), 0x2AB62C51134E0DC4ll), g_835), g_188) & g_200) || g_355) != l_1623));
for ((g_216 = 0); (g_216 == 10); (g_216 = safe_add_func_int64_t_s_s(g_216, 9))) {
if (l_1543) break;

}
}
(g_1338 = ((g_357 = (((((safe_div_func_int64_t_s_s((4294967295ul ^ (safe_lshift_func_int8_t_s_u(safe_lshift_func_int64_t_s_u(safe_div_func_uint32_t_u_u(safe_mod_func_int64_t_s_s((l_1564 = (((g_282 < (g_316 != (safe_add_func_uint64_t_u_u(((g_305 |= (l_1554 = (g_314 != safe_div_func_int32_t_s_s(safe_add_func_int64_t_s_s((safe_rshift_func_uint32_t_u_s(safe_add_func_int32_t_s_s((0xBBA9l ^ p_28), safe_lshift_func_uint64_t_u_u((((0ul < safe_mul_func_uint64_t_u_u((l_1555 = g_1057), p_28)) && 0x76CDB9FBl) | 6l), 8)), l_1567) <= 1ul), g_195), p_28)))) <= 0x6758l), l_1542) || 1ul))) | g_276) < p_28)), 0x264AF8603F4D7E24ll), p_28), p_28), 3) != 0xBC5AD698l)), g_281) && l_1550) >= g_355), g_1378), g_280) != l_1557)) != 0x7.254761p+80));
}
(g_337 |= g_1384);
if ((safe_rshift_func_int64_t_s_u(((g_846 ^= (l_1546 ^= (safe_mod_func_int8_t_s_s((l_1564 == (safe_div_func_uint16_t_u_u((((p_28 <= (l_1557 = (g_220, l_1567))) && (((l_1568 = (safe_sub_func_int64_t_s_s((0ul < safe_mod_func_uint64_t_u_u((safe_lshift_func_uint64_t_u_u(safe_sub_func_uint64_t_u_u((0x4832A135l ^ l_1556), p_28), 12), safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(p_28, 6l), p_28), 3l)), 1l)), g_316) || g_270)) >= l_1669) <= g_1383)) < 0x8ABC76C3AC967A71ll), -(3l)) <= g_180)), -(10l)) != g_1378))) & g_293), 10), 1l)) {
int64_t l_1671 = 1l;
int32_t l_1672 = 1l;
int32_t l_1679 = -(1l);
int32_t l_1680 = 0xA2352329l;
uint64_t l_1687 = 0ul;
(g_846 ^= ((l_1560 ^ safe_unary_minus_func_int8_t_s(((l_1671, (l_1672 = p_28)) ^ (((((g_1060 = p_28), safe_sub_func_float_f_f((((l_1671 == safe_rshift_func_int64_t_s_s(((((l_1681++) < g_1245) ^ +((((safe_mod_func_uint16_t_u_u(l_1687, safe_mul_func_int8_t_s_s((g_354 | l_1568), p_28)) & l_1542) || 1ul) || 1ul))) == g_195), g_193)), 0x9.F74972p+54) != l_1671), l_1687)) > p_28), p_28) <= 0ul)))) >= l_1687));
}
else {
int64_t l_1703 = -(1l);
int32_t l_1704 = 1l;
int32_t l_1714 = 0x38FC5E2Al;
int32_t l_1715 = 0xD1BC8FCCl;
int32_t l_1716 = 0xDC20A10Dl;
int32_t l_1717 = -(1l);
int32_t l_1718 = 0xD118046Al;
int32_t l_1719 = 1l;
int32_t l_1720 = 0xC9B9CA91l;
int32_t l_1721 = 3l;
int32_t l_1722 = 0x7CE64BB0l;
int32_t l_1725 = 8l;
int32_t l_1726 = -(1l);
int32_t l_1727 = 0l;
int32_t l_1728 = 9l;
int32_t l_1732 = 0xED3C4A02l;
int32_t l_1734 = 0l;
int32_t l_1735 = 0x9016C522l;
int32_t l_1736 = -(1l);
int32_t l_1737 = 0xF01ED9B7l;
int32_t l_1738 = -(1l);
int32_t l_1740 = 0x089B9799l;
int32_t l_1741 = 0x08B48BDCl;
int32_t l_1742 = 0xCF3F6BB0l;
int32_t l_1744 = 4l;
int32_t l_1745 = 0x3285673El;
int32_t l_1747 = 1l;
int32_t l_1749 = 0x728B67B0l;
int32_t l_1750 = 0x57AEBB22l;
int32_t l_1752 = 0xCE764D19l;
int32_t l_1753 = 6l;
int32_t l_1754 = 1l;
int32_t l_1756 = 0xF2FA7A89l;
(p_28 = safe_mul_func_uint16_t_u_u(safe_mul_func_int8_t_s_s(safe_lshift_func_uint16_t_u_u(safe_lshift_func_int32_t_s_u(((((safe_sub_func_uint8_t_u_u(g_790, safe_mod_func_int8_t_s_s((1ul < (l_1703 = ~(-(3l)))), ((l_1704 || ((l_1704 = ((l_1567 < safe_mul_func_uint8_t_u_u((g_337 = (p_28 == safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((p_28, (+((l_1704 <= (l_1568 = (l_1669 & l_1542)))) >= -(5l))), p_28) | l_1712), 3) || g_835), p_28))), g_309)) != p_28)) == 2l)) | 0xA9l))), p_28), 1ul) >= -(3l)) != 0ul), l_1714), 1), p_28), l_1567));
(g_1758--);
}

if ((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(safe_sub_func_uint16_t_u_u(l_1542, safe_rshift_func_int32_t_s_u((safe_mul_func_int16_t_s_s(g_540, (l_1771, ((g_850, (((l_1545 = safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((0xE960D46D4A8A05ACll <= (g_224 &= 0x2C7EF89A1C2AE0D2ll)), 2) <= l_1730), 13) || ((safe_sub_func_int64_t_s_s(safe_sub_func_int32_t_s_s(-(8l), safe_unary_minus_func_uint8_t_u((((safe_lshift_func_uint8_t_u_s(g_1060, p_28) ^ l_1785) > g_343), l_1556))), g_350) & 0l) != l_1785)), g_1383)), g_1758) > l_1748)) & g_334))), g_318), 25)), g_318) && g_343), p_28) >= g_274)) {
uint64_t l_1790 = 18446744073709551607ul;
int32_t l_1793 = 0x8B318B6Fl;
(g_791 ^= g_269);
if (safe_lshift_func_int8_t_s_s(p_28, safe_rshift_func_uint32_t_u_s(l_1790, safe_rshift_func_uint64_t_u_u(p_28, 16)))) {
return g_187;
}
else {
(l_1793 = l_1790);
}

}
else {
uint8_t l_1794 = 0x86l;
--(l_1794);
}

return l_1546;
}
uint32_t func_29(uint32_t p_30, uint8_t p_31, float p_32, uint32_t p_33, uint32_t p_34){
int16_t l_1472 = 5l;
int32_t l_1473 = 4l;
int32_t l_1474 = 0xCB093C6Cl;
int32_t l_1475 = 0xF4AB9431l;
int32_t l_1476 = 0x62DFBD50l;
int32_t l_1477 = 0x30CC636Fl;
int32_t l_1478 = -(1l);
int32_t l_1479 = 0x41962524l;
int32_t l_1480 = 0x4DD1A58El;
int32_t l_1481 = 8l;
int32_t l_1482 = 0xEF360B5Cl;
int32_t l_1483 = -(1l);
int32_t l_1484 = 0xC422A116l;
int32_t l_1485 = -(10l);
int32_t l_1486 = 3l;
int32_t l_1487 = 0l;
int32_t l_1488 = 9l;
int32_t l_1489 = 0xBDD97D10l;
int32_t l_1490 = -(5l);
int32_t l_1491 = -(1l);
int32_t l_1492 = 0x93079230l;
int32_t l_1493 = 0x4940AB7Cl;
int32_t l_1494 = 9l;
int32_t l_1495 = 0xFCB9C01Bl;
int32_t l_1496 = 4l;
int32_t l_1497 = -(1l);
int32_t l_1498 = 0l;
int32_t l_1499 = 0x15BC715Bl;
int32_t l_1500 = -(8l);
int32_t l_1501 = 0x50C1EABCl;
int32_t l_1502 = 0xFDFAD005l;
int32_t l_1503 = 8l;
int32_t l_1504 = 1l;
int32_t l_1505 = -(1l);
uint8_t l_1506 = 7ul;
(l_1506--);
(g_322 |= ((p_34 ^ (((((((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(0x0569l, l_1497) <= p_31) ^ l_1478), (l_1489 = safe_div_func_int32_t_s_s(((g_276 ^= ((l_1474 = ((safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(l_1495, (p_31 || (((0xC.94063Ap+34 != safe_div_func_float_f_f(safe_div_func_float_f_f(safe_add_func_float_f_f((+((g_320 = ((safe_add_func_uint16_t_u_u(g_1393, 0xA488l), 5ul), 0x7.Cp+1))) <= g_309), l_1478), 0x5.0p+1), l_1505)) != l_1483), 0xC8593407l))) || l_1500), 1l) < l_1501), g_206)) == p_33)) >= 2l), g_194))) > l_1481) || p_33) && 8ul) || l_1498) && g_193), g_845) >= 0xC7l)) >= 0x9Al));
return p_34;
}
uint8_t func_44(const uint8_t p_45, uint16_t p_46, uint8_t p_47, uint16_t p_48, int32_t p_49){
int32_t l_1264 = -(1l);
int32_t l_1296 = 0x275157D8l;
int32_t l_1297 = 0x0A1B8B59l;
int32_t l_1298 = 0xBAE0888El;
int32_t l_1299 = 7l;
int32_t l_1300 = 0xA4E4C1CAl;
int32_t l_1301 = 0x745181F4l;
int32_t l_1302 = 3l;
int32_t l_1303 = 1l;
int32_t l_1304 = 0xBDEC06ABl;
int32_t l_1305 = 0xCBA295C0l;
float l_1306 = 0x9.773D4Bp+54;
int32_t l_1307 = -(1l);
int32_t l_1308 = -(2l);
int32_t l_1309 = -(10l);
int32_t l_1310 = 0xE4A7A212l;
int32_t l_1311 = 0x66B13857l;
int32_t l_1312 = 0l;
int32_t l_1313 = 6l;
int32_t l_1314 = 0x205EEA99l;
int32_t l_1315 = -(5l);
int32_t l_1316 = -(4l);
int32_t l_1317 = 0x221C41A8l;
int32_t l_1318 = 0x3C978418l;
int32_t l_1319 = -(6l);
int32_t l_1320 = 0x71F0C889l;
int32_t l_1322 = 0x046DA276l;
int32_t l_1323 = 2l;
int32_t l_1324 = 0xF0A73116l;
int32_t l_1325 = -(4l);
int32_t l_1326 = 0x781A97BDl;
float l_1337 = 0x9.C012EEp+46;
int8_t l_1339 = 0x61l;
int32_t l_1371 = 6l;
uint16_t l_1396 = 65535ul;
uint32_t l_1413 = 0ul;
int8_t l_1416 = 0x5Bl;
int64_t l_1417 = 0l;
uint32_t l_1418 = 0ul;
uint64_t l_1432 = 0x4EEC4AB33098FDB0ll;
const uint16_t l_1471 = 0xD9CDl;
(l_1264 ^= g_349);
if (safe_rshift_func_uint16_t_u_u(safe_lshift_func_int32_t_s_u(-(1l), ((((0x4FF7l ^ safe_lshift_func_int32_t_s_s(safe_lshift_func_uint32_t_u_u((((g_326 & safe_div_func_uint8_t_u_u(safe_mod_func_int8_t_s_s(((+(safe_add_func_int32_t_s_s(safe_rshift_func_uint32_t_u_s(((l_1264 >= p_49) <= safe_lshift_func_uint64_t_u_s((((safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s((l_1319 |= (((safe_sub_func_int32_t_s_s(((g_348 <= (((((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((l_1264 >= ((safe_add_func_uint32_t_u_u((g_1321 = (g_1327++)), safe_sub_func_uint32_t_u_u(safe_add_func_int64_t_s_s(0x745621E17D088AC0ll, (((safe_unary_minus_func_int16_t_s((l_1322 = l_1305)) || 0l) != 9ul) && 0x3E5DCF461D9F4190ll)), l_1308)) >= g_334) | 0xA1l)) > l_1299), l_1318) && p_47), 0x4364D9971C002E04ll) != l_1300) & 0x779B8BD1B1A094EDll) == g_314), g_75) && l_1339)) >= l_1303), 0xE9624121l) < p_49) & 0xC072225D60DEE9CEll) <= 0x43l)), l_1309) | l_1320), p_46), 0xBA30l) != g_220) != p_48) > g_1044), g_309)), 23), 0xBDB9661Cl)) || g_356) == p_49), p_48), p_48)) < l_1298), l_1308), 2), 9)), 0x62l) != g_293) >= g_322)), 6)) {
int64_t l_1346 = 0xA44016085072C2FDll;
int32_t l_1369 = 0x090873BDl;
int32_t l_1372 = 8l;
int32_t l_1374 = 9l;
int32_t l_1379 = -(9l);
int32_t l_1380 = 0x265F0E64l;
int32_t l_1388 = 0l;
int32_t l_1391 = 1l;
(l_1308 &= ((safe_sub_func_int64_t_s_s(((p_49 != p_47) == g_322), l_1325), safe_div_func_uint16_t_u_u(safe_lshift_func_int32_t_s_u(l_1346, ((p_49 = (((0x454Dl >= (p_47, safe_mul_func_int16_t_s_s((g_846 = ((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_1321, ((safe_rshift_func_int32_t_s_u(safe_rshift_func_uint64_t_u_u((p_48 = p_48), 11), 7) == 0xEFl) <= 0x891E10B2l)), 0x527BB633l), g_328) < 65535ul), -(1l)) >= l_1346), p_49)), 0ul))) == p_45) ^ p_49)) <= g_284)), p_45)) <= l_1339));
(l_1325 = (l_1346 || p_48));
for ((g_348 = 0); (g_348 != 54); (g_348 = safe_add_func_int8_t_s_s(g_348, 3))) {
int32_t l_1370 = 0x8C6C678Al;
int32_t l_1373 = 1l;
int32_t l_1375 = -(7l);
int32_t l_1376 = -(1l);
int32_t l_1377 = 8l;
int32_t l_1381 = 0l;
int32_t l_1382 = -(1l);
int32_t l_1387 = 0xBAFF07B3l;
int32_t l_1389 = -(1l);
int32_t l_1390 = -(2l);
int32_t l_1392 = 0xFF983B3Cl;
(g_1384 = safe_mul_func_uint32_t_u_u(((p_46 ^= p_48) && ((l_1346 != (0x62E4E488l != (g_276 | (g_284 &= p_46)))) <= safe_lshift_func_uint16_t_u_u(l_1346, 3))), (((((safe_sub_func_uint16_t_u_u(g_319, ((l_1369 ^= l_1311) & (g_1393--))) == l_1396) != g_324) | l_1300), g_844) > g_1327)));
}
(l_1310 = g_314);
}
else {
uint32_t l_1409 = 18446744073709551615ul;
int32_t l_1412 = 0xCD07AFC0l;
(g_309 = ((l_1324 ^= (((((p_48 <= (l_1304 == (p_49 ^= 0x4BD95A27l))) <= 18446744073709551609ul) != ((safe_lshift_func_int64_t_s_u(safe_sub_func_uint16_t_u_u((p_48 >= 0xCC18l), safe_div_func_uint64_t_u_u(safe_rshift_func_uint64_t_u_u(safe_div_func_int8_t_s_s((--(l_1409) == (l_1319 > (l_1412, 0x40BD05D6l))), g_348), 32), g_791)), 35), l_1412) >= g_223)) >= g_309) < g_835)), p_47));
return l_1409;
}

if ((l_1413 > safe_rshift_func_uint16_t_u_u((l_1418--), safe_unary_minus_func_uint32_t_u((safe_div_func_int64_t_s_s(l_1301, ((((0ul & safe_div_func_int8_t_s_s(0x38l, (p_49 = l_1301))), ((p_47, (g_310 = (((l_1303, (l_1309 = safe_lshift_func_int64_t_s_s((l_1296 = safe_lshift_func_int64_t_s_s(-(1l), ((((safe_add_func_int16_t_s_s((g_206, l_1432), 0x30A9l) ^ g_267) && 1ul) && 1ul) ^ 4294967292ul))), 34))) >= g_846) & 8l))) || l_1324)), p_45) ^ -(1l))), 0x65A26FE6l))))) {
uint32_t l_1444 = 3ul;
int8_t l_1446 = -(8l);
for ((p_46 = -(20)); (p_46 < 11); (p_46 = safe_add_func_uint32_t_u_u(p_46, 1))) {
uint32_t l_1445 = 4294967295ul;
(g_961 = (safe_mul_func_float_f_f(safe_add_func_float_f_f(safe_mul_func_float_f_f((0x0.5p+1 != safe_sub_func_float_f_f(!(g_1019), l_1444)), (l_1445 > g_75)), (((g_73 != 0x8.4p-1) > 0xF.0315C8p+20) >= (((((l_1297 = g_356) ^ g_336) <= l_1444) | 18446744073709551615ul), l_1312))), g_312) <= p_46));
}
if ((p_49 = (l_1310 = p_49))) {
return g_199;
}
else {
return l_1446;
}

}
else {
uint16_t l_1470 = 0x495El;
(l_1308 = safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((p_47, ((g_308 = safe_mod_func_uint8_t_u_u((((((g_199 == g_227) == p_46) && safe_div_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s(safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((safe_rshift_func_int64_t_s_u(0x4E50426C33F24658ll, 16) == (l_1302 = (g_200 &= 0xE1l))) & safe_rshift_func_uint8_t_u_s((l_1298 = (p_47 = g_328)), !((p_49 = ((((g_845 <= l_1323), 0x35D1434Fl) != g_293) >= p_49))))), 0x4E767E2774651F9Cll) & l_1470) || -(10l)), 0x68F3l) > 0x00433AF9l) ^ l_1470), l_1296), 0xD5D2F59088E82222ll) > l_1470), 0xF0AEC2F2CEF1C7E8ll), -(1l)) <= p_45), l_1297)), 0xA087l) != l_1470), p_46)) ^ 65528ul)), 0x4Cl) & p_46), l_1471));
}

(l_1319 = l_1310);
return l_1339;
}
int8_t func_52(uint32_t p_53, float p_54){
const int16_t l_1000 = 0x1FC2l;
int32_t l_1017 = 0l;
int32_t l_1021 = 0xC4F841F9l;
int32_t l_1022 = 6l;
int32_t l_1023 = -(2l);
int32_t l_1032 = -(1l);
int32_t l_1033 = -(6l);
int32_t l_1040 = 9l;
uint64_t l_1047 = 0x1D580EFD9FED71F2ll;
uint64_t l_1048 = 18446744073709551615ul;
uint64_t l_1087 = 0x2BCBD9C41F3149BEll;
int8_t l_1227 = 0xC6l;
int32_t l_1228 = -(3l);
int32_t l_1229 = 0x5A1BD3D3l;
int32_t l_1230 = -(1l);
int32_t l_1231 = 0x31013115l;
int32_t l_1232 = -(8l);
int32_t l_1233 = 3l;
int32_t l_1234 = 1l;
int32_t l_1235 = 0l;
int32_t l_1236 = 0x431A5F60l;
int32_t l_1237 = 0xCB39B8E9l;
int32_t l_1238 = 7l;
int32_t l_1239 = 0x0681D239l;
int32_t l_1240 = 0x27CDD463l;
int32_t l_1241 = 0x88D2B3BCl;
int32_t l_1242 = 1l;
int32_t l_1243 = 0l;
int32_t l_1244 = 0x688ABE46l;
float l_1246 = 0x0.Bp+1;
uint32_t l_1263 = 0x1B2E708Cl;
for ((g_274 = 10); (g_274 > 50); (g_274 = safe_add_func_int8_t_s_s(g_274, 1))) {
float l_1003 = 0x8.4p+1;
int32_t l_1004 = 0l;
const int32_t l_1005 = 0xC14B810Cl;
const uint64_t l_1007 = 0x9695079AC77C1F53ll;
int32_t l_1025 = 0x2F1A7ED4l;
int32_t l_1026 = -(9l);
int32_t l_1027 = 0xA608506Cl;
int32_t l_1030 = 0xF987818Cl;
int32_t l_1031 = 0xA553AB6El;
int32_t l_1035 = 0x95A45641l;
int32_t l_1036 = 0x608CB8FDl;
int32_t l_1037 = 0x82B95F55l;
int32_t l_1041 = 0l;
int32_t l_1042 = -(9l);
int32_t l_1043 = -(1l);
int32_t l_1059 = 1l;
int8_t l_1158 = 0x0Fl;
int8_t l_1178 = 0x22l;
if ((g_334 = safe_mul_func_int16_t_s_s(p_53, ((safe_add_func_int16_t_s_s(((g_779 = (((g_224 = (safe_lshift_func_uint16_t_u_u(((1ul >= ((((~((p_53 >= ((g_322, p_53) == safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(safe_lshift_func_uint16_t_u_s(1ul, (l_1004 = (g_310 &= (safe_add_func_int8_t_s_s(safe_add_func_uint64_t_u_u(l_1000, safe_mul_func_uint64_t_u_u(p_53, g_270)), -(4l)) <= l_1000)))), p_53) != p_53), 0x98ADBFD8D1D5FBB1ll)))) | l_1005) <= 0xF3l) <= 5ul) || 0xEAl)), l_1004), 12), g_755)) && l_1004) == p_53)) & 0x934C572B0AE19827ll), 0xE03Cl) < l_1005) < 0xD278l)))) {
uint16_t l_1008 = 65528ul;
int32_t l_1018 = 8l;
int32_t l_1020 = 0l;
int32_t l_1024 = 7l;
int32_t l_1028 = 9l;
int32_t l_1029 = 4l;
int32_t l_1034 = 0x17889309l;
int32_t l_1038 = 0l;
int32_t l_1039 = -(9l);
int32_t l_1051 = 0x0BEAE4D8l;
int32_t l_1052 = -(1l);
int32_t l_1054 = 0x339AC45Bl;
int32_t l_1055 = 0x5CCEF8C5l;
int32_t l_1056 = 0x8871AC02l;
(l_1048 ^= (((+(0x2E63l), (l_1007 & l_1008)) & ((g_755 < (((safe_mod_func_int64_t_s_s(safe_lshift_func_int8_t_s_u(0l, 3), -(3l)) & safe_rshift_func_uint16_t_u_u(safe_sub_func_int8_t_s_s((g_334 && (--(g_1044) == ((l_1047 || (l_1029 = (l_1021 = g_285))), g_850))), 0x34l), l_1034)) & g_285) & l_1007)) ^ l_1024)) || 0x33l));
if ((0x4E5CC1FEl >= (g_308 = safe_add_func_uint32_t_u_u(++(g_1060), 2ul)))) {
uint32_t l_1157 = 0x98B80C3Fl;
int32_t l_1159 = 0x40136ABDl;
int32_t l_1186 = -(1l);
for ((g_353 = 0); (g_353 < 2); (g_353 = safe_add_func_int32_t_s_s(g_353, 3))) {
uint32_t l_1088 = 0xD92EB10Fl;
int32_t l_1089 = 0xCAFAC9D3l;
int32_t l_1205 = 1l;
(l_1025 = ((((9l == 0l) <= safe_div_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((l_1037 ^= ((l_1089 = safe_sub_func_int8_t_s_s((safe_lshift_func_uint64_t_u_s(((safe_sub_func_uint16_t_u_u(((((g_302 >= l_1055), ((((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((g_75 && (0xF1l > safe_mod_func_int32_t_s_s(safe_add_func_int8_t_s_s((l_1087 = safe_mul_func_int16_t_s_s(l_1047, (0xDC52l ^ -(4l)))), g_293), g_323))), l_1038), g_3), p_53) ^ 0x1Al), p_53) && g_840) | p_53)), p_53) || p_53), p_53) > g_305) || 0ul), l_1088) > l_1020), l_1024)) > 0xA62D91C7A3A573DAll)) >= p_53), 9l) | p_53) <= l_1036), p_53) ^ l_1052) > p_53), p_53)) & l_1021) ^ 9ul));
if ((g_195 | 0xEFC22C6Cl)) {
int32_t l_1105 = 0x8957FBD2l;
(l_1027 &= safe_add_func_uint32_t_u_u((l_1089 = safe_div_func_int8_t_s_s(safe_rshift_func_int16_t_s_u(0xB7E4l, safe_div_func_uint32_t_u_u((g_293 > (g_318 >= p_53)), (l_1023 = (safe_rshift_func_uint8_t_u_u(0x4Al, 0) || (l_1038 = ((0x6C8C1CC7C04B4988ll < ((safe_lshift_func_uint64_t_u_u((l_1017 ^ (g_300, safe_add_func_int16_t_s_s(+(g_268), l_1105))), 16) >= -(6l)) > l_1038)) > 1l)))))), g_1044)), -(1l)));
(l_1027 = (safe_mod_func_int64_t_s_s(!((safe_unary_minus_func_uint16_t_u(safe_mod_func_int64_t_s_s((g_303, safe_mod_func_int8_t_s_s((g_298, safe_unary_minus_func_uint64_t_u((((l_1105, (l_1105 <= safe_mul_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(safe_mod_func_uint32_t_u_u(p_53, ((g_223 | ((g_308 ^ (l_1022 = safe_sub_func_int8_t_s_s((l_1055 = p_53), safe_mul_func_uint32_t_u_u(l_1023, p_53)))), g_224)), l_1056)), 65528ul) < p_53), 0x1552719425BDB7ABll))) ^ l_1039), 18446744073709551615ul))), p_53)), -(1l))) > -(9l))), l_1088) & g_294));
if (l_1007) break;

}
else {
(g_1053 = (g_304 = (safe_div_func_float_f_f((g_309 = g_328), (p_54 = p_54)) != g_356)));
}

if (p_53) break;

if ((((safe_mul_func_uint32_t_u_u(p_53, safe_mul_func_uint8_t_u_u(((l_1027 = safe_mod_func_int64_t_s_s(!(~(p_53)), l_1088)) <= l_1088), safe_unary_minus_func_int16_t_s(((((((g_961 <= ((safe_mul_func_float_f_f(safe_mul_func_float_f_f(safe_add_func_float_f_f((safe_mul_func_int8_t_s_s(safe_mul_func_uint64_t_u_u(safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((((l_1157 &= ((g_288 = ((l_1089 = safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(0x60B397F761F5FCAAll) != (l_1030 = (0x5AEE539Al != ((l_1041 = (((g_223 | safe_rshift_func_int16_t_s_u((p_53 & l_1056), g_308)) < 4l) & g_188)), g_307)))), 65526ul)), g_1019)) & 0x53A3l)) != -(1l)) | g_353) == g_315), g_356) == 9l), p_53), p_53), g_219), g_315), g_845), 0x3.162D84p+31), p_53) != p_54) < g_294)), p_53), l_1056), l_1158) < 0xC9CBA1D16032B012ll) || 0xFDl)))) & l_1088) < 3ul) & l_1048)) {
int8_t l_1185 = 0x59l;
int32_t l_1187 = 0l;
(l_1159 |= 0l);
(g_330 = 5l);
(l_1187 = safe_mod_func_int16_t_s_s(p_53, safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((((safe_unary_minus_func_uint64_t_u(((l_1159 >= (safe_sub_func_uint8_t_u_u((g_779 ^= (l_1018 = safe_sub_func_int16_t_s_s(l_1022, (((l_1186 = ((l_1028 = ((!((safe_sub_func_uint16_t_u_u((p_53 > 18446744073709551609ul), safe_lshift_func_uint8_t_u_s(safe_add_func_int8_t_s_s((((((p_53 || (((g_75 = l_1178) == +((safe_mul_func_uint32_t_u_u(+(safe_add_func_int32_t_s_s(l_1007, p_53)), l_1089) >= l_1185))) != p_53)), p_53), g_269) & p_53) && 0xBE1341E6A13A70B7ll), g_206), 7)) < 0x8999l)) != g_355) < g_323)) == g_312)) > p_53) == p_53)))), 0x78l) < g_353)) & p_53)) | 0xB795l) && p_53) || p_53), 6), 0x87l), l_1089), 0x07AE10E44DB761E1ll)));
if (g_328) continue;

}
else {
uint64_t l_1206 = 18446744073709551611ul;
int32_t l_1207 = 6l;
(l_1089 = (l_1042 = 0l));
(l_1207 = !((g_80 &= safe_mul_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((((((((0x3AB86F2Cl > safe_lshift_func_uint32_t_u_u((l_1186 |= ((g_845 == safe_add_func_uint8_t_u_u(safe_add_func_int16_t_s_s(-(5l), ((safe_lshift_func_uint32_t_u_s((l_1205 ^= ((p_53, ((((safe_mul_func_int32_t_s_s(p_53, (l_1089 |= 5ul)) && p_53) || safe_rshift_func_uint32_t_u_s(g_319, p_53)) != l_1032) <= g_354)) ^ g_210)), 30) & 0ul), 0l)), l_1087)) > g_355)), 19)) < 2ul) == l_1206) >= g_325) != 0x76l) == g_188) >= 0ul), g_308) & 0x8DA83FFA3A10D809ll), p_53))));
}

}
}
else {
float l_1222 = 0x0.Ap+1;
int32_t l_1223 = -(6l);
(l_1030 &= safe_mul_func_uint32_t_u_u((0xF9A2F6998F8A3137ll && g_311), (0xE6B779757B044B88ll != 0xCE176C98FA473707ll)));
(l_1026 = (safe_add_func_uint8_t_u_u(g_270, g_282) != ((safe_mod_func_uint32_t_u_u(((l_1022, (safe_mod_func_int32_t_s_s(safe_div_func_uint64_t_u_u(18446744073709551615ul, ~((0l && (p_53 >= safe_rshift_func_uint16_t_u_s(65535ul, 5))))), 4294967292ul) & ((((+((((l_1047, g_293) != 4294967295ul), p_53)) < l_1039) == l_1223), g_558) || l_1223))) && g_1019), l_1223) != l_1052) != l_1223)));
return p_53;
}

}
else {
uint64_t l_1224 = 0x861B69521C0CF069ll;
--(l_1224);
}

}
(l_1227 = (0x7905l == l_1040));
++(g_1247);
(l_1263 = (safe_mul_func_uint32_t_u_u(p_53, (g_779 <= 0xA215l)) < (l_1239 = ((safe_mod_func_uint32_t_u_u(g_336, safe_rshift_func_uint8_t_u_s((((~(g_218) ^ (p_53 && (((l_1232 = (safe_mul_func_int8_t_s_s(((l_1032 <= ((g_324 |= p_53) >= (safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u(l_1233, g_210) > l_1238) && 0x3Cl), l_1087) != g_202), 1ul) | g_298))), g_202), p_53), p_53)) > p_53) && l_1236))) && -(1l)) > g_285), l_1023)) == g_206) <= g_337))));
return g_315;
}
uint32_t func_55(int64_t p_56, int32_t p_57, uint32_t p_58, int64_t p_59){
int8_t l_86 = 0x4Dl;
int32_t l_105 = -(1l);
int32_t l_132 = 0x84A182F7l;
int32_t l_178 = 0xD882E3DEl;
int32_t l_186 = 6l;
int32_t l_196 = 2l;
uint8_t l_201 = 0x78l;
int32_t l_209 = -(9l);
float l_228 = 0x5.1p-1;
int32_t l_301 = 0l;
int64_t l_335 = 0x5AAA9526B4DC75B2ll;
int32_t l_352 = 0x8E4B82FDl;
uint32_t l_495 = 0xC86FDB74l;
int16_t l_504 = -(3l);
int32_t l_525 = 0x6C6E5D27l;
const uint16_t l_882 = 0x492Cl;
(l_105 = ((((((safe_add_func_int32_t_s_s(0xA830F13El, ((safe_mod_func_uint32_t_u_u((((l_86, p_56) & (6ul || (p_57 <= ((safe_div_func_int64_t_s_s(((l_86 || l_86) ^ safe_div_func_uint32_t_u_u(1ul, safe_div_func_int64_t_s_s(((!(safe_mul_func_int32_t_s_s(safe_mod_func_uint64_t_u_u(safe_rshift_func_uint32_t_u_u(safe_lshift_func_int32_t_s_s(safe_div_func_int8_t_s_s((g_80 = (safe_unary_minus_func_uint64_t_u((g_73 = 5ul)) | g_75)), p_57), 25), 12), g_3), 1l)) || 4294967286ul) > 3l), l_86))), l_86) == l_86) == l_86)))) ^ g_75), g_75) != 0l) || g_75)) && p_58), p_59) | g_75) & 0x010CA1D2l) ^ p_59), l_86));
if (l_86) {
float l_108 = 0x9.Dp-1;
int32_t l_128 = 0xA5982ED8l;
int32_t l_135 = -(5l);
int8_t l_177 = 0xFBl;
int32_t l_275 = 1l;
int32_t l_283 = 4l;
int32_t l_297 = 0l;
float l_306 = 0x1.7p+1;
int32_t l_327 = -(1l);
int32_t l_329 = 8l;
int32_t l_332 = 0xF0B5294Al;
int32_t l_338 = 1l;
int32_t l_345 = 0xB3240654l;
uint64_t l_379 = 0x311D744D194B37AEll;
uint16_t l_382 = 0x9DD2l;
for ((g_75 = -(9)); (g_75 == 0); (g_75 = safe_add_func_int64_t_s_s(g_75, 8))) {
int64_t l_134 = 0xDBF4B608A7AA087All;
uint32_t l_151 = 0x42197F42l;
int32_t l_179 = -(5l);
int32_t l_192 = 5l;
int32_t l_204 = 0xA57F4424l;
int32_t l_205 = -(1l);
int64_t l_277 = 0x597DC8F0C86490B8ll;
int32_t l_287 = 0xD91B382Bl;
int32_t l_289 = -(1l);
int32_t l_291 = -(3l);
int32_t l_295 = 0x1311AD50l;
int32_t l_339 = 0x60D410FCl;
int32_t l_346 = -(3l);
if (p_59) {
uint64_t l_175 = 0x5E00EF88CBA7A3D7ll;
int32_t l_176 = 0xD21FDF51l;
int32_t l_190 = 0xC68BD412l;
int16_t l_191 = -(6l);
int32_t l_197 = 1l;
int32_t l_198 = 0xEC589AC8l;
int32_t l_203 = 0xC645B2A3l;
int32_t l_211 = -(1l);
uint32_t l_217 = 4294967294ul;
uint64_t l_278 = 1ul;
int32_t l_340 = 0x992B2AA7l;
int32_t l_344 = 4l;
for ((l_105 = -(6)); (l_105 > -(10)); (l_105 = safe_sub_func_int8_t_s_s(l_105, 7))) {
uint8_t l_126 = 250ul;
int32_t l_127 = 9l;
float l_131 = -(0x1.Cp+1);
int32_t l_133 = 2l;
float l_136 = -(0x1.8p+1);
uint64_t l_174 = 0ul;
int16_t l_221 = 0xE8A1l;
int64_t l_255 = 0l;
int32_t l_272 = 0xB84604D8l;
int32_t l_273 = 1l;
int32_t l_286 = 0x17DD735Al;
int32_t l_296 = -(2l);
int32_t l_299 = 0xF728D4A7l;
uint8_t l_331 = 249ul;
float l_347 = 0xE.247ED1p-94;
if (((safe_lshift_func_int64_t_s_u((g_115 = 0x15025B9248679C02ll), 11) & ((((p_57 &= (-(3l) <= g_75)) < (g_80 |= (safe_add_func_uint8_t_u_u(l_86, safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((!(0x7A7A01C1l) < !(((l_133 = (l_128 = safe_div_func_uint32_t_u_u((g_75 >= ((l_127 = l_126) > (l_128 ^ safe_mod_func_int16_t_s_s((l_132 = 4l), l_86)))), 0xB8780EC7l))) || p_58))), g_73) != 0x11122A84738BD3C8ll), l_134)) | g_3))) >= l_135) > g_75)) <= p_58)) {
(g_3 = g_3);
}
else {
uint32_t l_183 = 0ul;
int32_t l_184 = 0xDC7C683Cl;
int32_t l_185 = -(1l);
int32_t l_189 = 0xE046D479l;
int32_t l_207 = -(1l);
int32_t l_208 = 0x0A75574Cl;
int32_t l_212 = 0x95938EECl;
(l_179 &= (safe_add_func_uint32_t_u_u(0xB4D83983l, (safe_lshift_func_int32_t_s_u(safe_add_func_int8_t_s_s(safe_mod_func_uint32_t_u_u((p_57 <= (safe_sub_func_int32_t_s_s(safe_lshift_func_int32_t_s_u(safe_add_func_int32_t_s_s(((l_151 || (0ul < safe_div_func_uint8_t_u_u((l_178 = ((l_177 = safe_sub_func_uint8_t_u_u((g_80 = safe_add_func_uint8_t_u_u((l_176 = safe_sub_func_int32_t_s_s(safe_lshift_func_uint64_t_u_u(((g_3 <= safe_div_func_uint32_t_u_u(safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u((((g_73, safe_sub_func_int16_t_s_s((0ul >= safe_lshift_func_uint32_t_u_s((((l_132 |= l_126), (safe_lshift_func_uint32_t_u_u(((l_174 = p_58) && 0x104Bl), g_80) <= 0x83l)), 1ul), p_59)), l_175)) & 0x8D7427E8l) | p_58), g_80) != 248ul) == p_57), g_80), l_135)) ^ l_175), l_134), g_115)), 0xCBl)), 0xCCl)) <= l_126)), l_86))) >= p_59), 0x210CA82Dl), l_175), 4294967286ul) == p_58)), 1ul), 0xB6l), 27) < g_115)) != 0x3A0D747Cl));
(g_180--);
(l_228 = (p_58 < ((g_213 = 0x3.7D7061p-11) == ((0xC.1338C2p-75 >= safe_add_func_float_f_f(g_73, g_200)) <= (l_209 = (g_216 = p_58))))));
}

(g_357 = (l_347 = ((safe_mul_func_float_f_f((p_57, safe_mul_func_float_f_f((g_320 = (l_306 = safe_add_func_float_f_f(((l_192 = 0x0Al), (safe_sub_func_float_f_f(safe_mul_func_float_f_f(safe_mul_func_float_f_f(g_222, (g_304 = safe_div_func_float_f_f((0x6.8A9B37p-52 != safe_mul_func_float_f_f(safe_sub_func_float_f_f(safe_add_func_float_f_f(((safe_sub_func_float_f_f(safe_mul_func_float_f_f(safe_mul_func_float_f_f((((((l_255 <= ((g_80 != (safe_div_func_float_f_f(safe_div_func_float_f_f(l_134, -((l_127 = l_128))), (g_213 = ((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((p_58 == 0xF9l) & 0x71BD96BE4A3EB8F9ll) ^ 0l) <= g_220), 0x04E1l) && p_59), 0) != 18446744073709551607ul), p_56), 0x6.4p-1) == p_56))) >= p_56)) > g_206)) != p_56) >= g_218) > 0x2.041320p-72) < g_226), 0xE.D350F4p-95), p_57), 0xA.E19F66p+28) >= g_180) == l_205), g_210), -(0x2.Bp+1)), p_59)), g_199))), l_132), g_302) >= 0x9.2CAEC0p+57)), 0x2.6p-1))), p_57)), p_56) == 0x0.Bp-1) <= g_222)));
return l_209;
}
return p_58;
}
else {
int32_t l_358 = 0x06B0FEA9l;
(g_320 = 0xC.C48969p+22);
(l_352 = (safe_mul_func_int64_t_s_s(safe_add_func_uint8_t_u_u(((p_57 <= safe_mod_func_int64_t_s_s(((safe_mul_func_int32_t_s_s(p_59, (l_201 & 7ul)) <= safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_338 | 0x428253F6l), (g_3 | safe_mod_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(safe_mod_func_int32_t_s_s(safe_div_func_int32_t_s_s(0xEDB8BE2El, (((1l < p_56), 0x28l) || g_318)), 1ul), l_345), p_59) & 4294967293ul), l_301), l_186))) >= 0x3B67BDB8l), g_317)) ^ g_220), p_57)) && p_58), 1ul), 0x19EA11A8359A10DCll) & p_58));
return g_279;
}

}
++(l_379);
if (p_59) {
return p_56;
}
else {
return l_382;
}

}
else {
int32_t l_383 = 0x8A34B86Bl;
int32_t l_384 = 0xE7179A04l;
int32_t l_534 = -(8l);
int32_t l_665 = 5l;
int32_t l_782 = 1l;
int32_t l_783 = 8l;
int32_t l_784 = 0xECD0F436l;
int32_t l_787 = -(6l);
int64_t l_800 = 0x0084999A4B9D4602ll;
int32_t l_849 = -(1l);
int16_t l_938 = 0x4FFFl;
int16_t l_960 = 0l;
(g_213 = (g_320 = 0xA.3C8148p-75));
(p_57 = l_384);
for ((g_307 = 0); (g_307 != -(30)); (g_307--)) {
int32_t l_408 = -(4l);
int32_t l_438 = 0xE9B8D371l;
int32_t l_440 = 0xFE6DE962l;
int16_t l_559 = 0xE82Dl;
int32_t l_594 = -(7l);
float l_595 = 0x5.7526D6p-19;
uint8_t l_626 = 0x73l;
uint64_t l_628 = 0x49889C965924FA6Cll;
uint8_t l_656 = 5ul;
int32_t l_667 = 0l;
int16_t l_736 = 0xC09Al;
const uint32_t l_754 = 1ul;
int32_t l_831 = -(8l);
int32_t l_832 = 0xA55F202Al;
int32_t l_834 = 0x685AF391l;
int32_t l_836 = 0x102430D9l;
for ((l_132 = 0); (l_132 >= -(10)); --(l_132)) {
uint64_t l_422 = 0ul;
uint32_t l_430 = 0x170A34BBl;
int32_t l_437 = 0xA2FD7D86l;
int64_t l_550 = 0xCF4BEE0CA48ADCD1ll;
uint16_t l_625 = 1ul;
if ((g_330 = safe_div_func_int32_t_s_s((safe_mul_func_int64_t_s_s(((((l_383 > (safe_lshift_func_int64_t_s_s(safe_div_func_uint32_t_u_u((0x55981DF60D0BD520ll != safe_add_func_int16_t_s_s(((safe_mul_func_uint64_t_u_u(safe_mul_func_uint8_t_u_u((-(8l) || ((p_57 = +(l_383)) >= l_383)), (safe_lshift_func_uint16_t_u_s(g_194, ((l_408 <= (((((0x0A82l | safe_unary_minus_func_int16_t_s(safe_unary_minus_func_uint8_t_u((-(4l) && 0xEB25A575AA0C160Ell)))), g_75) || g_343), p_58) >= 0xE.6E0298p+20)), l_408)) > 0xE2EC00A1l)), p_59), g_341) <= g_210), 65535ul)), g_281), 39) >= g_225)) <= 1l) >= -(10l)) ^ -(1l)), g_194), 1l), g_219))) {
int32_t l_439 = 0xCD2D16CAl;
int32_t l_441 = 0x697B58EDl;
(l_186 = (safe_mul_func_uint32_t_u_u(!(p_57), (((((g_288 | p_56) > l_209) & (((safe_lshift_func_uint16_t_u_u(g_355, ((safe_lshift_func_uint64_t_u_s((l_439 = ((safe_mod_func_int64_t_s_s((l_422 == ((l_440 = (~((((safe_mod_func_int8_t_s_s(safe_mod_func_int8_t_s_s(p_58, ((safe_rshift_func_uint16_t_u_s((l_438 = (l_430 & safe_rshift_func_uint64_t_u_s((l_437 = ((l_352 |= safe_rshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((-(9l) != l_335) != l_105), p_57), 0x26l), 2)) && 0x32l)), 35))), l_408) > l_422) || p_58)), l_439) != g_3) & l_422) == 0ul)) && l_438)) || g_224)), 0x8EAB52121716B6ADll) & l_408), 0x89F5D12AF678EF2Cll)), l_441) ^ 0x73l) == p_59)) || g_200), 0x274E172066006056ll) <= -(2l))) > 8ul) >= 0x1Al)) && l_384));
(p_57 = (g_268 != ((g_324 = safe_mod_func_int16_t_s_s(safe_mul_func_uint16_t_u_u((l_440 & 1ul), safe_sub_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s((((p_58, 255ul) > (g_274 = p_58)), l_209), safe_mul_func_int16_t_s_s((g_288 = g_302), l_441)) >= 0xC0EE888Fl), l_441), -(1l)) | p_57), g_323)), p_57)) < 0l)));
for ((g_336 = 4); (g_336 > -(3)); (g_336--)) {
(l_441 |= p_57);
}
}
else {
uint16_t l_456 = 0x7F1Dl;
uint32_t l_541 = 0xA45F176El;
int32_t l_547 = 0xF09360FBl;
(g_304 = (g_320 = (-(0x1.Cp+1) >= l_456)));
if (safe_rshift_func_int64_t_s_s(safe_div_func_int32_t_s_s((((safe_div_func_uint64_t_u_u((safe_mul_func_uint64_t_u_u(0xDD8D88AFD82489F6ll, safe_rshift_func_int32_t_s_s((!((safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(!(((safe_mul_func_int32_t_s_s(safe_mod_func_uint64_t_u_u(((p_59 & safe_mod_func_uint8_t_u_u(((((((((safe_rshift_func_int16_t_s_s((p_58 == safe_div_func_uint32_t_u_u(((l_196 = l_437) == (l_456 || (safe_mul_func_int64_t_s_s(safe_sub_func_uint8_t_u_u(g_195, (~(g_274) >= +(safe_mod_func_uint64_t_u_u(safe_unary_minus_func_int32_t_s(g_3), (p_58 | l_456))))), g_227) > l_422))), 0x97AC61EBl)), p_56) | 0x93DEB19EFFC97FB9ll) || -(1l)) || l_383) | 1l) > l_440) >= 0x2Bl) && 0x7AE0l) < g_282), g_324)) == p_57), 0xFEDD31E41F754496ll), -(10l)) && 4294967290ul) && p_56)), p_56) > l_456), g_280) < 0x5FADD72Dl)) && l_440), g_224)) != p_56), 0xE0B8B0C2FF7168CDll) || g_326) == 0x6351l) & g_337), 0x8CCFA672l), p_56)) {
uint32_t l_492 = 0xC9903641l;
(l_492 = 0x206E420Cl);
(l_383 = (g_330 = safe_add_func_int8_t_s_s((l_495 = 0xFEl), (l_438 = ((l_437 = (((((g_349 &= p_58) < ((safe_mul_func_int32_t_s_s(((0x7Dl ^ p_57), safe_add_func_uint32_t_u_u(safe_add_func_uint16_t_u_u(0x8586l, (((((g_324 = safe_div_func_int8_t_s_s(p_58, l_196)) ^ p_58) ^ p_56) == 0xAA95A9F5l) == -(10l))), g_348)), p_56) & g_80) <= 1ul)) || p_56) & l_504) < g_274)) >= 0x62EAA756BD6667CCll)))));
}
else {
uint8_t l_522 = 246ul;
(l_522 = (((p_57 >= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint32_t_u_u(l_408, safe_mod_func_int64_t_s_s(g_226, (safe_mul_func_uint64_t_u_u(0x0DDC2BA1C7A0468Bll, (safe_rshift_func_uint16_t_u_u(safe_unary_minus_func_int8_t_s(safe_add_func_int16_t_s_s((l_440 != 1l), (p_57 >= (g_310 < safe_add_func_int16_t_s_s(safe_mod_func_uint8_t_u_u((l_438 = 0xC8l), l_383), g_279))))), 6), p_59)) | g_334))) >= l_383), l_440) | p_56)) ^ 0x7125ED15l) & 6ul));
}

(g_80 |= (((safe_div_func_int32_t_s_s(l_525, (((safe_mul_func_uint64_t_u_u(safe_mul_func_uint64_t_u_u(safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint64_t_u_u(p_59, (l_534 < ((0x6557l ^ g_326) ^ p_59))) == +((((((safe_rshift_func_uint64_t_u_s(safe_mod_func_uint32_t_u_u(l_440, 1ul), (g_540 = 0xAB7B603899305693ll)), g_309) || 0l) ^ l_384) <= p_58), g_334))), p_58), l_440), l_541) | 0x15D0FBAFl) == g_274), 4294967295ul)) | l_438) != g_73) ^ 4294967295ul));
(p_58 = (g_294 = (g_268 = ((((((safe_mul_func_float_f_f(!((g_336 >= (g_304 = safe_sub_func_float_f_f((g_320 = 0xA.C008A7p+47), g_311)))), ((0x6.1872BCp-63 == ((safe_mul_func_float_f_f((((l_550, ((safe_add_func_float_f_f((-(0x6.EC5058p+86) < (g_270 < (l_384 == safe_sub_func_float_f_f((g_213 = (((l_437 |= (safe_div_func_int64_t_s_s((g_271 |= g_218), g_343) || 0xF6C108B415367F6Bll)), 0x0.6p-1) != 0x0.Fp-1)), l_422)))), p_58) >= g_558) == g_308)) < p_59) == g_324), p_56) <= p_57) <= 0x5.Dp-1)) == p_57)), 0xECE68E690E65BC3Fll) & 18446744073709551612ul) <= g_328) && l_559) <= p_59), g_294))));
}

for ((g_227 = 0); (g_227 == 59); ++(g_227)) {
int64_t l_610 = 8l;
int32_t l_611 = -(2l);
(l_595 = (safe_sub_func_float_f_f(((+(((safe_div_func_float_f_f(p_57, (l_438 = p_58)) > (0xD.BD778Ep+99 < safe_div_func_float_f_f((0xC.5898F5p-96 < safe_mul_func_float_f_f(+(0x3.8p+1), (g_213 = safe_mul_func_float_f_f(((g_337 = ((((safe_mul_func_int32_t_s_s(g_180, safe_lshift_func_uint8_t_u_s(250ul, 5)) != (safe_sub_func_uint16_t_u_u(safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(safe_mul_func_uint32_t_u_u((l_186 = safe_rshift_func_int64_t_s_s(safe_div_func_int64_t_s_s(safe_sub_func_int64_t_s_s((p_56 != (safe_mul_func_uint64_t_u_u((0xEDB600DAl > g_199), 0x3B6F349288DCEFEBll) ^ 0x25C23AB0l)), l_430), 18446744073709551615ul), 35)), p_57), 65527ul) == p_58) ^ l_422), 0x7A2310DFl), l_440) <= p_57)) && l_422) | 0x750Bl) >= 0x83l)), g_218), 0x1.9p-1)))), p_58))) <= l_437)) >= p_56) >= 0x4.Ap-1), p_57) <= l_383));
(g_313 |= g_202);
if (safe_mul_func_uint64_t_u_u(safe_add_func_uint8_t_u_u(0x0Bl, (safe_div_func_int64_t_s_s(p_57, (safe_add_func_uint16_t_u_u((g_225, safe_mod_func_int16_t_s_s((l_611 |= safe_sub_func_int32_t_s_s(safe_mod_func_int8_t_s_s(((((l_610 | ((((l_437 = p_57) & l_610) ^ 0xA1D1B10El) && ((l_440 = 0x07l) != ((l_384 > -(4l)), l_438)))), p_59), p_56) > g_206), g_219), 0xEFC73CEEl)), p_57)), g_223), g_274)) != 0xE82CD16F8AE3CA7All)), l_383)) {
uint8_t l_627 = 0ul;
(l_628 ^= (safe_unary_minus_func_uint64_t_u((((0ul < 4294967295ul) | ((l_627 = (0xECD880B42A95AF83ll | ((l_626 = (safe_sub_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u(0x9El, l_430), 0xD77B6DBFl), (p_56 & (((((safe_sub_func_float_f_f((safe_div_func_float_f_f(p_57, (l_438 = p_57)) > l_611), p_57) != l_625), g_314) ^ g_294) > l_209) | 0l))) & 0xDEl), 7ul) != 0x8625C242l)) != 0xA82928B8l))) > l_440)), 0x5102400B42ED20D2ll)) | 0x65BFl));
}
else {
const int32_t l_637 = 0xF80CCA16l;
int32_t l_640 = 9l;
(p_57 = (0xF3FED448l == p_58));
(g_304 = (((g_357 = ((safe_lshift_func_int64_t_s_s(((((safe_sub_func_int8_t_s_s((+(safe_lshift_func_uint16_t_u_s((+(l_637), p_59), 12)), p_56), l_611) >= (safe_lshift_func_uint8_t_u_s(l_626, ((248ul >= (g_328 > ((-(8l) & 0x13C94712l) != 0x2022l))) || 9l)) & l_550)) != 0x971Bl), l_383) >= 0l), 40) > p_58), 0x1.8p+1)) != p_56) > g_75));
if (p_56) break;

}

}
return g_227;
}
if ((l_384 <= safe_mul_func_int32_t_s_s(((l_383, safe_mod_func_int64_t_s_s((g_80 &= safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(p_57, 12) <= (safe_lshift_func_int32_t_s_s((1l <= safe_div_func_int64_t_s_s((((!(l_559) < (((0ul ^ 4294967295ul), (l_440 = -(3l))) ^ (((l_383 = safe_rshift_func_uint64_t_u_u(g_307, p_56)) || p_58) >= l_534))) | l_656) && g_281), p_56)), 7) < l_594)), g_206)), p_59)) != g_322), 0x1F350A41l))) {
int32_t l_657 = 0xF39F530Dl;
if (l_657) break;

}
else {
int32_t l_662 = 1l;
int32_t l_663 = -(1l);
int32_t l_664 = 0x9C23C86Cl;
int32_t l_666 = 1l;
uint8_t l_692 = 0xD9l;
uint16_t l_817 = 65527ul;
int64_t l_830 = 0xD45ED98E562B43E6ll;
int32_t l_889 = -(3l);
for ((g_269 = 0); (g_269 >= 52); (g_269 = safe_add_func_uint16_t_u_u(g_269, 9))) {
uint32_t l_668 = 0xB5D0BEA2l;
int32_t l_734 = 0x70DFCCB5l;
int32_t l_735 = 0x4B5DF1EFl;
int32_t l_739 = 6l;
int32_t l_781 = 0l;
int32_t l_786 = 0x512B6A4Cl;
int32_t l_788 = 1l;
(g_357 = ((p_58, ((p_58 > safe_rshift_func_int8_t_s_u(p_57, (l_668--))) == safe_sub_func_int8_t_s_s(safe_lshift_func_uint32_t_u_s(safe_unary_minus_func_int32_t_s(safe_add_func_uint16_t_u_u((l_663 ^= 3ul), (g_276 == safe_rshift_func_uint32_t_u_s(((g_225 >= (l_667 = p_58)) && (safe_sub_func_int8_t_s_s(((l_666 ^= (safe_mod_func_int64_t_s_s(safe_div_func_int32_t_s_s((l_440 ^= safe_mod_func_int8_t_s_s(p_56, safe_mul_func_uint16_t_u_u(safe_lshift_func_int32_t_s_u(((l_667 ^= (g_294 != 0x8E3B5684l)) && l_692), 23), g_268))), l_196), g_294) & g_312)) == p_57), 0xAFl) & 3l)), 18)))), 29), l_662))), 0x2.4p-1));
for ((g_180 = -(16)); (g_180 < 29); (g_180++)) {
uint32_t l_695 = 9ul;
float l_737 = 0x4.E7A549p-70;
int32_t l_738 = 0x1E60B17Al;
int32_t l_756 = 0xA7460DBCl;
(l_695--);
(l_739 &= safe_rshift_func_uint32_t_u_u(((l_408 && safe_sub_func_uint8_t_u_u(safe_sub_func_uint64_t_u_u((l_664 > safe_div_func_uint32_t_u_u((((l_738 = (p_57 = ((p_58 | safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_558, g_302), (((((safe_lshift_func_uint16_t_u_s(l_408, 6) <= ((safe_sub_func_int32_t_s_s(((!((safe_add_func_uint8_t_u_u((~(0x4C68l) > (((safe_mul_func_float_f_f(safe_sub_func_float_f_f((safe_div_func_float_f_f((safe_mul_func_float_f_f((safe_mul_func_float_f_f(((((safe_sub_func_float_f_f((g_303 = l_692), safe_sub_func_float_f_f((safe_mul_func_float_f_f((g_213 = 0xC.3C972Dp+41), 0x1.5p+1) > p_57), g_342)) >= l_734) == g_223) <= g_218) < 0x2.Bp-1), l_559) <= l_734), l_735) >= 0x9.95AF2Bp-79), p_57) < -(0x1.7p+1)), l_663), l_736) > 0x9.14C5DAp-35), p_57) < p_59)), l_559) == p_59)) | p_58), p_59), l_734) & p_59) > 0x7E9Cl)) && 0x75l) & p_58) > p_56), l_668)), -(5l))) == 0x90C254B5l))) && 0ul) != 0xBCl), p_58)), g_309), -(1l))), l_383), 17));
if (g_325) continue;

(g_300 = (safe_add_func_int32_t_s_s(0x44061427l, safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((p_59 == (0x9C41B56Al & safe_lshift_func_int64_t_s_u(((safe_add_func_uint32_t_u_u((((((4294967292ul == (safe_sub_func_int16_t_s_s(((((l_384 >= (l_209 = (((safe_sub_func_uint8_t_u_u((((l_692 & g_280) | (l_301 = (((p_56, 0l) & 0ul), g_202))), l_754), p_58), g_288) <= l_739) & 0xED6515E152BCCA4Dll))), 0xA447E968C3326939ll) < p_56), p_56), g_309) == p_56)) || 9l), p_58) & g_199) & l_734), p_58) && g_321) && g_755), p_57))) < p_58) ^ p_57), g_328) ^ l_756), p_56)) > p_59));
}
(l_665 = g_3);
if (g_326) {
int32_t l_776 = 0x51083F53l;
float l_777 = 0x0.5p+1;
int32_t l_778 = 0x71ADCBBDl;
int32_t l_780 = 0xDCD98A7Fl;
int32_t l_785 = 0xF2CDFCBCl;
int32_t l_789 = 0x6FA22BDBl;
(g_270 = ((!(safe_add_func_float_f_f((safe_mul_func_float_f_f(0x5.FCF85Bp-88, safe_mul_func_float_f_f(0x1.32B258p+41, (safe_add_func_float_f_f(p_56, (g_288 < (safe_mul_func_uint16_t_u_u((-(1l) != 8l), (g_310 = l_739)), safe_div_func_float_f_f((safe_add_func_float_f_f(((safe_add_func_float_f_f((((g_357 = ((l_301 |= safe_mod_func_uint32_t_u_u(((g_791--) > p_56), (safe_sub_func_float_f_f(((g_304 = ((((safe_sub_func_float_f_f(safe_add_func_float_f_f((((g_284 || p_57), l_785) < g_280), l_783), 0x7.5B1017p+25) != l_787) != l_438) <= 0x9.4p+1) == -(0x8.Cp+1))) < p_59), g_276), 0xCA0CCC98l))), 0xE.8492A5p-3)) < g_222) != -(0x1.5p-1)), l_86) >= g_321) > 0x6.8p+1), p_57) == l_335), p_58)))) != l_800))) < l_789), -(0x6.Fp+1))) < 0x1.8p-1), g_279));
if (p_59) break;

(l_301 &= ((safe_add_func_int32_t_s_s(safe_mod_func_int16_t_s_s((1l >= ((safe_lshift_func_int64_t_s_s((p_59 || p_59), 13) || (g_350 |= (p_57 || (safe_rshift_func_uint8_t_u_s((g_348 == safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(g_328, ((0xF741A4A3l && (0x15l < (((g_319 == 18446744073709551607ul) >= l_788) ^ g_300))), 0l)) < 1l) && p_56) <= l_664), l_778) == 0x7AF63780l), p_58) ^ -(1l)), 4ul)), 1), p_58)))) & p_58)), l_626), 7l) && p_58) >= p_57));
if (l_735) continue;

}
else {
++(l_817);
return l_664;
}

}
for ((g_279 = -(4)); (g_279 < 25); (g_279 = safe_add_func_int16_t_s_s(g_279, 1))) {
int32_t l_824 = 0x9A0CFF89l;
int32_t l_825 = 0xC00230EFl;
int32_t l_833 = 0x83216532l;
int32_t l_838 = -(1l);
int32_t l_843 = 0l;
int32_t l_847 = 0x192AEC60l;
uint64_t l_853 = 0xB218D1CBB3539DA6ll;
for ((g_271 = -(16)); (g_271 < -(25)); --(g_271)) {
uint32_t l_826 = 18446744073709551612ul;
int32_t l_829 = -(1l);
int32_t l_837 = 0x458D9F5Dl;
int32_t l_839 = 7l;
int32_t l_841 = -(2l);
int32_t l_848 = 0x7DDB4AF2l;
(l_826--);
(g_850++);
(g_357 = -(0x1.4p+1));
(g_304 = safe_div_func_float_f_f(g_302, safe_sub_func_float_f_f(p_59, ((p_56 >= -(0x3.Ep-1)) <= 0x4.CECF75p-59))));
}
if ((((((g_224 = -(5l)) > ((((((l_534 = safe_lshift_func_uint64_t_u_s(g_791, 17)) < (safe_sub_func_int8_t_s_s(g_342, (g_206 == safe_add_func_uint8_t_u_u((g_225 = g_336), (safe_div_func_uint32_t_u_u(~(safe_div_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u((0l & p_58)) ^ l_105), safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_int32_t_s_s(safe_mod_func_int64_t_s_s(((l_832 = (g_80 = safe_rshift_func_uint16_t_u_s((g_342, 0x416El), 0))) != 0x32l), l_830), 0x8B60CE49l) < g_355), g_322) | g_220), p_59) < g_276), p_57))), g_323) ^ 18446744073709551615ul)))), l_882)) < 4294967289ul) & l_408), 4294967286ul), 0ul)) | 1ul) && l_882) && p_57)) {
int64_t l_883 = 0xF03D2CDD21378D74ll;
int32_t l_884 = 0x6827F034l;
int32_t l_885 = -(5l);
int32_t l_886 = 0x2DE1CC61l;
int32_t l_887 = 0x9F293DDFl;
int32_t l_888 = 0l;
int32_t l_890 = 0x40093D9Bl;
uint32_t l_891 = 5ul;
++(l_891);
(g_337 |= (g_305, (l_884 = safe_div_func_uint64_t_u_u(l_301, (safe_lshift_func_uint16_t_u_u((g_330 = (p_57 = g_846)), l_534), (safe_sub_func_uint8_t_u_u((l_664 ^= (l_667 = 0xF8l)), safe_div_func_int32_t_s_s((g_187 & (0ul <= safe_rshift_func_int64_t_s_s((safe_mul_func_int16_t_s_s((((g_310 = safe_lshift_func_uint64_t_u_u(g_323, g_317)) || l_849), l_885), g_268) == g_311), 16))), g_303)), g_321))))));
(g_320 = (safe_mul_func_float_f_f(safe_mul_func_float_f_f(l_890, safe_mul_func_float_f_f((safe_add_func_int16_t_s_s((safe_mul_func_uint32_t_u_u(safe_mod_func_uint16_t_u_u(+(safe_div_func_uint32_t_u_u(safe_mul_func_uint16_t_u_u(safe_mul_func_uint16_t_u_u(((-(1l) <= (((l_836 ^= safe_div_func_uint32_t_u_u(safe_rshift_func_int16_t_s_u(8l, (((p_59, safe_mul_func_int64_t_s_s((((l_849 |= p_57) > (g_75 ^ g_302)) < ((safe_div_func_uint64_t_u_u((l_886 ^= (~(safe_div_func_int8_t_s_s(((l_889 = (l_384 == (0ul || p_58))) != g_845), g_280)) < l_692)), 0x4199FD6A50E4DF2Fll) & p_59) >= p_57)), g_355)) ^ p_59) | 0xC45A414D3C247020ll)), g_313)) | 0x9526E6F4B2CBB07Dll), 0x2280l)), g_280), 1ul), p_56), l_663)), p_56), g_312) || g_220), p_56), p_59), p_57)), l_754) != -(0x2.Ap-1)));
}
else {
if (l_783) break;

}

(g_213 = 0x1.Cp-1);
if (g_115) {
(g_846 = p_57);
}
else {
uint32_t l_942 = 1ul;
uint64_t l_959 = 0ul;
int32_t l_962 = 0l;
(g_337 ^= ((9ul >= (((l_938 >= p_59) & (g_319 || ((((p_57 = (l_664 = safe_unary_minus_func_uint32_t_u((g_218 > g_195)))) > (l_942, safe_mod_func_uint16_t_u_u((((((g_322 = safe_rshift_func_uint64_t_u_s(safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(l_666, safe_lshift_func_int64_t_s_u((l_667 ^= safe_mod_func_int8_t_s_s(safe_sub_func_uint16_t_u_u((g_333 &= (safe_add_func_int8_t_s_s((l_959 = p_56), 6ul) < l_692)), p_58), p_58)), l_960)) < 0x3531BF1Dl), p_56), 34)), l_86) != l_938) == g_354) < l_825), g_3))) < 0xCEB02AE673D0F025ll) == 0l))), l_534)) && g_290));
(l_833 ^= l_832);
(g_304 = 0xA.B08EEBp-3);
}

}
}

(g_213 = safe_add_func_float_f_f((safe_add_func_float_f_f(0x1.1237BDp-9, ((((+((!(1l) >= ((g_279 = safe_mul_func_int16_t_s_s(safe_rshift_func_int16_t_s_s(safe_mul_func_uint64_t_u_u(2ul, l_938), 11), 8ul)) != safe_div_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_u((l_132 || safe_sub_func_int16_t_s_s(0x75C2l, ((((g_311 > (p_59 ^ 0x4F1ABF74E0D2A2A6ll)) > g_270) > p_57) == p_57))), g_281), p_57) && p_56) && p_57), g_220)))), l_626), l_86) & 0x15l), 0x7.Ap+1)) > g_842), p_58));
if (l_438) continue;

}
}

return l_209;
}
uint64_t func_65(int16_t p_66, int16_t p_67, uint32_t p_68){
int64_t l_81 = 0x74D4A52D86A0230All;
(g_80 = (p_68 && safe_rshift_func_int8_t_s_s(g_75, 4)));
return l_81;
}
int main(void){
int print_hash_value = 0;
platform_main_begin();
crc32_gentab();
func_1();
transparent_crc(g_3, print_hash_value);
transparent_crc(g_73, print_hash_value);
transparent_crc(g_75, print_hash_value);
transparent_crc(g_80, print_hash_value);
transparent_crc(g_115, print_hash_value);
transparent_crc(g_180, print_hash_value);
transparent_crc(g_187, print_hash_value);
transparent_crc(g_188, print_hash_value);
transparent_crc(g_193, print_hash_value);
transparent_crc(g_194, print_hash_value);
transparent_crc(g_195, print_hash_value);
transparent_crc(g_199, print_hash_value);
transparent_crc(g_200, print_hash_value);
transparent_crc(g_202, print_hash_value);
transparent_crc(g_206, print_hash_value);
transparent_crc(g_210, print_hash_value);
transparent_crc(g_216, print_hash_value);
transparent_crc(g_218, print_hash_value);
transparent_crc(g_219, print_hash_value);
transparent_crc(g_220, print_hash_value);
transparent_crc(g_222, print_hash_value);
transparent_crc(g_223, print_hash_value);
transparent_crc(g_224, print_hash_value);
transparent_crc(g_225, print_hash_value);
transparent_crc(g_226, print_hash_value);
transparent_crc(g_227, print_hash_value);
transparent_crc(g_267, print_hash_value);
transparent_crc(g_268, print_hash_value);
transparent_crc(g_269, print_hash_value);
transparent_crc(g_270, print_hash_value);
transparent_crc(g_271, print_hash_value);
transparent_crc(g_274, print_hash_value);
transparent_crc(g_276, print_hash_value);
transparent_crc(g_279, print_hash_value);
transparent_crc(g_280, print_hash_value);
transparent_crc(g_281, print_hash_value);
transparent_crc(g_282, print_hash_value);
transparent_crc(g_284, print_hash_value);
transparent_crc(g_285, print_hash_value);
transparent_crc(g_288, print_hash_value);
transparent_crc(g_290, print_hash_value);
transparent_crc(g_292, print_hash_value);
transparent_crc(g_293, print_hash_value);
transparent_crc(g_294, print_hash_value);
transparent_crc(g_298, print_hash_value);
transparent_crc(g_300, print_hash_value);
transparent_crc(g_302, print_hash_value);
transparent_crc(g_303, print_hash_value);
transparent_crc(g_305, print_hash_value);
transparent_crc(g_307, print_hash_value);
transparent_crc(g_308, print_hash_value);
transparent_crc(g_309, print_hash_value);
transparent_crc(g_310, print_hash_value);
transparent_crc(g_311, print_hash_value);
transparent_crc(g_312, print_hash_value);
transparent_crc(g_313, print_hash_value);
transparent_crc(g_314, print_hash_value);
transparent_crc(g_315, print_hash_value);
transparent_crc(g_316, print_hash_value);
transparent_crc(g_317, print_hash_value);
transparent_crc(g_318, print_hash_value);
transparent_crc(g_319, print_hash_value);
transparent_crc(g_321, print_hash_value);
transparent_crc(g_322, print_hash_value);
transparent_crc(g_323, print_hash_value);
transparent_crc(g_324, print_hash_value);
transparent_crc(g_325, print_hash_value);
transparent_crc(g_326, print_hash_value);
transparent_crc(g_328, print_hash_value);
transparent_crc(g_330, print_hash_value);
transparent_crc(g_333, print_hash_value);
transparent_crc(g_334, print_hash_value);
transparent_crc(g_336, print_hash_value);
transparent_crc(g_337, print_hash_value);
transparent_crc(g_341, print_hash_value);
transparent_crc(g_342, print_hash_value);
transparent_crc(g_343, print_hash_value);
transparent_crc(g_348, print_hash_value);
transparent_crc(g_349, print_hash_value);
transparent_crc(g_350, print_hash_value);
transparent_crc(g_351, print_hash_value);
transparent_crc(g_353, print_hash_value);
transparent_crc(g_354, print_hash_value);
transparent_crc(g_355, print_hash_value);
transparent_crc(g_356, print_hash_value);
transparent_crc(g_540, print_hash_value);
transparent_crc(g_558, print_hash_value);
transparent_crc(g_755, print_hash_value);
transparent_crc(g_779, print_hash_value);
transparent_crc(g_790, print_hash_value);
transparent_crc(g_791, print_hash_value);
transparent_crc(g_835, print_hash_value);
transparent_crc(g_840, print_hash_value);
transparent_crc(g_842, print_hash_value);
transparent_crc(g_844, print_hash_value);
transparent_crc(g_845, print_hash_value);
transparent_crc(g_846, print_hash_value);
transparent_crc(g_850, print_hash_value);
transparent_crc(g_1019, print_hash_value);
transparent_crc(g_1044, print_hash_value);
transparent_crc(g_1057, print_hash_value);
transparent_crc(g_1060, print_hash_value);
transparent_crc(g_1245, print_hash_value);
transparent_crc(g_1247, print_hash_value);
transparent_crc(g_1321, print_hash_value);
transparent_crc(g_1327, print_hash_value);
transparent_crc(g_1378, print_hash_value);
transparent_crc(g_1383, print_hash_value);
transparent_crc(g_1384, print_hash_value);
transparent_crc(g_1385, print_hash_value);
transparent_crc(g_1386, print_hash_value);
transparent_crc(g_1393, print_hash_value);
transparent_crc(g_1757, print_hash_value);
transparent_crc(g_1758, print_hash_value);
transparent_crc(g_1797, print_hash_value);
transparent_crc(g_2000, print_hash_value);
transparent_crc(g_2079, print_hash_value);
transparent_crc(g_2167, print_hash_value);
transparent_crc(g_2212, print_hash_value);
transparent_crc(g_2244, print_hash_value);
transparent_crc(g_2329, print_hash_value);
transparent_crc(g_2540, print_hash_value);
transparent_crc(g_2690, print_hash_value);
transparent_crc(g_2716, print_hash_value);
transparent_crc(g_2801, print_hash_value);
transparent_crc(g_2856, print_hash_value);
transparent_crc(g_2857, print_hash_value);
transparent_crc(g_2928, print_hash_value);
transparent_crc(g_3179, print_hash_value);
transparent_crc(g_3217, print_hash_value);
transparent_crc(g_3236, print_hash_value);
platform_main_end((crc32_context ^ 0xFFFFFFFFul), print_hash_value);
return (unsigned char) crc32_context;
}
