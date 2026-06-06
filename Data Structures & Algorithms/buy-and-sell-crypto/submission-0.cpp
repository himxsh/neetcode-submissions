class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = numeric_limits<int>::max();
        int profit = 0;
        int l = size(prices);
        for(int i = 0; i<l;i++){
            if(prices[i]<min){
                min = prices[i];
            }
            else if(prices[i]-min>profit){
                profit=prices[i]-min;
            }
        }
        return profit;
}};