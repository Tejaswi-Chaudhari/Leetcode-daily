class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(ans, nums, 0, nums.size()-1);
        return ans;
    }

    void permute(vector<vector<int>>& pall, vector<int>& nums, int l, int r){
        if(l==r){
            if(find(pall.begin(), pall.end(), nums)==pall.end()){
                pall.push_back(nums);
            }
        }
        for(int i=l; i<=r; i++){
            swap(nums[i], nums[l]);
            permute(pall, nums, l+1, r);
            swap(nums[i], nums[l]);
        }
    }
};
