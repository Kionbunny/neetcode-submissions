class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max_len=0;
        for(int i=0;i<s.length();i++){
            HashMap<Character,Integer>mp = new HashMap<>();
            for(int j=i;j<s.length();j++){
                char ch = s.charAt(j);
                if(mp.containsKey(ch)){break;}// come out of the loop and start from new subStr
                 max_len = Math.max(max_len,j-i+1);
                 mp.put(s.charAt(j),mp.getOrDefault(ch,0)+1);// put the new ch along with its freq in the map
               
            }
        }
        return max_len;
    }
}
