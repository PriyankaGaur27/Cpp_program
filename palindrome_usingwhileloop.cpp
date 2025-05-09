#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num; // Store the original number

    // Reverse the number using a while loop
    while (num != 0) {
        remainder = num % 10;              // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append digit
        num = num / 10;                    // Remove last digit
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome." << endl;
    else
        cout << originalNum << " is not a palindrome." << endl;

    return 0;
}
