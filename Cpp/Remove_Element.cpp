class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            if(elem == A[0])
            {
                A = NULL;
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else
        {
        
        int index_other = 0;
        int index_itr = 0;
        int result = n;
        for (;index_itr < n; index_itr ++)
        {
            if (A[index_itr] == elem)
            {
                result--;
                //index_other++;
            }
            else
            {
                A[index_other] = A[index_itr];
                index_other++;
                //result --;
            }
            
        }
        return result;
        
        }
    }
};
