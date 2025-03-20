class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> res1, res2;

        for (auto u : nums1)
            res1[u]++;
        for (auto u : nums2)
            res2[u]++;

        int ans_1 = 0, ans_2 = 0;

        for (int i = 0; i < nums2.size(); i++) {
            if (res1[nums2[i]])
                ans_1++;
        }

        for (int i = 0; i < nums1.size(); i++) {
            if (res2[nums1[i]])
                ans_2++;
        }

        return {ans_2, ans_1};
    }
};