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

    // loop 2
    for (int i = 1; i <= n; i++)
    {
        int p =i;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        
        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }
    cout << endl;
    return 0;
}