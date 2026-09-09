class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        int moreNum = 0;
        unordered_map<int,int> mpp;

        for (int i = 0; i < n; i++){

            int num = nums[i];
            moreNum = target - num;

            if(mpp.find(moreNum) != mpp.end()){
                return{mpp[moreNum], i};
            }

            mpp.insert({num, i});
        }
    }
};
