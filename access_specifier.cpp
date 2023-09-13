#include <iostream>
using namespace std;

class Employee
{
protected:
    int salary;
};

class Programmer : public Employee
{public:
    int bonus;
    void SetSalary(int s)
    {
        salary = s;
    }
    int GetSalary()
    {
        return salary;
    }
};

int
main()
{
    Programmer p;
    p.SetSalary(50000);
    p.bonus = 10000;
    cout << "Salary: " << p.GetSalary() << "\n";
    cout << "Bonus: " << p.bonus << "\n";
    return 0;
}