#include <iostream>
#include <cmath>  // For pow()
using namespace std;

// Function to calculate power with default exponent = 2
double power(double base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    double num;

    cout << "Enter a number: ";
    cin >> num;

    // Calculate square using default exponent
    cout << "Square of " << num << " is: " << power(num) << endl;

    // Calculate cube using custom exponent
    cout << "Cube of " << num << " is: " << power(num, 3) << endl;

    return 0;
}
