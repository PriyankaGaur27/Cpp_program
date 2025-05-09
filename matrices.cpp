#include <iostream>
using namespace std;

int main() {
    int m, n;

    // Input the number of rows and columns for the matrices
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> m >> n;

    int matrix1[m][n], matrix2[m][n], sum[m][n];

    // Input elements for the first matrix
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Add the two matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    cout << "Sum of the two matrices is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
