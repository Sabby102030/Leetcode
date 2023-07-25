class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      //Size of an 2D array
       int m = matrix.size(), n = matrix[0].size();
      //first loop for rows ith
        for(int i=0;i<m;i++){
          //inner loop for columns jth
            for(int j =0;j<n;j++){
              //if target found return true
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
      //if not found return false
        return false;
    }
};
