// void a(void) {
//     int b;
//     for (; 0; b--)
//       ;
//   }
//   int main(void) {}

// typedef int a;
// void b(void) {
//   a c = 0;
//   c >>= 1;
// }
// int main(void) {}


// typedef char a;
// typedef char b;
// typedef int c;
// typedef int d;
// typedef a e;
// typedef c f;
// typedef b g;
// typedef d h;
// g i;
// f j(e k) {
//   h l;
//   for (; 0;)
//     l |= i;
//   return k;
// }
// int main(void) {}

// typedef char a;
// float(b)(a c) {
//   +0;
//   return c;
// }
// int main(void) {}

// typedef int a;
// typedef int b;
// typedef int c;
// typedef a d;
// typedef b e;
// typedef c f;
// e g;
// d h(f) { return g; }
// int main(void) {}


// typedef int a;
// typedef int b;
// typedef int c;
// typedef a d;
// typedef b e;
// typedef c f;
// e g;
// d h(float, f i) {
//   i;
//   return g;
// }
// int main(void) {}

// typedef int a;
// typedef int b;
// typedef int c;
// typedef a d;
// typedef b e;
// typedef c f;
// e g;
// d h(f i) {
//   ~(0 && i);
//   return g;
// }
// int main(void) {}

// typedef int a;
// typedef int b;
// typedef int c;
// typedef a d;
// typedef b e;
// typedef c f;
// d g(f h) {
//   e i = h ^= -6L;
//   return i;
// }
// int main(void) {}


// typedef char a;
// typedef int b;
// typedef int c;
// typedef a d;
// typedef b e;
// typedef c f;
// e g;
// d h(void) {
//   f i = i;
//   return g;
// }
// int main(void) {}


// ------------
// typedef int a;
// typedef int b;
// typedef a c;
// typedef b d;
// d(e)(d, c) {
//   c f;
//   c g = 4;
//   if (0)
//     f |= e(0, 0);
//   return g;
// }
// int main(void) {}

// int main()
// {
//     int i;
//     int sum = 0;
//     for (i = 0; i < 11; ++i) { 
//         sum += i; 
//     }
//     return sum == 55;
// }

//------------------
/////////////////////// Fail


// typedef int i32;

// struct MyStruct {
//   i32 f0;
//   i32 f1;
//   i32 f2[1];
// };

// struct MyStruct global_struct;

// int main() {
//   i32* ptr = (i32*)&global_struct;

//   ptr[0] = 1;    // f0
//   ptr[1] = 2;    // f1
//   ptr[2] = 138;  // f2[0]

//   return global_struct.f0 + global_struct.f1 + global_struct.f2[0];
// }


///////////////////////
// int main() {
//     int a, b;
//     b = -5;
//     int c = (a=32) || (b=0);
//     c += (b-=(a+=32));
//     // printf("result {%d}", c);
//     return c;
// }


// struct MyStruct {
//     int a;
//     int b;
//     int c;
// };

// struct MyStruct global;

// int main() {
//     int* p = &global.a;  // ✅ typecast 없이 struct 첫 필드 주소 사용

//     p[0] = 10;  // global.a = 10
//     p[1] = 20;  // global.b = 20
//     p[2] = 30;  // global.c = 30

//     return global.a + global.b + global.c;  // returns 60
// }


// int g_arr[3] = {1, 2, 3};
// int g_val = 5;

// int compute(int* p) {
//     int sum = 0;
//     for (int i = 0; i < 3; ++i) {
//         if (p[i] % 2 == 0) {
//             continue;
//         } else {
//             sum += p[i];
//         }
//     }

//     if (p[0] + p[1] > 4) {
//         g_val = p[2];
//     }

//     return sum + g_val;
// }

// int main() {
//     int* ptr = g_arr;
//     int result = compute(ptr);
//     return result;
// }


// int g_data[4] = {10, 20, 30, 40};
// int g_val = 0;

// void maybe_update(int* p, int index) {
//     if (p[index] > 15) {
//         g_val = p[index - 1] + p[index];
//     } else {
//         g_val = p[index];
//     }
// }

// int compute(int** pp) {
//     int* p = *pp;
//     maybe_update(p, 2);
//     return p[0] + p[1] + g_val;
// }

// int main() {
//     int* ptr = g_data;
//     int* alias = ptr;
//     int** pp = &alias;
//     return compute(pp);
// }


