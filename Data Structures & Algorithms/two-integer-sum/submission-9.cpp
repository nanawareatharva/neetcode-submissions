// using unordered map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mpp;

        int moreNum = 0;

        for(int i = 0; i < nums.size(); i++){

            moreNum = target - nums[i];

            if(mpp.find(moreNum) != mpp.end()){
                return{mpp[moreNum], i};
            }

            mpp.insert({nums[i], i});
            // mpp[nums[i]] = i;
        }
    }
};
