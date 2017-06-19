#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, mlen = 0;
        int b[256] = {0};
        for(int n = 0;n < 256;n++)
        	b[n] = -1;
        int stringlen = s.size();
        while(j < stringlen){
        	if(b[s[j]] < i){
        		b[s[j]] = j;
        		j++;
        	}else{
        		mlen = max(mlen, j - i);
        		i = b[s[j]] + 1;
        	}
        }
        mlen = max(mlen, j - i);
        return mlen;
    }
};
int main()
{
	ifstream fin("testcase.txt");
	string s;
	fin >> s;
	Solution* solution = new Solution;
	cout << solution->lengthOfLongestSubstring(s);
}
