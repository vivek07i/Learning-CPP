#include <iostream>
using namespace std;

class MyClass
{
public:
    void myMethod();
};
void MyClass::myMethod()
{
    cout << "Hello World!" << endl;
    cout << "Outside calss" << endl;
}

int main()
{
    MyClass myObj;
    myObj.myMethod();
}