#include <iostream>
#include <string>
using namespace std;

// Overloaded function to print an integer
void print(int value) {
    cout << "Integer: " << value << endl;
}

// Overloaded function to print a float
void print(float value) {
    cout << "Float: " << value << endl;
}

// Overloaded function to print a string
void print(string value) {
    cout << "String: " << value << endl;
}

int main() {
    int i = 42;
    float f = 3.14f;
    string s = "Hello, C++";

    print(i);  // Calls print(int)
    print(f);  // Calls print(float)
    print(s);  // Calls print(string)

    return 0;
}
