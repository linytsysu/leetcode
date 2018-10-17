``` cpp
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int NUM = 9;
        // check row
        for (int i = 0; i < NUM; i++) {
            bool boolArr[NUM] = { false };
            for (int j = 0; j < NUM; j++) {
                char c = board[i][j];
                if (c != '.') {
                    if (boolArr[c - '0' - 1]) {
                        return false;
                    } else {
                        boolArr[c - '0' - 1] = true;
                    }
                }
            }
        }
        // check column
        for (int j = 0; j < NUM; j++) {
            bool boolArr[NUM] = { false };
            for (int i = 0; i < NUM; i++) {
                char c = board[i][j];
                if (c != '.') {
                    if (boolArr[c - '0' - 1]) {
                        return false;
                    } else {
                        boolArr[c - '0' - 1] = true;
                    }
                }
            }
        }
        // check grid
        for (int i = 0; i < NUM; i++) {
            for (int j = 0; j < NUM; j++) {
                if (i % 3 == 0 && j % 3 == 0) {
                    bool boolArr[NUM] = { false };
                    for (int m = i; m < i+3; m++) {
                        for (int n = j; n < j+3; n++) {
                            char c = board[m][n];
                            if (c != '.') {
                                if (boolArr[c - '0' - 1]) {
                                    return false;
                                } else {
                                    boolArr[c - '0' - 1] = true;
                                }
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
```