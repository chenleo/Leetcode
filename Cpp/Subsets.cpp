class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        vector<vector<int> > result;
        /*
        if (S.size() == 0)
        {
            vector<int> set_element;
            result.push_back(set_element);
            return result;
        }
        else
        {
        */
            for (int i = 0; i< (1 << S.size()); i++)    //condition is important
            {
                vector<int> set_element;
                int x = i;
                while(x)
                {
                    int tar = log2(x&~(x-1));    //position of last bit
                    set_element.push_back(S[tar]);
                    x &= x-1;
                }
                sort(set_element.begin(), set_element.end());
                result.push_back(set_element);
            }
            return result;
            /*
        }
        */
        
    }
};
