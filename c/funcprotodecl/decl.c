#include <stdio.h>

// 関数funcのプロトタイプ宣言
void func(void);

void func(void) {
    puts("Hello, World!");
}

void dog(void);

void cat(void) {
    dog();
}

void dog(void) {
    puts("Wan Wan");
}

void shout(void);

int main(void) {
    func();
    cat();
    return 0;
}
