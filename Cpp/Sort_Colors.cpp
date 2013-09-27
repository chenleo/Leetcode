class Solution {
public:
    void sortColors(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int begin = 0;
        int end = n-1;
        int i = 0;
        for (i; i<=end; i++)
        {
            if (A[i] == 0)
            {
                swap(A, i, begin);
                begin++;
            }
            while (A[i] == 2 && i != end)
            {
                swap(A, i, end);
                end--;
                if (A[i] == 0)
                {
                    swap(A, i, begin);
                    begin++;
                }
            }
        }
        
    }
    
    // swap m and n in A
    void swap(int A[], int m, int n)
    {
        int temp = A[m];
        A[m] = A[n];
        A[n] = temp;
    }
};
