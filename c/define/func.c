#include <stdio.h>

#define DEF_VAR(type, var, value) type var = value

int main(void) {
    DEF_VAR(int, x, 1);

    printf("%d\n", x);
    
    return 0;
}
