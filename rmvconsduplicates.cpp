#include <iostream>

void removeConsecutiveDuplicates(char input[]) {
    if (input[0] == '\0') {
        // Empty string, nothing to remove
        return;
    }

    int index = 0;  // index to track the current position in the updated string

    for (int i = 1; input[i] != '\0'; i++) {
        if (input[i] != input[index]) {
            // If the current character is different from the previous one, update the string
            index++;
            input[index] = input[i];
        }
        // If the current character is the same as the previous one, continue to the next character
    }

    // Null-terminate the updated string
    index++;
    input[index] = '\0';
}

int main() {
    char input[1000001];
    std::cin >> input;

    removeConsecutiveDuplicates(input);

    std::cout << input << std::endl;

    return 0;
}
