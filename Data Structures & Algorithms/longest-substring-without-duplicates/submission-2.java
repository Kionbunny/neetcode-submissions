class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max_len=0;
        for(int i=0;i<s.length();i++){
            HashMap<Character,Integer>mp = new HashMap<>();
            for(int j=i;j<s.length();j++){
                char ch = s.charAt(j);
                if(mp.containsKey(ch)){break;}// come out of the loop and start from new subStr
                 mp.put(s.charAt(j),1);
                max_len = Math.max(max_len,j-i+1);
            }
        }
        return max_len;
    }
}
