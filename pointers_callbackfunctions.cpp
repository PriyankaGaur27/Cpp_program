#include <iostream>
using namespace std;

// Function 1: Adds two integers
int add(int a, int b) {
    return a + b;
}

// Function 2: Multiplies two integers
int multiply(int a, int b) {
    return a * b;
}

// Callback function that takes a function pointer
void process(int a, int b, int (*callback)(int, int)) {
    int result = callback(a, b);  // Call the function passed as a callback
    cout << "The result of the operation is: " << result << endl;
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Passing the 'add' function as the callback
    cout << "Using add function as callback:" << endl;
    process(num1, num2, add);

    // Passing the 'multiply' function as the callback
    cout << "Using multiply function as callback:" << endl;
    process(num1, num2, multiply);

    return 0;
}
