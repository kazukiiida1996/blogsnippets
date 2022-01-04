#include <stdio.h>

int main(void) {
    int j = 0;

    for (int i = 0; i < 4; i += 1) {
        switch (i) {
        case 0: j += 1; break;
        case 1: j += 2; break;
        case 2: j += 3; break;
        default: j += 4; break;
        }
    }

    printf("%d\n", j);  // 10

    return 0;
}
