class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        if(strs.empty()==true)
            return s;
        if(strs.size() == 1)
            return strs[0];
        bool f = true;
        for(int i = 0;i < strs[0].size();i++){
            auto b = strs.begin();
            char c = (*b)[i];
            for(;b != strs.end();b++){
                if(c != (*b)[i]){
                    f = false;
                }
            }
            if(f)
                s.push_back(c);
            else
                break;
        }
        return s;
    }
};