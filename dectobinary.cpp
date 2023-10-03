#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long binary = 0;
    long long base = 1; // To keep track of the position value

    while (N > 0) {
        int bit = N % 2;
        binary += bit * base;
        N /= 2;
        base *= 10; // Multiply base by 10 to move to the next binary position
    }

    cout << binary << endl;

    return 0;
}
