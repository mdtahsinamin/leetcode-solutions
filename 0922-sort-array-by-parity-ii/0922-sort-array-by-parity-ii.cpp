class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0, j = 1;

        while(i < nums.size() && j < nums.size()){
            if(!(nums[i] & 1)) i+=2;
            else if(nums[j] & 1) j+=2;
            else swap(nums[i], nums[j]);
        }

        return nums;
    }
};