#include <stdio.h>
#include <stdlib.h>

// int型のサイズのメモリを確保して返す
int *malloc_int(int n) {
    int *ptr = malloc(sizeof(int));  // intのメモリを確保
    if (!ptr) {
        return NULL;  // メモリ確保に失敗した
    }

    *ptr = n;

    return ptr;  // 確保したメモリのポインタを返す
}

int main(void) {
    // メモリを確保
    int *ptr = malloc_int(123);
    if (!ptr) {
        return 1;
    }

    printf("%d\n", *ptr);  // 123

    free(ptr);  // メモリを解放

    return 0;
}
