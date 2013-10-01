class Solution {
public:
    string convert(string s, int nRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        string result;
        
        //1 boundary condition:
        if (nRows == 0)
            return result;
        else if (nRows == 1)
            return s;
        else if (nRows ==2)
        {
            int i = 0;
            for (; i< s.size(); i += 2)
            {
                result.push_back(s[i]);
            }
            i = 1;
            for (; i< s.size(); i += 2)
            {
                result.push_back(s[i]);
            }
            return result;
        }
        else // a period of nRows + nRows - 2
        {
            int i = 0;
            for (i; i < s.size(); i += 2*nRows - 2)
            {
                result.push_back(s[i]);
            }
            int j = 1;
            for (j; j<nRows-1; j += 1) //j = 1...nRow-2; the last line is nRow-1
            {
                i = j;
                int i_next = 2*nRows - 2 - 2*j;
                for (i; i< s.size();i += 2*nRows - 2)
                {
                    result.push_back(s[i]);
                    if (i+i_next < s.size())
                        result.push_back(s[i+i_next]);
                }
            }
            i = nRows-1;
            for (i; i < s.size(); i += 2*nRows - 2)
            {
                result.push_back(s[i]);
            }
            return result;
        }
        
        
        //n to return
        //return result;
    }
};
