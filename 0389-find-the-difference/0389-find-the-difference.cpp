class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        for(int i = 0; i < t.size(); i++){
            if(s[i] != t[i] && i < n) {
                return t[i];
            }
        }
        return t[t.size() - 1];
    }
};