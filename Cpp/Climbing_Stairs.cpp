class Solution {
public:
    int climbStairs(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (n == 0)
        {
            return 0;   // no need to climb
        }
        else if (n == 1)    // 1
        {
            return 1;
        }
        else if (n == 2)    // 1,1 && 2
        {
            return 2;
        }
        else 
        {
            //return (climbStairs(n-1) + climbStairs(n-2));
            int first = 0;
            int second = 1;
            int i = 0;
            for (; i< n; i++)
            {
                int temp = second + first;
                first =  second;
                second = temp;
            }
            return second;
        }
    }
};