// struct S {
//     int x;
//     int y;
//     int z;
// };

// struct S global = {1, 2, 3};

// int* get_ptr() {
//     return &global.x;
// }

// int main() {
//     int* p = get_ptr(); // p[0] = x, p[1] = y, p[2] = z
//     p[1] = 100;
//     return global.y + p[2]; // should be 100 + 3 = 103
// }

// struct S {
//     int x;
//     int y;
//     int arr[2];
// };

// struct S global = {1, 2, {3, 4}};

// int main() {
//     int* p = &global.x;
//     p[3] = 99; // 의도적으로 global.arr[1] = 99 로 overwrite

//     return global.arr[1] + global.y; // 99 + 2 = 101
// }


// typedef int i32;

// struct MyStruct {
//   i32 f0;
//   i32 f1;
//   i32 f2[1];
// };

// struct MyStruct global_struct;

// int main() {
//   int* ptr = &global_struct.f0;  // 여기서 typecast 없이 시작
//   ptr[2] = 138;

//   return global_struct.f2[0];
// }


// int main() {
//   float a = 1.0;

//   int b = !a;
//   return b;
// }

// int main() {
//   int a, b;
//   int c = (a = 1) || (b = 2);
//   return b;
// }

// int main() {
//   int a = (1==1);
//   int b = ~(10 + ~!a);
//   return b;
// }

// int main() {
//   int a = 5;
//   float b = 2.5f;
//   float c = (float)a * b;  // 5 * 2.5 = 12.5
//   int d = (int)(c + 0.9f); // 12.5 + 0.9 = 13.4 → (int)13.4 = 13

//   int e = (int)(b) + a;    // 2 + 5 = 7

//   float f = (float)(d + e); // 13 + 7 = 20.0f

//   int g = ((int)f % 4) * 3; // (20 % 4) * 3 = 0 * 3 = 0

//   float h = (float)g + 1.5f; // 0 + 1.5 = 1.5

//   int res = (int)(h * 10.0f); // 1.5 * 10 = 15

//   return res;
// }


// int main() {
//   int a = (1 == 1);
//   int b = (0 != a) && (a || 0);
//   int c = ~(5 + ~!b);
//   int d = ((a & b) | (c ^ 42)) + ((b ? c : a) & ~(a | b));
//   d += (c -= (a += 3));
//   return d;
// }


// struct Inner {
//   int x;
//   int y;
// };

// struct Outer {
//   struct Inner a;
//   struct Inner b;
// };

// struct Outer os[2];

// int main() {
//   os[0].a.x = 10;
//   os[0].a.y = 20;
//   os[1].b.x = 30;
//   os[1].b.y = 40;

//   // struct Inner temp = {30,40};
//   struct Inner temp;
//   temp.x = os[1].b.x;
//   temp.y = os[1].b.y;
//   int result = os[0].a.x + os[0].a.y + temp.x + temp.y;

//   return result;
// }

// int main() {
//   int a = (1==1);
//   // int b = ~(10 + ~!a);
//   int b = (10 + ~!!~(a));

//   return b;
// }

// int main() {
//   int b=0;
//   int a =1032423L;
//   float c = 1.2432;
//   for(int i=0; i<10; i++){
//     for(int j=0; j<10; j++){
//       b++;
//       if ((i+j)%2 == 1) {
//         b += (a+c);
//         break;
//       } else if ((i+j)==7) {
//         continue;
//       }
//     }
//     if (i%2 == 0){
//       --b;
//       break;
//     }
//   }
//   return b;
// }

// int main() {
//   float a = 0x1.2p+1;  // 0x1.2p+1 = 2.5 * 2^1 = 5.0
//   float b = 0x1.8p+2;  // 0x1.8p+2 = 1.5 * 2^3 = 12.0

//   float sum = a + b;   // 5.0 + 12.0 = 17.0
//   return (int)sum;     // return 17
// }


// typedef signed char int8_t;
// typedef unsigned char uint8_t;

// typedef unsigned long int uint64_t;
// typedef signed long int int64_t;

// typedef unsigned int uint32_t;
// typedef signed int int32_t;
// typedef signed short int int16_t;
// typedef unsigned short int uint16_t;


