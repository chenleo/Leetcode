class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > result(n, vector<int>(n,0));
        if (n == 0)
            return result;
        
        int target = 0;
        for (int i = 0; i< n/2; i++) {
            for (int j = i; j < n - i -1; j ++) {
               result[i][j] = ++target;
            }
            
            for (int j = i; j < n - i -1; j ++) {
               result[j][n - i - 1] = ++target;
            }
            
            for (int j = i; j < n - i -1; j ++) {
               result[n - i - 1][n - j - 1] = ++target;
            }
            
            for (int j = i; j < n - i -1; j ++) {
               result[n - j - 1][i] = ++target;
            }
        }
        
        if (n%2!=0) 
            result[n/2][n/2] = ++target;
        return result;
    }
};
