#include <iostream>
using namespace std;

// Inline function to calculate the cube of a number
inline int cube(int n) {
    return n * n * n;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Call the inline function to calculate the cube
    cout << "The cube of " << num << " is " << cube(num) << endl;

    return 0;
}
