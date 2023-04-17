// The Hash-map method

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> ind;
        for(int i=0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(m.find(diff) != m.end()){
                ind.push_back(m[diff]);
                ind.push_back(i);
            }
            m.insert({nums[i], i});
        }
        return ind;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)
