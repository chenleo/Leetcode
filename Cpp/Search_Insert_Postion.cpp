class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (n == 0)
        {
            return 0;
        }
        else if (target <= A[0])
        {
            return 0;
        }
        else if (target > A[n-1])
        {
            return n;
        }
        else
        {
            int start = 0;
            int end = n-1;
            while ((end - start) > 1)
            {
                int temp = (start + end)/2;
                if (A[temp] == target)
                {
                    return temp;
                }
                else if (A[temp] < target)
                {
                    start = temp;
                }
                else if (A[temp] > target)
                {
                    end = temp;
                }
            }
            return end;
        }
        
    }
};
