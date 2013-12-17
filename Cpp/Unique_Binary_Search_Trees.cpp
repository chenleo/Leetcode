class Solution {
public:
    int numTrees(int n) {
        
        //http://cs.lmu.edu/~ray/notes/binarytrees/
        if (n == 0 || n == 1)
            return 1;
        vector<int> dp;
        dp.push_back(1);
        dp.push_back(1);
        for (int i = 1; i< n; i++) {
            int temp = 0;
            for (int j=0; j< dp.size() ; j++) {
                temp += dp[j]*dp[dp.size() - j-1];
            }
            dp.push_back(temp);
        }
        return dp.back();
    }
};
