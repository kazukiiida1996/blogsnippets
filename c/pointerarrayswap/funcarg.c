#include <stdio.h>

// 引数に配列を取る関数
void func(int ary[]) {
    int *p = NULL;
    ary = p;

    printf("%p\n", ary);  // (nil)
}

int main(void) {
    int ary[] = {1, 2, 3};  // 配列を定義
    func(ary);
    return 0;
}
