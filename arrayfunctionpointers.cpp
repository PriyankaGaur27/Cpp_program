#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b)     { return a + b; }
int subtract(int a, int b){ return a - b; }
int multiply(int a, int b){ return a * b; }
int divide(int a, int b)  { return b != 0 ? a / b : 0; }  // Basic error handling

int main() {
    // Array of function pointers
    int (*operations[4])(int, int) = { add, subtract, multiply, divide };

    int choice, a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nChoose operation:\n";
    cout << "0: Add\n1: Subtract\n2: Multiply\n3: Divide\n";
    cin >> choice;

    if (choice >= 0 && choice < 4) {
        int result = operations[choice](a, b);  // Call chosen function
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
