class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> prefix(n);
        prefix[0] = 1;

        for(int i = 1; i < n; i++){

            int ele = prefix[i-1] * nums[i-1];
            prefix[i] = ele;  
        }

        vector<int> postfix(n);
        postfix[n-1] = 1;

        for(int i = n-2; i >= 0; i--){

            int ele = postfix[i+1] * nums[i+1];
            postfix[i] = ele;
        }

        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            ans[i] = prefix[i] * postfix[i]; 
        }

        return ans;
    }
};
