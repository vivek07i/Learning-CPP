
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}




class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit = 0;
        // for(int i=0; i<prices.size(); i++){
        //     // j should start from 
        //     for(int j=i+1; j<prices.size(); j++){
        //         int difference = prices[j] - prices[i];
        //         if(profit<difference){
        //             profit = difference;
        //         }
        //     }
        // }
        // return profit;
        

        //chat
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        // Iterate through each price in the list
        for (int price : prices) {
            // Update the minimum price if the current price is lower
            if (price < minPrice) {
                minPrice = price;
            }
            // Calculate the potential profit if we sold at the current price
            else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }
        
        // Return the maximum profit found
        return maxProfit;
    }
};