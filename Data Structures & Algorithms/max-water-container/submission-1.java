class Solution {
    public int maxArea(int[] heights) {
        int n = heights.length;
        int max_area = 0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){// fix i and loop for j
        //     max_area = Math.max(max_area,Math.min(heights[i],heights[j])*(j-i));
        //     // always get min height container bcz container with max height 
        //     // water flows out of it so no use 
        //     }
        // }
        // use two ptr tech for finding the btter height of container in single pass
        int l=0;
        int r=n-1;
        while( l < r) {
            max_area = Math.max(max_area, Math.min(heights[l],heights[r])*(r-l));// area = height * width
            if(heights[l] <= heights[r]){
                // check for the better height in the given containers 
                l++;
            }else {
                r--;
            }
        }
        return max_area;
    }
}
