class Solution {
    public int findMin(int[] nums) {int n = nums.length;
       int low = 0;
       int high = n-1;
       while(low < high) {
        int mid = (low+high)/2;
        if(nums[mid] > nums[high]){
            // min value is present in RHS and search 
            low = mid+1;
        }else {
            high = mid;// the min element can  be itself or before it 
        }
       }
       return nums[low];// this will return the minimum element so far
    }
}
