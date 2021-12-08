#include <stdio.h>

int main(void) {
    int a = 0;

    for (int i = 0; i < 10; i += 1) {
        a += 1;  // 足し算
    }

    printf("a = %d\n", a);
    // a = 10

    return 0;
}
