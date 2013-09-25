class Solution {
public:
    int sqrt(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        //Binary search
        if (x <= 0)
        {
            return 0;
        }
        else if(x == 1)
        {
            return 1;
        }
        
        else
        {
            // target = x;
            uint64_t begin = 1;
            uint64_t end = x;
            while ((end - begin) > 1)
            {
                uint64_t temp = (end+begin)/2;
                if ((temp * temp) > x)
                {
                    end = temp ;
                }
                else if ((temp * temp) < x)
                {
                    begin = temp ;
                }
                else 
                {
                    return temp;
                }
                
            }
            return begin;
        }
    }
};
