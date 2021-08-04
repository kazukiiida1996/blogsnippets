#include <stdio.h>
#include <stdbool.h>

/**
 * スワップ・フラグを使ったバブルソートを実行する
 * 
 * @param[in|out] ary 配列
 * @param[in] arylen 配列の長さ
 */
void bubble_sort(int *ary, int arylen) {
    bool swapped;  // スワップしたかどうかのフラグ

    for (int i = 0; i < arylen - 1; i += 1) {
        swapped = false;  // フラグを折っておく
        for (int j = 0; j < arylen - 1; j += 1) {
            if (ary[j] > ary[j + 1]) {
                int tmp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = tmp;
                swapped = true;  // フラグを立てる
            }
        }

        // フラグが折れたままならスワップが発生していないということになる
        // 「スワップが発生していない＝整列されている」ということ
        // その場合はループから抜ける
        if (!swapped) {
            break;
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
