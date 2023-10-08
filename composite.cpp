#include <iostream>

void print_composite(int n) {
    for (int num = 4; num <= n; ++num) {
        bool isComposite = false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isComposite = true;
                break;
            }
        }

        if (isComposite) {
            std::cout << num << std::endl;
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the upper limit (n): ";
    std::cin >> n;
    std::cout << "Composite numbers up to " << n << " are:" << std::endl;
    print_composite(n);
    return 0;
}
