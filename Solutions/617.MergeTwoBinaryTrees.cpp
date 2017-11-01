class Solution {
public:
  TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2) {
    // if (t1 && t2) R(t1, t2);
    // else return t1?t1:t2;
    return R(t1, t2, NULL, 0);
    // return t1;
  }

  TreeNode *R(TreeNode *t1, TreeNode *t2, TreeNode *self, int a) {
    if (t1 && t2) {
      t1->val += t2->val;
      R(t1->left, t2->left, t1, 1);
      R(t1->right, t2->right, t1, 2);
    } else if (!t1 && t2) {
      TreeNode *p = new TreeNode(t2->val);
      if (a == 1)
        self->left = p;
      else if (a == 2)
        self->right = p;
      R(p->left, t2->left, p, 1);
      R(p->right, t2->right, p, 2);
      return p;
    } /*else if(!t1 && !t2) return;
             else return;*/
    return t1;
  }
};
