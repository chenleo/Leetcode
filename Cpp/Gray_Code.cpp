class Solution {
public:
    vector<int> grayCode(int n) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        // Gray code can be calculate use n ^ (n >> 1)
        vector<int> result;
        if (n == 0)
        {
            result.push_back(0);
        }
        else
        {
            for(int i = 0; i<pow(2,n); i++)
            {
                result.push_back(i ^ (i >> 1));
            }
        }
        return result;
    }
};
