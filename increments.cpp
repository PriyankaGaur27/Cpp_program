#include <iostream>
using namespace std;

// Function prototype
void incrementByTen(int &a);

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Before increment: " << num << endl;

    incrementByTen(num);  // Call function to increment the value

    cout << "After increment by 10: " << num << endl;

    return 0;
}

// Function definition
void incrementByTen(int &a) {
    a += 10;  // Increment the value by 10
}
