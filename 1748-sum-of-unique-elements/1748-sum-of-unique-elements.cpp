class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> res;
        int result = 0;
        for (auto u : nums)
            res[u]++;

        for (auto u : res) {
            if (u.second == 1)
                result += u.first;
        }

        return result;
    }
};