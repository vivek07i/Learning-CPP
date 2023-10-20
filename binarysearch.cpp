#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Target found, return its index
        } else if (arr[mid] < target) {
            left = mid + 1;  // Update the left pointer
        } else {
            right = mid - 1;  // Update the right pointer
        }
    }

    return -1;  // Target not found in the array
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int target;
    cin >> target;

    int result = binarySearch(A, N, target);
    cout << result << endl;

    return 0;
}
