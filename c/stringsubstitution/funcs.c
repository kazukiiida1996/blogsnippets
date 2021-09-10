#include <stdio.h>
#include <string.h>

int main(void) {
    // strcpyを使った方法
    char s1[20];
    strcpy(s1, "Hello, World!");

    printf("%s\n", s1);  // Hello, World!

    // memcpyを使った方法
    char s2[20];
    const char *hw1 = "Hello, World!";
    memcpy(s2, hw1, strlen(hw1) + 1);

    printf("%s\n", s2);  // Hello, World!

    // memmoveを使った方法
    char s3[20];
    const char *hw2 = "Hello, World!";
    memmove(s3, hw2, strlen(hw2) + 1);

    printf("%s\n", s3);  // Hello, World!

    // snprintfを使った方法
    char s4[20];
    int eyes = 2;
    snprintf(s4, sizeof s4, "My eyes %d", eyes);

    printf("%s\n", s4);  // My eyes 2

    return 0;
}
