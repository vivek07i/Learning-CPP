#include <iostream>
using namespace std;

// here are some function parameter'

// default parameter
void func1(string country = "Norway", int num = 1)
{
    cout << country << endl
         << num << endl;
}
int main()
{
    cout << "Hello World" << endl;
    func1();
    func1("India", 2);
    func1("United Kingdom", 3);
    func1("China", 4);

    return 0;
}