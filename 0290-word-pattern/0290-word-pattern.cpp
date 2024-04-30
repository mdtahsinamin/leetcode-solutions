class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> res;
        map<string, char> ans;
        map<char, string> qns;
        string str = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                res.push_back(str);
                str = "";
            } else {
                str += s[i];
            }
        }
        res.push_back(str);
        int j = 0;
        bool isTrue = true;
        if(pattern.size() != res.size()) return false; 
        //if(pattern.size() == 1 && s.size() == 1) return true; 
        for (int i = 0; i < res.size(); i++) {
            if (ans.count(res[i]) || qns.count(pattern[i])) {
                if (ans[res[i]] == pattern[i] && qns[pattern[i]] == res[i]) {
                    isTrue = true;
                } else {
                    return false;
                }
            } else {
                ans[res[i]] = pattern[i];
                qns[pattern[i]] = res[i];
            }
        }

        return isTrue;
    }
};