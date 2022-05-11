#include <stdio.h>

#define ABS(n) (n < 0 ? -n : n)

int main(void) {
    printf("%d\n", ABS(-1));  // 1

    return 0;
}