#include <stdio.h>

int main(void) {
    int ary[] = {1, 2, 3};

    for (int i = 0; i < 3; i += 1) {
        printf("%d\n", ary[i]);
    }

    return 0;
}
