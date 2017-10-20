class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    int idx1 = 0;
    int idx2 = numbers.size() - 1;
    vector<int> res { 0, 1 }
    while (idx1 < idx2) {
      if (numbers[idx1] + numbers[idx2] < target)
        idx1++;
      else if (numbers[idx1] + numbers[idx2] > target)
        idx2--;
      else {
        res[0] = idx1 + 1;
        res[1] = idx2 + 1;
        return res;
      }
    }
    return res;
  }
};
