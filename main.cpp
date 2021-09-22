#include <iostream>

template<typename T>
auto majorSum(T a, T b) {
    return a + b;
}

int main(int argc, char** argv) {
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << ", ";
    }
    std::cout << std::endl;
    return 0;
}