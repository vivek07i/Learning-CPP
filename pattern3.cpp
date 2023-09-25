#include <iostream>
using namespace std;

int main()
{
    cout << "Enter any number" << endl;
    int n;
    cin >> n; 
    
    // 1 loop number
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << n;
        }
        cout << endl;
    }
    cout << endl;
    // 2 loop number
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;
    // 3 loop number
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    // 4 loop number
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << n-j+1;
        }
        cout << endl;
    }
    cout << endl;
    // 5 loop number
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << n-i+1;
        }
        cout << endl;
    }
    cout << endl;
}
