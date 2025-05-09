#include <iostream>
using namespace std;

// Function with default argument
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    // Greeting with a custom name
    greet("Alice");

    // Greeting using the default name
    greet();

    return 0;
}
