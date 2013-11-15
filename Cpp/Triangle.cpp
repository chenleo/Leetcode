class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        //boundary condition:
        if (triangle.size() == 0)
        {
            return 0;
        }
        else if (triangle.size() == 1)
        {
            return triangle[0][0];
        }
        else
        {
            for (int i = 1; i< triangle.size(); i++)
            {
                for (int j = 0; j < triangle[i].size(); j++)
                {
                    if (j == 0)
                    {
                        triangle[i][j] = triangle[i][j] + triangle[i-1][j];
                    }
                    else if (j == triangle[i].size() - 1)
                    {
                        triangle[i][j] = triangle[i][j] + triangle[i-1][j-1];
                    }
                    else
                    {
                        triangle[i][j] = min((triangle[i][j] + triangle[i-1][j]), (triangle[i][j] + triangle[i-1][j-1]));
                    }
                }
            }
            //return the min of triangle[triangle.size()-1]
            int result = 2147483647;
            for (int i = 0; i< triangle[triangle.size()-1].size(); i++)
            {
                if (triangle[triangle.size()-1][i] < result)
                {
                    result = triangle[triangle.size()-1][i];
                }
            }
            return result;
            
        }
        
    }
};
