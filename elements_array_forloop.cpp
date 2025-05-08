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

    // Print the array in reverse order using a for loop
    std::cout << "Array in reverse order:\n";
    for (int i = n - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
