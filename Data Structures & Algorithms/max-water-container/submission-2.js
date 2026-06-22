class Solution {
    /**
     * @param {number[]} heights
     * @return {number}
     */
    maxArea(heights) {
        let max_a = 0;
        for(let i=0;i<heights.length;i++){
            for(let j=i+1; j<heights.length;j++ ){
                max_a = Math.max(max_a, Math.min(heights[j],heights[i]) * (j-i));
            }
        }
    return max_a;
}
}