#include <iostream>

int main()
{
    std::cout << "Int: " << sizeof(int) << std::endl; // 4
    std::cout << "Float: " << sizeof(float) << std::endl; // 4
    std::cout << "Double: " << sizeof(double) << std::endl; // 8
    std::cout << "Bool: " << sizeof(bool) << std::endl; // 1
    std::cout << "Char: " << sizeof(char) << std::endl; // 1
    std::cout << "Long: " << sizeof(long) << std::endl; // 4

    return 0;
}

