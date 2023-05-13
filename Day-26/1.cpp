class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int maxReach=nums[0], steps=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(i==nums.size()-1 && steps>0) return true;
            maxReach=max(maxReach, i+nums[i]);
            steps--;
            if(steps==0){
                steps=maxReach-i;
            }
        }
        return false;
    }
};
