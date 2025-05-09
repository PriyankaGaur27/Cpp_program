#include <iostream>
using namespace std;

// Function prototype
int multiply(int a, int b);

int main() {
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    int result = multiply(x, y);
    cout << "Product: " << result << endl;

    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
}
