#include <iostream>
using namespace std;

// Function prototype
void printArray(int arr[], int size);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    printArray(arr, size);

    return 0;
}

// Function definition
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
