#include <iostream>
using namespace std;
// other diamond pattern
int main() {
    int N;
    cin >> N;

    // Upper part of the pattern
    for (int i = 1; i <= N; i += 2) {
        // Print leading spaces
        for (int j = 1; j <= (N - i) / 2; j++) {
            cout << " ";
        }
        // Print '*' characters
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = N - 2; i >= 1; i -= 2) {
        // Print leading spaces
        for (int j = 1; j <= (N - i) / 2; j++) {
            cout << " ";
        }
        // Print '*' characters
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
