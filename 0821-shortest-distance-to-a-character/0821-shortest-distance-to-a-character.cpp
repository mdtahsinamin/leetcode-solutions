class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        // find the character c
        vector<int> pos, result(s.size());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c)
                pos.push_back(i);
        }
        
        bool first = true;
        for(int j = 0; j < pos.size(); j++){
            for(int i = 0; i < s.size(); i++){
                if(first){
                    result[i] = abs(i - pos[j]);
                }
                else {
                    result[i] = min(result[i], abs(i - pos[j]));
                }
            }
            first = false;
        }
        return result;
    }
};