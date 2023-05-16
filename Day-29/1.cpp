class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n,0));
        int left=0,right=n-1,top=0,bottom=n-1;
        int val=1;
        while(val<=n*n){
            for(int i=left;i<=right;i++) v[top][i]=val++;
            top++;
            for(int i=top;i<=bottom;i++) v[i][right]=val++;
            right--;
            for(int i=right;i>=left;i--) v[bottom][i]=val++;
            bottom--;
            for(int i=bottom;i>=top;i--) v[i][left]=val++;
            left++;
        }
        return v;
    }
};
