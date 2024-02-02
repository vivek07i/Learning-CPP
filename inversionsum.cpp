#include<iostream>
using namespace std;

int getInversions(int arr[], int n) {
    int inversions = 0;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // If arr[i] > arr[j], it's an inversion
                inversions += (j - i);
            }
        }
    }

    return inversions;
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = getInversions(A, N);
    cout << result << endl;

    return 0;
}
