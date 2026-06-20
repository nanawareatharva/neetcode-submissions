class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        
        vector<int> ans(n, 1);

        int prefix = 1;

        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int postfix = 1;

        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= postfix;
            postfix *= nums[i];
        }

        return ans;
    }
};

/*

        int n = nums.size();

        vector<int> ans;

        for (int i = 0; i < n; i++) {

            int product = 1;

            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                product *= nums[j];
            }

            ans.push_back(product);
        }

        return ans;

*/