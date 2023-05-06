// Recursion and backtracking

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> allpermute;
        permutations(allpermute, nums, 0, nums.size()-1);
        return allpermute;
    }

    void permutations(vector<vector<int>>& allp, vector<int>& p, int l, int r){
        if(l==r){
            allp.push_back(p);
        }
        for(int i=l; i<=r; i++){
            swap(p[i], p[l]);
            permutations(allp, p, l+1, r);
            swap(p[i], p[l]);
        }
    }
};
