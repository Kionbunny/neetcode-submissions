class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character>st = new HashSet<>();
        int l=0;
        int maxLen = 0;
        for(int r = 0; r < s.length(); r++){
            while(st.contains(s.charAt(r))){
                st.remove(s.charAt(l)); // remove the ch and move step by step ahead
                l++;
            }
             st.add(s.charAt(r));
             maxLen = Math.max(maxLen, r-l+1);
        }// if the new ch is found then add it to the set 
         return maxLen;
    }
}
