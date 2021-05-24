#include <stdio.h>

#define NIL (void *)0

int main(void) {
    char *p = NIL;
    printf("%p\n", p);
    return 0;
}
