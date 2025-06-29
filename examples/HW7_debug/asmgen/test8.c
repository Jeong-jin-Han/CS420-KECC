typedef struct {
    int x;
    int y;
} Point;

Point make_point(Point p1, int b) {
    p1.x = 10;
    p1.y = b;
    return p1;
}

int main() {
    Point p = {1,2};
    p = make_point(p, 42);
    return p.x + p.y;
}
