#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    string food = "Pizza";
    cout << &food << endl;  // adress of pizza
    string &meal = food;
    cout << food << endl;
    meal += ", Pasta, and Salad!";
    cout << meal << endl;

    return 0;
}