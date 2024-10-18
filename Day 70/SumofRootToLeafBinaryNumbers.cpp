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
    void Pushing(TreeNode* root, string str, vector<string> &temp){
        if(root == NULL)
            return;
        str += to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            temp.push_back(str);
            return;
        }
        Pushing(root->left, str, temp);
        Pushing(root->right, str, temp);
    }
    void ToNum(int &sum, vector<string> temp){
        for(int i=0; i<temp.size(); i++){
            int num = stoi(temp[i], NULL, 2);
            sum += num;
    }    }
public:
    int sumRootToLeaf(TreeNode* root) {
        vector<string> temp;
        string str = "";
        Pushing(root, str, temp);
        int sum = 0;
        ToNum(sum, temp);
        return sum;
    }
};