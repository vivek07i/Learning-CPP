#include <iostream>
using namespace std;
// Diamond pattern printing
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
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = i-1; j >=1; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n-1; i >= 1 ; i--)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >=1 ; j--)
        {
                cout << "*";
        }
        for (int j = i; j >=2; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
    
    return 0;
}