#include <stdio.h>
#include <inttypes.h>

int main(void) {
    intmax_t a = imaxabs(-1);
    printf("%ld\n", a);  // 1
    return 0;
}
