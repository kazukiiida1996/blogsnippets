#include <stdio.h>

int main(void) {
    char buf[20];

    scanf("%[a-z]", buf);

    printf("buf[%s]\n", buf);
    // buf[abcxyz]
    return 0;
}
