#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of rows for the pyramid
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop to handle the number of rows
    for (int i = 1; i <= n; i++) {
        
        // Inner loop to print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // Print space
        }

        // Inner loop to print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";  // Print star
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
