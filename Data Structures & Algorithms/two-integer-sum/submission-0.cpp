class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 0;
        int n = size(nums);
        vector<int> out = {0,0};
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    out[0] = i;
                    out[1] = j;
                }
            }
        }
        return out;
    }
};
