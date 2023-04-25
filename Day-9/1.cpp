// Method-1

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=0;
        int n=nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i+1]>nums[i]){
                index=i+1;
            }
        }
        if(index==0){
            sort(nums.begin(), nums.end());
            return;
        }
        int sindex=index;
        for(int i=index; i<n; i++){
            if(nums[i]>nums[index-1] && nums[i]<nums[index]){
                sindex=i;
            }
        }
        int temp=nums[sindex];
        nums[sindex]=nums[index-1];
        nums[index-1]=temp;
        sort(nums.begin()+index, nums.begin()+n);
    }
};
