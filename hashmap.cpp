#include<iostream>
#include<map>
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
    map <int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] ++;
    }

    // iterate in the map
    // for(auto it : mpp){
    //     cout << it.first << "-->" << it.second << endl;
    // }
    

    int m;
    cin >> m;
   while (m--)
   {    
    int num;
    cin >> num;
    // fetching
    cout << mpp[num] << endl;
   }
   
    
}