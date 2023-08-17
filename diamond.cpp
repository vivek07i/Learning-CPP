#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    cout << "This Code is For Diamond Pattern." << endl;
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 6 - i; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < 6 - i; l++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int g = 0; g <= i; g++)
        {
            cout << " ";
        }
        for (int h = 0; h < 5 - i; h++)
        {
            cout << "*";
        }
        for (int y = 0; y < 5 - i; y++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 1;
}