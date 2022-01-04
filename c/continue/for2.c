#include <stdio.h>

int main(void) {
    for (int i = 0; i < 4; i += 1) {
        if (i == 1) {
            continue;
        }
        if (i == 2) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
