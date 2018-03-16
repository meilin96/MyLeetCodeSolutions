/**
 * Definition for a binary tree node.
  * struct TreeNode {
   *     int val;
    *     TreeNode *left;
     *     TreeNode *right;
      *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
       * };
        */
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
        if (head == tail) {
            TreeNode *root = new TreeNode(data[head]);
            return root;
        }

        int middle = (head + tail) / 2;
        if ((head + tail) % 2 == 1 || head + 1 == tail)
            middle++;
        cout << head << " " << tail << " " << middle << "\n";
        TreeNode *root = new TreeNode(data[middle]);
        root->left = r(head, middle - 1, data);
        root->right = r(middle + 1, tail, data);
        return root;
    }
};
