class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> res;
        vector<string> ans;
        for(int i = 0; i < heights.size(); i++){
            res[heights[i]] = names[i];
        }

        for(auto u : res){
            ans.push_back(u.second);
        }
        reverse(ans.begin(), ans.end());

        return ans;

    }
};