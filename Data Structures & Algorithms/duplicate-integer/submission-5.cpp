class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int,int> mpp;

        for(const auto &it: nums){
            mpp[it]++;
        }

        for(const auto &it: mpp){
            if(it.second > 1){
                return true;
            }
        }
        return false;
    }
};