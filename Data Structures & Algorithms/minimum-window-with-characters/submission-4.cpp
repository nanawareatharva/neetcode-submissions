class Solution {
public:
    string minWindow(string s, string t) {

        int n1 = s.length();
        int n2 = t.length();

        int hash[256] = {0};
        int cnt = 0;

        int minLength = INT_MAX;
        int startIndex = -1;

        for(const auto &it: t){
            hash[it]++;
        }

        int l, r = 0;

        while(r < n1){

            if(hash[s[r]] > 0){
                cnt++;
            }
            hash[s[r]]--;

            while(cnt == n2){

                if(r-l+1 < minLength){
                    minLength = r-l+1;
                    startIndex = l;
                }

                hash[s[l]]++;
                if(hash[s[l]] > 0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        if(startIndex == -1) return "";
        return s.substr(startIndex, minLength);   
    }
};
