#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> cars;
    cars.push("BMW");
    cars.push("Toyota");
    cars.push("Audi");
    cars.push("Hyundai");
    cars.push("Honda");
    cars.push("Range Rover");

    // print all the inputs of stack
    while(!cars.empty()) {
        cout << cars.top() << endl;
        cars.pop();
    }

     return 1;
}
