class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++) {
            string xx = words[i];
            size_t found = xx.find(x);
            if (found != string::npos) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};