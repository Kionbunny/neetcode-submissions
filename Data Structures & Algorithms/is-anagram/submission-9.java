class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character,Integer>mp = new HashMap<>();
        for(char ch : s.toCharArray()){
            mp.put(ch, mp.getOrDefault(ch,0)+1);
        }
        for(char ch : t.toCharArray()){
            if(!mp.containsKey(ch)){
                return false;
            }
            mp.put(ch,mp.get(ch)-1);
            if(mp.get(ch) == 0){
                mp.remove(ch);
            }
        }
        return mp.size() == 0;
  
       
    }
}



  //    if(s.length() != t.length()){
    //     return false;
    //    }
    //    char[] sSort = s.toCharArray();
    //    char[] tSort = t.toCharArray();
    //    Arrays.sort(sSort);
    //    Arrays.sort(tSort);
    //    return Arrays.equals(sSort, tSort);