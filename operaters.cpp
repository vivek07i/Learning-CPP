#include <iostream>
using namespace std;
int main()
{
    double a = 6 / 4;
    int b = 6 / 4;
    double c = a + b;
    cout << c;
    double y = 55.5;
    int x = 55;
    x = x % 10;
    y = y % 10;
    cout << x << " "  << y;
    //  this will give synatx error as % ant be used with double and float
}