#include <stdio.h>

int *get_ptr(int *ptr) {
    return ptr;  // 引数のポインタをそのまま返す
}

int main(void) {
    int n = 1;
    int *ptr = get_ptr(&n);  // 変数nのポインタを引数に渡す

    printf("%d\n", *ptr);  // 1

    return 0;
}
