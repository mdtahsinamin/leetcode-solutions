class Solution {
public:
    int hIndex(vector<int>& citations) {
     sort(citations.begin(), citations.end(),greater<int>());
     int result = 0;
     for(int i = citations.size() - 1 ; i >=0; i--){
        if(citations[i] >= i + 1){
            result++;
        }
     }   

     return result;
    }
};

/*
  3 0 6 1 5 
  6 5 3 1 0

  0 >= 5 
  1 >= 4
  3 >= 3
  5 >= 2
  6 >= 1 
  
  3 1 1
  0 1 2
  1 >= 2
  1 >= 1
  3 >= 0
*/