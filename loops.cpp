#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    int i;
    scanf("%d", &i);
    // do while loop
    do
    {
        cout << "The Given number is :" << i << endl;
        i++;
    } while (i < 5);

    // for loop
    for (int i = 0; i < 2; i++)
    {
        cout << "Outer " << i << endl; // executes 2 times
        for (int j = 0; j < 3; j++)
        {
            cout << "Inner " << j << endl; // executes 2*3 times ie 6
        }
    }

    //  for each loop
    int mynumber[4] = {1, 2, 3, 4};
    for (int i : mynumber)
    {
        cout << i << endl;
    }

    // continue statement
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;  // this will skip 4 while writing value from 0 to 10
        }
        cout << i << endl;
    }

    return 0;
}