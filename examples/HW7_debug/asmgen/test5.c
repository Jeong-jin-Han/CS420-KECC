typedef struct {
    char x;
    char x2;
    char x3;
    int y;
    int z;
    int z2;
    int z3;
} Point;

Point make_point(int a, int b) {
    Point p;
    p.x = a;
    p.x2 = 1;
    p.x3 = 2;
    p.y = b;
    p.z = 0;
    p.z2 = 1;
    p.z3 = 2;
    return p;
}

int main() {
    Point p;
    p = make_point(1, 2);
    return p.x + p.y + p.z;
}
