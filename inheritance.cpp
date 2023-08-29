#include <iostream>
using namespace std;
// Base Class
class vehicle
{
public:
    string brand = "Ford";
    void model()
    {
        cout << "Mustang" << endl;
    }
};

// Derived class
// : Public Base class name
class Car : public vehicle
{
public:
    string color = "Black";
};

int
main()
{
    cout << "Hello World" << endl;
    Car mycar;
    mycar.model();
    cout << mycar.brand << endl;
    cout << mycar.color << endl;
    return 0;
}