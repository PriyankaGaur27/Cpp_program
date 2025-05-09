#include <iostream>
using namespace std;

int main() {
    int decimal, remainder;
    string binary = "";

    cout << "Enter a decimal number: ";
    cin >> decimal;

    int num = decimal; // Store original value for display

    if (decimal == 0) {
        binary = "0";
    } else {
        while (decimal > 0) {
            remainder = decimal % 2;
            binary = to_string(remainder) + binary;  // Prepend the remainder
            decimal /= 2;
        }
    }

    cout << "Binary equivalent of " << num << " is: " << binary << endl;

    return 0;
}
