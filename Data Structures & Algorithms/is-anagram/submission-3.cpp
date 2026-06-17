class Solution {
   public:
    bool isAnagram(string s, string t) {
        
        if (s.length() != t.length()) return false;

        char count[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
        }

        for (int i = 0; i < t.length(); i++) {
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

/*

            if(s.length() != t.length()) return false;

            char count[26] = {0};

            for(char ch: s){
                count[ch - 'a']++;
            }

            for(char ch: t){
                count[t[i] - 'a']--;
            }

            for(int i = 0; i < 26; i++){

                if (count[i] != 0){
                    return false;
                }
            }

            return true;

*/

/*

        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
            return true;

        return false;


        // if (s.length() != t.length ()){
        //     return false;
        // }

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return s == t;

*/