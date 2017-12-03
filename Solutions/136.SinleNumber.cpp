class Solution {
public:
  int singleNumber(vector<int> &nums) {
    if (nums.empty())
      return NULL;
    int max = 1 << 31;
    for (int i = 0; i < nums.size(); i++) {
      int tem = nums[i];
      if (nums[i] < 0)
        tem = -tem;
      if (tem > max)
        max = tem;
    }
    vector<int> h(2 * max + 2, 0);
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] < 0)
        h[-nums[i]]++;
      else
        h[nums[i] + max + 1]++;
    }
    for (int i = 0; i < h.size(); i++) {
      if (h[i] == 1)
        if (i <= max)
          return -i;
        else
          return i - max - 1;
    }
  }
};
