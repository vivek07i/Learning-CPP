#include <iostream>
using namespace std;
// character printing
int main()
{
    int n;
    cout << "Enter the number of pattern :";
    cin >> n;

    // loop = 1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch;
        }
        cout << endl;
    }
    cout << endl;

    // loop = 2
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + i - 1;
            cout << ch;
        }
        cout << endl;
    }
    cout << endl;

    // loop = 3
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char startingChar = 'A' + i - 1;
            char ch = startingChar + j - 1;
            cout << ch;
        }
        cout << endl;
    }
}