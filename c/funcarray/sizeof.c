#include <stdio.h>

void func(int ary[]) {
    // 引数aryにsizeofを使う
    printf("func: sizeof ary = %ld\n", sizeof ary);
}

int main(void) {
    // 配列aryの定義
    int ary[] = {1, 2, 3};
    
    // 配列aryにsizeofを使う
    printf("main: sizeof ary = %ld\n", sizeof ary);

    // 配列aryをfuncに渡す
    func(ary);

    return 0;
}
