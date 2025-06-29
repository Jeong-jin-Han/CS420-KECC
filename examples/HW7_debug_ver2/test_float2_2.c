float f1() {
    float a = 1.5f;
    float b = -2.3f;
    return a + b;  // 결과: -0.8
}

int main() {
    return (int)(f1());  // -0.8 + (-3.1415) ≈ -3.9415 → (int) -3
}
