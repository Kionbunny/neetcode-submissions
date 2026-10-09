class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> charSet = new HashSet<>();
        int l = 0;
        int res = 0;
        for(int r=0; r < s.length(); r++){
            while(charSet.contains(s.charAt(r))){
                charSet.remove(s.charAt(l));  // Java -> s.charAt(l)  C++ -> s[l];
                l++;
            }
            charSet.add(s.charAt(r));// if the char is seen first time then add into set 
            // Java ->  charSet.add(s.charAt(r)) C++ -> s.insert(s[r]);
            res = Math.max(res, r-l+1);
        }
        return res;
    }
}
