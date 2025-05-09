#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int n) {
    return n * n;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Call the inline function to calculate the square
    cout << "The square of " << num << " is " << square(num) << endl;

    return 0;
}
