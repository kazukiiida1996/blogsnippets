#include <stdio.h>

struct Animal {
    int age;
};

void func(struct Animal cat) {
    printf("age: %d\n", cat.age);  // 20
}

int main(void) {
    struct Animal cat = { 20 };
    func(cat);
    return 0;
}
