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
    void EnterString(TreeNode* root, string &ans){
        if(root == NULL)
            return;
            
        ans += to_string(root->val);
        if(root->left != NULL || root->right != NULL){
            ans += '(';
            EnterString(root->left, ans);
            ans += ')';
        }
        if(root->right != NULL){
            ans += '(';
            EnterString(root->right, ans);
            ans += ')';
        }
    }
public:
    string tree2str(TreeNode* root) {
        string ans = "";
        EnterString(root, ans);
        return ans;
    }
};