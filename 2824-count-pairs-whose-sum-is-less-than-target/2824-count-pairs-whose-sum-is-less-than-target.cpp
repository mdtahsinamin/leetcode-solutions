class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;
        sort(nums.begin(), nums.end());
        // two pointer 

        int i = 0;
        int j = nums.size() - 1;
       // -1 1 1 2 3 (3 - 0)
        while(i < j){
            if(nums[i] + nums[j] < target){
                cnt+= j - i; // 
                i++;
            }
            else{
                j--;
            }
        }
        return cnt;
    }
};