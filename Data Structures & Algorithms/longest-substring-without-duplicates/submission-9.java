class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max_len=0;
        // for(int i=0;i<s.length();i++){
            HashMap<Character,Integer>mp = new HashMap<>();// ass the ch in map for every new subStr
        //     for(int j=i;j<s.length();j++){
        //         char ch = s.charAt(j);
        //         if(mp.containsKey(ch)){break;}// come out of the loop and start from new subStr
        //          max_len = Math.max(max_len,j-i+1);
        //          mp.put(s.charAt(j),mp.getOrDefault(ch,0)+1);// put the new ch along with its freq in the map
               
        //     }
        // }
        // use the sliding window for better TC
        int l=0;// left ptr 
        int r=0;// right ptr
        while(r < s.length()){
            char ch = s.charAt(r);
// move the left ptr one postion ahead of the previous occurance of ch
            if(mp.containsKey(ch)) {l = Math.max(mp.get(ch)+1,l);}
            // if the new ch is found just add it to the map and update the len
            mp.put(ch,r);// add the charater ch along with its idx (new)
            max_len = Math.max(max_len,r-l+1);
            r++;
        }
        return max_len;
    }
}
