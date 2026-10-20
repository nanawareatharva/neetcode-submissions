class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> mpp;

        for(const auto &it: s){
            mpp[it]++;
        }

        for(const auto &it: t){
            mpp[it]--;
        }

        for(const auto &it: mpp){
            if(it.second != 0){
                return false;
            }
        }

        return true;
    }
};

/*
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
*/