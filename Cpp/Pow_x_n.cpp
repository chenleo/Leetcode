class Solution {
public:
    double pow(double x, int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if (n == 0 || x == 1)
            return 1;
        else if (n == 1)
            return x;
        else if (n < 0)
        {
            long long int temp = -n;
            return 1/pow(x*x, temp/2)/pow(x,temp%2);
        }
        else if (n == 2)
        {
            return x*x;
        }
        else
        {
            return pow(x*x,n/2)*pow(x,n%2);
        }
        
    }
};
