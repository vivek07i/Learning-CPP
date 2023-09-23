#include <iostream>
using namespace std;

int main()
{
    char inputChar;

    cout << "Enter a character: ";
    cin >> inputChar;

    if (inputChar >= 'A' && inputChar <= 'Z')
    {
        cout << "1" << endl;
    }

    else if (inputChar >= 'a' && inputChar <= 'z')
    {
        cout << "0" << endl;
    }

    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
