class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        // using stair case approach 
        int m = matrix.length;// num of rows 
        int n = matrix[0].length;// first row size -> num of col's
        int r = 0;
        int c = n-1;// place the ptr at top right corner and then 
        // update accordingly based on target 
        while(r < m && c >= 0){// place r ptr initially at top left corner 
         if(matrix[r][c] == target){
            return true;
         }
        else if(matrix[r][c] < target) {// chk if the target is found ahaead 
            r++;
        }
        else {// if the target is behind the current value pointed by r and c ptrs 
            c--;
        }
        }
        return false;
    }
}
