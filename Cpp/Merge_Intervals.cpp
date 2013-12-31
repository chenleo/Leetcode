/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool isLess(const Interval& a, const Interval& b)  
{  
    return a.start < b.start;  
}  
  
class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int nSize = intervals.size();
        vector<Interval> result;
        if (nSize == 0) return result;
        
        //!!
        sort(intervals.begin(), intervals.end(), isLess);
        Interval val = intervals[0];
        Interval next;
        for (int i = 1; i < nSize; ++i)
        {
            next = intervals[i];
            if (next.start > val.end)
            {
                result.push_back(val);
                val = next;
            }
            else
            {
                val.end = val.end > next.end ? val.end : next.end;
            }
        }
        result.push_back(val);
        return result;
    }
};
