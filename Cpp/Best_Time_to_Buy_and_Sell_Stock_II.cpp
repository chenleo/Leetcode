class Solution {
public:
    int maxProfit(vector<int> &prices) {
        
        //asume all value > 0
        //boundary condition:
        double profit = 0.0;
        bool haveStock = false;
        if (prices.size() == 0)
            return 0;
        
        //start from local boundary
        if (prices[0] <= prices[1]) {
            profit -= prices[0];
            haveStock = true;
        }
        
        //main loop search max/min
        for (int i = 1; i< prices.size() - 1; i++) {
            //if local min and no stock in hand ,buy
            if (prices[i] <= prices[i-1] && prices[i] <= prices[i+1] && haveStock == false) {
                profit -=  prices[i];
                haveStock = true;
            }
            
            //else local max sale
            else if (prices[i] >= prices[i-1] && prices[i] >= prices[i+1] && haveStock == true) {
                profit +=  prices[i];
                haveStock = false;
            }
            
        }
        
        //in the end
        if (haveStock == true ) {
            profit += prices.back();
        }
        return profit;
    }
};
