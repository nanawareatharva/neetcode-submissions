class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();

        unordered_map <int, int> mpp;

        // for(int i = 0; i < n; i++){
        //     mpp[nums[i]]++;
        // }

        
        for(auto it: nums){
            mpp[it]++;
        }
        

        vector <pair <int, int>> freqVec(mpp.begin(), mpp.end());  //directly push in pair vector

        sort(freqVec.begin(), freqVec.end(), [](auto a, auto b){
            return a.second > b.second;
        });

        vector <int> ans;

        for(int i = 0; i < k; i++){
            ans.push_back(freqVec[i].first);
        }

        return ans;
    }
};