#include <iostream>
using namespace std;

int fib(int n){
    int sum =0;
    int f1= 1;
    int f0= 0;
    int fn=f1+f0;
    if(n=1){
        return f1;
    }else if(n=0){
        return f0;
    }
    else{
        for (int i = 2; i < n; i++)
        {
            fn= f1+f0;
            f1 = fn;
            f0 = f1;
        }
        
    }
    return sum;
}
int main(){
    int sum =0;
    int f1= 1;
    int terms;
    int f0= 0;
    int fn=f1+f0;
    cout<<"Enter the number of terms you want to generate: ";
    cin>>terms;
    // Fibonacci series starts from 0 and 1. So, we'll print these two first.
    cout << "Fibonacci Series: ";
    cout << f0 << ", " << f1 << ", ";
    // Now let's calculate remaining terms.
    for (int i = 2; i < terms; ++i){
        // We add last two numbers in the sequence and store it as next term.
        fn = f1 + f0;
        // Print this new term after a comma.
        cout << fn << ", ";
        // This becomes second last number now.
        f0 = f1;
        // And this is now the last number.
        f1 = fn;


    }
    return 0;
}