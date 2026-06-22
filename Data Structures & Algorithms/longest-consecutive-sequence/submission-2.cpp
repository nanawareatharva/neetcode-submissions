class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {

/*        int n = nums.size();

        if(n == 0) return 0;
        else if(n == 1) return 1;

        int maxLength = 1;
        int length;

        unordered_set<int> st(nums.begin(), nums.end());

        for(const auto &it: st)
*/

        int n = nums.size();

        if(n == 0) return 0;

        int maxLength = 1;
        int length;

        unordered_set <int> st(nums.begin(), nums.end());

        for(const auto &it: st){

            if(st.count(it - 1) == 0){
                length = 1;

                while(st.count(it + length) != 0){
                    length++;
                }

                maxLength = max(length, maxLength);
            }
        }

        return maxLength;
    }
};

/*
        int n = nums.size();

        if(n == 0) return 0;

        int maxLength = 1;
        int length;

        unordered_set <int> st(nums.begin(), nums.end());

        for(const auto &it: st){

            if(st.count(it - 1) == 0){
                length = 1;

                while(st.count(it + length) != 0){
                    length++;
                }

                maxLength = max(length, maxLength);
            }
        }

        return maxLength;
*/

/*
        if (nums.empty()) return 0;

        int n = nums.size();

        sort(nums.begin(), nums.end());

        int cnt = 1;
        int maxi = 1;

        for (int i = 1; i < n; i++) {

            if (nums[i] - nums[i - 1] == 1) {
                cnt++;
            }

            else if (nums[i] - nums[i - 1] == 0) {
                continue;
            }

            else {
                maxi = max(maxi, cnt);
                cnt = 1;
            }
        }

        maxi = max(maxi, cnt);

        return maxi;
*/