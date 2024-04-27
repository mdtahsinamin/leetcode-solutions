class Solution {
public:
    int maxPower(string s) {
     int ans = 1;
     int cnt = 1;

    for(int i = 1; i <s.size(); i++){
        if(s[i - 1] == s[i]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        ans = max(ans, cnt);
     }
     return ans;
    }
};