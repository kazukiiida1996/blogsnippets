#include <stdio.h>

int main(void) {
    char buf[20];

    scanf("%[^xyz]", buf);

    printf("buf[%s]\n", buf);
    // buf[abc]
    return 0;
}
