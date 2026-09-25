class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        int l = nums.size();
        for(int i = 0; i<l;i++){
            count[nums[i]]++;
        }
        int maxkey = INT_MIN;
        int maxvalue = INT_MIN;
        for(auto [key,value] : count){
            if(value>maxvalue){
                maxvalue = value;
                maxkey = key;
            }
        }

        return maxkey;
    }
};
