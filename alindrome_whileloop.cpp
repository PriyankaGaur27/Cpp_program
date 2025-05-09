#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;  // Save the original number

    while (num != 0) {
        remainder = num % 10;                         // Get last digit
        reversedNum = reversedNum * 10 + remainder;   // Build reversed number
        num = num / 10;                               // Remove last digit
    }

    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome." << endl;
    else
        cout << originalNum << " is not a palindrome." << endl;

    return 0;
}
