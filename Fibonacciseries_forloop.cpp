#include <iostream>

int main() {
    int n;

    // Prompt the user to enter the number of terms
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    // Check if the number of terms is valid
    if (n <= 0) {
        std::cout << "Please enter a positive integer greater than 0." << std::endl;
        return 1;
    }

    // Initialize the first two terms
    long long first = 0, second = 1;

    std::cout << "Fibonacci Series up to " << n << " terms:" << std::endl;

    // Print the Fibonacci series using a for loop
    for (int i = 1; i <= n; ++i) {
        std::cout << first << " ";

        // Calculate the next term
        long long next = first + second;
        first = second;
        second = next;
    }

    std::cout << std::endl;

    return 0;
}
