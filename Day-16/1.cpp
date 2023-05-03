// Using sort() first

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if ( find(nums.begin(), nums.end(), 1) != nums.end() ){
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i]<0 || nums[i]==nums[i+1]) continue;
                if(nums[i]+1!=nums[i+1]){
                    return nums[i]+1;
                }
            }
            return nums[nums.size()-1]+1;
        }
        else{
            return 1;
        }
    }
};
