#include <iostream>
#include <cmath>

int main() {
    int num;
    bool isPrime = true;

    // Prompt the user to enter a number
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Handle edge cases
    if (num <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (int i = 2; i <= std::sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
