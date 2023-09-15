#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    unsigned int a = -145;
    // will give a large value as it interpretes as unsigned int not as int
    cout << a << endl; 
    char b = 1161041;
    // cant store this big value as char range is 2^n - 1
    cout << b << endl;

    return 0;
}