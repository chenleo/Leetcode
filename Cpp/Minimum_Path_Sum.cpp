class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        if (grid.size() ==0 || grid[0].size() == 0)
            return 0;
        else if (grid.size() == 1) {
            int result = 0;
            for (auto i: grid[0]) 
                result += i;
            return result;
        }
        else if (grid[0].size() == 1) {
            int result = 0;
            for (int i=0; i< grid.size(); ++i) 
                result += grid[i][0];
            return result;
        }
        //else
        //result = 0;
       for (int i = 0; i< grid.size(); ++i) {
           for (int j = 0; j < grid[0].size(); ++j) {
               if (i==0 &&j == 0)
                    continue;
                else if(i == 0)
                    grid[i][j] += grid[i][j-1];
                else if(j == 0)
                    grid[i][j] += grid[i-1][j];
                else 
                    grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
           }
       }
       return grid[grid.size()-1][grid[0].size()-1];
    }
};
