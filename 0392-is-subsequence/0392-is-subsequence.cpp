class Solution {
public:
    bool isSubsequence(string s, string t) {
        map<char, int> res;

        for (int i = 0; i < t.size(); i++) {
            res[t[i]]++;
        }
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (res.count(s[i])) {
                cnt++;
            }
        }

        return cnt == s.size() ? true : false;
    }
};