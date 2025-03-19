class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> res;
        string x = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (x != "") {
                    res.push_back(x);
                    x = "";
                }
            } else {
                x += s[i];
            }
        }
        if(x != "") res.push_back(x);

        return res[res.size() - 1].size();
    }
};