#include <iostream>
#include <cstdlib> // For atoi()

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <int1> <int2>" << endl;
        return 1;
    }

    // Convert command-line arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int sum = num1 + num2;

    cout << "Sum: " << sum << endl;

    return 0;
}
