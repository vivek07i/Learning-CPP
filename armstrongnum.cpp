#include <iostream>

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int numDigits = countDigits(n);

    // Calculate the sum of digits raised to the power of numDigits
    while (n > 0) {
        int digit = n % 10;

        // Calculate digit^numDigits manually
        int power = 1;
        for (int i = 0; i < numDigits; i++) {
            power *= digit;
        }

        sum += power;
        n /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    bool result = isArmstrong(n);

    if (result) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
