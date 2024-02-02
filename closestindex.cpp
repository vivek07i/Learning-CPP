#include <iostream>
#include <cmath>

using namespace std;

int binarySearchClosest(int arr[], int left, int right, int target) {
    int closestIndex = -1;
    int minDiff = INT_MAX;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int currentDiff = abs(arr[mid] - target);

        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            closestIndex = mid;
        }

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return closestIndex;
}

int main() {
    // Example usage:
    int arr[] = {1, 3, 7, 9, 11, 12, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int result = binarySearchClosest(arr, 0, size - 1, target);

    cout << result << endl;

    return 0;
}
