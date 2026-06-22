class Solution {
    public int search(int[] nums, int target) {
        int left  = 0;
        int right = nums.length-1;
       while(left <= right){
        int mid = left + (right-left)/2;
        if(nums[mid] == target) {return mid;}
         // check if the left portion is sorted 
         if(nums[left] <= nums[mid]){// if yes check in that sorted 
         // portion for the target 
            if(target <= nums[mid] && target >= nums[left]) {right = mid-1;}
            else {left = mid+1;}
         } // chk if the right half is sorted 
         else{// and the target also is found in right half 
            if(target >= nums[mid] && target <= nums[right]) {left = mid+1;}
            else {// if the target found in left half 
            right = mid-1;
            }
         }
       }
       return -1;
    }
}
