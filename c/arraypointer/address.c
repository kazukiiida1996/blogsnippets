#include <stdio.h>

int main(void) {
    int array[4] = { 1, 2, 3, 4 };
    int *p = array;

    printf("array アドレス値: %p\n", array);
    printf("&array[0] アドレス値: %p\n", &array[0]);
    printf("p 代入したアドレス値: %p\n", p);

    return 0;
}
