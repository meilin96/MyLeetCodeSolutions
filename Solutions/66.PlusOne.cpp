class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        int p = digits.size() - 1;
        if (digits[p] < 9) {
            digits[p]++;
            return digits;
        }
        bool carry = true;
        for (; p >= 0; p--) {
            if (carry) {
                if (digits[p] == 9) {
                    digits[p] = 0;
                    carry = true;
                } else {
                    digits[p]++;
                    carry = false;
                    break;
                }
            }
        }

        if (carry) {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};
