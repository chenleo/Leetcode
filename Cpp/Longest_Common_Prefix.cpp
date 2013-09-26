/*
 * Write a function to find the longest common prefix string amongst an array of strings.
*/


class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string result;
        if (strs.size() == 0)
            return result;
        result = strs[0];
        int i = 1;
        
        //Iterater for each strings
        for (; i< strs.size(); i++)
        {
            //set result to short length
            int j = 0;
            if (strs[j].size() < result.size())
                result = result.substr(0,strs[j].size());
            int k = result.size() >= strs[j].size() ? strs[j].size() : result.size();
            
            //
            for (; j < k;j++)
            {
                if (strs[i][j] != result[j])
                {
                    if (j == 0)
                        return "";
                    result = result.substr(0,j);
                    break;
                }
            }
        }
        return result;
    }
};
