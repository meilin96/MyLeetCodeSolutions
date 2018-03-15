class Solution {
public:
  vector<int> getRow(int rowIndex) {
    if (rowIndex == 0)
      return vector<int>(1, 1);
    vector<int> res(rowIndex + 1, 0);
    res[0] = 1;
    for (int i = 1; i < rowIndex + 1; i++) {
      int tem1 = 1;
      int tem2 = 1;
      for (int j = 1; j <= i; j++) {
        tem2 = res[j];
        res[j] = tem1 + res[j];
        tem1 = tem2;
      }
    }
    return res;
  }
};
