class Solution {

private:
    bool isMatched(char open,  char close){

        if( (open == '(' && close == ')') ||
            (open == '[' && close == ']') ||
            (open == '{' && close == '}') 
        )
        return true;

        else return false;
    }



public:
    bool isValid(string s) {
        
        stack<char> stc;

        for(const auto &it: s){
            if(it == '(' || it == '[' || it == '{'){
                stc.push(it);
            }

            else{

                if(stc.empty()) return false;

                char topp = stc.top();
                stc.pop();

                if(isMatched(topp, it) == false){
                    return false;
                }
            }
        }

        return stc.empty();
    }
};
