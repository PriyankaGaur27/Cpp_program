#include <iostream>

int main() {
    int i = 1, sum = 0;

    // Calculate the sum of the first 50 natural numbers using a while loop
    while (i <= 50) {
        sum += i;
        ++i;
    }

    std::cout << "Sum of the first 50 natural numbers: " << sum << std::endl;
    return 0;
}
