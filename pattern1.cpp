#include <iostream>
using namespace std;

int main()
{

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= rows; i++)
    {

        for (int j = i; j >= 1; j--)
        {

            cout << j;
        }

        cout << endl;
    }

    for (int i = 1; i <= rows; i++)
    {

        for (int j = i; j >= 1; j--)
        {

            cout << i;
        }

        cout << endl;
    }


    return 0;
}