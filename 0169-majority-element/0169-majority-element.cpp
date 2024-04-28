class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> res;
        for (int i = 0; i < nums.size(); i++) {
            res[nums[i]]++;
        }
        int maxi = 0;
        int ans = 0;
        for (auto u : res) {
            int num = u.second;
            if(num > maxi){
                maxi = num;
                ans = u.first;
            }
        }
        return ans;
    }
};