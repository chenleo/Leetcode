class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        int l = 0;
        int r = n - 1;
        int ml = -1;
        int mr = -1;
        
        while(l <= r) {
            int m = l + ((r - l) >> 1);
            if (A[m] > target) {
                r = m - 1;
            } 
            else if (A[m] < target) {
                l = m + 1;
            }
            else {
                ml = m;
                r = m - 1;
            }
        }
        
        l = 0;
        r = n - 1;
        while(l <= r) {
            int m = l + ((r - l) >> 1);
            if (A[m] > target) {
                r = m - 1;
            } 
            else if (A[m] < target) {
                l = m + 1;
            }
            else {
                mr = m;
                l = m + 1;
            }
        }
        vector<int> result;
        result.push_back(ml);
        result.push_back(mr);
        return result;
        
    }
};
