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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> Ans;
        if(n == 1){
            TreeNode* ans = new TreeNode(0);
            Ans.push_back(ans);
            return Ans;
        }
        if(n % 2 == 0)
            return Ans;
            
        for(int i=1; i<n; i+=2){
            vector<TreeNode*> leftTrees = allPossibleFBT(i);
            vector<TreeNode*> rightTrees = allPossibleFBT(n-i-1);

            for(auto &L : leftTrees){
                for(auto &R : rightTrees){
                    TreeNode* root = new TreeNode(0);
                    root->left = L;
                    root->right = R;
                    Ans.push_back(root);
                }
            }
        }
    return Ans;
    }
};