class Solution {
public:
    int divide(long long int dividend, long long int divisor) {
        // boundary
        if (dividend < 0)
            return -divide(-dividend, divisor);
        if (divisor < 0)
            return -divide(dividend, -divisor);
        if (divisor == 1)
            return dividend;
        if (dividend < divisor) 
            return 0;
        if (dividend == divisor)
            return 1;
       else {
           int power = 0;
           // tocheck = divisor;
           while (divisor << power <= dividend) {
               ++power;
           }
           
           int part_result = 1 << (power - 1);
           return part_result + divide(dividend - (divisor << (power-1)), divisor);
       }
    }
};
