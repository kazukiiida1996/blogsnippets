#include <stdio.h>

int main(void) {
    int a = 1;
    int *p = &a;
    int **pp = &p;

    printf("p = %p\n", p);
    printf("pp = %p\n", pp);
    printf("*pp = %p\n", *pp);
    printf("**pp = %d\n", **pp);

    return 0;
}
