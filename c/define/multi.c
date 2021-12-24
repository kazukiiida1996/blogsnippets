#include <stdio.h>

#define INFO printf("hello\n"); \
    printf("good\n"); \
    printf("world\n");

int main(void) {
    INFO;
    return 0;
}
