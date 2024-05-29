#include <iostream>
using namespace std;

void swapArr(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int t = arr[l];
    arr[l] = arr[r];
    arr[r] = t;
  
    swapArr(arr, l + 1, r - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    swapArr(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
