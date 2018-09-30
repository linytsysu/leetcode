#include <iostream>
#include <vector>
#include <unordered_map>
using namespace:: std;

class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> map;
       vector<int> result;

       for (int i = 0; i < nums.size(); i++) {
           map.emplace(nums[i], i);
       }
       for (int i = 0; i < nums.size(); i++) {
           int complement = target - nums[i];
           if (map.find(complement) != map.end() && map[complement] != i) {
               result.push_back(i);
               result.push_back(map[complement]);
               break;
           }
       }
       return result;
   }
};

int main(int argc, const char * argv[]) {
    vector<int> nums { 2, 7, 11, 15 };
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    for (int i = 0; i < result.size() - 1; i++) {
        cout << result[i] << ' ';
    }
    cout << result[result.size() - 1] << endl;
    return 0;
}
