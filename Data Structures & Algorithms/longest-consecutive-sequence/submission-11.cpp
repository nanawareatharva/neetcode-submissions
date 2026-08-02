class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         
        int n = nums.size();

        if(n == 0) return 0;
        if(n == 1) return 1;

        unordered_set<int> st(nums.begin(), nums.end());

        int cnt = 1;
        int maxi = INT_MIN;

        for(const auto &it: st){

            if(st.count(it-1) == 0){
                cnt = 1;

                while(st.count(it + cnt) == 1){
                    cnt++;
                }

                maxi = max(cnt,maxi);
            }
        }
        return maxi;
    }
};
