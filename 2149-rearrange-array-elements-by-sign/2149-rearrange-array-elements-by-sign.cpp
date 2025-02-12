class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(), 0);


        // pos neg pos neg pos neg

        // pos - 0, neg = 1
        int pos = 0, neg = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                res[pos] = nums[i];
                pos+=2;
            }
            else {
                res[neg] = nums[i];
                neg+=2;
            }
        }
        return res;
    }
};