// // uint16_t g_6 = 0x86E5L;
// // int64_t g_4688 = 0x19DE0D3950A4DB55LL;
// // uint32_t g_2312 = 0UL;
// // int8_t g_4263 = 0xE0L;
// // int8_t g_5499 = 0L;
// uint16_t g_6 = 0x86E5L;
// int64_t g_51 = (-1L);
// uint32_t g_52 = 18446744073709551614UL;
// int32_t g_87 = (-10L);
// int64_t g_90 = 1L;
// int32_t g_91 = 0xE8793EB1L;
// uint8_t g_98 = 0x58L;
// uint32_t g_100 = 4294967287UL;
// float g_102 = 0x1.Bp-1;
// uint32_t g_103 = 18446744073709551612UL;
// int32_t g_104 = 0xDC1AABB7L;
// uint32_t g_105 = 0xB3F0F592L;
// int16_t g_106 = 0xD189L;
// float g_111 = 0x7.CAF8BAp-47;
// uint8_t g_112 = 0x48L;
// float g_113 = (-0x1.Ap+1);
// uint8_t g_164 = 1UL;
// int8_t g_169 = 3L;
// int64_t g_170 = 0x0EAAE7D9AD9C2790LL;
// uint8_t g_171 = 1UL;
// uint32_t g_198 = 0x19FA1A8EL;
// float g_200 = 0x9.8EAA45p-14;
// uint32_t g_201 = 0UL;
// uint8_t g_231 = 0x26L;
// uint32_t g_269 = 18446744073709551615UL;
// int64_t g_285 = 0xD90D8D925811B8ABLL;
// int32_t g_301 = 6L;
// int32_t g_302 = 0x47B9E94DL;
// int16_t g_303 = 6L;
// int32_t g_306 = 0x8BDB423AL;
// uint8_t g_308 = 247UL;
// uint32_t g_312 = 6UL;
// int32_t g_399 = (-8L);
// uint8_t g_444 = 0x64L;
// float g_479 = (-0x1.8p-1);
// int32_t g_481 = 0xBAC96CF3L;
// float g_485 = 0xD.1E0242p+40;
// int64_t g_486 = (-4L);
// int64_t g_631 = 0xF8EC196896A75110LL;
// uint32_t g_632 = 1UL;
// int16_t g_653 = 0xFB2EL;
// uint8_t g_746 = 0x1AL;
// int16_t g_747 = (-3L);
// float g_749 = 0x1.0p+1;
// uint16_t g_750 = 4UL;
// uint8_t g_794 = 0x3FL;
// uint64_t g_815 = 18446744073709551615UL;
// uint32_t g_872 = 5UL;
// int32_t g_901 = 0xB2E51BCCL;
// int8_t g_916 = (-1L);
// int32_t g_917 = (-9L);
// uint64_t g_920 = 6UL;
// uint32_t g_939 = 0x8BB89209L;
// int16_t g_944 = 7L;
// int32_t g_959 = (-1L);
// uint64_t g_996 = 0x4A399AD21677764ELL;
// int64_t g_997 = 0x919631A1DCF34CF4LL;
// int16_t g_1013 = 0x236DL;
// uint8_t g_1037 = 0UL;
// int32_t g_1042 = 1L;
// uint64_t g_1043 = 0UL;
// uint16_t g_1088 = 65535UL;
// uint32_t g_1096 = 0xD69E632FL;
// int32_t g_1129 = 0x8766C23CL;
// int64_t g_1208 = 0xC87C6C958F80BF8ELL;
// uint64_t g_1252 = 1UL;
// int32_t g_1316 = 0x1C5267EBL;
// uint32_t g_1317 = 0xCFD20745L;
// uint64_t g_1341 = 0xCD0AF7E7A2705F57LL;
// int32_t g_1441 = 0x949B687AL;
// int32_t g_1471 = 0x62C4AC92L;
// int16_t g_1472 = (-6L);
// uint32_t g_1473 = 0xD725C6A0L;
// int32_t g_1511 = 0xD426DFDFL;
// int16_t g_1515 = 0L;
// int32_t g_1517 = 0L;
// int32_t g_1518 = 0x23B37663L;
// float g_1522 = 0xA.2EF16Bp+46;
// int64_t g_1524 = 0x9CD3406EC1F9A09DLL;
// int32_t g_1528 = 0xD0B9E58CL;
// int64_t g_1529 = (-7L);
// int32_t g_1530 = 0L;
// int32_t g_1533 = 0x701D93C4L;
// int8_t g_1534 = 0x14L;
// uint32_t g_1535 = 0x94E539CFL;
// int64_t g_1599 = (-8L);
// int64_t g_1601 = 0x6291151A5E2C69FDLL;
// int64_t g_1602 = (-7L);
// uint32_t g_1604 = 0x27A3E8F2L;
// int32_t g_1613 = 0xEE9A3E48L;
// uint16_t g_1614 = 6UL;
// uint64_t g_1618 = 1UL;
// int16_t g_1622 = 4L;
// int64_t g_1623 = (-7L);
// int32_t g_1624 = 1L;
// uint32_t g_1677 = 4294967290UL;
// int32_t g_1720 = 0L;
// uint32_t g_1722 = 1UL;
// uint32_t g_1865 = 0x3A9279CBL;
// int32_t g_1905 = 0xE4F6A945L;
// int32_t g_1906 = 0L;
// int32_t g_1908 = 0x40D43204L;
// int32_t g_1911 = 0x2411BD04L;
// uint64_t g_1913 = 1UL;
// int64_t g_1962 = (-1L);
// uint8_t g_1963 = 0x5BL;
// uint32_t g_1972 = 18446744073709551615UL;
// int64_t g_2027 = (-1L);
// float g_2028 = 0xE.B329AAp-5;
// int32_t g_2029 = 0xE14EED0AL;
// uint32_t g_2034 = 0xAF3D83F9L;
// uint32_t g_2169 = 0x69908DB6L;
// uint32_t g_2312 = 0UL;
// uint64_t g_2779 = 0xFA442E316908EC7CLL;
// int8_t g_2900 = 0x11L;
// int32_t g_2902 = (-1L);
// uint32_t g_2904 = 0x891B2DAFL;
// int8_t g_2942 = (-5L);
// uint64_t g_2943 = 18446744073709551607UL;
// uint32_t g_2984 = 4294967294UL;
// uint64_t g_3145 = 0x20A8537BF4ED8E10LL;
// int32_t g_3319 = 0x1DC042A9L;
// int8_t g_3463 = (-7L);
// uint32_t g_3464 = 0x4198D6CEL;
// uint64_t g_3477 = 0x84F68A1D9F81B6BCLL;
// const float g_3691 = 0x4.9F83CAp+29;
// uint32_t g_3746 = 0x86FA503CL;
// uint64_t g_3877 = 18446744073709551614UL;
// int8_t g_3888 = (-7L);
// int32_t g_3889 = (-4L);
// uint64_t g_3890 = 1UL;
// uint32_t g_3944 = 0x4FFDC46FL;
// uint16_t g_3988 = 2UL;
// int32_t g_4018 = (-8L);
// int32_t g_4019 = 0xA0B8471FL;
// uint8_t g_4022 = 255UL;
// float g_4041 = 0x3.9424F6p+96;
// uint16_t g_4042 = 0x0894L;
// uint8_t g_4133 = 6UL;
// int64_t g_4188 = 0x922A0F0928FCB1DELL;
// int8_t g_4228 = 0x49L;
// int64_t g_4235 = 0xE58925F25E432309LL;
// float g_4240 = 0x5.6FB442p+53;
// uint32_t g_4242 = 1UL;
// int64_t g_4259 = 0xC77AA33A9A1112B7LL;
// int8_t g_4260 = 3L;
// int32_t g_4261 = 0xF9FE42F1L;
// int8_t g_4263 = 0xE0L;
// int32_t g_4264 = 0x89C085A2L;
// float g_4266 = 0x4.Fp+1;
// uint16_t g_4271 = 0x2098L;
// int8_t g_4447 = 0x78L;
// uint32_t g_4449 = 0xBF095E8DL;
// float g_4458 = (-0x1.1p-1);
// uint64_t g_4460 = 0UL;
// int64_t g_4688 = 0x19DE0D3950A4DB55LL;
// uint32_t g_4690 = 0xBC0B7E74L;
// int64_t g_4921 = 0xF7D37B477BE79D9FLL;
// uint64_t g_4970 = 18446744073709551615UL;
// int64_t g_5020 = 0L;
// uint32_t g_5097 = 0x2ED1D428L;
// int32_t g_5112 = 0x52BB8205L;
// uint8_t g_5152 = 255UL;
// int32_t g_5172 = 0x811D4D91L;
// uint32_t g_5177 = 0x83FF4561L;
// int64_t g_5192 = (-1L);
// uint32_t g_5196 = 0x42D3B64BL;
// int64_t g_5277 = 1L;
// uint16_t g_5475 = 65529UL;
// int8_t g_5499 = 0L;
// uint16_t g_5513 = 65526UL;
// uint32_t g_5524 = 18446744073709551615UL;
// uint16_t g_5547 = 0xFD9CL;
// int64_t g_5650 = 0x8297E850B591C708LL;
// uint32_t g_5651 = 0xCC3B6CE7L;
// uint32_t g_5699 = 1UL;
// uint32_t g_5776 = 1UL;
// uint64_t g_5975 = 0x6884837880875D66LL;
// float g_6012 = 0x4.0CF735p+48;
// int64_t g_6013 = 0x8DA3C7413FCAB638LL;
// int16_t g_6014 = 0x8A14L;
// uint32_t g_6016 = 1UL;
// int32_t g_6110 = (-10L);
// int8_t g_6327 = (-6L);


