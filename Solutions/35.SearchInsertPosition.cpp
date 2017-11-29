class Solution {
  public:
    int searchInsert(vector<int> &nums, int target) {
        if (nums.empty())
            return 0;
        if (target <= nums[0])
            return 0;
        if (target > nums[nums.size() - 1])
            return nums.size();
        int p1 = 0;
        int p2 = nums.size() - 1;
        int mid = (p1 + p2) / 2;
        while (p1 + 1 != p2) {
            if (target > nums[mid]) {
                p1 = mid;
            } else if (target < nums[mid]) {
                p2 = mid;
            } else {
                return mid;
            }
            mid = (p1 + p2) / 2;
        }
        return p1 + 1;
    }
};
