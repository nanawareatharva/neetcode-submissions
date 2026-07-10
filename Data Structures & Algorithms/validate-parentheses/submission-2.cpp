class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stc;

        for(const auto &it: s){
            if(it == '(' || it == '[' || it == '{'){
                stc.push(it);
            }

            else{

                if(stc.empty()) return false;

                else if (it == ')' && stc.top() != '('){
                    return false;
                }

                else if (it == ']' && stc.top() != '['){
                    return false;
                }

                else if (it == '}' && stc.top() != '{'){
                    return false;
                }

                stc.pop();
            }
        }

        return stc.empty();
    }
};
