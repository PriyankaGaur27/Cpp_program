#include <iostream>

int main() {
    int a, b;

    // Prompt the user to enter two positive integers
    std::cout << "Enter two positive integers: ";
    std::cin >> a >> b;

    // Ensure the inputs are positive
    if (a <= 0 || b <= 0) {
        std::cout << "Please enter positive integers only." << std::endl;
        return 1;
    }

    // Implementing the Euclidean algorithm using a while loop
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Output the GCD
    std::cout << "GCD of the two numbers is: " << a << std::endl;

    return 0;
}
