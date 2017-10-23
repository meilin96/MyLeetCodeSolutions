class Solution {
public:
  string addBinary(string a, string b) {
    int pa = a.size() - 1;
    int pb = b.size() - 1;
    int jinwei = 0;
    int rsize = pa > pb ? pa : pb;
    string res(rsize + 1, '0');
    for (int i = res.size() - 1; pa >= 0 || pb >= 0; pa--, pb--, i--) {
      int tem = jinwei;
      if (pa >= 0)
        tem += a[pa] - '0';
      if (pb >= 0)
        tem += b[pb] - '0';
      if (tem / 2 > 0)
        jinwei = 1;
      else
        jinwei = 0;
      res[i] = tem % 2 + '0';
    }
    if (jinwei > 0)
      res = '1' + res;
    return res;
  }
};
