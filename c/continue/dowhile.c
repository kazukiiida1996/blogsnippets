#include <stdio.h>

int main(void) {
    int i = 0;
    do {
        if (i == 2) {
            continue;
        }
        printf("%d\n", i);
    } while (i++ < 4);

    return 0;
}
