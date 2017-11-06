class Solution {
public:
  bool checkRecord(string s) {
    if (s.empty())
      return true;
    auto e = s.end();
    int a = 0;
    int l = 0;
    for (auto b = s.begin(); b != e; b++) {
      switch (*b) {
      case 'A':
        a++;
        l = 0;
        break;
      case 'L':
        l++;
        break;
      case 'P':
        l = 0;
        break;
      }
      if (a > 1 || l > 2)
        return false;
    }
    return true;
  }
};
