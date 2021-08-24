#include <iostream>

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    auto i = add<int>(1, 2);
    std::cout << i << std::endl;

    auto d = add<double>(1.2, 2.3);
    std::cout << d << std::endl;

    return 0;
}
