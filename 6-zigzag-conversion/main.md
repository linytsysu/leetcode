``` c++
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        int len = int(s.size());
        string result = "";
        int step = 2 * (numRows - 1);
        for (int i = 0; i < numRows; i++) {
            int k = i;
            while (k < len) {
                result += s[k];
                int mid = k + 2 * (numRows - i - 1);
                if (i > 0 && mid < len && mid > k && mid < k + step) {
                    result += s[mid];
                }
                k += step;
            }
        }
        return result;
    }
};
```