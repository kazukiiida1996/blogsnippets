#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buf[100];
    int age;

    do {
        // バッファに年齢を入力
        printf("年齢を入力してください > ");
        if (!fgets(buf, sizeof buf, stdin)) {
            break;
        }
        
        // バッファを整数に変換
        age = atoi(buf);

    } while (age < 20);  // 20歳より下ならループ

    return 0;
}
