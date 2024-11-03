class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) 
            return false;

        unordered_map<char, int> s_map, goal_map;
        for (char ch : s) 
            s_map[ch]++;
        for (char ch : goal) 
            goal_map[ch]++;

        if (s_map != goal_map) 
            return false;

        int n = s.size();
        for (int i=0; i<n; i++) {
            bool isRotation = true;
            for (int j=0; j<n; j++) {
                if (s[(i + j) % n] != goal[j]) {
                    isRotation = false;
                    break;
                }
            }
            if (isRotation)
                return true;
        }
        return false;
    }
};
