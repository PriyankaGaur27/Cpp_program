#include <iostream>
#include <cmath> // For pow()
using namespace std;

// Function to calculate compound interest with default rate = 5% and time = 2 years
double compoundInterest(double principal, double rate = 5.0, int time = 2) {
    double amount = principal * pow(1 + rate / 100, time);
    return amount - principal;
}

int main() {
    double principal;

    cout << "Enter the principal amount: ";
    cin >> principal;

    // Calling with all arguments
    cout << "Compound Interest (custom rate & time): " << compoundInterest(principal, 6.5, 3) << endl;

    // Calling with default time
    cout << "Compound Interest (custom rate, default time): " << compoundInterest(principal, 4.5) << endl;

    // Calling with both default rate and time
    cout << "Compound Interest (default rate & time): " << compoundInterest(principal) << endl;

    return 0;
}
