// main.c
#include <stdio.h>

extern int my_global;

int main(void) {
    printf("%d\n", my_global);
    return 0;
}
