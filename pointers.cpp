#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    string food = "Pizza";
    string *ptr = &food;
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
    return 0;
}