class NumArray {
public:
    NumArray(vector<int>& nums) {
        acc.push_back(0);

        for(int i = 0; i < nums.size(); i++){
            acc.push_back(acc.back() + nums[i]);
        }
    }

    int sumRange(int left, int right) {
        return acc[right + 1] - acc[left];
    }

private:
    vector<int> acc;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */