#include <stdio.h>

#define DECL(type, var, val) type var = val
#undef DECL
#define DECL(type, var) type var = 0

int main(void) {
    DECL(int, x);

    printf("%d\n", x);  // 0

    return 0;
}
