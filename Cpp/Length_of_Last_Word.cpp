class Solution {
public:
    int lengthOfLastWord(const char *s) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        int result = 0;
        int i = 0;
        bool space = false;
        char temp = s[i];
        while(temp != '\0')
        {
            if (temp == ' ')
                space = true;
            else
            {
                if (space == true)
                {
                    result = 1;
                    space = false;
                }
                else
                {
                    result += 1;
                }
            }
                //result += 1;
            i += 1;
            temp = s[i];
        }
        
        return result;
    }
};
