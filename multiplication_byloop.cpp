#include <iostream>

int main() {
    int num, i = 1;

    // Prompt the user to enter a number
    std::cout << "Enter a number to print its multiplication table: ";
    std::cin >> num;

    // Using do-while loop to print the multiplication table
    do {
        std::cout << num << " * " << i << " = " << num * i << std::endl;
        ++i;
    } while (i <= 10);

    return 0;
}
