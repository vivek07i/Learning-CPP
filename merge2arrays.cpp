#include <iostream>

using namespace std;

// Function to merge two sorted arrays
void merge(int arr1[], int n, int arr2[], int m, int ans[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements until one of the arrays is exhausted
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            ans[k] = arr1[i];
            i++;
        } else {
            ans[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Add remaining elements from both arrays (if any)
    while (i < n) {
        ans[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        ans[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr1[n];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        int m;
        cin >> m;

        int arr2[m];
        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
        }

        // Assuming the maximum possible size for the merged array is n + m
        int ans[n + m];

        // Merge two arrays
        merge(arr1, n, arr2, m, ans);

        // Print the merged and sorted array
        for (int i = 0; i < n + m; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
