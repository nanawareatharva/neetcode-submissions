class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        
        int n = nums.size();

        set<int> st;

        for (int i = 0; i < n; i++) {
            if (st.find(nums[i]) != st.end()) {
                return true;
            }

            st.insert(nums[i]);
        }

        return false;
    }
};

/*
--- Solved By sorting array firstly ---
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i  = 1; i < n; i++){

            if(nums[i] == nums[i-1]){
                return true;
            }
        }

        return false;

*/

/*
---Solved using unordered_map ---

        int n = nums.size();

        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {

            mpp[nums[i]]++;
        }

        for (auto it : mpp) {

            if (it.second != 1)
                return true;
        }

        return false;
    }

*/