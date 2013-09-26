class Solution {
public:
    bool canJump(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool result;
        if (n == 0)
        {
            result = true;
        }
        else if (n == 1)
        {
            result = true;
        }
        
        else
        {
            bool temp[n];
            temp[0] = true;
            int i = 0;
            int last_true_index = 0;
            for (; i< n;i++)
            {
                if (temp[i] != true)
                    return false;
                else if(A[i] + i < last_true_index)
                {
                    continue;
                }
                int j =last_true_index - i;
                for (; j< A[i]; j++)
                {
                    temp[i+j+1] = true;
                    last_true_index ++;
                }
            }
            result = temp[n-1];
        }
        
        
        return result;
    }
};
