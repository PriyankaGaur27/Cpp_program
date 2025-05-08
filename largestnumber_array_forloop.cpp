#include <iostream>

int main() {
    int n;

    // Prompt the user to enter the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];

    // Input elements into the array
    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Initialize the first element as the largest
    int largest = arr[0];

    // Traverse the array to find the largest element
    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest element
    std::cout << "The largest number in the array is: " << largest << std::endl;

    return 0;
}
