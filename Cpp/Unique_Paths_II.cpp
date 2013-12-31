class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        if (obstacleGrid.size() == 0)
            return 0;
        vector<vector<int> > result;
        for (int i=0; i< obstacleGrid.size(); ++i) {
            vector<int> temp;
            if (i == 0) {
                int road = 1;
                for (auto j = 0; j < obstacleGrid[i].size(); j++) {
                    if (obstacleGrid[i][j] == 1) {
                        road = 0;
                        temp.push_back(road);
                    }
                    else
                        temp.push_back(road);
                }
                result.push_back(temp);
            }
            else {
                for (auto j = 0; j < obstacleGrid[i].size(); j++) {
                    if (obstacleGrid[i][j] == 1 ) {
                        temp.push_back(0);
                   }
                     else if(j == 0) {
                       temp.push_back(result[i-1][j]);
                     }
                      else {
                          temp.push_back(result[i-1][j] + temp[j-1]);
                     }
                }
                result.push_back(temp);
            }
        }
        return result[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
};
