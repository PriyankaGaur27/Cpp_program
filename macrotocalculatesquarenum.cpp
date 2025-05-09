#include <iostream>
#include <chrono>
using namespace std;

// Macro to calculate the square of a number
#define SQUARE_MACRO(x) ((x) * (x))

// Inline function to calculate the square of a number
inline int squareInline(int x) {
    return x * x;
}

int main() {
    int num = 100;

    // Time the macro calculation
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
        int result = SQUARE_MACRO(num);  // Using macro
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> macro_duration = end - start;
    cout << "Time taken by macro: " << macro_duration.count() << " seconds" << endl;

    // Time the inline function calculation
    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
        int result = squareInline(num);  // Using inline function
    }
    end = chrono::high_resolution_clock::now();
    chrono::duration<double> inline_duration = end - start;
    cout << "Time taken by inline function: " << inline_duration.count() << " seconds" << endl;

    return 0;
}
