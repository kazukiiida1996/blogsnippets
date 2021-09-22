#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s = "abcdef";

    char d1[100];
    strncpy(d1, s, 3);
    d1[3] = '\0';
    printf("d1[%s]\n", d1);  // d1[abc]

    char d2[100];
    strncpy(d2, s + 3, 3);
    d2[3] = '\0';
    printf("d2[%s]\n", d2);  // d2[def]
    
    char d3[100];
    strncpy(d3, s + 6, 0);
    d3[0] = '\0';
    printf("d3[%s]\n", d3);  // d3[]
    
    return 0;
}
