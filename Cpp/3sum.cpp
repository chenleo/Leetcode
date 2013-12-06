class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        vector<vector<int> > result;
        if (num.size() < 3)
            return result;
        sort (num.begin(), num.end());
        for (int i = 0; i< num.size()-2; i++) {
            if (i > 0 && num[i]==num[i-1]) {
                continue;
            }
            int start_point = i + 1;
            int end_point = num.size() - 1;
            while (end_point > start_point) {
                if (num[i] + num[start_point] + num[end_point] == 0) {
                    vector<int> temp;
                    temp.push_back(num[i]);
                    temp.push_back(num[start_point]);
                    temp.push_back(num[end_point]);
                    result.push_back(temp);
                    start_point++;
                    end_point--;
                    while (end_point > start_point && num[end_point] == num[end_point+1])
                        end_point--;
                    while (end_point > start_point && num[start_point] == num[start_point-1])
                        start_point++;
                }
                else if (num[i] + num[start_point] + num[end_point] > 0) {
                    end_point--;
                    while (end_point > start_point && num[end_point] == num[end_point+1])
                        end_point--;
                }
                else {
                    start_point++;
                    while (end_point > start_point && num[start_point] == num[start_point-1])
                        start_point++;
                }
            }
        }
        
        return result;
        
        
    }
};
