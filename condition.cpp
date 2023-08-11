#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World\n";

    int time;
    cout << "Enter The time" << endl;
    cin >> time;

    // shortend if else -- used to write a code of 2 if else into one line 
    string result = (time < 15) ? "Good Day" : "Good Evening";
    cout << result;

    int x, y;
    scanf("%d%d", &x, &y);
    cout << "Enter any 2 Number" << endl;
    if (x > y)
    {
        cout << "First Number is greater";
    }
    else if (x < 5)
    {
        cout << "You Re Dumb";
    }
    else
    {
        cout << " Not Good Input";
    }
    return 0;
}