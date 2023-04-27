// Binary Search method

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> indices=binarySearch(nums, 0, nums.size()-1, target);
        return indices;
    }

    vector<int> binarySearch(vector<int>& nums, int i, int j, int target){
        if(i>j){
            return {-1, -1};
        }
        int mid=(i+j)/2;
        if(target==nums[mid]){
            int b0=mid, b1=mid;
            for(int k=mid+1; k<nums.size(); k++){
                if(nums[k]==target){
                    b1++;
                }
                else{
                    break;
                }
            }
            for(int l=mid-1; l>=0; l--){
                if(nums[l]==target){
                    b0--;
                }
                else{
                    break;
                }

            }
            return {b0, b1};
        }
        else if(target>nums[mid]){
            return binarySearch(nums, mid+1, j, target);
        }
        return binarySearch(nums, i, mid-1, target);
    }
};
