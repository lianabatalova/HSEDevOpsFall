#include <iostream>

template<typename T>
auto MinorSub(T x, T y) {
    return x - y;
}

int main(int argc, char** argv) {
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << ", ";
    }
    std::cout << std::endl;
    return 0;
}