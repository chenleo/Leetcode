class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int result;
        int distance = INT_MAX;
        if (num.size() < 3)
            return 0;//return sum(result);
        sort(num.begin(), num.end());
        for (int i = 0; i< num.size() - 2; i++) {
            if (i > 0 && num[i] == num[i-1]) {
                continue;
            }
            int start_point = i+1;
            int end_point = num.size() -1;
            while(end_point > start_point) {
                int tempTarget = num[i] + num[start_point] + num[end_point];
                
                if (tempTarget == target) {
                    result = tempTarget;
                    //result = {num[i], num[start_point], num[end_point]};
                    return result;
                    //return sum(result);
                }
                else if (abs(tempTarget-target) < distance) {
                    distance = abs(tempTarget-target);
                    result = tempTarget;
                    //result = {num[i], num[start_point], num[end_point]};
                    //??
                    if (tempTarget > target) {
                        end_point--;
                        //??
                        while (end_point > start_point && num[end_point] == num[end_point+1])
                            end_point--;
                    }
                    else { //tempTarget < target
                        start_point++;
                        while (end_point > start_point && num[start_point] == num[start_point-1])
                        start_point++;
                    }
                }
                else {
                    if (tempTarget > target) {
                        end_point--;
                        //??
                        while (end_point > start_point && num[end_point] == num[end_point+1])
                            end_point--;
                    }
                    else { //tempTarget < target
                        start_point++;
                        while (end_point > start_point && num[start_point] == num[start_point-1])
                        start_point++;
                    }
                }
            }
        }
        return result;
    }
};
