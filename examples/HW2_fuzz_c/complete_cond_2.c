int main() {
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 0;
    int e = 3;
    int f = 4;

    // 조건에도 연산, else에 중첩 조건
    int result = (a + b) ? (c * 2) : (d ? e : f);

    return result;
}
