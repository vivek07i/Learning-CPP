#include <iostream>
using namespace std;

int findUnique(int arr[], int N) {
    int unique = 0;
    for (int i = 0; i < N; i++) {
        unique ^= arr[i];
    }
    return unique;
}

int main() {
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int uniqueNumber = findUnique(arr, N);
    cout << uniqueNumber << endl;

    return 0;
}
