#include <stdio.h>

// 関数ポインタ型「FuncPtr」の定義
typedef void (*FuncPtr)(int);

void func(int a) {
    printf("a = %d\n", a);
}

int main(void) {
    FuncPtr funcptr = func;  // 関数ポインタがスッキリ書ける
    funcptr(10);  // a = 10
    return 0;
}
