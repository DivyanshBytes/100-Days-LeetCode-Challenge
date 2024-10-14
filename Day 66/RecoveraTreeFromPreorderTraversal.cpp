/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* bin(const vector<pair<int, int>>& nodes, int depth, int& index) {
        if (index >= nodes.size() || nodes[index].first != depth)
            return nullptr;
        
        TreeNode* root = new TreeNode(nodes[index].second);
        index++;
        root->left = bin(nodes, depth + 1, index);
        root->right = bin(nodes, depth + 1, index);
        return root;
    }
    TreeNode* recoverFromPreorder(string s) {
        vector<pair<int, int>> nodes;
        int i = 0, n = s.size();
        while (i < n) {
            int depth = 0;
            while (i < n && s[i] == '-') {
                depth++;
                i++;
            }
            int val = 0;
            while (i < n && isdigit(s[i])) {
                val = val * 10 + (s[i] - '0');
                i++;
            }
            nodes.push_back({depth, val});
        } 
        int index = 0;
        return bin(nodes, 0, index);
    }
};