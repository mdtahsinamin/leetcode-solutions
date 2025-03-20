class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int > res;

        for(auto u : s) res[u]++;

        int pre = 0;
        int j = 0;
        for(auto u : res){
            if(j == 0 || pre == u.second) {
                pre = u.second;
                j++;
            }
            else {
                return false;
            }
        }

        return true;
    }
};