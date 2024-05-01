class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
            For xor same value 0 and different value 1 
            A B Y
            0 0 0
            1 0 1
            0 1 1
            1 1 0

            so write -> A ^ A -> 0, A ^ B ^ A -> B 
                                          Time,  Space
            using map solve the problem -> O(n), O(n)
            sort the array and traverse the array = O(n), O(1)
            bitwise  
        */
        int ans = 0;
        for(auto x : nums){
            ans ^= x;
        }
        return ans;
    }
};