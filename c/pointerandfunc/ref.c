#include <stdio.h>

void show(int *p) {
    printf("%d\n", *p);  // 1
}

int main(void) {
    int a = 1;
    
    show(&a);
    
    return 0;
}