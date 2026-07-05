class Solution {
   public:
    string minWindow(string s, string t) {

        int n1 = s.length();
        int n2 = t.length();

        int minLength = INT_MAX;
        int startIndex = -1;

        for (int i = 0; i < n1; i++) {

            int hash[256] = {0};
            int cnt = 0;

            for (int j = 0; j < n2; j++) {
                hash[t[j]]++;
            }

            for (int j = i; j < n1; j++) {

                if(hash[s[j]] > 0){
                    cnt++;
                }

                hash[s[j]]--;

                if(cnt == n2){
                    if(j-i+1 < minLength){
                        minLength = j-i+1;
                        startIndex = i;
                        break;
                    }
                }
            }
        }

        if(minLength == INT_MAX) return "";

        else return s.substr(startIndex, minLength);
    }
};