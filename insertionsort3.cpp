#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        int j=i;
        while (j>0 &&arr[j-1]>arr[j])
        {
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1] = temp;
            j--;
            cout << "runs\n";
        }
        
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "\nSorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
