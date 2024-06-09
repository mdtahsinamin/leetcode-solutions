class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
     for(int i = 0; i < hours.size(); i++){
        if(hours[i] >= target){
            return i + 1;
        }
     }   
     return 0;
    }
};