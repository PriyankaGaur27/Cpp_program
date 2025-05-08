#include <iostream>

int main() {
    int num = 65; // ASCII value for 'A'

    // Reinterpret the address of 'num' as a pointer to char
    char* charPtr = reinterpret_cast<char*>(&num);

    // Output the value at the char pointer
    std::cout << "Character representation: " << *charPtr << std::endl;

    return 0;
}
