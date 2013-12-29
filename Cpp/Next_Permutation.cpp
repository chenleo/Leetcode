class Solution {
public:
    void nextPermutation(vector<int> &num) {
        //step1
        int k = num.size() - 2;
        while (k>=0 &&num[k] >= num[k+1]) {
            k--;
        }
        
        if (k < 0) {
            sort(num.begin(), num.end());
            return;
        }
        
        //step2
        int l;
        //find 
        for (int i = k+1; i< num.size(); i++) {
            if (num[i] > num[k]) {
                l = i;
            }
            else {
                break;
            }
        }
        
        //step3
        swap(num[l],num[k]);
        
        //step4
        reverse(num.begin()+k+1, num.end());
        return;
    }
};
