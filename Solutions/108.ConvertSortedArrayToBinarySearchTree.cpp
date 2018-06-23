/**
 * Definition for a binary tree node.
  * struct TreeNode {
   *     int val;
    *     TreeNode *left;
     *     TreeNode *right;
      *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
       * };
        */
//middle没处理好
class Solution {
  public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        if (nums.size() == 0)
            return NULL;
        return r(0, nums.size() - 1, nums);
    }

    TreeNode *r(int head, int tail, vector<int> &data) {
        if (head > tail)
            return NULL;
        int middle = head + (tail - head) / 2;
        TreeNode *root = new TreeNode(data[middle]);
        root->left = r(head, middle - 1, data);
        root->right = r(middle + 1, tail, data);
        return root;
    }
};
