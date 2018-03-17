class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int minPro = INT_MAX;
        int maxPro = 0;
        for (int i = 0; i < prices.size(); i++) {
            minPro = minPro < prices[i] ? minPro : prices[i];
            maxPro =
                maxPro > (prices[i] - minPro) ? maxPro : (prices[i] - minPro);
        }
        return maxPro;
    }
};
