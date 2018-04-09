class Solution {
  public:
    vector<int> ori;

    Solution(vector<int> nums) { ori.assign(nums.begin(), nums.end()); }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() { return ori; }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> r;
        r.assign(ori.begin(), ori.end());
        for (int i = r.size() - 1; i >= 0; i--) {
            int p = rand() % (i + 1);
            int t = r[p];
            r[p] = r[i];
            r[i] = t;
        }
        return r;
    }
};
/**
 * Your Solution object will be instantiated and called as such:
  * Solution obj = new Solution(nums);
   * vector<int> param_1 = obj.reset();
    * vector<int> param_2 = obj.shuffle();
     */
