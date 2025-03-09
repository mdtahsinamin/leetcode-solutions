class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

       vector<int>ans;

        digits[digits.size()-1]+=1;
        int carry=0;
       for(int i=digits.size()-1;i>=0;i--){
        if((digits[i] + carry) > 9){
            ans.push_back(0);
            carry=1;
        }
       else{
        ans.push_back(digits[i] + carry);
        carry=0;
       }

       }

       if(carry==1)ans.push_back(1);
       reverse(ans.begin(),ans.end());

       return ans; 
    }
};