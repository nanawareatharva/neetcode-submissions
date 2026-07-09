class Solution {
public:
    bool isPalindrome(string s) {
        
        string newStr = "";

        for(const auto &it: s){
            if(isalnum(it)){
                newStr += tolower(it);
            }
        }

        return newStr == string(newStr.rbegin(), newStr.rend());
    }
};
