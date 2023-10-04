#include <iostream>
using namespace std;

int main()
{

    // Write your code here
    int N;
    cin >> N;
    for (int i = N; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= N - i; j++)
        {
            cout << '*';
        }
        for (int j = 1; j <= N - i; j++)
        {
            cout << '*';
        }
        for (size_t j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}
