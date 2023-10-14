#include <iostream>
using namespace std;

void calculatePrefixSum(int arr[], int output[], int N) {
    output[0] = arr[0];
    for (int i = 1; i < N; i++) {
        output[i] = output[i - 1] + arr[i];
    }
}

int main() {
    int N;
    cin >> N; // Read the size of the array

    int arr[N];
    int output[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i]; // Read the elements of the array
    }

    calculatePrefixSum(arr, output, N);

    // Print the prefix sum array
    for (int i = 0; i < N; i++) {
        cout << output[i] << " ";
    }

    return 0;
}
