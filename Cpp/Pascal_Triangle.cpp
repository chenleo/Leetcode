ass Solution {
public:
    vector<vector<int> > generate(int numRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        vector<vector<int> > result;
        
        if (numRows <= 0)
            return result;
        
        int i = 0;
        
        // correlate to previous level
        vector<int> level;
        
        for (; i<numRows; i++)
        {
            
            if (i == 0)
            {
                level.push_back(1);
            }
            else if(i == 1)
            {
                level.push_back(1);
            }
            else
            {
                vector<int> temp_level;
                //a = level.back();
                temp_level.push_back(1);
                int a = level.back();
                level.pop_back();
                
                while(level.back() != 1 )
                {
                    int b = level.back();
                    temp_level.push_back(a+b);
                    a = b;
                    level.pop_back();
                }
                temp_level.push_back(a+1);
                temp_level.push_back(1);
                
                
                
                level.swap(temp_level);
            }
            
            
            result.push_back(level);
        }
        
        return result;
        
    }
};
