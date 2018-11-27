``` cpp
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
```
