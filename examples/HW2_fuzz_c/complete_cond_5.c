int main() {
    int a = 0;
    int b = 1;
    int c = 0;
    int d = 2;
    int e = 0;
    int f = 3;
    int g = 0;
    int h = 4;
    int i = 0;
    int j = 5;
    int k = 6;

    // 5중 중첩 삼항
    int result = a ? b : (c ? d : (e ? f : (g ? h : (i ? j : k))));

    return result;
}
