class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        vector<vector<int>> ans=intervals;
        sort(ans.begin(), ans.end());
        do{
            intervals=ans;
            for(int i=0; i<ans.size()-1; i++){
                if(ans[i][1]<ans[i+1][0]){
                    continue;
                }
                ans[i][0]=min(min(ans[i][0], ans[i][1]), min(ans[i+1][0], ans[i+1][1]));
                ans[i][1]=max(max(ans[i][0], ans[i][1]), max(ans[i+1][0], ans[i+1][1]));
                ans.erase(ans.begin() + (i+1));
            }
        }
        while(!(ans==intervals));
        return ans;
    }
};

// Time limit exceeded, passes 152 / 156 testcases
