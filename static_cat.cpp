#include <iostream>

int main() {
    // Convert int to double
    int intVal = 42;
    double doubleVal = static_cast<double>(intVal);
    std::cout << "int to double: " << intVal << " -> " << doubleVal << std::endl;

    // Convert double to int
    doubleVal = 42.57;
    intVal = static_cast<int>(doubleVal);
    std::cout << "double to int: " << doubleVal << " -> " << intVal << std::endl;

    return 0;
}
