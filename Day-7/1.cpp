// Method-1

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(), i=0, count=1, k=0, temp=INT_MIN;
        if(n==1){
            return 1;
        }
        if(nums[0]==nums[n-1]){
            return 1;
        }
        while(i<n){
            if(nums[i]==temp){
                nums.erase(nums.begin());
            }
            else if(nums[i]<temp){
                break;
            }
            else if(temp<nums[i]){
                k++;
                nums.push_back(nums[i]);
                temp=nums[i];
            }
        }
        return k;
    }
};
