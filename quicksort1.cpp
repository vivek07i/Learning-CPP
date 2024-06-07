class Solution {
public:
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[low];
        int i = low;
        int j = high;
        
        while (i < j) {
            while (nums[i] <= pivot && i < high) {
                i++;
            }
            while (nums[j] > pivot && j > low) {
                j--;
            }
            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }

    void qS(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pI = partition(nums, low, high);
            qS(nums, low, pI - 1);
            qS(nums, pI + 1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        qS(nums, 0, nums.size() - 1);
        return nums;
    }
};
