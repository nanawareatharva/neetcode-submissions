class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 0) return 0;

        sort(nums.begin(), nums.end());

        int cnt = 1;
        int maxCon = 1;

        for(int i = 1; i < n; i++){

            if(nums[i] - nums[i-1] == 1){
                cnt++;   
            }

            else if(nums[i] - nums[i-1] == 0){
                continue;
            }

            else{
                maxCon = max(maxCon, cnt);
                cnt = 1;
            }
        }

        maxCon = max(maxCon, cnt);

        return maxCon;
    }
};
