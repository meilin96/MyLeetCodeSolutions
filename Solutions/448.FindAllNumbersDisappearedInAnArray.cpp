class Solution {
public:
  vector<int> findDisappearedNumbers(vector<int> &nums) {
    vector<int> h(nums.size(), 0);
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
      h[nums[i] - 1] = 1;
    }
    for (int i = 0; i < h.size(); i++) {
      if (h[i] == 0)
        res.push_back(i + 1);
    }
    return res;
  }
};
