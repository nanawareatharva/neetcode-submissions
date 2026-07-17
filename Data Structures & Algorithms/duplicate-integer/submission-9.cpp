// 3. Approach 3 (Using Set)


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        int n = nums.size();

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