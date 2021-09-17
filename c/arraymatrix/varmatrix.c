#include <stdio.h>

int main(void) {
    int matrix[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33},
    };

    int y = 1;
    int x = 2;
    printf("%d\n", matrix[y][x]);  // 22

    return 0;
}