// uint32_t crc32_tab[256];
// uint32_t crc32_context = 0xFFFFFFFFUL;
// void
// crc32_gentab (void)
// {
//  uint32_t crc;
//  const uint32_t poly = 0xEDB88320UL;
//  int i, j;
//  for (i = 0; i < 256; i++) {
//   crc = i;
//   for (j = 8; j > 0; j--) {
//    if (crc & 1) {
//     crc = (crc >> 1) ^ poly;
//    } else {
//     crc >>= 1;
//    }
//   }
//   crc32_tab[i] = crc;
//  }
// }
// void
// crc32_byte (uint8_t b) {
//  crc32_context =
//   ((crc32_context >> 8) & 0x00FFFFFF) ^
//   crc32_tab[(crc32_context ^ b) & 0xFF];
// }
// void
// crc32_8bytes (uint64_t val)
// {
//  crc32_byte ((val>>0) & 0xff);
//  crc32_byte ((val>>8) & 0xff);
//  crc32_byte ((val>>16) & 0xff);
//  crc32_byte ((val>>24) & 0xff);
//  crc32_byte ((val>>32) & 0xff);
//  crc32_byte ((val>>40) & 0xff);
//  crc32_byte ((val>>48) & 0xff);
//  crc32_byte ((val>>56) & 0xff);
// }
// void
// transparent_crc (uint64_t val, int flag)
// {
//  crc32_8bytes(val);
//  if (flag) {

