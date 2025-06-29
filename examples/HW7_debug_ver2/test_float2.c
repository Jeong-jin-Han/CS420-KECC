float f1() {
    float a = 1.5f;
    float b = -2.3f;
    return a + b;  // 결과: -0.8
}

double f2() {
    double x = 3.1415;
    double y = -1.0;
    return x * y;  // 결과: -3.1415
}

int main() {
    return (int)(f1() + f2());  // -0.8 + (-3.1415) ≈ -3.9415 → (int) -3
}
