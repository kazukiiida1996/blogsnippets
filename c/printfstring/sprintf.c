#include <stdio.h>

int main(void) {
    char buf[100];

    sprintf(buf, "Hello, %s", "World!");

    printf("buf[%s]\n", buf);
    // buf[Hello, World!]
    
    return 0;
}
