#include <stdio.h>

#define ONE 1
#undef ONE

int main(void) {
    printf("%d\n", ONE);  // ?
    return 0;    
}
