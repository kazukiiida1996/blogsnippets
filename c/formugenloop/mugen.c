#include <stdio.h>

int main(void) {
    for (int i = 0; ; i += 1) {
        printf("%d\n", i);
    }

    for (;;) {
        printf("loop!\n");
    }

    for (; 1; ) {
        printf("loop\n!");
    }

    for (int i = 0; ; i += 1) {
        if (i == 4) {
            break;
        }
    }
    
    return 0;
}
