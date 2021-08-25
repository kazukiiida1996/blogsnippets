#include <stdio.h>

int main(void) {
    void (*funcptr)(void) = NULL;  // NULLポインタを関数ポインタに代入
    
    funcptr();  // Segmentation fault

    return 0;
}
