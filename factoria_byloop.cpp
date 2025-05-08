#include <iostream>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Prompt the user to enter a number
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Check if the number is negative
    if (num < 0)
        std::cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << num << " = " << factorial;
    }

    return 0;
}
