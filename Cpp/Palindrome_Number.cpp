class Solution {
public:
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (x < 0 )
        {
            return false;
        }
        else if (x >=0 && x<10)
        {
            return true;
        }
        else if(x%10 == 0)
        {
            return false;
        }
        int mirror = 0;
        while (mirror < x)
        {
            
            int tail = x%10;
            x = x/10;
            if (mirror == x)
            {
                return true;
            }
            mirror = mirror * 10 + tail;
            if (mirror ==x)
            {
                return true;
            }
        }
        return false;
        
    }
};
