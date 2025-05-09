#include <iostream>
using namespace std;

int main() {
    int n;
    double harmonicSum = 0.0;

    cout << "Enter the number of terms (n): ";
    cin >> n;

    // Calculate the sum of harmonic series
    for (int i = 1; i <= n; i++) {
        harmonicSum += 1.0 / i;
    }

    cout << "Sum of the harmonic series up to " << n << " terms is: " << harmonicSum << endl;

    return 0;
}
