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
    void inorder(TreeNode* root, vector<int> &temp){
        if(root == NULL)
            return;
        
        inorder(root->left, temp);
        temp.push_back(root->val);
        inorder(root->right, temp);
    }
    void construct(TreeNode* node, const vector<int>& temp, int index){
        if (index >= temp.size())
            return;
        
        node->right = new TreeNode(temp[index]);  
        construct(node->right, temp, index + 1);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> temp;
        inorder(root, temp);
        TreeNode* node = new TreeNode(temp[0]);
        construct(node, temp, 1);
        return node;
    }
};