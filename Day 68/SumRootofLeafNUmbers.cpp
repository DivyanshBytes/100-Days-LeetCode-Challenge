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
    void Sum(TreeNode *root, string temp, int &ans){
        if(root == NULL)
            return;

        temp += to_string(root->val);

        if(root->left == NULL && root->right == NULL){
            ans += stoi(temp);
            return;
        }
        Sum(root->left, temp, ans);
        Sum(root->right, temp, ans);
    }
public:
    int sumNumbers(TreeNode* root) {
        string temp = "";
        int ans = 0;
        Sum(root, temp, ans);
        return ans;
    }
};