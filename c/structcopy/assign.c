#include <stdio.h>

// 動物を表す構造体
struct Animal {
	int age;  // 年齢
	char name[40];  // 名前
};

int main(void) {
	struct Animal cat = { 20, "Tama" };  // 構造体変数catを定義する
	struct Animal dog = cat;  // 代入してcatをdogにコピー

	// dogのメンバを出力
	printf("dog age[%d] name[%s]\n", dog.age, dog.name);

	return 0;
}
