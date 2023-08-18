#include <iostream>
using namespace std;

void func1()
{
    cout << "THis Code is Executed" << endl;
}

void func2(string fname)
{
    cout << fname << " Drake\n";
}

int main()
{
    func1();
    func2("Liam");
    func2("Nathan");
    return 0;
}