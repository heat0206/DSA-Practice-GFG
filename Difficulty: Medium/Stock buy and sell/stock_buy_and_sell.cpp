class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int maxProfit = 0;
        bool stockBought = false;
        int bPrice, sPrice;
        
        for(int i=0; i<prices.size() - 1; i++){
            if(prices[i] < prices[i+1] && !stockBought){
                stockBought = true;
                bPrice = prices[i];
            }
            
            if(stockBought){
                if(prices[i + 1] < prices[i]) {
                    sPrice = prices[i];
                    stockBought = false;
                    maxProfit += sPrice - bPrice;
                }
                else if (i+1 == prices.size() - 1){
                    sPrice = prices[i+1];
                    stockBought = false;
                    maxProfit += sPrice - bPrice;
                }
            }
        }
        
        return maxProfit;
    }
};
