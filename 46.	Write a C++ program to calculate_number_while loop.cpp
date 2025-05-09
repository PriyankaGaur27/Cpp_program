#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        sum += num % 10;  // Add the last digit
        num = num / 10;   // Remove the last digit
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
