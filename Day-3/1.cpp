// The brute-force method

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0;
        for(int i = 0; i<height.size(); i++){
            for(int j=i; j<height.size(); j++){
                int h;
                if(height[i]>height[j]){
                    h=height[j];
                }
                else{
                    h=height[i];
                }
                if((j-i)*h>max){
                    max=(j-i)*h;
                }
            }
        }
        return max;
    }
};

// Time Complexity = O(n²)
// It passes only 54 / 61 testcases as the time limit exceeds.
