#include <iostream>
using namespace std;

void reverse(int *ar, int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int temp = ar[left];
        ar[left] = ar[right];
        ar[right] = temp;

        left++;
        right--;
    }
}

int main() {
    int n;
    cin >> n;

    int *ar = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    reverse(ar, n);

    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;

    delete[] ar;

    return 0;
}
