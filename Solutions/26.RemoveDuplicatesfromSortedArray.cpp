class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() < 2) return nums.size();
    int p1 = 0;
    for (int p2 = 1; p2 < nums.size(); p2++) {
      if (nums[p1] != nums[p2]) {
        p1++;
        nums[p1] = nums[p2];
      }
    }
    return p1 + 1;
  }
};
