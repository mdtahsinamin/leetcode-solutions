class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0 && n > 0){
            nums1 = nums2;
        }
        else{
            int j = 0;
            for(int i = m; i < (m + n); i++){
                nums1[i] = nums2[j++];
            }

            sort(nums1.begin(), nums1.end());
        }
    }
};