#include <iostream>
using namespace std;
class Car
{                 // The class
public:           // Access specifier
    string brand; // Attribute
    string model; // Attribute
    int year;     // Attribute
    Car(string x, string y, int z)
    { // Constructor with parameters
        brand = x;
        model = y;
        year = z;
    }
};

// here it is outside

/*
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}
*/

int main()
{
    cout << "Hello World" << endl;
    Car car1("BMW", "X5", 1999);
    Car car2("Ford", "Mustang", 1995);
    cout << car1.brand << endl << car1.model << endl << car1.year << "\n";
    cout << endl;
    cout << car2.brand << endl << car2.model << endl << car2.year << "\n";
    return 0;
}