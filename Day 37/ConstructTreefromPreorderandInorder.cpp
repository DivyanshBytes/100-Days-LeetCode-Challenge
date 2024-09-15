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
private: 
    TreeNode* splitTree(vector<int>& preorder, unordered_map<int, int>& inorderIndexMap, int rootIndex, int left, int right) {
        TreeNode* root = new TreeNode(preorder[rootIndex]);
        int mid = inorderIndexMap[preorder[rootIndex]];

        if (mid > left)
            root->left = splitTree(preorder, inorderIndexMap, rootIndex + 1, left, mid - 1);

        if (mid < right)
            root->right = splitTree(preorder, inorderIndexMap, rootIndex + mid - left + 1, mid + 1, right);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorderIndexMap;
        for (int i = 0; i < inorder.size(); i++)
            inorderIndexMap[inorder[i]] = i;

        return splitTree(preorder, inorderIndexMap, 0, 0, inorder.size() - 1);
    }
};
