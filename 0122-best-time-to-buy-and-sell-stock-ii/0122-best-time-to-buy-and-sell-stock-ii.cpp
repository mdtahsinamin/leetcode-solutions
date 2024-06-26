class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for(int i= 1; i < prices.size(); i++){
            if(prices[i - 1] < prices[i]){
                maxProfit +=(prices[i] - prices[i - 1]);
            }
        }
        return maxProfit;
    }
};


/* 
7 1 5 3 6 4

7 < 1 =  x
1 < 5 = (4)
5 < 3 = x
3 < 6 = (3)
6 < 4 = x

1 2 3 4 5
1 < 2 = 1
2 < 3 = 1
3 < 4 = 1
4 < 5 = 1



*/