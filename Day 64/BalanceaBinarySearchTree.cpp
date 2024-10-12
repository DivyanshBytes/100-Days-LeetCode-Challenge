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
    void inorder(TreeNode* root, vector<int> &rootVal){
        if(root == NULL)
            return;

        inorder(root->left, rootVal);
        rootVal.push_back(root->val);
        inorder(root->right, rootVal);
    }
    TreeNode* construct(int s, int e, vector<int> rootVal){
        if(s > e)
            return NULL;

        int mid = s + (e-s)/2;
        TreeNode* root = new TreeNode(rootVal[mid]);
        root->left = construct(s, mid-1, rootVal);
        root->right = construct(mid+1, e, rootVal);
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> rootVal;
        inorder(root, rootVal);

        int s = 0;
        int e = rootVal.size()-1;
        return construct(s, e, rootVal);
    }
};