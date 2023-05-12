// Method-1

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;
        int count=matrix.size()*matrix[0].size(), iter=0, r1=0, r2=matrix.size()-1, c1=0, c2=matrix[0].size()-1;
        while(iter<count){
            for(int i=c1 ; iter<count && i<=c2 ; i++){
                spiral.push_back(matrix[r1][i]);
                iter++;
            }
            r1++;
            for(int i=r1 ; iter<count && i<=r2 ; i++){
                spiral.push_back(matrix[i][c2]);
                iter++;
            }
            c2--;
            for(int i=c2 ; iter<count && i>=c1 ; i--){
                spiral.push_back(matrix[r2][i]);
                iter++;
            }
            r2--;
            for(int i=r2 ; iter<count && i>=r1 ; i--){
                spiral.push_back(matrix[i][c1]);
                iter++;
            }
            c1++;
        }
        return spiral;
    }
}; 
