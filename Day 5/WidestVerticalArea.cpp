class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int area = 0;
        vector<int> xAxis;

        for(int i=0; i<points.size(); i++){
            xAxis.push_back(points[i][0]);
        }
        sort(xAxis.begin(), xAxis.end());

        for(int i=1; i<xAxis.size(); i++)
            area = max(area, (xAxis[i] - xAxis[i-1]));

    return area;
    }
};