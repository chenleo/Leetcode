class Solution {
public:
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        long long int result = 0;
        int i = 0;
        int factor = 1;
        int num_start = false;
        for (;i< strlen(str);i++)   //strlen for char*
        {
            if (str[i] == ' ' && num_start == false)
                continue;
            if (str[i] == '-')
            {
                if (num_start == true)
                    break;
                num_start = true;
                factor = -1;
                continue;
            }
            else if (str[i] == '+')
            {
                if (num_start == true)
                    break;
                num_start = true;
                continue;
            }
            
            num_start = true;
            if (str[i] > '9' || str[i] < '0')
                break;
            int temp = str[i] - '0';
            result = result * 10 + temp;
            
        }
        if (result * factor > INT_MAX)
            return INT_MAX;
        if (result * factor < INT_MIN)
            return INT_MIN;
        else
            return result * factor;
    }
};
