#include <stdlib.h>

int main(void) {
    // 動的な2次元配列の確保
    int nrows = 3;  // Y次元の要素数
    int ncols = 4;  // X次元の要素数
    int **matrix = calloc(nrows, sizeof(int *));

    for (int y = 0; y < nrows; y += 1) {
        matrix[y] = calloc(ncols, sizeof(int));
    }

    // 動的な2次元配列の解放
    for (int y = 0; y < nrows; y += 1) {
        free(matrix[y]);
    }
    free(matrix);

    return 0;
}
