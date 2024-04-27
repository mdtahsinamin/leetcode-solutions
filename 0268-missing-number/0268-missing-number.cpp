class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num = nums[nums.size() - 1];
        int n = nums.size();

        if (num >= n) {
            long long int ZTN = (n * (n + 1)) / 2;
            int sum = 0;

            for (int i = 0; i < nums.size(); i++) {
                sum += nums[i];
            }

            int missingNumber = (ZTN - sum);

            return missingNumber;
        }
        else{
            return n;
        }
    }
};