class Solution {
public:
    bool isNumber(const char *s) {

        int dot = 0;
        int e = 0;
        int minus = 0;
        int nums = 0;
        int space = 0;
        //first, cancel all ' '
        int ind = 0;
        for(ind; s[ind];ind++) {
            if (s[ind] == ' ')
                continue;
            else 
                break;
        }
        
        //check if string still valid
        if (s[ind] == '\0')
            return false;
            
        //main loop
        for (int i = ind; s[i]; i++) {
            //normal number
            if (s[i] >= '0' && s[i] <= '9') {
                if (nums == 0)
                    nums = 1;
                if (space == 1)
                    return false;
                continue;
            }
            
            //e
            else if (s[i] == 'e') {
                if (space == 1)
                    return false;
                if (e == 0 && nums == 1) {
                    e = 1;
                    //005407e+6
                    if (s[i+1] == '+' || s[i+1] == '-') {
                        //num = 0;
                        i++;
                    }
                    nums = 0;
                    continue;
                }

                else 
                    return false;
            }
            
            //"."
            else if (s[i] == '.') {
                //test for 6e6.5
                if (space == 1 || e == 1)
                    return false;
                if (dot == 0) {
                    dot = 1;
                    
                    //46.e3
                    if (nums == 1 && s[i+1] == 'e') {
                        e = 1;
                        nums = 0;
                        i++;
                        //32.e-80123
                        if (s[i+1] == '+' || s[i+1] == '-') {
                            nums = 0;
                            i++;
                        }
                    }
                    //nums = 0;
                    continue;
                }
                else 
                    return false;
            }
            //"-" && "+"
            else if (s[i] == '-' || s[i] == '+') {
                if (minus == 0 && nums ==0 &&dot == 0 &&e == 0) {
                    minus = 1;
                    continue;
                }
                else
                    return false;
            }
            else if (s[i] == ' ') {
                //if (dotAnd)
                    space = 1;
            }
            else 
                //other chars
                return false;
            
            //s++;
        }
        if (nums == 0)
            return false; 
        return true;
    }
};
