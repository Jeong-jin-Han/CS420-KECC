typedef struct {
    char x;
    int y;
    int z;
} Point;

Point make_point(int a, int b) {
    Point p;
    p.x = a;
    p.y = b;
    p.z = 0;
    return p;
}

int main() {
    Point p;
    p = make_point(1, 2);
    return p.x + p.y;
}
