class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i = 0;
        int j = 0;
        sort(nums.begin(), nums.end());
        int n = size(nums);
        for(i=0;i<n-1;i++){
                if(nums[i]==nums[i+1])
                    return true;
            }
        
        return false;
    }
};