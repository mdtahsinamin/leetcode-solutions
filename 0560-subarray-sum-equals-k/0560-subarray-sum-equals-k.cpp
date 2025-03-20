class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixsum;
        int res = 0;
        int curr = 0;

        for(int i = 0; i < nums.size(); i++){
            curr+=nums[i]; 

            if(curr == k ) res++;

            if(prefixsum.find(curr - k) != prefixsum.end()){
                res+= prefixsum[curr - k];
            }

            prefixsum[curr]++;
        }

        return res;

    }
};