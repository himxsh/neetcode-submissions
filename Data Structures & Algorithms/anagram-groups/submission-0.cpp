
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        for(string word: strs){
            string copy = word;
            sort(copy.begin(), copy.end());
            group[copy].push_back(word);
        }
        vector<vector<string>> answer;
        for(auto word: group){
            answer.push_back(word.second);
        }
        return answer;
    }
};