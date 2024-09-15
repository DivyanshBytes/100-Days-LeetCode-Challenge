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
    TreeNode* splitTree(vector<int>& postorder, unordered_map<int, int>& inorderIndexMap, int rootIndex, int left, int right){
        TreeNode* root = new TreeNode(postorder[rootIndex]);
        int mid = inorderIndexMap[postorder[rootIndex]];

        if (mid < right)
            root->right = splitTree(postorder, inorderIndexMap, rootIndex - 1, mid + 1, right);
        if (mid > left)
            root->left = splitTree(postorder, inorderIndexMap, rootIndex - (right - mid + 1), left, mid - 1);

    return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder){
        unordered_map<int, int> inorderIndexMap;
        for (int i = 0; i < inorder.size(); i++)
            inorderIndexMap[inorder[i]] = i;

    return splitTree(postorder, inorderIndexMap, postorder.size() - 1, 0, inorder.size() - 1);
    }
};
