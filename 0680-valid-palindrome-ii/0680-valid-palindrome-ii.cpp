class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        string qtr = s;
        while(l < r) {
            if(s[l] != s[r]){
                s.erase(l, 1);
                qtr.erase(r, 1);
                break;
            }
            l++;
            r--;

        }

        string temp1 = s;
        string temp2 = qtr;
        reverse(temp1.begin(), temp1.end());
        reverse(temp2.begin(), temp2.end());

        if((s == temp1) || (qtr == temp2)){
            return true;
        }
        else {
            return false;
        }
    }
};