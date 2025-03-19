class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> res;
        for(int i = 0; i < s.size(); i++){
            res[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            if(res.count(t[i])){
                res[t[i]]--;
            }
            else{
                return false;
            }
        }

        for(auto u : res){
            if(u.second != 0){
                return false;
            }
        }
        
        return true;
    }
};