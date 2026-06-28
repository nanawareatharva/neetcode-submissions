class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if (n == 0) return 0;

        int maxLength = 1;
        int length;

        unordered_set<int> st(nums.begin(), nums.end());

        for (const auto& it : st) {
            
            if (st.count(it - 1) == 0) {
                length = 1;

                while (st.count(it + length) != 0) {
                    length++;
                }

                maxLength = max(length, maxLength);
            }
        }

        return maxLength;
    }
};
