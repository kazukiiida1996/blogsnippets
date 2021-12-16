#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p = malloc(sizeof(int));  // int型のサイズの変数を動的に確保する

    printf("%p\n", p);  // malloc()が確保したメモリのアドレスを見る
    // 0x12345678

    free(p);  // 確保したメモリを解放する
    return 0;
}
