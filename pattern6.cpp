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
        int j = 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << i;
        }

        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i+1; j++)
        {
            cout << j;
        }

        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i+1; j++)
        {
            cout << n-i+1;
        }

        cout << endl;
    }
    cout << endl;
    return 0;
}