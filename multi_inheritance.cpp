#include <iostream>
using namespace std;

class Myclass {
    public:
    void myfunc() {
        cout << "MyClass::myfunc()----" "Content of myfunc"<< endl;
    }
};

class MyotherClass {
    public:
    void otherfunc() {
        cout << "MyOtherClass::otherfunc()----" "Content of OtherFunc"<< endl;
    }
};

class ChildClass : public Myclass, public MyotherClass {
};

int main(){
    ChildClass obj1;
    obj1.myfunc(); // calls the base class method
    obj1.otherfunc();//calls child's own version of this function
    return 0;
}