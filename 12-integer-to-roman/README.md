``` c++
class Solution {
public:
    string intToRoman(int num) {
        int thousand = num / 1000;
        int handred = num / 100 % 10;
        int ten = num / 10 % 10;
        int one = num % 10;
        string thousandArr[3] = {"M", "MM", "MMM"};
        string handredArr[9] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string tenArr[9] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string oneArr[9] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        return (thousand > 0 ? thousandArr[thousand - 1] : "") +
            (handred > 0 ? handredArr[handred - 1] : "") +
            (ten > 0 ? tenArr[ten - 1] : "") +
            (one > 0 ? oneArr[one - 1] : "");
    }
};
```