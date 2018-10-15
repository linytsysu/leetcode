``` c++
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        string numStr = to_string(x);
        for (unsigned long i = 0, j = numStr.length() - 1; i < j; i++, j--) {
            if (numStr[i] != numStr[j]) {
                return false;
            }
        }
        return true;
    }
};
```