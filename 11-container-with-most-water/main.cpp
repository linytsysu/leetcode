#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = int(height.size());
        int area = 0;
        for (int i = 0, j = size - 1; i < j;) {
            int min = height[i] < height[j] ? height[i] : height[j];
            area = area > (min * (j - i)) ? area : (min * (j - i));
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return area;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << solution.maxArea(height) << endl;
    return 0;
}
