class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,string> m = {
            {1000,"M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
        };
        vector<int> keys = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string ans = "";
        for (int key : keys) {
            while (num >= key) {
                ans += m[key];
                num -= key;
            }
        }
    return ans;
    }
};