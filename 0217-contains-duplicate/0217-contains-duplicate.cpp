class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set < int >  ans;
        
        for(auto i : nums){
             ans.insert(i);
        }
        if(nums.size() == ans.size()) return false;
        else return true;
    }
};