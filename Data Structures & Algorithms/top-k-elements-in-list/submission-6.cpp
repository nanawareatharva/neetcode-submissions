// 3. Approach 3 (Using Frequency Map + Reverse Sorting)


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mpp;

        for(const auto &it: nums){
            mpp[it]++;
        }

        vector <pair<int,int>> freqVec;

        for(const auto &it: mpp){
            freqVec.push_back({it.second, it.first});
        }

        sort(freqVec.rbegin(), freqVec.rend());

        vector<int> ans;

        for(int i = 0; i < k; i++){
            ans.push_back(freqVec[i].second);
        }
        return ans;
    }
};
