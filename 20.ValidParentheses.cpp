#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s.empty())
            return false;
        vector<char> stk;
        for(int i = 0;i < s.size();++i){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push_back(s[i]);
            }else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(stk.empty())
                    return false;
                if(s[i] == ')'){
                    if(stk[stk.size()-1] == '(')
                        stk.pop_back();
                    else
                        return false;
                }
                if(s[i] == '}'){
                    if(stk[stk.size()-1] == '{')
                        stk.pop_back();
                    else
                        return false;
                }
                if(s[i] == ']'){
                    if(stk[stk.size()-1] == '[')
                        stk.pop_back();
                    else
                        return false;
                }
            }
        }
        if(stk.empty())
            return true;
        else
            return false;
    }
};
int main(){
	string s("([])");
	Solution sl;
	cout << sl.isValid(s);
}
