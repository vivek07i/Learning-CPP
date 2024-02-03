#include <iostream>

void replaceCharacters(char *str, char c1, char c2) {
    while (*str) {
        if (*str == c1) {
            *str = c2;
        }
        ++str;
    }
}

int main() {
    // Sample Input
    char inputString[] = "abacd";
    char replaceChar1 = 'a';
    char replaceChar2 = 'x';

    // Function Call
    replaceCharacters(inputString, replaceChar1, replaceChar2);

    // Sample Output
    std::cout << inputString << std::endl;

    return 0;
}
