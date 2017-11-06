class Solution {
public:
  bool judgeCircle(string moves) {
    int h = 0;
    int v = 0;
    for (auto i = moves.begin(); i != moves.end(); i++) {
      switch (*i) {
      case 'U':
        v++;
        break;
      case 'D':
        v--;
        break;
      case 'R':
        h++;
        break;
      case 'L':
        h--;
        break;
      }
    }
    return h + v == 0 ? true : false;
  }
};
