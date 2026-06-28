class Solution {
   public:
    string encode(vector<string>& strs) {

        int n = strs.size();

        string encodedString = "";

        for (int i = 0; i < n; i++) {
            encodedString += to_string(strs[i].size()) + "#" + strs[i];
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        
        vector<string> decodedString;
        int i = 0;
        int n = s.size();

        while (i < n) {
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            string ans = s.substr(j + 1, len);

            decodedString.push_back(ans);

            i = j + 1 + len;
        }

        return decodedString;
    }
};
