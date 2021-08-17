#include <stdio.h>

int main(void) {
    int a[] = {1, 2, -1};
    int *b = a;

    for (int *p = b; *p != -1; p += 1) {
        printf("%d\n", *p);
    }

    return 0;
}