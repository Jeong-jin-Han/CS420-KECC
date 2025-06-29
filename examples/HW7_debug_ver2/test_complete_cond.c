/* 완전히 새로 만든, 디버그용 ‘짧은’ 버전 */

int func_0(void)
{
    /* 첫 번째 깊이 */
    int a = 0,  b = 42, c = 7;

    /* 두 번째 깊이 */
    int d = 0,  e =  0, f = 3;

    /* 세 번째 깊이 */
    int g = 1,  h = 99, i = 0;

    /* 3-level 중첩 삼항연산:
         └ (a ? b : c) == 7  → ① 이면 1  아니면 0
         └ (d ? e : f) == 3  → ②
         └ (g ? h : i) == 99 → ③
       결과 → ① ? ② : ③  == 0
       실제 값은 항상 1  */
    return (( (a ? b : c) == 7     ?      /* ①: 0 ? → false  */
              ((d ? e : f) == 3)   :      /* ②: true(=1)     */
              ((g ? h : i) == 99) )       /* ③: not reached  */
            ) == 0;                      /* 1 == 0 → false  ⟹  “!false” 로 1 */
}

int func_1(void)
{
    /* 구조만 조금 바꾼, 역시 3-level 중첩 */
    int p = 1, q = 0, r = 0;
    int s = 1, t = 4, u = 4;
    int v = 0, w = 0, x = 5;

    /*  (p ? q : r) == 0   → ① true
        (s ? t : u) == 4   → ② true
        (v ? w : x) == 5   → ③ true
        ① ? ② : ③         → 1
        1 == 1             → 1                                */
    return ( ( (p ? q : r) == 0 ? ((s ? t : u) == 4)
                                 : ((v ? w : x) == 5) ) == 1 );
}

int main(void)
{
    /* 두 함수 모두 1 이므로 결과는 1 */
    return (func_0() && func_1()) == 1;
}
