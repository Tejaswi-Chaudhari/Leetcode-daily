// Binary search method

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = binarySearch(nums, 0, nums.size()-1, target);
        return index;
    }

    int binarySearch(vector<int>& nums, int i, int j, int target){
        if(i>j){
            return -1;
        }
        int mid=(i+j)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[i]<=nums[mid]){
            if(target>=nums[i] && target<=nums[mid]){
                return binarySearch(nums, i, mid-1, target);
            }
            return binarySearch(nums, mid+1, j, target);
        }
        if(target>=nums[mid] && target<=nums[j]){
            return binarySearch(nums, mid+1, j, target);
        }
        return binarySearch(nums, i, mid-1, target);
    }
};
