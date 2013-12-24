class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        //Boundary condition:
        if (matrix.size() == 0)
            return;
        for (int i = 0; i < matrix.size()/2; ++i) {
            for (int j = 0; j < matrix.size() - i*2 -1; j++) {
        
                int temp = matrix[i][i+j];
                matrix[i][i+j] = matrix[matrix.size() - i -1-j][i];
                matrix[matrix.size() - i -1-j][i] = matrix[matrix.size() - i -1][matrix.size() - i -1-j];
                matrix[matrix.size() - i -1][matrix.size() - i -1-j] = matrix[i+j][matrix.size() - i -1];
                matrix[i+j][matrix.size() - i -1] = temp;
            }
        }
        
    }
};
