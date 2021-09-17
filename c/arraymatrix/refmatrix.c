#include <stdio.h>

int main(void) {
    int matrix[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33},
    };

    printf("%d\n", matrix[0][0]);  // 10
    printf("%d\n", matrix[0][1]);  // 11
    printf("%d\n", matrix[0][2]);  // 12
    printf("%d\n", matrix[0][3]);  // 13

    printf("%d\n", matrix[1][0]);  // 20
    printf("%d\n", matrix[1][1]);  // 21
    printf("%d\n", matrix[1][2]);  // 22
    printf("%d\n", matrix[1][3]);  // 23

    printf("%d\n", matrix[2][0]);  // 30
    printf("%d\n", matrix[2][1]);  // 31
    printf("%d\n", matrix[2][2]);  // 32
    printf("%d\n", matrix[2][3]);  // 33

    return 0;
}
