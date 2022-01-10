#include <stdio.h>

int main(void) {
    _Bool flag = 1;

    printf("%d\n", flag);  // 1

    flag = 0;
    printf("%d\n", flag);  // 0
    
    flag = 2;
    printf("%d\n", flag);  // 1

    flag = -1;
    printf("%d\n", flag);  // 1

    return 0;
}
