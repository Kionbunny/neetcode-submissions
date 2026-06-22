class Solution {
    public boolean hasDuplicate(int[] nums) {
        int n = nums.length;
       HashSet<Integer>st = new HashSet<>();
       for(int num : nums) {
        st.add(num);// add all elements into the hasset 
       }
       return st.size() != n;
    }
}
