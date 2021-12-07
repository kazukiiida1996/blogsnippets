#include <stdio.h>
    
struct Animal {
    int age;
};

// 処理に成功したら引数のanimalを返し、
// 処理に失敗したらNULLを返す関数
struct Animal *animal_walk(struct Animal *animal) {
    if (!animal) {
        return NULL;  // 失敗したらNULLポインタを返す
    }

    // ここにwalkの処理

    return animal;  // 成功したらanimalのポインタを返す
}

int main(void) {
    struct Animal animal = {20};
    
    if (!animal_walk(&animal)) {
        perror("animal_walk");  // 失敗したらエラーを出力
    }

    return 0;
}
