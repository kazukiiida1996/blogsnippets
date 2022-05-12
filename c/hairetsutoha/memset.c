#include <stdio.h>
#include <string.h>

int main(void) {
    int ary[3];

    memset(ary, 0, sizeof ary);

    printf("%d\n", ary[0]);  // 0
    printf("%d\n", ary[1]);  // 0
    printf("%d\n", ary[2]);  // 0
    
    return 0;
}
