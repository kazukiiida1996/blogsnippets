#include <stdio.h>

int *get_static_ptr(void) {
    static int n = 1;  // staticで定義
    return &n;  // ポインタを返す
}

int main(void) {
    // 関数内のstaticなポインタを得る
    int *ptr = get_static_ptr();

    printf("%d\n", *ptr); // 1

    return 0;
}