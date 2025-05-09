#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) {
            return false; // If divisible, it's not a prime number
        }
    }
    return true; // If no divisors were found, it's a prime number
}

int main() {
    int start, end;

    cout << "Enter the start and end numbers: ";
    cin >> start >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}
