class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        //boundary condition:
        
        if (n == 0)
            return;
        if (m == 0)
        {
            int final_length = n-1;
            int i = n-1;
            while (i >= 0)
        {
                A[final_length] = B[i];
                i--;
                final_length--;
        }
            
        }
        int i = n-1;
        int j = m-1;
        int final_length = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            if (A[j] > B[i])
            {
                A[final_length] = A[j];
                j--;
                final_length--;
            }
            else 
            {
                A[final_length] = B[i];
                i--;
                final_length--;
            }
        }
        while (j >= 0)
        {
            A[final_length] = A[j];
            j--;
            final_length--;
        }
        while (i >= 0)
        {
                A[final_length] = B[i];
                i--;
                final_length--;
        }
    }
};
