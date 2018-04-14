class Solution {
  public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> subr;
        backtracking(res, subr, 1, n, k, 1);
        backtracking(res, subr, 1, n, k, 0);
        return res;
    }

    void backtracking(vector<vector<int>> &res, vector<int> subr, int p, int n,
                      int k, bool c) {
        if (p > n || (subr.size() + 1 > k))
            return;
        if (c) {
            subr.push_back(p);
            if (subr.size() == k)
                res.push_back(subr);
        }
        backtracking(res, subr, p + 1, n, k, 1);
        backtracking(res, subr, p + 1, n, k, 0);
    }
};
