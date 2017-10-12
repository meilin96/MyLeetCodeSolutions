class Solution{
    public:
		vector<string>btp(TreeNode* root, string s, vector<string>& vec){
			if(!s.empty())
				s = s + "->";
			//s.push_back(root->val + '0');   
            s = s + to_string(root->val);
            if(root->left == NULL && root->right == NULL){
				vec.push_back(s);
            }else{
				if(root->left)
					btp(root->left, s, vec);
				if(root->right)
					btp(root->right, s, vec);
			}
            return vec;
        }
		vector<string>binaryTreePaths(TreeNode* root){
			vector<string> res;
			string s;
			if(root == NULL){
				return res;
			}
			return btp(root, s, res);
		}
};