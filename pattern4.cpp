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
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    // 2 loop number
    for (int i = 1; i <= n; i++)
    {
        int p =i;
        for (int j = 1; j <= i; j++)
        {
            cout << p;
            p++;
        }
        cout << endl;
    }
    cout << endl;

    // 3 loop number
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;
    // 4 loop number
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n-j+1;
        }
        cout << endl;
    }
    cout << endl;
    // 5 loop number
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n-i+1;
        }
        cout << endl;
    }
    cout << endl;
    // 6 loop number
    int k =1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
    cout << endl;
}
