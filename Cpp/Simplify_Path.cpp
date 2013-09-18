class Solution {
public:
    string simplifyPath(string path) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string result;
        result.push_back('/');
        for (int i = 1; i< path.size(); i++)
        {
            switch (path[i])
            {
                case '/':
                {
                    if (result.back() == '/')
                    {
                        break;
                    }
                    else if (result.back() == '.')
                    {
                        result.pop_back();
                        break;
                    }
                    else
                    {
                        result.push_back('/');
                        break;
                    }
                }
                
                case '.':
                {
                    if (result.back() == '/')
                    {
                        result.push_back('.');
                        break;
                    }
                    else            // result.back() == '.'
                    {
                        result.pop_back();      // pop_back('.')
                        result.pop_back();      // pop_back('/')
                        if (result.size() == 0)
                        {
                            result.push_back('/');
                            break;
                        }
                        while (result.back() != '/')
                        {
                            result.pop_back();
                        }
                        break;
                    }
                }
                default :
                {
                    result.push_back(path[i]);
                    break;
                }
            }
        }
        
        while (result.back() == '/' || result.back() == '.')
            result.pop_back();          //
        if (result.size() == 0)
            result.push_back('/');
        return result;
        
    }
};
