class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int l = s.size();
        for(int i =0;i<l;i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                st.push(s[i]);
            }
            
            else if( !st.empty() && ((s[i]==']' && st.top() == '[') || (s[i]=='}' && st.top() == '{') || (s[i]==')' && st.top() == '(') ) ){
                    st.pop();
                }
            else return false;

        }
        if(st.empty()){
        return true;
        }
        else return false;
        }
};