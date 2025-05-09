#include <iostream>
#include <chrono>
using namespace std;

// Macro to find the maximum of two numbers
#define MAX_MACRO(a, b) ((a) > (b) ? (a) : (b))

// Inline function to find the maximum of two numbers
inline int maxInline(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 50, y = 100;
    int result;

    // Measure time taken by macro
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
        result = MAX_MACRO(x, y);
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> macro_duration = end - start;
    cout << "Time taken by macro: " << macro_duration.count() << " seconds" << endl;

    // Measure time taken by inline function
    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
        result = maxInline(x, y);
    }
    end = chrono::high_resolution_clock::now();
    chrono::duration<double> inline_duration = end - start;
    cout << "Time taken by inline function: " << inline_duration.count() << " seconds" << endl;

    return 0;
}
