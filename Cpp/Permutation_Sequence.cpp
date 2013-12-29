class Solution {
public:
    string getPermutation(int n, int k) {
        assert(n>=0 && k>0 && n<=9);
       vector <int> m(n, 1);
        int tmp = 1;
        for (int i=0; i<n-1; ++i) {
            m[n-i-2] = tmp;
            tmp *= i+2;
        }
        k = (k-1)%(m[0]*n);
        vector <bool> used(n, false);
        string ans;
        for (int i=0; i<n; ++i) {
            int idx = k/m[i];
            k = k%m[i];
            for (int j=0; j<n; j++)
                if (!used[j]) {
                    if (!idx) {
                        ans = ans + char(j+'1');
                        used[j] =true;
                        break;
                }
                idx--;
            }
    }
    return ans;
        
    }
};
