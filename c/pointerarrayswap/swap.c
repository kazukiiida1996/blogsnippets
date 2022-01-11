#include <stdio.h>

// 引数に配列を取る関数
void func(int ary[]) {
    int *tmp;  // スワップで使用する一時変数
    int *p = NULL;  // スワップ対象のポインタ

    // aryとpのスワップ処理
    tmp = ary;
    ary = p;
    p = tmp;

    printf("%p\n", ary);  // (nil)
    printf("%d\n", p[0]);  // 1 
    printf("%d\n", p[1]);  // 2
    printf("%d\n", p[2]);  // 3
}

int main(void) {
    int ary[] = {1, 2, 3};  // 配列を定義
    func(ary);
    return 0;
}
