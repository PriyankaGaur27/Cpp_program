#include <iostream>

int main() {
    int number, reversed = 0, remainder, original;

    // Prompt the user to enter a number
    std::cout << "Enter an integer: ";
    std::cin >> number;

    original = number; // Store the original number

    // Reverse the number using a while loop
    while (number != 0) {
        remainder = number % 10;                 // Extract the last digit
        reversed = reversed * 10 + remainder;    // Append it to the reversed number
        number /= 10;                            // Remove the last digit
    }

    // Check if the original number and the reversed number are the same
    if (original == reversed) {
        std::cout << original << " is a palindrome number." << std::endl;
    } else {
        std::cout << original << " is not a palindrome number." << std::endl;
    }

    return 0;
}
