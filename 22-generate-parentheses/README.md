``` cpp
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(result, "", 0, 0, n);
        return result;
    }
    
    void generate(vector<string> &result, string current, int left, int right, int max) {
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }
        if (left < max) {
            generate(result, current + "(", left + 1, right, max);
        }
        if (right < left) {
            generate(result, current + ")", left, right + 1, max);
        }
    }
};
```