``` cpp
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
```
