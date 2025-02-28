class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while(l < r) {
            if(s[l] != s[r]){
                if(s[l] < s[r]){
                    s[r] = s[l];
                }
                else {
                    s[l] = s[r];
                }
            }
            l++;
            r--;
        }
        return s;
    }
    
};