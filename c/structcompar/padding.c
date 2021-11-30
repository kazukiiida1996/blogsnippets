#include <stdio.h>

struct Animal {
    int age;  // 4バイト
    char name[1];  // 1バイト
    // 4 + 1 = 5バイトでパディングが入って8バイトになる
};

// バイト列を出力する関数
void dump(void *p, size_t size) {
    void *end = p + size;
    for (int i = 1; p < end; i += 1, p += 1) {
        unsigned char byte = * (unsigned char *) p;
        printf("%dバイト目: %d\n", i, byte);
    }
}

int main(void) {
    // intのサイズ
    printf("sizeof int = %d\n", sizeof(int));

    // struct Animalのサイズ
    printf("sizeof Animal = %d\n", sizeof(struct Animal));

    // catのバイト列を見る
    struct Animal cat = { 20, "" };
    dump(&cat, sizeof cat);

    return 0;
}
