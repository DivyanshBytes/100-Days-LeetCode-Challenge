class Solution {
public:
    int dfs(TreeNode* root, unordered_map<int, int>& sums) {
        if(root == NULL) return 0;
        
        int sum = root->val;
        sum += dfs(root->left, sums);
        sum += dfs(root->right, sums);

        sums[sum]++;
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        unordered_map<int, int> sums;
        int maxFreq = 0;
        dfs(root, sums);
        for(auto &it: sums) 
            maxFreq = max(maxFreq, it.second);
        for(auto &it: sums)
            if(it.second == maxFreq) ans.push_back(it.first);
    return ans;
    }
};