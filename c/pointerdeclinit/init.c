#include <stdio.h>

int main(void) {
    int *i = NULL;
    
    int a = 1;
    int *b = &a;

    int *x = NULL, *y = NULL, *z = NULL;

    const char *s = NULL;
    const char *s2 = "Hello, World!";

    FILE *fp = NULL;
    FILE *fin = fopen("init.c", "r");
    return 0;
}