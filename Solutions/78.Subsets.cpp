class Solution {
  public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> res;
        vector<int> s;
        backtracking(nums, res, s, 0, 1);
        backtracking(nums, res, s, 0, 0);
        vector<int> empty;
        res.push_back(empty);
        return res;
    }

    void backtracking(vector<int> &nums, vector<vector<int>> &res,
                      vector<int> solution, int opt, bool cho) {
        if (opt >= nums.size())
            return;
        if (cho) {
            solution.push_back(nums[opt]);
            res.push_back(solution);
        }
        backtracking(nums, res, solution, opt + 1, 1);
        backtracking(nums, res, solution, opt + 1, 0);
    }
};
