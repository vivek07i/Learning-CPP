#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;
        int n = nums.size();
        
        // Find the first occurrence of target
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                start = i;
                break;
            }
        }
        
        // Find the last occurrence of target
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == target) {
                end = i;
                break;
            }
        }
        
        // If the target is not found, count is 0
        int count = (start == -1 || end == -1) ? 0 : (end - start + 1);
        
        return {start, end, count};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 2, 2, 3};
    int target = 2;
    vector<int> result = sol.searchRange(nums, target);
    // Output: [2, 5, 4]
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    target = 4;
    result = sol.searchRange(nums, target);
    // Output: [-1, -1, 0]
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
