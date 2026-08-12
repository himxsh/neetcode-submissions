class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(auto x:nums){
            map[x]++;
        }
        vector<vector<int>> b(nums.size()+1);
        for(auto x: map){
            b[x.second].push_back(x.first);
        }
        vector<int> ans;
        for(int i = nums.size();i>=0&&ans.size()<k;i--){
            for(int x:b[i]){
                ans.push_back(x);
                if(ans.size()==k) break;
            }
        }
        return ans;
    }
};
