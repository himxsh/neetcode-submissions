class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.size();
        char* left = &s[0];
        char* right = &s[l-1];
        for(int j = 0; j<l;j++){
            s[j] = tolower(s[j]);
        }
        while(left<right){
            while(left < right && (! isalnum(*left))){
                left++;
            }
            while(left< right && (! isalnum(*right))){
                right--;
            }
            if(*left != *right){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};