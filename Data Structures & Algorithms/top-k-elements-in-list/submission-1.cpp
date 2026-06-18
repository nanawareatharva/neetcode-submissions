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

/*

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();

        unordered_map <int, int> mpp;

        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }

        /*
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

*/

/*

        int n = nums.size();

        int topOneEle = 0;
        int topTwoEle = -1;

        unordered_map <int, int> mpp;

        vector<int> ans;

        for(int i = 0; i < n; i++){

            mpp[nums[i]]++;
        }

        for(auto it: mpp){

            if(it.second > topOneEle){

                topTwoEle = topOneEle;
                topOneEle = it.first;

                if(it.second == 0){
                    return {topOneEle};
                }
            }
        }

        return{topOneEle, topTwoEle};

*/

/*
bool cmp(pair<int,int> a, pair<int,int> b){

    if(a.second == b.second){
        return a.first < b.first;
    }

    return a.second > b.second;
}
*/

/*
vector<pair<int,int>> vec;

for(auto it : mpp){
    vec.push_back({it.second, it.first});
}

*/
