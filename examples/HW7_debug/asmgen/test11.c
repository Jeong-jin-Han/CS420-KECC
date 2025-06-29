typedef struct {
    int x;
    int y;
} Point;

int make_point(Point p1, int b) {
    p1.x = 10;
    p1.y = b;
    return p1.y;
}

int main() {
    Point p = {1,2};
    int k = make_point(p, 42);
    return k;
}