#include <stdio.h>

// 関数ポインタ型MyFuncの定義
typedef void (*MyFunc)(void);

// test関数に渡すfunc関数
void func(void) {
    printf("I am func!\n");
} 

// 引数に関数ポインタを取るtest関数
void test(MyFunc func_ptr) {
    // 引数で渡された関数を呼び出す
    func_ptr();  // I am func!
}

int main(void) {
    // test関数にfunc関数を渡す
    test(func);
    return 0;
}
