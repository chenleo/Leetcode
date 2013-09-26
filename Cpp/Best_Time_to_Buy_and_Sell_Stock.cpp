ass Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if (prices.size() == 0 || prices.size() == 1)
            return 0;
            
            
        else
        {
        int min=prices[0];
        // int min_late=prices[0];
        int result = 0;
        for (vector<int>::iterator itr = prices.begin(); itr< prices.end();itr++)
        {
            if (*itr < min)
            {
                min = *itr;
            }
            
            if ((*itr - min) > result)
            {
                result = *itr -min;
            }
        }
        
        return result;
        }
        
    }
};
