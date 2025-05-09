#include <iostream>
using namespace std;

// Function template to find the maximum of two values
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using the template with different types
    cout << "Max of 10 and 20 (int): " << getMax(10, 20) << endl;
    cout << "Max of 3.14 and 2.71 (double): " << getMax(3.14, 2.71) << endl;
    cout << "Max of 'A' and 'Z' (char): " << getMax('A', 'Z') << endl;
    cout << "Max of \"Apple\" and \"Banana\" (string): " << getMax(string("Apple"), string("Banana")) << endl;

    return 0;
}
