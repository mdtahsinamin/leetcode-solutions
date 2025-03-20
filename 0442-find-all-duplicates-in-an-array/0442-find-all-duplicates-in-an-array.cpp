class Solution {
public:
    int cnt[(int)1e5 + 12];
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            cnt[nums[i]]++;
        }

        for(int i = 1; i <= nums.size(); i++){
            if(cnt[i] == 2) result.push_back(i);
        }

        return result;
    }
};