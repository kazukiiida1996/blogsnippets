#include <stdio.h>

int main(void) {
    int a = 1;
    int *p = &a;
    int *q = &a;

    if (p == q) {
        puts("同じメモリです。");
    }
    
    return 0;
}
