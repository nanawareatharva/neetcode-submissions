class Solution {
   public:
    int trap(vector<int>& height) {

        int n = height.size();

        int left = 0; 
        int right = n-1;

        int leftmax = height[left];
        int rightmax = height[right];

        int total = 0;

        while(left <= right){

            if(leftmax < rightmax){

                leftmax = max(leftmax, height[left]);
                total += leftmax - height[left];
                left++;
            }

            else{

                rightmax = max(rightmax, height[right]);
                total += rightmax - height[right];
                right--;
            }
        }

        return total;
    }
};

/*
        int n = height.size();

        int left = 0;
        int right = n - 1;

        int leftmax = 0;
        int rightmax = 0;

        int total = 0;

        while (left < right) {

            if (height[left] <= height[right]) {

                leftmax = max(leftmax, height[left]);
                total += leftmax - height[left];
                left++;
            }

            else {

                rightmax = max(rightmax, height[right]);
                total += rightmax - height[right];
                right--;
            }
        }

        return total;
*/      


/*
        int n = height.size();

        int left = 0;
        int right = n - 1;

        int leftmax = 0;
        int rightmax = 0;

        int total = 0;

        while (left < right) {

            if (height[left] <= height[right]) {

                if (leftmax > height[left]) {
                    total += leftmax - height[left];
                } 
                
                else {
                    leftmax = height[left];
                }

                left++;
            }

            else {
                
                if (rightmax > height[right]) {
                    total += rightmax - height[right];
                } 
                
                else {
                    rightmax = height[right];
                }

                right--;
            }
        }
        return total;
*/

/*
        if(height.empty()) return 0;

        int n = height.size();

        vector<int>leftMax(n);
        vector<int>rightMax(n);

        int totalSize = 0;

        leftMax[0] = height[0];
        for(int i = 1; i < n; i++){
            leftMax[i] = max(leftMax[i-1], height[i]);
        }

        rightMax[n-1] = height[n-1];
        for(int i = n-2; i >= 0; i--){
            rightMax[i] = max(rightMax[i+1], height[i]);
        }

        for(int i = 0; i < n; i++){
            totalSize += min(leftMax[i], rightMax[i]) - height[i];
        }

        return totalSize;

*/