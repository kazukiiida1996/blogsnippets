#include <stdio.h>

int main(void) {
    // 九九の表を作成
    int kuku[9][9];

    for (int y = 0; y < 9; y += 1) {
        for (int x = 0; x < 9; x += 1) {
            kuku[y][x] = (y + 1) * (x + 1);
        }
    }

    // 九九の表を出力
    for (int y = 0; y < 9; y += 1) {
        for (int x = 0; x < 9; x += 1) {
            printf("%2d ", kuku[y][x]);
        }
        printf("\n");
    }

    return 0;
}
