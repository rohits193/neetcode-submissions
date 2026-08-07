class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int maxarea = 0;
        int i = 0, j = heights.size()-1;
        while (i < j) {
            int area = min(heights[i], heights[j])* (j - i);
            maxarea = max(area, maxarea);
            if (heights[i] > heights[j]) {
                j--;
            }
            else i++;
        }
        return maxarea;
    }
};
