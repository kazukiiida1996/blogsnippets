#include <stdio.h>

struct Animal {
    int age;
    char name[40];
};

int main(void) {
    struct Animal cat = {20, "Tama"};
    struct Animal dog = cat;  // 代入

    printf("cat age[%d] name[%s]\n", cat.age, cat.name);
    // cat age[20] name[Tama]

    printf("dog age[%d] name[%s]\n", dog.age, dog.name);
    // dog age[20] name[Tama]

    return 0;
}
