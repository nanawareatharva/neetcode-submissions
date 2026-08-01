class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        unordered_map<int,int> mpp;

        int moreNum = 0;

        for(int i = 0; i < n; i++){

            moreNum = target - nums[i];

            if(mpp.find(moreNum) != mpp.end()){
                return{mpp[moreNum], i};
            }

            mpp.insert({nums[i], i});
        }

        return {-1,-1};
    }
};
