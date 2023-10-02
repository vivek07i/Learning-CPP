#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int start = 1;
    int end = N;
    int ans;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (mid * mid == N) {
            ans = mid;
            break;
        } else if (mid * mid < N) {
            start = mid + 1; // we narrowing down the search range as the range lies in the upper half
            ans = mid; // Store the potential answer
        } else {
            end = mid - 1;  // we narrowing down the search range as the range lies in the lower half
        }
    }

    cout << ans << endl;

    return 0;
}
