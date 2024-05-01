class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int > res;


        for(int i = 0; i < nums.size(); i++){
            res[nums[i]]++;
        }

        for(auto u : res){
            if(u.second > 1){
                return (int) u.first;
            }
        }

        return 0;
    }
};