class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int cnt = 0;
        for(int i=0; i < nums.length; i++) {
            if(nums[i] == cnt) {
               cnt++;
            }
        }
        return cnt;
        
    }
}
