#include <iostream>
#include <vector>

using namespace std;

bool canBeIncreasing(vector<int>& nums) {
    int count = 0;  // Count of elements to be removed

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] <= nums[i - 1]) {
            // If the current element is not greater than the previous one,
            // we need to remove an element. We prioritize removing the current
            // element, and if that doesn't work, we remove the previous one.
            ++count;
            if (i > 1 && nums[i] <= nums[i - 2]) {
                nums[i] = nums[i - 1];  // Remove current element
            } else {
                nums[i - 1] = nums[i];  // Remove previous element
            }
        }
    }

    // Check if the modified array is strictly increasing
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] <= nums[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    // Example usage
    vector<int> nums = {1, 2, 4, 6, 10, 5, 7};
    
    if (canBeIncreasing(nums)) {
        cout << "Array can be made strictly increasing by removing one element.\n";
    } else {
        cout << "Array cannot be made strictly increasing by removing just one element.\n";
    }

    return 0;
}
