#define M_VALUE 1000
#define D_VALUE 500
#define C_VALUE 100
#define L_VALUE 50
#define X_VALUE 10
#define V_VALUE 5
#define I_VALUE 1

class Solution {
public:
    int romanToInt(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        //I:1
        //V:5
        //X:10
        //L:50
        //C:100
        //D:500
        //M:1000
        int result = 0;
        if(s.size() == 0)
        {
            return result;
        }
        else
        {
            int i = 0;
            for (; i< s.size();i++)
            {
                switch(s[i])
                {
                    case 'M':
                    {
                        result = result + M_VALUE;
                        break;
                    }
                    case 'D':
                    {
                        result = result + D_VALUE;
                        break;
                    }
                    case 'C':
                    {
                        if (s[i+1] == 'D' || s[i+1] == 'M')
                        {
                            result = result - C_VALUE;
                        }
                        else
                        {
                            result = result + C_VALUE;
                        }
                        break;
                    }
                    case 'L':
                    {
                        result = result + L_VALUE;
                        break;
                    }
                    case 'X':
                    {
                        if (s[i+1] == 'L' || s[i+1] == 'C' || s[i+1] == 'D')
                        {
                            result = result - X_VALUE;
                        }
                        else
                        {
                            result = result + X_VALUE;
                        }
                        break;
                    }
                    case 'V':
                    {
                        result = result + V_VALUE;
                        break;
                    }
                    case 'I':
                    {
                        if (s[i+1] == 'V' || s[i+1] == 'X' || s[i+1] == 'L')
                        {
                            result = result - I_VALUE;
                        }
                        else
                        {
                            result = result + I_VALUE;
                        }
                        break;
                    }
                    default:
                    break;
                }
            }
            return result;
        }
    }
};
