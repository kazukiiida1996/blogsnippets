#include <vector>
#include <iostream>

int main() {
    std::vector<int> v {1, 2, 3};

    v.push_back(4);

    for (auto &el : v) {
        std::cout << el << std::endl;
    }

    return 0;
}
