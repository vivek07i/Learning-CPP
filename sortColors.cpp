#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Better Approach
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) cnt0++;
            else if (nums[i] == 1) cnt1++;
            else if (nums[i] == 2) cnt2++;
        }
        int i = 0;
        for (int j = 0; j < cnt0; j++)
            nums[i++] = 0;
        for (int j = 0; j < cnt1; j++)
            nums[i++] = 1;
        for (int j = 0; j < cnt2; j++)
            nums[i++] = 2;
        
    }
};


class Solution {
public:
    void sortColors(vector<int>& nums) {
       // Dutch National Flag Algorithm
        int low = 0, mid = 0;
        int high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

