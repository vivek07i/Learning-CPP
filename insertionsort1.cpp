#include <iostream>
using namespace std;

void recursiveInsertionSort(int arr[], int n) {
    if (n <= 1)
        return;

    recursiveInsertionSort(arr, n - 1);

    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && key < arr[j]) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    recursiveInsertionSort(arr, N);

    // Output the sorted array
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
