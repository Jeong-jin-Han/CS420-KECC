typedef struct {
    int x;
    int y;
} Point;

Point make_point(int a, int b) {
    Point p;
    p.x = a;
    p.y = b;
    return p;
}

int main() {
    Point p;
    int x = 0;
    if (1)
    {
        x += 1; 
        /* code */
    } else {
        p = make_point(1, 2);
    }
    

    return 0;
}
