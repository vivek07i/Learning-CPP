#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num{1, 2, 3, 4, 5};

    // .at() is used to access element of vecctor.
    cout << "Element at Index 0: " << num.at(0) << endl;
    cout << "Element at Index 2: " << num.at(2) << endl;
    cout << "Element at Index 4: " << num.at(4) << endl;

    vector<int> nums{1, 2, 3};

    // gives garbage value
    cout << nums[4] << endl;

    // throws an exception
    cout << nums.at(4) << endl;
    return 0;
}