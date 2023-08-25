#include <iostream>
using namespace std;

class MyClass {        
  public:             
    void myMethod() { 
      cout << "Hello World!" << endl;
      cout << "Inside calss" << endl;
    }
};

int main() {
  MyClass myObj;   
  myObj.myMethod();  
  return 0;
}