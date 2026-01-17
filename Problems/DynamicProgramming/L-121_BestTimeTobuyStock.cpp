// OPTIMAL (ALSO MINE)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int  n = prices.size();
    int buy = 0,sell = 1,profit = 0;
    while(sell<n){
        if(prices[buy]<=prices[sell]){
            profit = max(profit,prices[sell]-prices[buy]);
        }
        else{
            buy = sell;
        }
        sell++;
    }
    return profit;

    }
};




// BRUTE FORCE -> TLE (MINE)
/*
int maxProfit(vector<int>& prices) {
        int prof =0;
        int n =prices.size();
        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
                prof = max(prof,prices[j]-prices[i]);

            }
        }
        return prof; 
    }
*/