class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> combinations;
        vector<int> combination;
        findCombination(0, target, candidates, combination, combinations);
        return combinations;
    }

    void findCombination(int i, int target, vector<int>& arr, vector<int>& c, vector<vector<int>>& cs){
        if(target==0)
        {
            cs.push_back(c);
            return;
        }

        for(int j=i; j<arr.size();j++)
        {
            if(j>i && arr[j]==arr[j-1]) continue;
            if(arr[j]>target) break;
            c.push_back(arr[j]);
            findCombination(j+1, target-arr[j], arr, c, cs);
            c.pop_back();
        }
    }
};
