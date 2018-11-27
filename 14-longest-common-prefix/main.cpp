#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if (strs.size() == 0) {
            return result;
        }
        string sta = strs[0];
        for (int i = 0; i < sta.length(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (i < strs[j].length()) {
                    if (strs[j][i] != sta[i]) {
                        return result;
                    }
                } else {
                    return result;
                }
            }
            result += sta[i];
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    vector<string> strs = {"flower", "flow", "flight"};
    string result = solution.longestCommonPrefix(strs);
    cout << result << endl;
    return 0;
}
