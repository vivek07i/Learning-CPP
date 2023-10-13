#include <iostream>

void sumArrays(int N, int arr1[], int arr2[], int arr3[]) {
    for (int i = 0; i < N; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int N;
    std::cin >> N;

    int arr1[N], arr2[N], arr3[N];

    for (int i = 0; i < N; i++) {
        std::cin >> arr1[i];
    }

    for (int i = 0; i < N; i++) {
        std::cin >> arr2[i];
    }

    sumArrays(N, arr1, arr2, arr3);

    for (int i = 0; i < N; i++) {
        std::cout << arr3[i] << " ";
    }

    return 0;
}
