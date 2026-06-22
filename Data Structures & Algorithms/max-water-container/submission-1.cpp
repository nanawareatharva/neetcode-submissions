class Solution {
   public:
    int maxArea(vector<int>& heights) {

        int n = heights.size();

        int left = 0;
        int right = n - 1;

        int area = 0;
        int ans = 0;

        while (left < right) {
            
            int width = right - left;
            int height = min(heights[left], heights[right]);

            area = width * height;

            ans = max(ans, area);

            if (heights[left] < heights[right]) {
                left++;
            }

            else
                right--;
        }

        return ans;
    }
};
