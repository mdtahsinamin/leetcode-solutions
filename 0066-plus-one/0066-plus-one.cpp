class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carray = 0;
        vector<int> res;

        if (digits[0] == 9 && digits.size() == 1) {
            return {1, 0};
        }
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9 && carray == 1 && i!=0) {
                res.push_back((digits[i] + 1) % 10);
                carray = 1;
            } else if (digits[i] == 9 && i == digits.size() - 1) {
                res.push_back((digits[i] + 1) % 10);
                carray = 1;
            } else if (digits[i] <= 8 && i == digits.size() - 1) {
                res.push_back(digits[i] + 1);
                carray = 0;
            } else if (carray == 1 && i == 0) {
                if(digits[i]<=8)
                 res.push_back(digits[i] + 1);
                if(digits[i] == 9){
                    res.push_back((digits[i] + 1)%10);
                    res.push_back(1);
                }
                
            } else if(digits[i] <= 8 && carray == 1){
                res.push_back(digits[i] + 1);
                carray = 0;
            }
            
             else {
                res.push_back(digits[i]);
                carray = 0;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

// [6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3]