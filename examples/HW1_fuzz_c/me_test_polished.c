int main() {
    int a = 4;
    int b = -2;
    int c = 5;

    int result = !(a ^ +(+b)) && (a | +(+b)) == c;

    return 0;
}
