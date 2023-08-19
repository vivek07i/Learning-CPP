#include <iostream>
using namespace std;

//  this code will return 1 if the number is palindrome,
bool isPalindrome(int x)
{
    if (x < 0 || x != 0 && x % 10 == 0)
        return false;
    int check = 0;
    while (x > check)
    {
        check = check * 10 + x % 10;
        x /= 10;
    }
    return (x == check || x == check / 10);
}
int main()
{
    cout << "Hello World" << endl;
    cout << isPalindrome << endl;
    return 0;
}
