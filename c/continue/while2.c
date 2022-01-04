#include <stdio.h>

int main(void) {
    int i = 0;
    while (i++ < 4) {
        continue;
        printf("%d\n", i);
    }

    return 0;
}
