class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        string temp = "";
        int cnt = 0;
        int j;

        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                temp = word.substr(0, cnt + 1);
                j = cnt + 1;
                cnt = 0;
                break;
            } else {
                cnt++;
            }
        }

        reverse(temp.begin(), temp.end());
        ans += temp;
        ans += word.substr(j, word.size());

        return ans;
    }
};