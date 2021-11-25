#include <stdio.h>

int main(void) {
    int matrix[2][4] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
    };
    int (*pp)[4] = matrix;  // 二次元配列のポインタpp

    printf("pp[0][0] = %d\n", pp[0][0]);  // 1
    printf("pp[0][1] = %d\n", pp[0][1]);  // 2

    printf("pp[1][0] = %d\n", pp[1][0]);  // 5
    printf("pp[1][1] = %d\n", pp[1][1]);  // 6

    return 0;
}
