#include <stdio.h>

int main(void) {
    // CSVファイル（data.csv）を開く
    FILE *fin = fopen("data.csv", "rt");
    if (!fin) {
        // 開くのに失敗したらエラーを出力する
        perror("fopen");
        return 1;
    }

    // CSVデータの読み込み
    char name[100];  // 名前
    int age;  // 年齢
    double height;  // 身長

    // ループで一行ずつ読み込む
    for (; fscanf(fin, "%[^,],%d,%lf\n", name, &age, &height) != EOF; ) {
        printf("name[%s] age[%d] height[%lf]\n", name, age, height);
    }

    // 使い終わったらファイルを閉じる
    fclose(fin);

    return 0;
}
