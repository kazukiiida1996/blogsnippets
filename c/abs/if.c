#include <stdio.h>

int main(void) {
    int i = -1;

    if (i < 0) {
        i = -i;
    }

    printf("%d\n", i);  // 1
    
    return 0;
}