//  }
// }

// int8_t g_6327 = (-6L);
// int32_t g_6110 = (-10L);
// int main() {
//   int print_hash_value = 0;
//   crc32_gentab();
//   transparent_crc(g_6110, print_hash_value);
//   transparent_crc(g_6327, print_hash_value);

//   return (unsigned char)(crc32_context);
// }

// int main() {
//   short int a_1 = 145;
//   char a = ~!a_1;
//   int b= 11243;
//   b ^= (a==b) || (0 == 1);
//   return b;
// }


// typedef signed char int8_t;
// typedef unsigned char uint8_t;

// typedef unsigned long int uint64_t;
// typedef signed long int int64_t;

// typedef unsigned int uint32_t;
// typedef signed int int32_t;
// typedef signed short int int16_t;
// typedef unsigned short int uint16_t;
// int32_t g_val = 250;
// uint32_t g_cmp = 100;

// uint8_t func_sub(uint8_t a, uint8_t b) {
//     return a - b;
// }

// uint16_t func_div(uint8_t a, uint8_t b) {
//     return b == 0 ? 0 : a / b;
// }

// int64_t func_mod(uint8_t a, uint8_t b) {
//     return b == 0 ? 0 : a % b;
// }

// int main() {
//     uint8_t x = 10;
//     uint8_t y = 2;
//     uint8_t z = 5;

//     g_val ^= ((!x), func_mod(y, func_sub(func_div(z, 1), 1))) <= g_cmp;

//     return g_val;
// }


// typedef unsigned long long uint64_t;
// typedef unsigned int uint32_t;
// typedef signed short int int16_t;
// typedef unsigned char uint8_t;
// typedef signed char int8_t;


