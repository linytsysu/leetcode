``` c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        bool found = false;
        for (int i = 0; i < nums.size(); i++) {
            if (found) {
                break;
            }
            for (int j = i + 1; j < nums.size(); j++) {
                if (found) {
                    break;
                }
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    found = true;
                }
            }
        }
        return result;
    }
};
```

``` c++
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
```
