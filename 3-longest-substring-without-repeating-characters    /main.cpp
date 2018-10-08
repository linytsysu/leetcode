#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int start = 0;
        int maxLength = 0;
        for (int i = 0; i < s.length(); i++) {
            unordered_map<char, int>::const_iterator got = map.find(s[i]);
            if (got == map.end()) {
                map.emplace(s[i], i);
            } else {
                if (got->second >= start) {
                    maxLength = (i - start) > maxLength ? (i - start) : maxLength;
                    start = got->second + 1;
                }
                map.erase(s[i]);
                map.emplace(s[i], i);
            }
        }
        maxLength = (s.length() - start) > maxLength ? (int(s.length()) - start) : maxLength;
        return maxLength;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.lengthOfLongestSubstring("abcabcbb") << std::endl;
    std::cout << solution.lengthOfLongestSubstring("bbbbb") << std::endl;
    std::cout << solution.lengthOfLongestSubstring("pwwkew") << std::endl;
    return 0;
}
