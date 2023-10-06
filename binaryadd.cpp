#include <string>

std::string addBinary(std::string a, std::string b) {
    std::string result;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int bit_a = (i >= 0) ? (a[i] - '0') : 0;
        int bit_b = (j >= 0) ? (b[j] - '0') : 0;
        int sum = bit_a + bit_b + carry;

        result += '0' + (sum % 2); // Convert the sum to a character ('0' or '1') and append it to result
        carry = sum / 2;

        i--;
        j--;
    }

    // Reverse the result string to get the correct order of binary digits
    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    std::string a1 = "11";
    std::string b1 = "1";
    std::string a2 = "1010";
    std::string b2 = "1011";

    std::cout << addBinary(a1, b1) << std::endl; // Output: "100"
    std::cout << addBinary(a2, b2) << std::endl; // Output: "10101"

    return 0;
}
