#include <iostream>
#include <cmath> // For power function
using namespace std;

int main() {
    long long binary;
    int decimal = 0, remainder, i = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary != 0) {
        remainder = binary % 10;             // Get the last digit (0 or 1)
        decimal += remainder * pow(2, i);    // Add to decimal equivalent
        binary /= 10;                        // Remove last digit of binary
        i++;                                  // Increment the power of 2
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
