#include <stdio.h>

int main(void) {
    int i = 0;

    do {
        i += 1;
    } while (i < 4);

    printf("i: %d\n", i);
    // i: 4
    
    return 0;
}
