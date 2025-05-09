#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of terms
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    int first = 0, second = 1, next;

    // Check if the number of terms is valid
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else if (n == 1) {
        cout << "Fibonacci series: " << first << endl;
    } else {
        cout << "Fibonacci series: " << first << " " << second << " ";

        // Generate the Fibonacci series using a for loop
        for (int i = 3; i <= n; i++) {
            next = first + second;  // Next Fibonacci number
            cout << next << " ";

            // Update first and second for the next iteration
            first = second;
            second = next;
        }

        cout << endl;
    }

    return 0;
}
