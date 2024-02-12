#include <iostream>

using namespace std;

void printSubstrings(char input[]) {
    for (int i = 0; input[i] != '\0'; ++i) {
        for (int j = i; input[j] != '\0'; ++j) {
            for (int k = i; k <= j; ++k) {
                cout << input[k];
            }
            cout << endl;
        }
    }
}

int main() {
    char input1[] = "abc";
    char input2[] = "co";

    cout << "Sample Output 1:" << endl;
    printSubstrings(input1);

    cout << "\nSample Output 2:" << endl;
    printSubstrings(input2);

    return 0;
}
