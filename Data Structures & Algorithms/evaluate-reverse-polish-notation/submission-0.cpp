class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int l = tokens.size();
        for(int i = 0;i<l;i++){
            if(tokens[i] != "+" && tokens[i] != "-" &&
            tokens[i] != "*" && tokens[i] != "/"){
                st.push(stoi(tokens[i]));
            }
            else{
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                st.pop();
                int ans;
                if(tokens[i] == "+"){
                    ans = temp2 + temp1;
                }
                if(tokens[i] == "*"){
                ans = temp2*temp1;
                }
                if(tokens[i] == "/"){
                ans = temp2 / temp1;
                }
                if(tokens[i] == "-"){
                ans = temp2 - temp1;
                }
                st.push(ans);
            }
        }
        return st.top();
    }
};
