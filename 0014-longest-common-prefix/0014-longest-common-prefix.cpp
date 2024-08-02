class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string fistStr = strs[0], secondStr = strs[strs.size() - 1];
        string res = "";
        for (int i = 0; i < fistStr.size(); i++) {
            if (fistStr[i] == secondStr[i]) {
                res += fistStr[i];
            }
            else {
                break;
            }
        }

        return res;
    }
};