class NumArray {
public:
  vector<int> dp;
  NumArray(vector<int> nums) {
    dp.assign(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++) {
      dp[i] = dp[i - 1] + nums[i];
    }
  }

  int sumRange(int i, int j) { return i == 0 ? dp[j] : dp[j] - dp[i - 1]; }
};
