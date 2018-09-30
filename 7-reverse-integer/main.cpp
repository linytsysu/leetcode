#include <iostream>

class Solution {
public:
    int reverse(int x) {
        long reversed = 0;
        while (x != 0) {
            reversed = reversed * 10 + x % 10;
            x = x / 10;
        }
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        } else {
            int result = int(reversed);
            return result;
        }
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.reverse(0) << std::endl;
    return 0;
}
