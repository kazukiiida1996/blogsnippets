#include <stdio.h>

void func(int matrix[3][4]) {
    printf("%d\n", matrix[0][1]);  // 11
    printf("%d\n", matrix[1][2]);  // 22
}

int main(void) {
    int matrix[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33},
    };

    func(matrix);

    return 0;
}
