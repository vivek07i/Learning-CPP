#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int h) {
    vector<int> temp;
    int left = l;
    int right = mid + 1;

    while (left <= mid && right <= h) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= h) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = l; i <= h; i++) {
        arr[i] = temp[i - l];
    }
}

void mergeSort(vector<int> &arr, int l, int h) {
    if (l < h) {
        int mid = l + (h - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
