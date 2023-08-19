#include <iostream>
using namespace std;

// function can be overload by using same name.
// Instead of defining two functions that should do the same thing, it is better to overload one

int func(int x, int y)
{
   return x + y;
//    dont write just x+y ,, also use return x+y
}
int func(double x, double y)
{
   return x + y;
}

int main()
{
    int num = func(5, 8);
    double run = func(2.8, 7.8);
    cout << "Same function used for double and integer : " << endl;
    // overloading in c++ is not possible because we cant have multiple definition of a single function with different parameter types
    // overloading in c++ is done with keyword virtual or override .

    
    // calling overloaded function with different data type
    cout << "Integer : " << num << endl;
    cout << "Double : " << run << endl;

    return 0;
}