class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = heights.size();
        int left = 0;
        int right = l-1;
        int max = 0;
        while(left<right){
            if(heights[left]>=heights[right]){
                if(max<(heights[right]*(right-left))){
                    max = (heights[right]*(right-left));
                }
                right--;
            }
            else if(heights[right]>heights[left]){
                if(max<(heights[left]*(right-left))){
                    max = (heights[left]*(right-left));
                }
                left++;
            }
            
            
        }
        return max;
    }
};
