#include <stdio.h>

int main(void) {
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    for (int i = 0; i < 2; i += 1) {
        for (int j = 0; j < 3; j += 1) {
            printf("%d ", mat[i][j]);
        }
        puts("");
    }

    return 0;
}
