class Solution {
public:
    bool isPalindrome(string s) {

        string newStr = "";

        for(const auto &it: s){

            if(isalnum(it)){
                newStr += tolower(it);
            }
        }

        int left = 0;
        int right = newStr.length() - 1;

        while(left < right){

            if(newStr[left] != newStr[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};