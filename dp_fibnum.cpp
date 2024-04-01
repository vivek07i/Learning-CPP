#include <iostream> 
using namespace std; 
  
// Function for calculating the nth 
// Fibonacci number 
int fibo(int n) 
{ 
    int* ans = new int[n + 1]; 
    ans[0] = 0; 
    ans[1] = 1; 
  
    // Using the bottom-up approach 
    for (int i = 2; i <= n; i++) { 
        ans[i] = ans[i - 1] + ans[i - 2]; 
    } 

    return ans[n]; 
} 

int main() 
{ 
    int n = 5; 

    cout << fibo(n); 
    return 0; 
}