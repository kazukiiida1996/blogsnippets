#include <stdio.h>

int main(void) {
    char buf[5];

    scanf("%4s", buf);

    printf("buf[%s]\n", buf);
    // buf[Hell]
    return 0;
}
