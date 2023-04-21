//The two-pointer method

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minsum=1000000;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if (sum == target){
                    return sum;
                }
                if (abs(target - sum) < abs(target - minsum)) {
                    minsum = sum;
                }
                if (sum>target){
                    k--;
                }
                if (sum<target){
                    j++;
                }
            }
        }
        return minsum;
    }
};
