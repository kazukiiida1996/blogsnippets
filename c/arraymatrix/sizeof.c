#include <stdio.h>

int main(void) {
    int matrix[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33},
    };

    printf("行数: %d\n", sizeof(matrix) / sizeof(matrix[0]));
    // 行数: 3

    printf("列数: %d\n", sizeof(matrix[0]) / sizeof(matrix[0][0]));
    // 列数: 4

    return 0;
}
