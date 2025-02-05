class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map < int, int> res;
        vector <int> result;
        for(int i = 0; i < nums.size(); i++){
            res[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int rem = (target - nums[i]);

            if(res[rem] && res[rem] != i){
                result.push_back(i);
                result.push_back(res[rem]);
                break;
            }
        }
        return result;
    }

};