#include <iostream>

int main() {
    const int x = 10;

    // Attempt to modify the constant variable using const_cast
    int& ref = const_cast<int&>(x);
    ref = 20;

    std::cout << "Modified value: " << x << std::endl;

    return 0;
}
