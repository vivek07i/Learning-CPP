#include <iostream>
using namespace std;

int main()
{
    cout << "This code is to understand bitwise operastor" << endl;
    int ror = 15 | 30;
    int rand = 15 & 30;
    int rnot = ~15;
    int rxor = 15 ^ 30;
    int rls = 15 << 2;
    int rrs = 15 >> 2;
     // right shift huge number that will be decided by compiler to put 0 or 1
    cout << ror << endl;
    cout << rand << endl;
    cout << rnot << endl;
    cout << rxor << endl;
    cout << rls << endl;
    cout << rrs << endl;

    
    return 0;
}