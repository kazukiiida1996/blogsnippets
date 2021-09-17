#include <stdio.h>

int main(void) {
    int matrix[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33},
    };

    int **pp = matrix;
    // warning: initialization of ‘int **’ from incompatible pointer type ‘int (*)[4]’

    printf("%d\n", pp[0][0]);
    // Segmentation fault

    return 0;
}
