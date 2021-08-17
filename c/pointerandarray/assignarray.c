#include <stdio.h>

int main(void) {
    int a[] = {1, 2};
    int *b;
    a = b;  // error: assignment to expression with array type
    return 0;
}
