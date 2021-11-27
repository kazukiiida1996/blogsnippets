#include <stdio.h>
#include <stdlib.h>

// qsortに渡す比較関数
int compar(const void *lhs, const void *rhs) {
    int a = *(int *) lhs;  // void型のポインタを整数に変換
    int b = *(int *) rhs;  // 同上
    return a - b;  // 比較
}

int main(void) {
    // ソート対象の配列
    int ary[4] = { 3, 1, 4, 2 };

    // クイックソートの実行
    qsort(ary, 4, sizeof(int), compar);

    // 結果を出力
    for (int i = 0; i < 4; i += 1) {
        printf("%d\n", ary[i]);
    }

    return 0;
}
