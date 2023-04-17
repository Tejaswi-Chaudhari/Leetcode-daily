// The brute-force method

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ind;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    ind.push_back(i);
                    ind.push_back(j);
                    break;
                }
            }
        }
        return ind;
    }
};

// Time Complexity = O(n²)
// Space Complexity = O(1)
