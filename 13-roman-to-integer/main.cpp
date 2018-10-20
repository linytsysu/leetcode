#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        string thousandArr[3] = {"M", "MM", "MMM"};
        string handredArr[9] = {"C", "CC", "CCC", "D", "CD", "DC", "DCC", "DCCC", "CM"};
        string tenArr[9] = {"X", "XX", "XXX", "L", "XL", "LX", "LXX", "LXXX", "XC"};
        string oneArr[9] = {"I", "II", "III", "V", "IV", "VI", "VII", "VIII", "IX"};
        int result = 0;
        for (int i = 8; i >= 0; i--) {
            if (s.find(oneArr[i]) != string::npos) {
                if (oneArr[i] == "IV") {
                    result += 4;
                } else if (oneArr[i] == "V") {
                    result += 5;
                } else {
                    result += (i + 1);
                }
                s = s.substr(0, s.size() - oneArr[i].size());
                break;
            }
        }
        for (int i = 8; i >= 0; i--) {
            if (s.find(tenArr[i]) != string::npos) {
                if (tenArr[i] == "XL") {
                    result += 40;
                } else if (tenArr[i] == "L") {
                    result += 50;
                } else {
                    result += (i + 1) * 10;
                }
                s = s.substr(0, s.size() - tenArr[i].size());
                break;
            }
        }
        for (int i = 8; i >= 0; i--) {
            if (s.find(handredArr[i]) != string::npos) {
                if (handredArr[i] == "CD") {
                    result += 400;
                } else if (handredArr[i] == "D") {
                    result += 500;
                } else {
                    result += (i + 1) * 100;
                }
                s = s.substr(0, s.size() - handredArr[i].size());
                break;
            }
        }
        for (int i = 2; i >= 0; i--) {
            if (s.find(thousandArr[i]) != string::npos) {
                result += (i + 1) * 1000;
                break;
            }
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    cout << solution.romanToInt("III") << endl;
    cout << solution.romanToInt("IV") << endl;
    cout << solution.romanToInt("IX") << endl;
    cout << solution.romanToInt("LVIII") << endl;
    cout << solution.romanToInt("MCMXCIV") << endl;
    return 0;
}
