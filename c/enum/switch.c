#include <stdio.h>

enum Food {
    RICE,
    BREAD,
    MEAT,
};

int main(void) {
    enum Food food = BREAD;

    switch (food) {
    case RICE: puts("ごはんです。"); break;
    case BREAD: puts("パンです。"); break;
    case MEAT: puts("お肉です。"); break;
    }

    return 0;
}
