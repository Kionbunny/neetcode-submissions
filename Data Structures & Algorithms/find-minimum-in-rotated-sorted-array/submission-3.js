class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    findMin(nums) {let n = nums.length;
        // nums.sort((a,b) => a-b);
        // return nums[0];
        let low = 0;
        let high = n - 1;
        while(low < high) {
            let mid = Math.floor((low + high)/2);
           if(nums[mid] > nums[high])
           {
            low = mid+1;
            }// search for min element on right half           
           else {
             high = mid;// the min element can  be eaither mid or just before it 
           }
        }
        return nums[low];
    }
}
