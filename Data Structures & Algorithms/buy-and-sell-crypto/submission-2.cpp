class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int maxprofit =0;
        
        while( r<prices.size()){
            if(prices[l]<prices[r]){
                int diff = prices[r]-prices[l];
                maxprofit = max(diff,maxprofit);
                r++;
            }else {
                
                l=r;
                r++;
            }
        }
        return maxprofit;
    }
};
