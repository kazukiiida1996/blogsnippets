#include <stdio.h>

#define ONE 2
#undef ONE
#define ONE 1

int main(void) {
    printf("%d\n", ONE);  // 1
    return 0;
}
