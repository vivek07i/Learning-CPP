class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int x=0; int y=0;
       for(int i=0;i<=n;i++){
            x=x^i;
        }
        for(int i=0; i<n;i++){
            y=y^nums[i];
        }
       return x^y;
    }
};



class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int sum = (n*(n+1))/2;
       int sm=0;
       for(int i=0; i<n;i++){
        sm+=nums[i];
       }
        return sum-sm;
    }
};