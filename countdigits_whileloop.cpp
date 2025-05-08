#include <iostream>
#include <cmath>

int main() {
    int num, count = 0;

    // Prompt the user to enter a number
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Handle edge case for zero
    if (num == 0) {
        count = 1;
    } else {
        // Count digits using a while loop
        while (num != 0) {
            num /= 10;  // Remove the last digit
            ++count;    // Increment the digit count
        }
    }

    // Output the result
    std::cout << "Number of digits: " << count << std::endl;

    return 0;
}
