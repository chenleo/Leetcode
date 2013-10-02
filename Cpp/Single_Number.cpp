class Solution {
public:
    int singleNumber(int A[], int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        
        // n should be 2 * int + 1;
        //boundary condition:
        //1 n == 0;
        if (n == 0)
        {
            return 0;
        }
        int result = 0;
        int i = 0;
        for (; i<n; i++)
        {
            result = result^A[i];
        }
        return result;
        
    }
};
