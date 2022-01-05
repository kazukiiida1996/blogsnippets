#include <stdio.h>

int main(void) {
    int a = 3;

    a %= 2;

    printf("%d\n", a);  // 1

    return 0;
}
