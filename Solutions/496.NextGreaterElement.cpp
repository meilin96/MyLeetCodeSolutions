#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> res;
        for(auto fb = findNums.begin();fb != findNums.end();fb++){
            int x = *fb;
            for(auto b = nums.begin();b!=nums.end();b++){
            	cout << *b;
                if(*b == x){
                    b++;
                    for(;b!=nums.end();b++){
                        if(*b > x){
                            res.push_back(*b);
                            break;
                        }
                    }
                    if(b == nums.end()){
                        res.push_back(-1);
                        break;
                    }
                    else
                        break;
                }
            }
        }
        return res;
    }
};
int main()
{
    vector<int> n1 = {4,1,2};
    vector<int> n2 = {1,3,4,2};
    Solution s;
    s.nextGreaterElement(n1,n2);
}
