// Method-1

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size()+nums2.size();
        if(size==0){
            return 0;
        }
        vector<int> vec(size);
        if(nums1.size()==0){
            vec = nums2;
        }
        else if(nums2.size()==0){
            vec = nums1;
        }
        else{
            vector<int> ans;
            vec = myFunction(nums1, nums2, ans, 0, 0);
        }
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        int fa = vec.size();
        if(fa==1){
            return vec[0];
        }
        double med;
        if(fa%2==0){
            med = (vec[(fa/2)-1]+vec[fa/2])/2.0;
        }
        else{
            med = vec[(fa-1)/2];
        }
        return med;
    }
    vector<int> myFunction(vector<int>& nums1, vector<int>& nums2, vector<int>& ans, int i, int j){
        if(nums1[i]<nums2[j]){
            ans.push_back(nums1[i]);
            if(i<nums1.size()-1){
                i++;
                ans = myFunction(nums1, nums2, ans, i, j);
            }
            else{
                for(int k=j; k<nums2.size(); k++){
                    ans.push_back(nums2[k]);
                }
            }
        }
        else if(nums1[i]>nums2[j]){
            ans.push_back(nums2[j]);
            if(j<nums2.size()-1){
                j++;
                ans = myFunction(nums1, nums2, ans, i, j);
            }
            else{
                for(int k=i; k<nums1.size(); k++){
                    ans.push_back(nums1[k]);
                }
            }
        }
        else{
            ans.push_back(nums2[j]);
            ans.push_back(nums2[j]);
            i++;
            j++;
            if(i<nums1.size() && j<nums2.size()){
                ans = myFunction(nums1, nums2, ans, i, j);
            }
            else if(i>=nums1.size()){
                for(int k=j; k<nums2.size(); k++){
                    ans.push_back(nums2[k]);
                }
            }
            else if(j>=nums2.size()){
                for(int k=i; k<nums1.size(); k++){
                    ans.push_back(nums1[k]);
                }
            }
        }
        return ans;
    }
};
