class Solution {
public:
    bool isSubsequence(string s, string t) {
        int nextSub = 0;
        if(s.size() == 0) return true;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == s[nextSub]){
                nextSub++;
                if(s.size() == nextSub){
                    return true;
                }
            }
        }
        return false;
    }
};
