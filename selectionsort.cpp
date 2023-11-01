#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
       // find the minimum element;
    int min = arr[i], minIndex =i;
    for (int j=i+1;j<n;j++){
        if (arr[j]<min) {
            min = arr[j];
            minIndex = j;
        }
    }
    // swap(arr[minIndex], arr[0]); this is also method
    int temp =arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
    }
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: "<< endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "\nSorted array: "<< endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}