#include<iostream>
#include<cmath>

using namespace std;

long long int floorSqrt(long long int N) {
    if (N == 0 || N == 1) {
        return N; // 0 and 1 are their own square roots
    }

    long long int start = 1, end = N, result;

    while (start <= end) {
        long long int mid = (start + end) / 2;

        if (mid * mid == N) {
            return mid; // 'N' is a perfect square
        }

        if (mid * mid < N) {
            start = mid + 1;
            result = mid; // Update result to the current mid, as it is a potential floor value
        } else {
            end = mid - 1;
        }
    }

    return result; // Return the floor value of the square root
}

int main() {
    long long int N;

    // Input
    cout << "Enter a positive integer N: ";
    cin >> N;

    // Output
    long long int squareRoot = floorSqrt(N);
    cout << "Floor square root of " << N << " is: " << squareRoot << endl;

    return 0;
}
