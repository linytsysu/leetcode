``` c++
class Solution {
public:
    string countAndSay(int n) {
        vector<string> readOff;
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                readOff.push_back("1");
                continue;
            }
            string tmp = readOff[i - 2];
            string res = "";
            int count = 1;
            char c = tmp[0];
            for (int j = 0; j < tmp.length(); j++) {
                if (j + 1 == tmp.length()) {
                    res += to_string(count) + c;
                    count = 1;
                } else if (tmp[j+1] != c) {
                    res += to_string(count) + c;
                    c = tmp[j+1];
                    count = 1;
                } else {
                    count += 1;
                }
            }
            readOff.push_back(res);
        }
        return readOff[n - 1];
    }
};

```