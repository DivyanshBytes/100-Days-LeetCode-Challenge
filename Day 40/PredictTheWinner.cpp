class Solution {
private:
    int Game(vector<int>& nums, int s, int e) {
        if (s > e) {
            return 0;
        }
        int p1 = nums[s] - Game(nums, s + 1, e);
        int p2 = nums[e] - Game(nums, s, e - 1);

    return max(p1, p2);
    }
public:
    bool predictTheWinner(vector<int>& nums) {
        return Game(nums, 0, nums.size() - 1) >= 0;
    }
};
