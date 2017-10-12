ass Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty())
            return true;
        int sidx = 0;
        int tidx = 0;
        while(sidx < s.size() && tidx < t.size()){
            if (s[sidx] == t[tidx])
                sidx++;
            if (sidx == s.size())
                return true;
            tidx++; 
        }
        return false;    
    }
};
