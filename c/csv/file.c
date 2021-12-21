#include <stdio.h>

int main(void) {
    // CSVファイル（data.csv）を開く
    FILE *fin = fopen("data.csv", "rt");
    if (!fin) {
        // 開くのに失敗したらエラーを出力する
        perror("fopen");
        return 1;
    }

    // ここにCSVデータの読み込み処理

    // 使い終わったらファイルを閉じる
    fclose(fin);

    return 0;
}
