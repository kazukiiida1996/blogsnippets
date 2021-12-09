#include <stdio.h>

#define numof(ary) (sizeof ary / sizeof ary[0])

int main(void) {
    int ary[] = {1, 2, 3};

    for (int i = 0; i < numof(ary); i += 1) {
        printf("%d\n", ary[i]);
    }

    return 0;
}
