class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        vector<int>  result;
        int rest = 1;
        while (digits.size() > 0)
        {
            result.emplace(result.begin(), (digits.back() + rest) % 10);
            rest = (digits.back() + rest)/10;
            digits.pop_back();
        }
        if (rest != 0)
            result.emplace(result.begin(),rest);
        return result;
    }
};
