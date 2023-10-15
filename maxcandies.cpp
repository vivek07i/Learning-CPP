#include <iostream>

void maximum_candy(int n, int arr[], int extraCandies, bool output[]) {
    // Find the maximum number of candies among all children
    int maxCandies = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxCandies) {
            maxCandies = arr[i];
        }
    }

    // Check if each child can have the maximum candies by adding extraCandies
    for (int i = 0; i < n; i++) {
        if (arr[i] + extraCandies >= maxCandies) {
            output[i] = true;
        } else {
            output[i] = false;
        }
    }
}

int main() {
    int n, extraCandies;
    std::cin >> n >> extraCandies;

    int arr[n];
    bool output[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    maximum_candy(n, arr, extraCandies, output);

    // Print the output
    for (int i = 0; i < n; i++) {
        std::cout << (output[i] ? "True" : "False") << " ";
    }

    return 0;
}
