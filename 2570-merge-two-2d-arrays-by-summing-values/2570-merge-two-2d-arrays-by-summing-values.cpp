class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        map<int, int> res;
        

        int mx = nums1.size() > nums2.size() ? nums1.size() : nums2.size();
        vector<vector<int>> result;


        for (int i = 0; i < nums1.size(); i++) {
            int id = nums1[i][0];
            int value = nums1[i][1];

            res[id] = value;
        }
        for (int i = 0; i < nums2.size(); i++) {
            int id = nums2[i][0];
            int value = nums2[i][1];

            res[id]+= value;
        }

        int j = 0;
        for(auto u : res) {
            result.push_back({u.first, u.second}); // 
        }

        return result;
    }
};