class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        if(strs.empty()==true)
            return s;
        bool f = true;
        int i = 0;
        int n = strs[0].size();
        while(n--){
            auto b = strs.begin();
            char c = (*b)[i];
            for(;b != strs.end();b++){
                if(c != (*b)[i]){
                    f = false;
                }
            }
            ++i;
            if(f == false)
                break;
            else
                s.push_back(c);
        }
        return s;
    }
};