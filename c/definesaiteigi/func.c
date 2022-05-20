#include <stdio.h>

#define DECL(type, var, val) type var = val

int main(void) {
    DECL(int, x, 123);

    printf("%d\n", x);  // 123

    return 0;
}
