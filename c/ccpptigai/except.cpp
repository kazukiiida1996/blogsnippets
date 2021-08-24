#include <iostream>
#include <stdexcept>

int main(void) {
    try {
        throw std::runtime_error("failed");  // 例外を投げる
    } catch (const std::runtime_error &e) {  // 例外を補足する
        std::cerr << e.what() << std::endl;  // エラー内容を出力する
    }

    return 0;
}
