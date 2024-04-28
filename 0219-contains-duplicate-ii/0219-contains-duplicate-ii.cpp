class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> res;
        int n;
        bool isTrue = 0;

        // first -> value -> index
        // previously avaible in map cheak, (i - map[value]) 
        // update index

        for (int i = 0; i < nums.size(); i++) {
            if (res.count(nums[i])) {
                n = i - res[nums[i]];
                if (n <= k)
                    isTrue = 1;
            }
            res[nums[i]] = i;
        }
        return isTrue;
    }
};