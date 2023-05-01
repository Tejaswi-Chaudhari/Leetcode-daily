// Using recursion and backtracking

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combinations;
        vector<int> combination;
        findCombinations(0, target, candidates, combination, combinations);
        return combinations;
    }

    void findCombinations(int i, int target, vector<int>& arr, vector<int>& c, vector<vector<int>>& cs){
        if(i == arr.size()){
            if(target==0){
                cs.push_back(c);
            }
            return;
        }

        if(arr[i]<=target){
            c.push_back(arr[i]);
            findCombinations(i, target-arr[i], arr, c, cs);
            c.pop_back();
        }

        findCombinations(i+1, target, arr, c, cs);
    }
};
