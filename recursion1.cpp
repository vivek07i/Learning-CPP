#include <iostream>
using namespace std;

void func(int a) {
    int b = a;
    b = b + 10;
}

void name(int i,int n){
    if(i<n){
       cout << "raj" << endl;
    }
    name(i+1,n);
    return;

}
int counting(int i, int n){
    if(i<0){
        return 0;
    }
    cout << i<< endl;
    counting(i-1,n);
}
int back(int i, int n){
     if(i>n){
        return 0;
    }
    back(i+1, n);
    cout << i<< endl;
}

int sump(int i, int sum){
    // parameterised way of recursion 
    if(i<=0){
        cout << sum;
        return 0;
    }
    sump(i-1,sum+i);
    
}

int main() {
    // int a = 10;
    // func(a);
    // cout << b << endl;


    // q1 : print name n times
    // int n,i;
    // cin >>n;
    // cin >>i;
    // name(i,n);

    // q2 : print linearly from 1 to n using recursion
    // int n,i;
    // cin >>n;
    // cin >>i;
    // back(i,n);

    // q3 sum using recursion
    // int i;
    // cin >>i;
    // sump(i,0);





}