#include <stdio.h>

int main(void) {
    for (int i = 0; i < 3; i += 1) {
        for (int j = 0; j < 3; j += 1) {
            printf("i=%d j=%d\n", i, j);
        }
        break;
    }

    for (int i = 0; i < 3; i += 1) {
        for (int j = 0; j < 3; j += 1) {
            printf("i=%d j=%d\n", i, j);
            break;
        }
    }

    int flag = 0;

    for (int i = 0; i < 3; i += 1) {
        for (int j = 0; j < 3; j += 1) {
            flag = 1;
            break;
        }
        if (flag) {
            break;
        }
    }

    for (int i = 0; i < 3; i += 1) {
        for (int j = 0; j < 3; j += 1) {
            goto done;
        }
    }
done:
    printf("gotoしました。\n");

    return 0;
}
