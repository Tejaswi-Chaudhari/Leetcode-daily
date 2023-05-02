// Backtracking and recusrion approach

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
        if(i==arr.size()){
            if(target==0){
                if(find(cs.begin(), cs.end(), c) == cs.end())
                    cs.push_back(c);
            }
            return;
        }
        if(arr[i]<=target){
            c.push_back(arr[i]);
            findCombination(i+1, target-arr[i], arr, c, cs);
            c.pop_back();
        }
        findCombination(i+1, target, arr, c, cs);
    }
};

// Time limit exceeds passes 172 / 176 testcases
