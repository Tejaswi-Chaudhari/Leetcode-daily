//Brute-force method

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        if(n<2){
            return {strs};
        }
        vector<vector<string>> ans;
        for(int i=0; i<strs.size(); i++){
            vector<string> ana;
            ana.push_back(strs[i]);
            for(int j=i+1; j<strs.size(); j++){
                string s1=strs[i];
                string s2=strs[j];
                sort(s1.begin(), s1.end());
                sort(s2.begin(), s2.end());
                if(s1==s2){
                    ana.push_back(strs[j]);
                    strs.erase(strs.begin()+j);
                    j--;
                }
            }
            ans.push_back(ana);
        }
        return ans;
    }
};

//Time limit exceeds, passes 111 / 118 testcases
