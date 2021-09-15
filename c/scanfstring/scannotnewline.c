#include <stdio.h>

int main(void) {
    char buf[20];

    scanf("%[^\n]", buf);

    printf("buf[%s]\n", buf);
    // buf[Hello, World!]
    return 0;
}
