class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> res;
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            res[nums[i]]++;
        }

        for(auto u: res){
            int n = u.second;
            if(n > 1) result += (n * (n - 1))/2;
        }
        return result;
    }
};