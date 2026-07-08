class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 0) return 0;
        else if(n == 1) return 1;

        int cnt = 1;
        int maxi = 1;

        unordered_set<int> st(nums.begin(), nums.end());

        for(const auto &it: nums){
            if(st.count(it - 1) == 0) {
                cnt = 1;

                while(st.count(it + cnt) == 1){
                    cnt++;
                }

                maxi = max(maxi, cnt);
            }
        }

        return maxi;
    }
};