// int8_t g_val = 250;
// uint32_t g_base = 100;
// uint32_t g_shift = 3;
// uint64_t g_big = 0xFFFFFFFFFFFFFFFFULL;

// uint8_t func_div(uint8_t a, uint8_t b) {
//     return b == 0 ? 1 : a / b;
// }

// uint8_t func_sub(uint8_t a, uint8_t b) {
//     return a - b;
// }

// uint8_t func_mod(uint8_t a, uint8_t b) {
//     return b == 0 ? 1 : a % b;
// }

// uint8_t func_11(uint32_t a, uint32_t b, uint32_t c, int cond, uint32_t fallback) {
//     if (cond) return (a ^ b) & 0xFF;
//     return fallback & 0xFF;
// }

// int main() {
//     uint32_t l_3 = 1;
//     uint32_t l_17 = 0;

//     g_val ^= (
//         (!l_3),
//         (
//             func_mod(
//                 g_base,
//                 func_sub(
//                     func_div(
//                         func_11(
//                             l_3,
//                             g_base,
//                             (l_17 = 0),
//                             ((g_base | (g_big * (g_base || (~(3 | 5))))) <= l_3) || l_3,
//                             l_3
//                         ),
//                         1
//                     ),
//                     1
//                 )
//             )
//         )
//         <= g_shift
//     );

//     return g_val;
// }

// typedef unsigned long long uint64_t;
// typedef unsigned int uint32_t;
// typedef signed short int int16_t;
// typedef unsigned char uint8_t;
// typedef signed char int8_t;
// int8_t g_val = 250;
// uint8_t g_cmp = 100;
// int main() {
//   uint8_t a = 10;
//   uint8_t b = 2;
//   uint8_t div = a / b;
//   uint8_t sub = div - 1;
//   uint8_t mod = b % sub;

//   g_val |= (mod > g_cmp);

//   return g_val;
// }

// typedef unsigned int uint32_t;
// uint32_t g_4 = 0;

// int func_1(void) {
//     int l_3 = 8;
//     g_4 = (g_4, l_3); // 콤마 연산자 사용
//     return g_4;
// }

// int main(void) {
//     func_1();
//     return g_4; // g_4 == 8 expected
// }

// #include <stdint.h>
// typedef unsigned long long uint64_t;
// typedef unsigned int uint32_t;
// typedef signed short int int16_t;
// typedef unsigned char uint8_t;
// typedef signed char int8_t;
// uint32_t g_4 = 250;
// uint32_t g_6 = 10;
// uint8_t g_result = 0;

// uint8_t func_11(uint8_t a, uint8_t b) {
//     return a ^ b; // 비트 XOR
// }

// int main(void) {
//     uint8_t l_3 = 1;
//     uint8_t l_17 = 0;

//     // 복잡한 우변: 콤마 연산 + 함수 호출 + 비트 연산 + 할당
//     g_4 &= ((g_4 , (func_11(l_3, g_6) % (l_17 + 1))) <= g_6);

//     g_result = g_4;
//     return g_result;
// }



// typedef long long i64;
// typedef unsigned long long u64;
// typedef int i32;
// typedef float f32;

// i64 g_4 = 0;
// i64 g_6 = 42;
// i64 g_207 = 999;
// i32 g_196 = 1;
// f32 g_f = 4.6e-25f;
// f32 g_extra = 6.32112f;

// i64 safe_mod_func_int64_t_s_s(i64 a, i64 b) { return b ? a % b : 0; }
// i32 safe_rshift_func_int16_t_s_s(i32 a, i32 b) { return a >> b; }
// i32 safe_unary_minus_func_int16_t_s(i32 x) { return -x; }
// f32 safe_add_func_float_f_f(f32 a, f32 b) { return a + b; }

// int main() {
//     i32 l_4812 = 12;
//     i32 l_5060 = l_4812;
//     i32 l_4817 = (g_207 > (l_5060 = l_4812));  // true → 1
//     i32 shift_result = safe_rshift_func_int16_t_s_s(0xD8EB, 13); // 6

//     f32 f_sum = safe_add_func_float_f_f(g_f, g_extra);  // float expression
//     i32 float_cmp = (f_sum > 0.0f);                     // cast to bool

