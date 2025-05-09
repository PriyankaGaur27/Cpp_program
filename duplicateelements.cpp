#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and display duplicate elements
    cout << "Duplicate elements in the array are: ";
    bool foundDuplicate = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                foundDuplicate = true;
                break; // Avoid printing the same duplicate multiple times
            }
        }
    }

    if (!foundDuplicate) {
        cout << "No duplicates found.";
    }

    cout << endl;

    return 0;
}
