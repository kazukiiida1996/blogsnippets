#include <stdio.h>

/**
 * 原始的なバブルソートを実行する
 * 
 * @param[in|out] ary 配列
 * @param[in] arylen 配列の長さ
 */
void bubble_sort(int *ary, int arylen) {
    // 外側のfor文
    for (int i = 0; i < arylen - 1; i += 1) {
        // 内側のfor文
        for (int j = 0; j < arylen - 1; j += 1) {
            // 隣り合う要素同士を比較
            if (ary[j] > ary[j + 1]) {
                // スワップの実行
                int tmp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
    int ary[] = {4, 2, 3, 1};  // ソート対象のint型の配列
    int arylen = sizeof(ary) / sizeof(ary[0]);  // 配列の長さ

    bubble_sort(ary, arylen);  // バブルソートの実行

    // バブルソートの結果を出力
    for (int i = 0; i < arylen; i += 1) {
        printf("%d ", ary[i]);
    }
    puts("");

    return 0;
}
