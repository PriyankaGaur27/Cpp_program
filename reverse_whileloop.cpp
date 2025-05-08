#include <iostream>

int main() {
    int num, reversed = 0, remainder;

    // Prompt the user to enter a number
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Reverse the number using a while loop
    while (num != 0) {
        remainder = num % 10;             // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        num /= 10;                        // Remove the last digit from num
    }

    // Output the reversed number
    std::cout << "Reversed Number = " << reversed << std::endl;

    return 0;
}