//     // 복잡한 조건: safe_mod + rshift + float + unary minus
//     i64 nested_mod = safe_mod_func_int64_t_s_s(
//         (l_4817 & shift_result) && float_cmp,
//         g_6
//     );

//     i64 final_val = ~(nested_mod > 0 ? 1 : 0);  // same as in original

//     g_4 = final_val ^ (safe_unary_minus_func_int16_t_s(g_196) & 0xFF); // 추가 xor

//     return (int)g_4;
// }

// typedef unsigned long long uint64_t;
// typedef signed long long int64_t;

// typedef unsigned int uint32_t;
// typedef signed int int32_t;

// typedef signed short int int16_t;
// typedef unsigned char uint8_t;
// typedef signed char int8_t;

// typedef uint64_t u64;
// typedef int64_t i64;
// typedef uint32_t u32;
// typedef int32_t i32;
// typedef float f32;

// i64 g_4 = 0;
// i32 g_6 = 42;
// i32 g_207 = 50;
// i32 g_2430 = 3;
// i32 g_4685 = 999;
// u64 g_big = 0xB5EB6DF80263817ALL;
// f32 g_f1 = 0x1.2p-10;
// f32 g_f2 = 0xB.1F85D8p-85; // 표현 가능
// f32 g_f3 = 0x1.3p+0f;

// i64 safe_mod_func_int64_t_s_s(i64 a, i64 b) { return b ? a % b : 0; }
// u64 safe_rshift_func_int16_t_s_s(i32 a, i32 b) { return a >> b; }
// u64 safe_lshift_func_uint32_t_u_u(u32 a, u32 b) { return a << b; }
// u64 safe_mul_func_int32_t_s_s(i32 a, i32 b) { return (i64)a * b; }
// u64 safe_div_func_uint64_t_u_u(u64 a, u64 b) { return b ? a / b : 0; }
// i32 safe_sub_func_int32_t_s_s(i32 a, i32 b) { return a - b; }
// f32 safe_add_func_float_f_f(f32 a, f32 b) { return a + b; }

// int main() {
//     i32 l_1 = 10, l_2 = 5, l_3 = 1, l_4 = 0;
//     i32 l_5 = (g_207 > (l_1 + l_2));         // g_207 > 15 -> 1
//     i32 l_6 = safe_rshift_func_int16_t_s_s(0xD8EB, 13); // 6
//     i32 cond1 = l_5 & l_6;                   // 1 & 6 -> 0

//     f32 float_expr1 = safe_add_func_float_f_f(g_f1, g_f2);  // 매우 작음
//     f32 float_expr2 = safe_add_func_float_f_f(float_expr1, g_f3); // 약 1.0 이상
//     i32 float_cmp = float_expr2 > 0.5f;      // true -> 1

//     u64 shift_val = safe_lshift_func_uint32_t_u_u((g_2430 * 2), 3); // 6 << 3 = 48
//     u64 div_val = safe_div_func_uint64_t_u_u(shift_val, g_6); // 48 / 42 -> 1
//     u64 mul_val = safe_mul_func_int32_t_s_s((i32)div_val, 255);     // 255

//     i32 mix_logic = ((cond1 && float_cmp) || ((mul_val ^ 1) <= 256)); // true
//     i64 mod_result = safe_mod_func_int64_t_s_s(mix_logic, g_6);       // 1 % 42 = 1

//     g_4 = ~(mod_result != 0 ? 1 : 0);  // 1 -> ~1 -> -2

//     return (int)g_4;
// }


// int main() {
//     int a = 234;
//     int b = 234;
//     int c = a + 2;
//     int d = b + 2; // c

//     int e = d;

//     return b;
//   }

int main() {
    int a = 1;

    // 첫 번째 계산: x1 = a + 37
    int x1 = a + 37;

    // 두 번째 계산: y1 = x1 + 42
    int y1 = x1 + 42;

    // 중복 계산: x2 = a + 37 (x1과 동일한 계산)
    int x2 = a + 37;   // redundant

    // 중복 계산: y2 = x2 + 42 (y1과 동일한 계산)
    int y2 = x2 + 42;  // redundant

    int t1 = x1 + x2; // x2 -> x1
    int t2 = y1 + y2; // y2 -> y1

    /*
    gvn 은 replace를 하는 거지 instruction을 바꾸는 것이 아님
    */

    // 결과 확인
    return 0;
}