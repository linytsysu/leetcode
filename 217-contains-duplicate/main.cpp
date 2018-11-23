#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) == s.end()) {
                s.insert(nums[i]);
            } else {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    vector<int> nums = {1, 2, 3, 1};
    cout << solution.containsDuplicate(nums) << endl;
    return 0;
}
