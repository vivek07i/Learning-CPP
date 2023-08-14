#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    string cars[4] = {"BMW", "Volvo", "Ford", "Mustang"};
    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;
    cout << cars[3] << endl;

    int myNumber[5] = {1, 2, 3, 4, 5};
    cout << "size of array" << sizeof(myNumber) << endl;
    // it return the size of a type in bytes
    int getArrayLength = sizeof(myNumber) / sizeof(int);
    cout << "number of element :" << getArrayLength << endl;

    return 0;
}