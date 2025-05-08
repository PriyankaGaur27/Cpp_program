#include <iostream>

int main() {
    int sum = 0;

    // Loop through numbers from 2 to 100, incrementing by 2 to get even numbers
    for (int i = 2; i <= 100; i += 2) {
        sum += i; // Add the current even number to the sum
    }

    // Output the result
    std::cout << "Sum of all even numbers between 1 and 100: " << sum << std::endl;

    return 0;
}
