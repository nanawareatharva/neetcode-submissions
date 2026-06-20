class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.size();

        string temp = "";

        for(int i = 0; i < n; i++){

            if(isalnum(s[i])){
                temp += tolower(s[i]);
            }
        }

        int left = 0;
        int right = temp.size() - 1;

        while(left < right){

            if(temp[left] != temp[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
