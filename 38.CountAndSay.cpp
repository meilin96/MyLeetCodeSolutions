#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        vector<string> v = {"1"};
        for(int i = 1;i < n;i++){
            string res;
            string s = v[i-1];
            char c = s[0];
            int cnt = 1;
            for(int j = 1;j < s.size();j++){
                if(s[j] != c){
                    res.push_back(cnt + '0');
                    res.push_back(c);
                    cnt = 1;
                    c = s[j];
                }else{
                    cnt++;
                }

            }
            res.push_back(cnt + '0');
            res.push_back(c);
            v.push_back(res);
        }
        return v.back();
    }
};

int main()
{
    Solution s;
    cout << s.countAndSay(5);
    string str;
    return 0;
}
