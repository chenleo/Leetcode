class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        vector<string> result;
        string TYPE2 = "abc";
        string TYPE3 = "def";
        string TYPE4 = "ghi";
        string TYPE5 = "jkl";
        string TYPE6 = "mno";
        string TYPE7 = "pqrs";
        string TYPE8 = "tuv";
        string TYPE9 = "wxyz";
        string TYPE0 = " ";
        
        
        if (digits.size() == 0)
        {
            result.push_back("");
            return result;
        }
        else 
        {
            int i = 0;
            for(i; i< digits.size();i++)
            {
                switch (digits[i])
                {
                    case '2':
                    {
                        result = addOneNum(result, TYPE2);
                        break;
                    }
                    case '3':
                    {
                        result = addOneNum(result, TYPE3);
                        break;
                    }
                    case '4':
                    {
                        result = addOneNum(result, TYPE4);
                        break;
                    }
                    case '5':
                    {
                        result = addOneNum(result, TYPE5);
                        break;
                    }
                    case '6':
                    {
                        result = addOneNum(result, TYPE6);
                        break;
                    }
                    case '7':
                    {
                        result = addOneNum(result, TYPE7);
                        break;
                    }
                    case '8':
                    {
                        result = addOneNum(result, TYPE8);
                        break;
                    }
                    case '9':
                    {
                        result = addOneNum(result, TYPE9);
                        break;
                    }
                    case '0':
                    {
                        result = addOneNum(result, TYPE0);
                        break;
                    }
                    default:
                        break;
                }
            }
            
            return result;
        }
        
    }
    
    vector<string> addOneNum(vector<string> oldstring, string &toadd)
    {
        vector<string> result;
        
        //int i = 0;
        //int j = 0;
        if (oldstring.size() == 0)
        {
            for (int j = 0; j< toadd.size(); j++)
            {
                string s;
                s.push_back(toadd[j]);
                result.push_back(s);
            }
        }
        else
        {
            for (int i = 0; i< oldstring.size();i++)
            {
                for(int j= 0; j< toadd.size();j++)
                {
                    string temp = oldstring[i];
                    temp.push_back(toadd[j]);
                    result.push_back(temp);
                }
            }
        }
        return result;
    }
};
