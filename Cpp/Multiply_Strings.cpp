class Solution {
public:
    string multiply(string num1, string num2) {
     string result(num1.size()+num2.size(),'0');
            for (int i = num1.size()-1; i >= 0; --i) {
                int carry = 0;
                for (int j = num2.size()-1; carry!=0 || j>=0; --j) {
                    int n_digit =  (j >= 0? (num1[i]-'0')*(num2[j]-'0'):0) + carry;
                    carry = (result[i+j+1] -'0'+ n_digit)/10;

                    result[i+j+1] = '0' + (result[i+j+1] -'0'+ n_digit) % 10;

                }
            }
            if (result.front() == '0')
                result.erase(result.begin());
                
            if (num1.size() == 1 && num1.front() == '0' || num2.size() == 1 && num2.front()=='0') {
                string result2(1,'0');
                return result2;
            }
            return result;
    }
};
