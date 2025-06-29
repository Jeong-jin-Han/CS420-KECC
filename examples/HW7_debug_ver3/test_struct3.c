struct Sub {
    long m1;
    long m2;
};


struct Sub foo(struct Sub p1) {
    // struct Sub r = p1;
    p1.m1 = 10;
    return p1;
}

int main() {
    struct Sub a = {1, 2, 3, 4};
    struct Sub r = foo(a);
    return r.m1 == 10;
}
