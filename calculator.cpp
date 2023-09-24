#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
  
        cout << "Menu:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Remainder" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        int num1, num2;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Sum: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Difference: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Product: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "Quotient: " << static_cast<double>(num1) / num2 << endl;
                } else {
                    cout << "Division by zero is not allowed." << endl;
                }
                break;
            case 5:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "Remainder: " << num1 % num2 << endl;
                } else {
                    cout << "Division by zero is not allowed." << endl;
                }
                break;
            case 6:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid Operation" << endl;
        }
    }

    return 0;
}
