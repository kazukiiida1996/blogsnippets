#include <stdio.h>

int main(void) {
    int n = 4;
    int ary[n] = {0};  // C++では通る。C言語では通らない

    printf("%d\n", sizeof(ary));
    return 0;
}
