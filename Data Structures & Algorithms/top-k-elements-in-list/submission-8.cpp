class Solution {
   public:

    static bool cmp(pair<int, int> a, pair<int, int> b) {

        if (a.second == b.second) return a.first < b.second;
        return a.second > b.second;
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mpp;

        for (const auto& it : nums) {
            mpp[it]++;
        }

        vector<pair<int, int>> freqVec(mpp.begin(), mpp.end());

        sort(freqVec.begin(), freqVec.end(), cmp);

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(freqVec[i].first);
        }

        return ans;
    }
};
