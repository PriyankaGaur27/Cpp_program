#include <iostream>

int main() {
    int intValue = 42;

    // C-style casting
    double doubleValue = (double)intValue;

    std::cout << "Original int: " << intValue << std::endl;
    std::cout << "Converted to double: " << doubleValue << std::endl;

    return 0;
}
