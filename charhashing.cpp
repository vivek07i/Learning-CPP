#include<iostream>
using namespace std;

int main(){
    // taking input array
    string s;
    cin >> s;

    //  precomputing some data
    int hash[256] = {0}; // bcoz there are 256 characters with ASCII calues
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }
    

    int m;
    cin >> m;
   while (m--)
   {    
    char ch;
    cin >> ch;
    // fetching
    cout << hash[ch] << endl;
   }
   
    
}