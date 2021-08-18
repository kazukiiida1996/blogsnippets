#include <stdio.h>

void change(int *p) {
    *p = 2;
}

int main(void) {
    int a = 1;
    
    change(&a);
    
    printf("%d\n", a);  // 2

    return 0;
}