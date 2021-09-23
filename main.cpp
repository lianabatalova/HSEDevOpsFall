#include <iostream>

template<typename T>
auto MajorSum(T x, T y) {
    return x + y;
}

template<typename T>
auto MajorMult(T x, T y) {
    return x * y;
}

template<typename T>
auto MinorSub(T x, T y) {
    return x - y;
}

bool IsEqual(int x, int y) {
    return x == y;
}

int main(int argc, char** argv) {
    std::cout << "release current version: 1.0" << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << ", ";
    }
    std::cout << "bye" << std::endl;
    std::cout << std::endl;
    std::cout << MinorSub(4, 3) << std::endl;
    return 0;
}