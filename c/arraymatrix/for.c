#include <stdio.h>

int main(void) {
    int matrix[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33},
    };

    for (int y = 0; y < 3; y += 1) {
        for (int x = 0; x < 4; x += 1) {
            printf("%d ", matrix[y][x]);
        }
        printf("\n");
    }
    // 10 11 12 13
    // 20 21 22 23
    // 30 31 32 33
    
    return 0;
}
