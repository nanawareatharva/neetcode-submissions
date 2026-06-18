class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        unordered_map<int, int>mpp;

        for(int i = 0; i < n; i++){

            int num = nums[i];
            int moreNumber = 0;

            moreNumber = target - num;

            if(mpp.find(moreNumber) != mpp.end()){

                return {mpp[moreNumber], i};
            }

            mpp[num] = i;  // pushing / inserting element into mpp along with its index
        }

        return{-1, -1};
    }
};


/*

        sort(nums.begin(), nums.end());
        
        int n = nums.size();

        int left = 0;
        int right = n - 1;

        while (left < right) {

            if (nums[left] + nums[right] < target) {
                left++;
            }

            else if (nums[left] + nums[right] > target) {
                right--;
            }

            else {
                return {left, right};
            }
        }

        return {};

*/