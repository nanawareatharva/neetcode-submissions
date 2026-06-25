class Solution {
   public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();

        int maxLen = 0;

        for(int i = 0; i < n; i++){

            int hash[256] = {0};

            for(int j = i; j < n; j++){

                if(hash[s[j]] == 1) break;

                hash[s[j]] = 1;

                int len = j - i + 1;

                maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
};

/*
        int n = s.size();

        int cnt = 1;
        bool found;

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                if (s[i] != s[j])
                    cnt++;

                else {
                    found = true;
                    break;
                }
            }

            if (found) break;
        }

        return cnt;
*/