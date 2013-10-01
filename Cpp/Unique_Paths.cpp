class Solution {
public:
    int uniquePaths(int m, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
      if (m == 0 || n == 0)
        return 0;
      else if (m == 1 || n == 1)
        return 1;
        else
            return Cmn((m+n-1-1),(min(n,m)-1));
    }
    
    int Cmn(int m, int n)
    {
        int i = 0;
        long long int result = 1;
        for(;i < n;i++)
            result = result*(m-i)/(1+i);
        return result;
    }
};
