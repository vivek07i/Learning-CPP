#include <iostream>
using namespace std;
class Employee
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }
};
int main()
{
    cout << "Hello World" << endl;
    Employee myobj;
    myobj.setSalary(500000);
    cout << myobj.getSalary();
    return 0;
}