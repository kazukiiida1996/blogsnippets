#include <stdio.h>

int main(void) {
    void *a = NULL;
    int *b = a;  // C言語では通る。C++では通らない
    return 0;
}
