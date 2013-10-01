class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        //boundary case
        if (matrix.size() == 0)
            return false;
        if (matrix[0].size() == 0)
            return false;
        int m = matrix.size();
        int n = matrix[0].size();
        
        if (matrix[0][0] == target || matrix[m-1][n-1] == target)
            return true;
        int begin = 0;
        int end = m*n - 1;
        
        while ((end - begin) > 1)
        {
            int media = (begin + end)/2;
            
            int i = media/n;
            int j = media%n;
            if (matrix[i][j] == target)
                return true;
            if (matrix[i][j] < target)
                begin = media;
            if (matrix[i][j] > target)
                end = media;
        }
        return false;
    }
};
