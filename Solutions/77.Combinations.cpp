class Solution {
  public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> subr(k, 0);
        backtracking(res, subr, 1, 0, n, k);
        return res;
    }

    void backtracking(vector<vector<int>> &res, vector<int> &subr, int p,
                      int cnt, int n, int k) {
        if (k == 0) {
            res.push_back(subr);
            return;
        }
        for (int i = p; i <= n; i++) {
            subr[cnt] = i;
            backtracking(res, subr, i + 1, cnt + 1, n, k - 1);
        }
    }
};
