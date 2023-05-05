// Greedy algorithm

class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() <= 1)  return 0;
        int maxReach = nums[0], steps = nums[0], jumps = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (i == nums.size() - 1)  return jumps;
            maxReach = max(maxReach, i + nums[i]);
            steps--;
            if (steps == 0) {
                jumps++;
                steps = maxReach - i;
            }
        }
        return 0;
    }
};
