class Solution {
  public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows < 1)
            return res;
        vector<int> tem(1, 1);
        res.push_back(tem);
        if (numRows == 1)
            return res;

        for (int i = 1; i < numRows; i++) {
            vector<int> ele(i + 1, 1);
            for (int j = 1; j < ele.size() - 1; j++) {
                ele[j] = res[i - 1][j] + res[i - 1][j - 1];
            }
            res.push_back(ele);
        }
        return res;
    }
};
