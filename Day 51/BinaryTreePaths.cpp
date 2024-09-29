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
    void Paths(TreeNode* root, string temp, vector<string> &ans){
        if(root == NULL)
            return;

        temp += to_string(root->val);
        if(root->left == NULL && root->right == NULL)
            ans.push_back(temp);
        else{
            temp += "->";
            Paths(root->left, temp, ans);
            Paths(root->right, temp, ans);
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp = "";
        Paths(root, temp, ans);
    return ans;
    }
};