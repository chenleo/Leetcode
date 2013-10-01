class Solution {
public:
    int maxSubArray(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        // 
        int result = 0;
        int temp_max = 0;
        int max_value;
        int i = 0;
        for (; i< n; i++)
        {
            temp_max += A[i];
            if (temp_max > result)
                result = temp_max;
            if(temp_max<0)
                temp_max = 0;
            if(A[i]>max_value)
                max_value = A[i];
        }
        if (max_value <0)
            return max_value;
        return result;
    }
};
