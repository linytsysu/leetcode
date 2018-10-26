#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        do {
            result.push_back(nums);
        } while(next_permutation(nums.begin(), nums.end()));
        return result;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    vector<int> nums = {0, -1, 1};
    vector<vector<int>> result = solution.permute(nums);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
        }
        cout << endl;
    }
    return 0;
}
