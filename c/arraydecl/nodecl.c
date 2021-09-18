#include <stdio.h>

int main(void) {
    printf("%d\n", ary[0]);
    // GCC: error: ‘ary’ undeclared (first use in this function)

    int ary[3];

    return 0;
}