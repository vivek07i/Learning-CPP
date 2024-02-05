#include <iostream>
#include <cstring>

void trimSpaces(char input[]) {
    int n = strlen(input);
    int i = 0, j = 0;

    // Iterate through the characters
    while (i < n) {
        // Skip spaces
        while (input[i] == ' ') {
            i++;
        }

        // Copy non-space characters
        while (i < n && input[i] != ' ') {
            input[j++] = input[i++];
        }
    }

    // Null-terminate the trimmed string
    input[j] = '\0';
}

int main() {
    // Sample input
    char input[] = "abc def g hi";

    // Trim spaces
    trimSpaces(input);

    // Output the result
    std::cout << input << std::endl;

    return 0;
}
