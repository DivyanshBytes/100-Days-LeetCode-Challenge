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
    bool Symmetric(TreeNode* L, TreeNode* R){
        if(L == NULL && R == NULL)
            return true;
        if(L == NULL || R == NULL)
            return false;
        if(L->val == R->val)
            return Symmetric(L->left, R->right) && Symmetric(L->right, R->left);
            
    return false;
    }
        
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return Symmetric(root->left, root->right);
    }
};