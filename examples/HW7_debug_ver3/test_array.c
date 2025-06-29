int main() {
    int a[5];
    int len = 5;
    int sum = 0;

    for (int i = 0; i < len; i++) {
        a[i] = i;
    }

    for (int i = 0; i < len; i++) {
        sum += a[i];
    }


    return sum == 10;
}
