/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
 
 //brute force solution 
class Solution {
public:
    //Check if three points, i, j and k, are collinear
    bool sameLine(Point i, Point j, Point k){
        return (j.y-i.y)*(k.x-j.x)-(k.y-j.y)*(j.x-i.x)==0;
    }
    //Check if all points are the same
    bool allSamePoints(vector<Point> &points){
        int i=0;
        while(i<points.size()){
            if(points[i].x!=points[0].x || points[i].y!=points[0].y)
                break;
            ++i;
        }
        return i==points.size();
    }
    int maxPoints(vector<Point> &points) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(points.size()<=1 || allSamePoints(points))
            return points.size();
        int maxPoints = 2;
        for(int i=0; i<points.size(); ++i){
            for(int j=i+1; j<points.size(); ++j){
                if(points[i].x==points[j].x && points[i].y==points[j].y)
                    continue;
                int count = 2;
                for(int k=0; k<points.size(); ++k){
                    if(k!=i && k!=j && sameLine(points[i], points[j], points[k]))
                        count++;
                }
                maxPoints = max(maxPoints, count);
            }
        }
        return maxPoints;
    }
};
