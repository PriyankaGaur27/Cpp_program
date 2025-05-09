#include <iostream>
using namespace std;

// Function prototype
int maxOfThree(int a, int b, int c);

int main() {
    int num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Call the function and display the result
    int maxVal = maxOfThree(num1, num2, num3);
    cout << "The maximum number is: " << maxVal << endl;

    return 0;
}

// Function definition
int maxOfThree(int a, int b, int c) {
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}
