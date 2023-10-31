#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int findClosestIndex(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // At this point, left and right have crossed. The closest element will be at either left or right.
    if (abs(nums[left] - target) <= abs(nums[right] - target)) {
        return left;
    } else {
        return right;
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);

    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    int result = findClosestIndex(nums, target);
    cout << result << endl;

    return 0;
}
