bool cmp(pair<int,int> a, pair<int,int> b){
    
    if(a.second == b.second){
        return a.first < b.first;
    }

    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();

        unordered_map <int,int> mpp;

        for(auto it: nums){
            mpp[it]++;
        }

        vector <pair <int,int>> freqVec(mpp.begin(), mpp.end());

        sort(freqVec.begin(), freqVec.end(), cmp);

        vector <int> ans;

        for (int i = 0; i < k; i++){
            ans.push_back(freqVec[i].first);
        }

        /*
        int cnt = 0;
        for(auto it: freqVec){
            if(cnt == k) break;
            ans.push_back(it.first);
            cnt++;
        }
        */

        return ans;
    }
};
