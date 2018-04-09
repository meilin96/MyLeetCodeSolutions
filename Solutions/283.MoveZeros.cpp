class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        int cnt = 0;
        auto it = nums.begin();
        while (it != nums.end()) {
            if (*it == 0) {
                it = nums.erase(it);
                cnt++;
            } else {
                it++;
            }
        }
        while (cnt--) {
            nums.push_back(0);
        }
    }
};
