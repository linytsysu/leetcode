#include <iostream>
#include <unordered_map>
using namespace std;

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

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.isPalindrome(121) << std::endl;
    std::cout << solution.isPalindrome(-121) << std::endl;
    std::cout << solution.isPalindrome(10) << std::endl;
    return 0;
}
