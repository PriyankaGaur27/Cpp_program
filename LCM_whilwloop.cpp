#include <iostream>
using namespace std;

int main() {
    int num1, num2, lcm;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find the greater number between num1 and num2
    int greater = (num1 > num2) ? num1 : num2;

    // Start with the greater number and check for LCM
    lcm = greater;

    // Use a while loop to find the LCM
    while (true) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break; // If LCM is divisible by both num1 and num2, exit the loop
        }
        lcm += greater; // Increment by the greater number
    }

    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}
