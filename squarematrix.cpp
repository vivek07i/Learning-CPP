#include <iostream>
using namespace std;

void squareMatrix(int n, int arr[][50], int output[]) {
    for (int i = 0; i < n; ++i) {
        output[i] = arr[i][i];
    }
}

int main() {
    int n;
    cin >> n; // Input the size of the square matrix
    
    int arr[50][50]; // Define the 2D array to store the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j]; // Input the elements of the square matrix
        }
    }

    int output[50]; // Define the output array
    squareMatrix(n, arr, output); // Call the function to fill the output array
    
    // Output the diagonal elements
    for (int i = 0; i < n; ++i) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
