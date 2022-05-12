#include <stdio.h>

int main(void) {
    int ary[] = {1, 2, 3, -1};

    for (int *p = ary; *p != -1; p += 1) {
        printf("%d\n", *p);
    }

    return 0;
}
