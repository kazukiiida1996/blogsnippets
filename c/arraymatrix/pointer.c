#include <stdio.h>

int main(void) {
    int matrix[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33},
    };

    int *p = (int *) matrix;

    printf("%d\n", *(p + (0 * 4) + 1));  // 11
    printf("%d\n", *(p + (1 * 4) + 2));  // 22

    return 0;
}
