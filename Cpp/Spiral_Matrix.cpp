class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        
        
        
        vector<int> result;
        if (matrix.size() == 0)
            return result;
            
        int m = matrix.size();
        int n = matrix[0].size();
        int size_min = min(m, n);
        int i;
        for (i=0; i< size_min/2; ++i) {
            for (int j = i; j < n - i -1; ++j) {
                result.push_back(matrix[i][j]);
            }
            
            for (int j = i; j < m - i -1; ++j) {
                result.push_back(matrix[j][n - i - 1]);
            }
            
            for (int j = i; j < n - i -1; ++j) {
                result.push_back(matrix[m - i-1][n - j-1]);
            }
            
            for (int j = i; j < m - i -1; ++j) {
                result.push_back(matrix[m-j - 1][i]);
            }
        }
        
        if (size_min%2 != 0) {
            if (m < n) {
                for ( int j = i; j < n -i ; j++) {
                    result.push_back(matrix[i][j]);
                }
            }
            else {
                for ( int j = i; j < m -i ; j++) {
                    result.push_back(matrix[j][i]);
                }
            }
        }
        return result;
    }
};
