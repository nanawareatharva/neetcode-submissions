class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.length();

        int maxLength = 0;

        for(int i = 0; i < n ; i++){

            int hash[26] = {0};
            int maxFreq = 0;

            for(int j  = i; j < n; j++){

                hash[s[j] - 'A']++;
                maxFreq = max(maxFreq, hash[s[j] - 'A']);

                int len = j-i+1;
                int changes = len - maxFreq;

                if(changes <= k){
                    maxLength = max(maxLength, len);
                }

                else break;
            }
        }
        return maxLength;
    }
};
