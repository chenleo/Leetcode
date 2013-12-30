class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        if (n == 0)
            return result;
        else {
            string curr;
            generateP(n,n,curr,result);
            result;
        }
    }
    
    void generateP(int leftP, int rightP, string currString, vector<string> &stringVec) {
        if (leftP == 0 && rightP == 0) {
            stringVec.push_back(currString);
            return;
        }
        if (leftP > 0) {
            generateP(leftP-1, rightP, currString+'(', stringVec);
        }
        if (rightP > leftP) {
            generateP(leftP, rightP-1, currString+')', stringVec);
        }
    }
};
