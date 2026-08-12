class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());

        int a = 0;
        int y = 0;
        for(int x:s){
            if(!s.count(x-1)){
                y = x;
                while(s.count(y)){
                    y++;
                }
                a = max(a,y-x);
            }
        }
        return a;
    }
};
