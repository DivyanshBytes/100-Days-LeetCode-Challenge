class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int> fast(Node* &root){
        pair<int,int> p = make_pair(0,0);
        if(root == NULL)
            return p;
            
        pair<int,int> left = fast(root->left);
        pair<int,int> right = fast(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int,int> ans;
        ans.first = max(op1, max(op2,op3));
        ans.second = max(left.second, right.second) + 1;
    
    return ans;
    }
    
    int diameter(Node* root) {
        // Your code here
        return fast(root).first;
    }
};