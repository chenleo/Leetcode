class Solution {
public:
    int maxArea(vector<int> &height) {
        if (height.empty()) 
            return 0;
        //int result;
        int maxContain=0;
        int start=0;
        int end = height.size() - 1;
        while (start != end) {
            auto contain = min(height[start], height[end]) * (end-start);
            maxContain = max(contain, maxContain);
            if (height[start] > height[end])
                end--;
            else
                start++;
        }
        return maxContain;
    }
};
