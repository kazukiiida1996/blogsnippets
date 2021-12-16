#include <stdio.h>

int main(void) {
    int a = 1;
    int *p = &a;

    printf("%d\n", *p);  // pの持つアドレスの実体（変数a）を参照する
    // 1

    return 0;
}
