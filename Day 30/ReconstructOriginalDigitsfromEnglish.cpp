class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char,int> count;
        for(char c : s)
            count[c]++;

        vector<int> digit(10,0);
        digit[0] = count['z'];
        digit[2] = count['w'];
        digit[4] = count['u'];
        digit[6] = count['x'];
        digit[8] = count['g'];

        digit[1] = count['o'] - digit[0] - digit[2] - digit[4];
        digit[3] = count['h'] - digit[8];
        digit[5] = count['f'] - digit[4];
        digit[7] = count['s'] - digit[6]; 
        digit[9] = count['i'] - digit[5] - digit[6] - digit[8];
        string ans = "";
        for(int i=0; i<10; i++){
            ans += string(digit[i], '0' + i);
        }
    return ans;
    }
};