#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[100] = "Good";
    strcat(s1, " Night");  // s1に"Night"を連結する
    printf("%s\n", s1);  // Good Night
    return 0;
}
