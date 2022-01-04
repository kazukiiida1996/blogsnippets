#include <stdio.h>

int main(void) {
    int j = 0;

    for (int i = 0; i < 4; i += 1) {
        if (i == 0) {
            j += 1;
            continue;
        }
        if (i == 1) {
            j += 2;
            continue;
        }
        if (i == 2) {
            j += 3;
            continue;
        }
        j += 4;
    }

    printf("%d\n", j);  // 10

    return 0;
}
