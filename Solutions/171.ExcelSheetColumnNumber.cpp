class Solution {
public:
  int titleToNumber(string s) {
    int res = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
      res += (s[i] - 'A' + 1) * pow(26, (s.size() - i - 1));
    }
    return res;
  }
};
