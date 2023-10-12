#include <iostream>
using namespace std;

void fillArray(int ARR[], int N) {
    int oddIndex = 0;
    int evenIndex = N - 1;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 1) {
            ARR[oddIndex] = i;
            oddIndex++;
        } else {
            ARR[evenIndex] = i;
            evenIndex--;
        }
    }
}

int main() {
    int N;
    cin >> N;

    int ARR[N];
    
    fillArray(ARR, N);

    // You can use the filled array (ARR) for further processing if needed.

    return 0;
}
