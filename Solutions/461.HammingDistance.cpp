// 461.go is not clear and not efficiency
class Solution {
  public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int res = 0;
        while (n) {
            if (n & 1 == 1)
                res++;
            n = n >> 1;
        }
        return res;
    }
};
