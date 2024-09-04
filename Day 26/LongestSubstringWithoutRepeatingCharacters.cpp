class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> count;
        int maxCount = 0, currentCount = 0, start = 0;

        for (int i = 0; i < s.size(); i++) {
            char currentChar = s[i];

            if (count.find(currentChar) != count.end() && count[currentChar] >= start) {
                start = count[currentChar] + 1;
                currentCount = i - start;
            }

            count[currentChar] = i;
            currentCount++;
            maxCount = max(maxCount, currentCount);
        }

        return maxCount;
    }
};
