class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int j = 0;
        string ans = "";
        if (word1.size() == word2.size()) {
            for (int i = 0; i < word1.size(); i++) {
                if (i % 2 == 0) {
                    ans += word1[i];
                    ans += word2[i];
                } else {
                    ans += word1[i];
                    ans += word2[i];
                }
            }
        } else if (word1.size() > word2.size()) {
            for (int i = 0; i < word2.size(); i++) {
                if (i % 2 == 0) {
                    ans += word1[i];
                    ans += word2[i];
                } else {
                    ans += word1[i];
                    ans += word2[i];
                }
            }
            ans += word1.substr(word2.size(), word1.size() - word2.size());
        } else {
            for (int i = 0; i < word1.size(); i++) {
                if (i % 2 == 0) {
                    ans += word1[i];
                    ans += word2[i];
                } else {
                    ans += word1[i];
                    ans += word2[i];
                }
            }
            ans += word2.substr(word1.size(), word2.size() - word1.size());
        }
        return ans;
    }
    
};