#include <iostream>

int main(int argc, char** argv) {
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << ", ";
    }
    std::cout << "bye" << std::endl;
    return 0;
}