struct Sub {
    long m1;
    long m2;
    long m3;
    long m4;
};


struct Sub foo(struct Sub p1) {
    struct Sub r = p1;
    r.m1 = 10;
    return r;
}

int main() {
    struct Sub a = {1, 2, 3, 4};
    struct Sub r = foo(a);
    return r.m1 == 10;
}
