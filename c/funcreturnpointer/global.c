#include <stdio.h>

int n = 1;  // グローバル変数n

int *get_global_ptr(void) {
    return &n;  // グローバル変数のポインタを返す
}

int main(void) {
    int *ptr = get_global_ptr();  // グローバル変数のポインタを得る

    printf("%d\n", *ptr);  // 1

    return 0;
}
