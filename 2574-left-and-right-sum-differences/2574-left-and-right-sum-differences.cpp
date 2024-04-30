class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> res(2 * nums.size());
        int j = 2 * nums.size() - 1;
        int n = nums.size() - 1;
        res[0] = 0;
        res[j] = 0;
        j--;
        for (int i = 0; i < nums.size() - 1; i++) {
            res[i + 1] = res[i] + nums[i];
            res[j] = res[j + 1] + nums[n];
            n--;
            j--;
        }

        for (int i = 0; i < (res.size() / 2); i++) {
            nums[i] = abs(res[i] - res[(res.size() / 2) + i]);
        }

        return nums;

    }
};