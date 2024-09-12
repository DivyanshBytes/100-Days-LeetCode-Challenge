class Solution {
  public:
    pair<bool,int> fast(Node* root){
        if(root == NULL){
            pair<bool,int> p = make_pair(true, 0);
            return p;
        }
        if(root->left == NULL && root->right == NULL){
            pair<bool,int> p = make_pair(true, root->data);
            return p;
        }
        
        pair<bool,int> leftAns = fast(root->left);
        pair<bool,int> rightAns = fast(root->right);
        
        bool left = leftAns.first;
        bool right = rightAns.first;
        bool condition = root->data == leftAns.second + rightAns.second;
        
        pair<bool,int> ans;
        if(left && right && condition){
            ans.first = true;
            ans.second = 2*root->data;
        }
        else
            ans.first = false;
            
    return ans;
    }
    bool isSumTree(Node* root) {
        // Your code here
    return fast(root).first;
    }
};