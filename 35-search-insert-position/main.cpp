#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = int(nums.size());
        while (left < right) {
            if (right - left == 1) {
                return nums[left] >= target ? left : right;
            }
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid;
            } else if (nums[mid] > target) {
                right = mid;
            } else {
                return mid;
            }
        }
        return 0;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    vector<int> nums = {1, 2, 3, 5, 6};
    cout << solution.searchInsert(nums, 5) << endl;
    cout << solution.searchInsert(nums, 2) << endl;
    cout << solution.searchInsert(nums, 7) << endl;
    cout << solution.searchInsert(nums, 0) << endl;
    return 0;
}
