class Solution {
    public boolean isAnagram(String s, String t) {
      HashMap<Character,Integer>mp = new HashMap<>();
      for(char ch : s.toCharArray()){
        mp.put(ch,mp.getOrDefault(ch,0)+1);
      }
      for(char ch : t.toCharArray()){
        if(mp.containsKey(ch)){
            int freq = mp.get(ch)-1;
            if(freq == 0) {
                mp.remove(ch);// remove the ch only whos freq = 0
            }else {// if the freq is not 0 then dec until it becomes -> 0
              mp.put(ch,freq);// update the map with new freq again
            }
        } else {
            return false; //as if the ch is not found in String s  
        }
        } // loop ends here 
     return mp.size() == 0;
     
    }
}
