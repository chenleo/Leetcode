class Solution {

public:

    bool isValid(string s) {

        // Start typing your C/C++ solution below

        // DO NOT write int main() function

        

        string inv_s;

        if (s.size() % 2 != 0)

        {

            return false;

        }

        while (s.size() != 0)

        {

            switch (s.back())

            {

                case '(':

                {

                    s.pop_back();

                    if (inv_s.back() != ')')

                        return false;

                    

                    inv_s.pop_back();

                    break;

                }

                case '[':

                {

                    s.pop_back();

                    if (inv_s.back() !=']')

                        return false;

                    

                    inv_s.pop_back();

                    break;

                }

                case '{':

                {

                    s.pop_back();

                    if (inv_s.back() != '}')

                        return false;

                    

                    inv_s.pop_back();

                    break;

                }

                /* case '(':

                case '{':

                case '[':

                {

                    return false;

                }*/

                default:

                {

                    inv_s.push_back(s.back());

                    s.pop_back();

                    //return false;

                    break;   

                }

            }

        }

        return true;

        

    }

};
