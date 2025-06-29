// int main() {
//     int a = 1;
//     int b = 0;
//     int c = 1;
//     int d = 10;

//     // return a && b && c || a && d;  // okay
//     // return a && b && c && a && d;  // -> Okay
//     // return a || b || c || a || d;  // -> Okay
//     // return a || b || c && a || d;  // -> Okay
//     // return a && b && c && a || d;  // -> okay
//     return (a==b) && (b==c) || (a==b) && (d==a); // -
// }

int main() {
    int a = 1;   // true
    int b = 0;   // false
    int c = 1;   // true
    int d = 0;   // false
    int e = 1;   // true
    int f = 1;   // true
    int g = 0;   // false

    return 
        (a && b || c && d || e && f || g)      // expect: 1
        && (a || b && c || d)                  // expect: 1
        && (!(a && !b) || (c && !d))           // expect: 1
        && ((a || b) && (c || d) || (!e && f)) // expect: 1
        && (g || b || 0 || 1);                 // expect: 1
    // return !a;
}

