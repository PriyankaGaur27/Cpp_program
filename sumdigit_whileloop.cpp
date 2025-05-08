#include <iostream>

int main() {
    int number, sum = 0;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Handle negative numbers by converting to positive
    number = (number < 0) ? -number : number;

    // Calculate the sum of digits using a while loop
    while (number > 0) {
        sum += number % 10;  // Add the last digit to sum
        number /= 10;         // Remove the last digit
    }

    // Output the result
    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
