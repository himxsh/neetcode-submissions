class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right = n-1;
        int ans = numbers[left]+numbers[right];
        while(ans!=target){
            if(ans>target){
                right = right-1;
                ans=numbers[left]+numbers[right];
            }
            else if(ans<target){
                left = left+1;
                ans = numbers[left]+numbers[right];
            }
        }
        vector<int> output = {left+1,right+1};
        return output;
    }
};
