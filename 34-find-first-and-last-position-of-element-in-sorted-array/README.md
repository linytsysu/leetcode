``` cpp
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) {
            return vector<int>{-1, -1};
        }
        vector<int> result;
        int left = search(nums, target, true);
        if (left == -1 || left == nums.size() || nums[left] != target) {
            return vector<int>{-1, -1};
        }
        int right = search(nums, target, false);
        result.push_back(left);
        result.push_back(right - 1);
        return result;
    }
    int search(vector<int>& nums, int target, bool left) {
        vector<int> result;
        int lo = 0;
        int hi = int(nums.size());
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (nums[mid] > target || (left && nums[mid] == target)) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};
```