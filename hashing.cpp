#include<iostream>
using namespace std;

int main(){
    // taking input array
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }

    //  precomputing some data
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    

    int m;
    cin >> m;
   while (m--)
   {    
    int num;
    cin >> num;
    // fetching
    cout << hash[num] << endl;
   }
   
    
}