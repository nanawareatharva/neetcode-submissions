class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for(const auto &it: nums){

            if(st.count(it) == 1){
                return true;
            }

            st.insert(it);
        }

        return false;

    }
};

/*
        unordered_map<int, int> mpp;

        for(const auto &it: nums){
            mpp[it]++;
        }

        for(const auto &it: mpp){
            if(it.second != 1){
                return true;
            }
        }

        return false;
*/

/*
        int n = nums.size();

        sort(nums.begin(), nums.end());
        
        for(int i = 1; i < n; i++){

            if(nums[i] == nums[i-1]){
                return true;
            }
        }

        return false;
*/