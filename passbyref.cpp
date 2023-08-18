#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    cout << "Hello World" << endl;
    int one = 10;
    int two = 20;

    cout << "Number Before swapping :" << one << " and " << two << endl;
    swap(one, two);
    cout << "Number After swapping :" << one << " and " << two << endl;

    return 0;
}