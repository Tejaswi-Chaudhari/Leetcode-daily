// The brute-force method

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minsum=1000000;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k=j+1; k<nums.size(); k++){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(abs(target - minsum) > abs(target - sum)){
                        minsum = (nums[i] + nums[j] + nums[k]);
                    }
                }
            }
        }
        return minsum;
    }
};

// Time Complexity = O(n³)
// It passes only 81 / 99 testcases passed as the time limit exceeds.
