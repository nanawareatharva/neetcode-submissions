class Solution {
public:

    string encode(vector<string>& strs) {

        string encodedString = "";

        for(const auto &it: strs){

            encodedString += to_string(it.size());
            encodedString += "#";
            encodedString += it;
        }

        return encodedString;
    }

    vector<string> decode(string s) {

        vector<string> decodedString;

        int n = s.length();
        int i = 0;


        while(i < n){

            int j = i;

            while(j < n && s[j] != '#'){
                j++;                
            }

            int len = stoi(s.substr(i, j-i));

            string ans = s.substr(j+1, len);
            decodedString.push_back(ans);

            i = j + 1 + len;  
        }

        return decodedString;
    }
};
