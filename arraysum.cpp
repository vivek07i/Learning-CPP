#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the size of the array

    int arr[N]; // Declare an array of size N
    
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int sum = 0; // Initialize a variable to store the sum

    // Calculate the sum of all elements in the array
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    // Print the sum
    cout << sum << endl;

    return 0;
}
