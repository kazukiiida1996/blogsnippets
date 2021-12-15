#include <stdio.h>

struct Animal {
    int age;
    char name[40];
};

void func(struct Animal dog) {
    printf("dog age[%d] name[%s]\n", dog.age, dog.name);
    // dog age[20] name[Tama]
}

int main(void) {
    struct Animal cat = {20, "Tama"};   
    func(cat);  // dogに代入
    return 0;
}
