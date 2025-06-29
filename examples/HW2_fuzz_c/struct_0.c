// typedef struct {
//     char a;
//     struct {
//         int b[4][5];
//     };
//     int k[4][5];
//     double c;
// } Temp;

// void init(int row, int col, int arr[4][5]) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             arr[i][j] = i * j;
//         }
//     }
// }


// int main() {
//     Temp temp;

//     // Temp temp2;
//     temp.a = 1; // pass
//     int row = 4, col = 5;
//     init(row, col, temp.k);
 
//     temp.c = 3; // pass
//     // temp2 = temp;
//     return 0;
// }


// typedef struct {
//     char a;
//     int b[2][2];
//     double c;
// } Temp;



// int main() {
//     Temp temp = {1, {{0,0},{0,0}}, 3}; // sucess
//     return 0;
// }


// typedef struct {
//     char a;
//     double c;
// } Temp;



// int main() {
//     Temp temp = {1, 3}; // sucess
//     return 0;
// }


typedef struct {
    char a;
    struct {
        int b[4];
    };
    double c;
} Temp;



int main() {
    Temp temp = {1, {{0,1,2,3}}, 3}; // fail
    // Temp temp = {1, {0,1,2,3}, 3}; // sucess

    return 0;
}



// typedef struct {
//     char a;
//     struct{
//         int b[2][2];
//     };
//     double c;
// } Temp;



// int main() {
//     Temp temp = {1, {{{1,2},{3,4}}}, 3}; // sucess
//     return 0;
// }