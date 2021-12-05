#include <stdio.h>

// int型の配列を引数に取る関数func
void func(int ary[]) {
    printf("%d\n", ary[0]);  // 1
    printf("%d\n", ary[1]);  // 2
    printf("%d\n", ary[2]);  // 3
}

int main(void) {
    // 配列aryの定義
    int ary[] = {1, 2, 3};
    
    // funcに配列aryを渡す
    func(ary);

    return 0;
}
