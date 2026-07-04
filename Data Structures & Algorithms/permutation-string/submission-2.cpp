class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n1 = s1.length();
        int n2 = s2.length();

        if(n1 > n2) return false;

        vector<int> freq(26,0);
        vector<int> window(26,0);

        for(int i = 0; i < n1; i++){
            freq[s1[i] - 'a']++;
            window[s2[i] - 'a']++; 
        }

        if(freq == window) return true;

        for(int i = n1; i < n2; i++){
            window[s2[i] - 'a']++;
            window[s2[i - n1] - 'a']--;

            if(freq == window) return true;
        }

        return false;
    }
};
