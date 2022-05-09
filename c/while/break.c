#include <stdio.h>

int main(void) {
    int i = 0;

    while (1) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
        i += 1;
    }
    
    return 0;
}
