// The two-pointer method

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int max=0;
        while(i<j){
            int h;
            if(height[i]>height[j]){
                h=height[j];
            }
            else{
                h=height[i];
            }
            int area = (j-i)*h; 
            if(area>max){
                max=area;
            }
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return max;
    }
};

// Time Complexity = O(n)
