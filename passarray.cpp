#include <iostream>
using namespace std;

void myfunc(int mynum[5])
{
    cout << "The value of the array is: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << mynum[i] << endl;
    }
    
}

int main()
{
    int num[5] = {10,20,30,40,50};
    myfunc(num);

    return 0;
}
