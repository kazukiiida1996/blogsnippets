#include <stdio.h>

enum Food {
    RICE,
    BREAD = 10,
    MEAT,
};

int main(void) {
    enum Food rice = RICE;
    enum Food bread = BREAD;
    enum Food meat = MEAT;

    printf("rice: %d\n", rice);  // rice: 0
    printf("bread: %d\n", bread);  // bread: 10
    printf("meat: %d\n", meat);  // meat: 11

    printf("sizeof enum Food: %ld\n", sizeof(enum Food));
    // sizeof enum Food: 4

    return 0;
}
