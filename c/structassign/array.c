#include <stdio.h>

struct Animal {
    int age;
    char name[40];
};

int main(void) {
    // 構造体の配列
    struct Animal cats[] = {
        {20, "Tama"},  // 0番目の要素
        {30, "Mike"},  // 1番目の要素
        {40, "Bob"},  // 2番目の要素
    };

    printf("代入前\n");
    printf("cats[0] age[%d] name[%s]\n", cats[0].age, cats[0].name);
    printf("cats[1] age[%d] name[%s]\n", cats[1].age, cats[1].name);

    // 0番目の要素を1番目の要素に代入
    cats[1] = cats[0];

    printf("代入後\n");
    printf("cats[0] age[%d] name[%s]\n", cats[0].age, cats[0].name);
    printf("cats[1] age[%d] name[%s]\n", cats[1].age, cats[1].name);

    return 0;
}
