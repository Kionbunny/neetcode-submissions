class Solution {
    public int maxArea(int[] heights) {
        int n = heights.length;
        int max_area = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){// fix i and loop for j
            max_area = Math.max(max_area,Math.min(heights[i],heights[j])*(j-i));
            // always get min height container bcz container with max height 
            // water flows out of it so no use 
            }
        }
        return max_area;
    }
}
