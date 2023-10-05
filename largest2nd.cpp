#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << INT_MIN << endl; // Handle the case of 0 or 1 element.
        return 0;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num > largest)
        {
            secondLargest = largest;
            largest = num;
        }
        else if (num > secondLargest && num != largest)
        {
            secondLargest = num;
        }
    }

    cout << secondLargest << endl;

    return 0;
}
