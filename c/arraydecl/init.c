#include <stdio.h>

int ary1[3];

int main(void) {
    static int ary2[3];

    printf("ary1[0] = %d\n", ary1[0]);  // ary1[0] = 0
    printf("ary1[1] = %d\n", ary1[1]);  // ary1[1] = 0
    printf("ary1[2] = %d\n", ary1[2]);  // ary1[2] = 0

    printf("ary2[0] = %d\n", ary2[0]);  // ary2[0] = 0
    printf("ary2[1] = %d\n", ary2[1]);  // ary2[1] = 0
    printf("ary2[2] = %d\n", ary2[2]);  // ary2[2] = 0

    return 0;
}
