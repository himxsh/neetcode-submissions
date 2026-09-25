class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> list;

        for(int num:nums){
            if(list.count(num)>0){
                return num;
            }
            list.insert(num);
        }
    }
};
