class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        //check if row is valid
        for (int i=0; i< board.size(); ++i) {
            vector<bool> is_present(board.size(), false);
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[i][j] != '.') {
                    if (is_present[board[i][j]-'0'-1] ) {
                      return false;
                    }
                    else {
                       is_present[board[i][j]-'0'-1] = true;
                    }
                }
            }
        }
        
        
        //check if col is valid
       for (int i=0; i< board.size(); ++i) {
            vector<bool> is_present(board.size(), false);
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[j][i] != '.') {
                if (is_present[board[j][i]-'0'-1] ) {
                    return false;
                }
                else {
                    is_present[board[j][i]-'0'-1] = true;
                }
                }
            }
        }
        
        //check region
        
        int region_size = sqrt(board.size());
        for (int I = 0; I< region_size; ++I) {
            for (int J =0; J< region_size; ++J) {
                vector<bool> is_present(board.size(), false);
                for (int i=0; i< region_size; ++i) {
                    for (int j = 0; j < region_size; ++j) {
                        if (board[region_size*I + i][region_size*J +j] != '.') {
                            if( is_present[board[region_size*I + i][region_size*J +j]-'0'-1] ) {
                    return false;
                }
                else {
                    is_present[board[region_size*I + i][region_size*J +j]-'0'-1] = true;
                }
                        }
            }
        }
            }
        }
        
        
        return true;
    }
};
