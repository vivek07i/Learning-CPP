#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cout << "Enter the lengths of three sides (X Y Z): "<< endl;
    cin >> X >> Y >> Z;

   
    if (X + Y > Z && Y + Z > X && X + Z > Y) {
      
        if (X == Y && Y == Z) {
            cout << "It is an equilateral triangle." << endl;
        }
        else if (X == Y || Y == Z || X == Z) {
            cout << "It is an isosceles triangle." << endl;
        }
        else {
            cout << "It is a scalene triangle." << endl;
        }
    } else {
        cout << "A triangle with these side lengths does not exist." << endl;
    }

    return 0;
}
