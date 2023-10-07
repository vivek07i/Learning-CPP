#include <iostream>

bool isPalindrome(int n) {
    int original = n;
    int reverse = 0;

    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    return original == reverse;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    bool result = isPalindrome(n);

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
