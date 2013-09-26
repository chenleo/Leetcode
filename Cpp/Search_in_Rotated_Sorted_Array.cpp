class Solution {
public:
    int search(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        
        //1 boundary condition
        if (n == 0)
            return -1;
        else if(n == 1)
        {
            if (A[0] == target)
            {
                return 0;
            }
            else 
            {
                return -1;
            }
        }
        
        // no pivok
        else if(A[n-1] > A[0])
        {
            int start = 0;
            int end = n-1;
            if(target < A[0] || target > A[n-1])
                return -1;
            if(A[start] == target) 
                return start;
            if(A[end] == target)
                return end;
                    
            while (end - start > 1)
            {
                    int temp = (start+end)/2;
                    if (A[temp] == target)
                        return temp;
                    else if (A[temp] > target)
                        end = temp;
                    else
                    start = temp;
            }
            return -1;
        }
        
        
        else
        {
            //1 search for the cliff.
            int start = 0;
            int end = n-1;
            while (end - start > 1)
            {
                int temp = (start + end)/2;
                if (A[temp] > A[0])
                    start = temp;
                if (A[temp] < A[n-1])
                    end = temp;
            }
            int cliff = start;
            //2 determine which side to search
            //2.1 boundary condition:
            if (target >  A[cliff] || target < A[cliff+1])
            {
                return -1;
            }
            else if (target > A[n-1])
            {
                start = 0;
                end = cliff;
                if(A[start] == target) 
                    return start;
                if(A[end] == target)
                    return end;
                    
                while (end - start > 1)
                {
                    int temp = (start+end)/2;
                    if (A[temp] == target)
                        return temp;
                    else if (A[temp] > target)
                        end = temp;
                    else
                        start = temp;
                }
                return -1;
            }
            else if (target < A[0])
            {
                start = cliff+1;
                end = n-1;
                if(A[start] == target) 
                    return start;
                if(A[end] == target)
                    return end;
                    
                while (end - start > 1)
                {
                    int temp = (start+end)/2;
                    if (A[temp] == target)
                        return temp;
                    else if (A[temp] > target)
                        end = temp;
                    else
                        start = temp;
                }
                return -1;
            }
        }
    }
};
