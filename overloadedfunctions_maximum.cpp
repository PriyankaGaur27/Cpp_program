#include <iostream>
using namespace std;

// Overloaded function to find the maximum of two integers
int maxValue(int a, int b) {
    return (a > b) ? a : b;
}

// Overloaded function to find the maximum of three integers
int maxValue(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int x, y, z;

    // Find maximum of two numbers
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Maximum of " << x << " and " << y << " is: " << maxValue(x, y) << endl;

    // Find maximum of three numbers
    cout << "\nEnter three numbers: ";
    cin >> x >> y >> z;
    cout << "Maximum of " << x << ", " << y << ", and " << z << " is: " << maxValue(x, y, z) << endl;

    return 0;
}
