class Solution {
public:
    bool isPalindrome(string s) {

        string newStr ="";

        for(const auto &it: s){
            if (isalnum(it)){
                newStr += tolower(it);
            }
        }

        int n = newStr.length();

        int left = 0;
        int right = n-1;

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
