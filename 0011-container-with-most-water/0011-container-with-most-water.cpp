class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int result = 0;
        while(left < right) {
            if(height[left] <= height[right]){
                result = max(result , (height[left] * (right - left)));
                left++;
            }
            else {
                result = max(result , (height[right] * (right - left)));
                right--;
            }
        }

        return result;
    }
};