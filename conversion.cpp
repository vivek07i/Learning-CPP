#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    int c, f, k;
    cout << "Enter the Celsius : " << endl;
    cin >> c;
    k = c+273.15;
    f = c*1.8 +32;
    cout << "Celsius" << "  " << "Farhenheit" << "  " << "Kelvin" << endl; 
    cout << c << "      " << f << "         " << k << endl;

    return 0;
}