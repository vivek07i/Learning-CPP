#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    struct car
    //  here car is data type that we made using structure
    {
        string brand;
        string model;
        int year;
    };

    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}