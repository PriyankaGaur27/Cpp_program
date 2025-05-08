#include <iostream>

int main() {
    int n;

    // Prompt the user to enter the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    int sum = 0;

    // Input elements into the array
    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        sum += arr[i]; // Add each element to sum
    }

    // Calculate the average
    double average = static_cast<double>(sum) / n;

    // Output the result
    std::cout << "Average of the array elements: " << average << std::endl;

    return 0;
}
