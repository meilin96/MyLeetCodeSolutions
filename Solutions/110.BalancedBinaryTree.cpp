class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int a =ib(root);
        //cout << a;
        if(a < 0)
            return false;
        return true;
    }
    
    int ib(TreeNode* root){
        if(!root){
            return 0;
        }
        int a = ib(root->left);
        int b = ib(root->right);
        if (a < 0 || b < 0)
        	    return -1;
        if(a - b > 1 || a - b < -1)
            return -1;
        return (a>b?a:b) + 1;
    }
};