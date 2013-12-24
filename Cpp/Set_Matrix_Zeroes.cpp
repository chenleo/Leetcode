class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        // Boundary
        bool isRowZero = false;
        bool isColZero = false;
        
        for (int i = 0; i< matrix.size(); i++) {
            if (matrix[i][0] == 0) {
                isColZero = true;
                break;
            }
        }
        
        for (int i = 0; i< matrix[0].size(); i++) {
            if (matrix[0][i] == 0) {
                isRowZero = true;
                break;
            }
        }
        
        for (int i = 1; i< matrix.size(); i++) {
            for (int j = 1; j< matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        //2 loop to set all 0s
        for (int i = 1; i< matrix.size(); i++) {
            if (matrix[i][0] == 0) {
                for (int j = 1; j< matrix[0].size(); j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        for (int j = 1; j< matrix[0].size(); j++) {
            if (matrix[0][j] == 0) {
                for (int i = 1; i< matrix.size(); i++) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        if (isColZero == true) {
            for (int i = 0; i< matrix.size(); i++) {
                matrix[i][0] = 0;
            }
        }
        
        if (isRowZero == true) {
            for (int i = 0; i< matrix[0].size(); i++) {
                matrix[0][i] = 0;
            }
        }
    }
};
