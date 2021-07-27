#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("failed");
    } catch (const std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
