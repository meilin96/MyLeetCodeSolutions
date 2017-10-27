class Solution {
public:
  string reverseString(string s) {
    if (s.empty())
      return s;
    int p1 = 0;
    int p2 = s.size() - 1;
    for (; p1 < p2; p1++, p2--) {
      char t = s[p1];
      s[p1] = s[p2];
      s[p2] = t;
    }
    return s;
  }
};
