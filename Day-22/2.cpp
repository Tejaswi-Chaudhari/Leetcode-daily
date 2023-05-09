//Using Map

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>>mp;
        for(int i=0; i<strs.size(); i++){
            string str=strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(str);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
