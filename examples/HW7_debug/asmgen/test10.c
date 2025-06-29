int square(int x) {
    return x * x;
}

int foo() {
    return square(2);
}

int bar() {
    return square(3);
}

int main() {
    int a = foo();
    int b = bar();
    return a + b;
}