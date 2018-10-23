#include <iostream>
#include <vector>
using namespace std;

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

int main(int argc, const char * argv[]) {
    Solution solution;
    cout << solution.convert("PAYPALISHIRING", 3) << endl;
    cout << (solution.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR") << endl;
    cout << solution.convert("PAYPALISHIRING", 4) << endl;
    cout << (solution.convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI") << endl;
    cout << solution.convert("A", 1) << endl;
    cout << (solution.convert("A", 1) == "A") << endl;
    return 0;
}
